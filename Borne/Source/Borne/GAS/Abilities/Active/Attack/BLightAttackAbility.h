// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Borne/BorneCharacter.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Borne/GAS/Abilities/SoulGameplayAbility.h"
#include "BLightAttackAbility.generated.h"

class ACharacter;

/**
 * 
 */
UCLASS()
class BORNE_API UBLightAttackAbility : public USoulGameplayAbility
{
	GENERATED_BODY()

	ABorneCharacter* PlayerCharacter;

public:
	UBLightAttackAbility();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Abilities")
	UAnimMontage* NoWeaponAnimMontage;

	UPROPERTY(EditAnywhere, Category="Tags")
	FGameplayTagContainer AttackingTags;

	UPROPERTY(EditAnywhere, Category="Effect")
	TSubclassOf<class UGameplayEffect>  EffectClass;

	UPROPERTY(EditAnywhere)
	FGameplayTag Dynamic;

	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	bool CheckAbilityConditions(const FGameplayAbilityActorInfo* ActorInfo , const ABorneCharacter* Player);
	bool CustomCheckCost(float Cost, const FGameplayAbilityActorInfo* ActorInfo);

	void OnAttackAnimFinished(UAnimMontage* Montage, bool bInterrupted, FGameplayAbilitySpecHandle SpecHandle,const FGameplayAbilityActorInfo* ActorInfo, FGameplayAbilityActivationInfo ActivationInfo);
};
