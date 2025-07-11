﻿#include "CamMoveComponent.h"
#include "Borne/BorneCharacter.h"

// idk why it wont let me fwd declare it but whatever i guess

UCamMoveComponent::UCamMoveComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	if (GetOwner())
	{
		Player = Cast<ABorneCharacter>(GetOwner());
		PlayerCameraComp = Cast<ABorneCharacter>(GetOwner())->GetFollowCamera();
		SpringArm = Cast<ABorneCharacter>(GetOwner())->GetCameraBoom();
	}
	
	CurrentCameraState = Free;
}


void UCamMoveComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UCamMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateSpringArm(DeltaTime);
	if (CurrentCameraState == Locked && LockOnTarget != nullptr)
	{
		UpdateCamLocation(DeltaTime);
	}
	
}

/**
 * Toggles locked on state for cameMovecomponent. Sets MainTarget as the target, or nullptr depends on not locking in
 * @param target Target To Lock onto
 */
void UCamMoveComponent::SetLockedOn(AActor* Target)
{
	UCharacterMovementComponent* MoveComp = Cast<ABorneCharacter>(GetOwner())->GetCharacterMovement();
	MoveComp->bUseControllerDesiredRotation = true;
	MoveComp->bOrientRotationToMovement = false;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->bEnableCameraLag = true;
	LockOnTarget = Target;
	CurrentCameraState = Locked;
	
}
void UCamMoveComponent::SetCamFree()
{
	UCharacterMovementComponent* MoveComp = Cast<ABorneCharacter>(GetOwner())->GetCharacterMovement();
	MoveComp->bUseControllerDesiredRotation = false;
	MoveComp->bOrientRotationToMovement = true;
	SpringArm->bEnableCameraRotationLag = false;
	SpringArm->bEnableCameraLag = false;
	CurrentCameraState = Free;
}
/**
 * Updates camera rotation to look at the main target
 * @param dt Delta time
 */
void UCamMoveComponent::UpdateCamLocation(float dt)
{
	const FVector CurrentLocation = PlayerCameraComp->GetComponentLocation();
	const FVector TargetLocation = LockOnTarget->GetActorLocation();
	// DrawDebugLine(GetWorld(), GetOwner()->GetActorLocation() , TargetLocation, FColor::Purple, false, 0.1f);
	
	const FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
	
	const FRotator NewLookAtRotation = FRotator(CombatPitch, LookAt.Yaw, LookAt.Roll);
	const FRotator CurrentLookAt = PlayerCameraComp->GetComponentRotation();

	GetOwner()->GetInstigatorController()->SetControlRotation(NewLookAtRotation);
	//GetOwner()->GetInstigatorController()->SetControlRotation(FMath::Lerp(CurrentLookAt, NewLookAtRotation, dt * 10.0f));

	//TODO:: MOVE THIS TO PLAYER LOCOMOTION
	const FRotator NewPlayerRot = FRotator(LookAt.Pitch, LookAt.Yaw, GetOwner()->GetActorRotation().Roll);
	GetOwner()->SetActorRotation(FMath::Lerp(GetOwner()->GetActorRotation(), NewPlayerRot, dt * 0.5f));
	
}


/**
 * Updates spring Arm to longer/zoomed out 
 * @param dt Delta time
 */
void UCamMoveComponent::UpdateSpringArm(float dt)
{
	if (CurrentCameraState == Free)
	{
		SpringArm->TargetArmLength = FMath::Lerp(SpringArm->TargetArmLength, 400.f, dt * 1.5f);
	}
	else if (CurrentCameraState == Locked)
	{
		SpringArm->TargetArmLength = FMath::Lerp(SpringArm->TargetArmLength, CombatLength, dt * 1.5f);
	}
}

