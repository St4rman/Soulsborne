// Fill out your copyright notice in the Description page of Project Settings.


#include "BLightAttackAbility.h"

UBLightAttackAbility::UBLightAttackAbility()
{
	AbilityInputID = ESoulsAbilityInputID::Attack;
}

bool UBLightAttackAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UBLightAttackAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (CheckCost(Handle, ActorInfo))
	{
		if (!CheckAbilityConditions( ActorInfo ))
		{
			Super::EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
			return;
		}
		
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "uwe uwe uwe");
		Super::EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
	}
	
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
}

//returns true if we CAN attack
bool UBLightAttackAbility::CheckAbilityConditions(const FGameplayAbilityActorInfo* ActorInfo )
{
	
	ACharacter* Char = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get());
	ABorneCharacter* Player = CastChecked<ABorneCharacter>(ActorInfo->AvatarActor.Get());

	if (Player->GetInventoryComponent()->GetCurrentEquippedWeapon() == nullptr)
	{
		return false;
	}
	return true;
	
}