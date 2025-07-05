#include "HelperBPLib.h"

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
	const FRotator DodgeRotation = FRotationMatrix::MakeFromX(LastInput).Rotator();
	SourceChar->SetActorRotation(DodgeRotation);
}
