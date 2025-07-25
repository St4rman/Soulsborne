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
	
	
}

void UHelperBPLib::ClearIgnoredActors()
{
	
}

