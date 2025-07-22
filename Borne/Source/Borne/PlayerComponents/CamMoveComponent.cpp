#include "CamMoveComponent.h"
#include "Borne/BorneCharacter.h"

// idk why it wont let me fwd declare it but whatever i guess

UCamMoveComponent::UCamMoveComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	if (GetOwner())
	{
		Player = Cast<ABorneCharacter>(GetOwner());
		PlayerCameraComp = Player->GetFollowCamera();
		SpringArm = Player->GetCameraBoom();
		MoveComp =  Player->GetCharacterMovement();
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
 * @param Target Target To Lock onto
 */
void UCamMoveComponent::SetLockedOn(AActor* Target)
{
	MoveComp->bUseControllerDesiredRotation = true;
	MoveComp->bOrientRotationToMovement = false;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->bEnableCameraLag = true;
	LockOnTarget = Target;
	CurrentCameraState = Locked;
	
}
void UCamMoveComponent::SetCamFree()
{
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
void UCamMoveComponent::UpdateCamLocation(float dt) const
{
	const FVector CurrentLocation = PlayerCameraComp->GetComponentLocation();
	const FVector TargetLocation = LockOnTarget->GetActorLocation();
	
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
void UCamMoveComponent::UpdateSpringArm(float dt) const
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

