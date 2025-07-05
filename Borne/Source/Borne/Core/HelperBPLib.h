// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "GameFramework/Character.h"
#include "HelperBPLib.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API UHelperBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**
	 * Function to play a high priority animation that checks if it's already playing.
	 * @param SourceChar Source Character to play the animation on 
	 * @param MontageToPlay Montage to play 
	 * @param InPlayRate Play rate
	 */
	UFUNCTION(BlueprintCallable, Category = "Animation Helper Function")
	static void PlayImportantAnimMontage(ACharacter* SourceChar, UAnimMontage* MontageToPlay, float InPlayRate = 1.0f);

	
};
