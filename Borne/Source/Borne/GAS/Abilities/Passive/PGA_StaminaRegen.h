// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "PGA_StaminaRegen.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API UPGA_StaminaRegen : public UGameplayAbility
{
	GENERATED_BODY()
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
