// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Borne/Core/HelperData.h"
#include "SoulGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API USoulGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	USoulGameplayAbility();

	// this input will be used to activate the ability
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Abilities")
	ESoulsAbilityInputID AbilityInputID {ESoulsAbilityInputID::None};
};
