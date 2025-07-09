// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bActivateAbilityOnGrant:1;
	
	USoulGameplayAbility();

	// this input will be used to activate the ability
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Abilities")
	ESoulsAbilityInputID AbilityInputID {ESoulsAbilityInputID::None};

	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
