// Fill out your copyright notice in the Description page of Project Settings.


#include "HelperBPLib.h"


void UHelperBPLib::PlayImportantAnimMontage(ACharacter* SourceChar, UAnimMontage* MontageToPlay, float const InPlayRate)
{
	bool bIsPlaying = SourceChar->GetMesh()->GetAnimInstance()->Montage_IsPlaying(MontageToPlay);
	if (!bIsPlaying)
	{
		SourceChar->PlayAnimMontage(MontageToPlay, InPlayRate);
	}
}
