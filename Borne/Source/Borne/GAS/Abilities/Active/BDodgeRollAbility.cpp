// Fill out your copyright notice in the Description page of Project Settings.


#include "BDodgeRollAbility.h"

UBDodgeRollAbility::UBDodgeRollAbility()
{
	AbilityInputID = ESoulsAbilityInputID::Roll;
	
}

bool UBDodgeRollAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UBDodgeRollAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	ABorneCharacter* PlayerChar = CastChecked<ABorneCharacter>(ActorInfo->AvatarActor.Get());
 	UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
	
	if (! CheckCanDodgeConditions(Handle, ActorInfo , PlayerChar ) )
	{
		Super::EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
		return;
	}
	
	ApplyCost(Handle, ActorInfo, ActivationInfo);
	// ACharacter* Char = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get());
	TArray<FActiveGameplayEffectHandle> AppliedEffects;
	
	ActorInfo->AbilitySystemComponent->AddLooseGameplayTags(TagsToGive);
	
	if (UHelperBPLib::HasLastMovementInput(PlayerChar))
	{
		// const FVector2D InputCache = PlayerChar->GetInputCache();
		// const int DirectionalIndex = InputCache.X + 1 + (InputCache.Y + 1) * 3.0f;
		// float const Duration = AnimInstance->Montage_Play( AnimMontages[DirectionalIndex], 2.0f, EMontagePlayReturnType::Duration, 0.f, true );

		
		//set up in player blueprint bcz no easy delta time
		PlayerChar->ExecuteDodge();
	}
	else
	{
		float const Duration = AnimInstance->Montage_Play( BackwardsDash, 2.0f, EMontagePlayReturnType::Duration, 0.f, true );
	}
	
	// PlayerChar->GetNiagaraEffectComponent()->SetActive(true);
	FOnMontageEnded EndDelegate;
	EndDelegate.BindUObject(this, &UBDodgeRollAbility::OnDodgeAnimFinished, Handle, ActorInfo, ActivationInfo, PlayerChar);
	AnimInstance->Montage_SetEndDelegate(EndDelegate);
}

bool UBDodgeRollAbility::CheckCanDodgeConditions( const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const ABorneCharacter* Player )
{
	const bool IsFalling =  Player->GetMovementComponent()->IsFalling();
	const bool CanPayCost = CheckCost(Handle, ActorInfo);

	return !IsFalling && CanPayCost;
}


void UBDodgeRollAbility::OnDodgeAnimFinished(UAnimMontage* Montage, bool bInterrupted, FGameplayAbilitySpecHandle SpecHandle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,  ABorneCharacter* Player)
{
	// Player->GetNiagaraEffectComponent()->SetActive(false);
	ActorInfo->AbilitySystemComponent->RemoveLooseGameplayTags(TagsToGive);
	Super::EndAbility(SpecHandle, ActorInfo, ActivationInfo, false, false);
}
