// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Borne/Core/HelperData.h"
#include "Borne/BorneCharacter.h"
#include "Borne/GAS/Abilities/SoulGameplayAbility.h"
#include "BDodgeRollAbility.generated.h"


class UHelperBPLib;
class UAnimMontage;
/**
 * 
 */
UCLASS()
class BORNE_API UBDodgeRollAbility : public USoulGameplayAbility
{
	GENERATED_BODY()
public:
	UBDodgeRollAbility();
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UPROPERTY(EditAnywhere, Category="DodgeAbility")
	TArray<UAnimMontage*> AnimMontages;

	UPROPERTY(EditAnywhere, Category="DodgeAbility")
	FGameplayTagContainer TagsToGive;

	UPROPERTY(EditAnywhere, Category="DodgeAbility")
	UAnimMontage* ForwardDashMontage;

	
protected:

	bool CheckCanDodgeConditions( const FGameplayAbilityActorInfo* ActorInfo);
	void OnDodgeAnimFinished(UAnimMontage* Montage, bool bInterrupted, FGameplayAbilitySpecHandle SpecHandle , const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo);
};
