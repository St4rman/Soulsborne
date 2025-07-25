// Copyright Epic Games, Inc. All Rights Reserved.

#include "BorneCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Interfaces/TargetableInterface.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ABorneCharacter

ABorneCharacter::ABorneCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	bAbilitiesInitialized = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	EnemyDetector = CreateDefaultSubobject<UDetectorComponent>(TEXT("Detector"));	
	EnemyDetector->SetDetectorRadius(1000.0f);

	CameraHandlerComponent = CreateDefaultSubobject<UCamMoveComponent>(TEXT("CameraHandler"));
	MainLocomotionMode = L_Free;

	SoulsAbilitySystemComponent = CreateDefaultSubobject<USoulsASComponent>(TEXT("AbilitySystemComponent"));
	InventoryComponent = CreateDefaultSubobject<USInventoryComponent>(TEXT("InventoryComponent"));
	PlayerHUD = CreateDefaultSubobject<USHUDComponent>(TEXT("PlayerHUDComponent"));
	
	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	NiagaraComponent->SetupAttachment(GetMesh());
	NiagaraComponent->SetAutoActivate(false);
	
}

void ABorneCharacter::BeginPlay()
{
	Super::BeginPlay();

	//all of this would happen in rep if this was multiplayered
	SoulsAbilitySystemComponent->InitAbilityActorInfo(this, this);
	AddStartUpGameplayAbilities();
	if (IsValid(SoulsAbilitySystemComponent))
	{
		BaseSet = SoulsAbilitySystemComponent->GetSet<UBaseAttributesSet>();
		if (InputComponent)
		{
			 const FGameplayAbilityInputBinds Binds(
				"Confirm",
				"Cancel",
				"ESoulsAbilityInputID",
				static_cast<int32>(ESoulsAbilityInputID::Confirm),
				static_cast<int32>(ESoulsAbilityInputID::Cancel)
			 );

			SoulsAbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
		}
	}

	MainLocomotionMode= L_Free;
	CameraHandlerComponent->SetCamFree();
	
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABorneCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ABorneCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABorneCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABorneCharacter::Look);
		EnhancedInputComponent->BindAction(DetectAction, ETriggerEvent::Completed, this, &ABorneCharacter::FireDetection);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
	
}

FVector2D ABorneCharacter::GetInputCache()
{
	FVector2D NormalInput = InputCache;
	if (InputCache.X > 1 || InputCache.X  -1 )
	{
		NormalInput.X = FMath::Sign(InputCache.X);
		NormalInput.Y = FMath::Sign(InputCache.Y);
	}
	
	return NormalInput;
}

void ABorneCharacter::ExecuteDodge_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("No implementation of execute dodge found, check player blueprint"));
	return;
}

void ABorneCharacter::Move(const FInputActionValue	& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);

		InputCache = MovementVector;
	}
}

void ABorneCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		if (CameraHandlerComponent->GetCamState() == Free)
		{
			// add yaw and pitch input to controller
			AddControllerYawInput(LookAxisVector.X);
			AddControllerPitchInput(LookAxisVector.Y);
		}
		
	}
}

void ABorneCharacter::FireDetection()
{
	if (EnemyDetector && MainLocomotionMode == ELocomotionMode::L_Free)
	{
		EnemyDetector->FireDetection();
		AActor* LocalTarget = EnemyDetector->GetMainTarget();
		
		if (LocalTarget != nullptr)
		{
			if (LocalTarget->Implements<UTargetableInterface>())
			{
				CurrentMainTarget = LocalTarget;
				ITargetableInterface::Execute_SetSelfAsTarget(LocalTarget);
				MainLocomotionMode = L_InCombat;
				CameraHandlerComponent->SetLockedOn(CurrentMainTarget);
				
			}
		}
	}
	else
	{
		if (CurrentMainTarget != nullptr && CurrentMainTarget->Implements<UTargetableInterface>())
		{
			ITargetableInterface::Execute_RemoveSelfAsTarget(CurrentMainTarget);
			MainLocomotionMode= L_Free;
			CameraHandlerComponent->SetCamFree();
			CurrentMainTarget = nullptr;
		}
	}
}

/**
 * Method to fire roll. Manually does this right now, make it use GAS afterwards
 */
void ABorneCharacter::DoRoll()
{
	FVector Movement = GetLastMovementInputVector();
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, FString::Printf(TEXT("Roll: %f, %f, %f"), Movement.X, Movement.Y, Movement.Z));
	

}

//this is all from the action rpg example project on epic + a few tutorials
void ABorneCharacter::AddStartUpGameplayAbilities()
{
	check(SoulsAbilitySystemComponent);

	if (GetLocalRole() == ROLE_Authority && !bAbilitiesInitialized)
	{
		//grant abilities, this should only be done on the server for multiplayer games
		for (TSubclassOf<USoulGameplayAbility>& DefaultAbility : GameplayAbilities)
		{
			
			SoulsAbilitySystemComponent->GiveAbility(
				FGameplayAbilitySpec(DefaultAbility,
					1,
					static_cast<int32>(DefaultAbility.GetDefaultObject()->AbilityInputID),
					this));
		}

		for (const TSubclassOf<UGameplayEffect>& DefaultEffect : PassiveGameplayEffects)
		{
			FGameplayEffectContextHandle EffectContext = SoulsAbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle Handle = SoulsAbilitySystemComponent->MakeOutgoingSpec(
				DefaultEffect, 1, EffectContext);

			//apply our default startup abilities if the handle is valid 
			if (Handle.IsValid())
			{
				FActiveGameplayEffectHandle ActiveGEHandle = SoulsAbilitySystemComponent->ApplyGameplayEffectSpecToTarget(
					*Handle.Data.Get(), SoulsAbilitySystemComponent);
			}
		}
		
		bAbilitiesInitialized = true;
	}
}

