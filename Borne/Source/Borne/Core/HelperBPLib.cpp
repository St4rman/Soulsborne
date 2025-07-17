#include "HelperBPLib.h"

#include "Borne/BorneCharacter.h"
#include "Kismet/KismetSystemLibrary.h"

class ASBWeaponBase;

void UHelperBPLib::PlayImportantAnimMontage(ACharacter* SourceChar, UAnimMontage* MontageToPlay, float const InPlayRate)
{
	bool bIsPlaying = SourceChar->GetMesh()->GetAnimInstance()->Montage_IsPlaying(MontageToPlay);
	if (!bIsPlaying)
	{
		SourceChar->PlayAnimMontage(MontageToPlay, InPlayRate);
	}
}

bool UHelperBPLib::HasLastMovementInput(ACharacter* SourceChar)
{
	const FVector LastInput = SourceChar->GetCharacterMovement()->GetLastInputVector();
	return !LastInput.IsNearlyZero(0.001);
	
}

void UHelperBPLib::AddRotationPreDodge(ACharacter* SourceChar)
{
	const FVector LastInput = SourceChar->GetCharacterMovement()->GetLastInputVector();
	// const FRotator DodgeRotation = FRotationMatrix::MakeFromXZ(LastInput).Rotator();
	// SourceChar->GetMesh()->SetRelativeRotation(DodgeRotation);
}

void UHelperBPLib::ResetMeshToCharacter(ACharacter* SourceChar)
{
	SourceChar->GetMesh()->SetRelativeRotation(SourceChar->GetActorRotation());
}

void UHelperBPLib::RunAttackTrace( AActor* Self )
{
	
	FHitResult Target;
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjects;
	TraceObjects.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));

	TArray<AActor*> IgnoreActors;
	IgnoreActors.Init(Self, 1);
	
	ACharacter* Char = Cast<ACharacter>(Self);
	ABorneCharacter* PlayerChar = Cast<ABorneCharacter>(Char);
	check(PlayerChar);
	ASBWeaponBase* CurWep = PlayerChar->GetInventoryComponent()->GetCurrentEquippedWeapon();

	if (CurWep == nullptr)
	{
		return;
	}
		
	const UStaticMeshComponent* WepMesh = CurWep->GetMesh();
	const FVector StartLoc	= WepMesh->GetSocketLocation("Weapon_Hilt");
	const FVector EndLoc	= WepMesh->GetSocketLocation("Weapon_Tip");
	constexpr float Radius		= 50.0f;

	UKismetSystemLibrary::SphereTraceSingleForObjects(
		Self->GetWorld(),
		StartLoc, EndLoc, Radius, TraceObjects,
		true, IgnoreActors,
		EDrawDebugTrace::None,
		Target, true);

	AActor* TargetActor = Target.GetActor();

	if (TargetActor != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TargetActor->GetName());
	}
}

