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
	if (! CheckCanDodgeConditions(Handle, ActorInfo) )
	{
		Super::EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
		return;
	}
	
	ApplyCost(Handle, ActorInfo, ActivationInfo);
	
	ACharacter* Char = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get());
	ABorneCharacter* PlayerChar = CastChecked<ABorneCharacter>(Char);
	UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();

	TArray<FActiveGameplayEffectHandle> AppliedEffects;
	
	ActorInfo->AbilitySystemComponent->AddLooseGameplayTags(TagsToGive);
	
	if (UHelperBPLib::HasLastMovementInput(PlayerChar))
	{
		const FVector2D InputCache = PlayerChar->GetInputCache();
		const int DirectionalIndex = InputCache.X + 1 + (InputCache.Y + 1) * 3.0f;

		//set up in player blueprint bcz no easy delta time
		PlayerChar->ExecuteDodge();

		// float const Duration = AnimInstance->Montage_Play( AnimMontages[DirectionalIndex], 2.0f, EMontagePlayReturnType::Duration, 0.f, true );
	}
	else
	{
		float const Duration = AnimInstance->Montage_Play( BackwardsDash, 2.0f, EMontagePlayReturnType::Duration, 0.f, true );
	}
	
	// PlayerChar->GetNiagaraEffectComponent()->SetActive(true);
	FOnMontageEnded EndDelegate;
	EndDelegate.BindUObject(this, &UBDodgeRollAbility::OnDodgeAnimFinished, Handle, ActorInfo, ActivationInfo);
	AnimInstance->Montage_SetEndDelegate(EndDelegate);
}

bool UBDodgeRollAbility::CheckCanDodgeConditions( const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo )
{
	ACharacter* Char = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get());
	ABorneCharacter* PlayerChar = CastChecked<ABorneCharacter>(Char);
	const bool IsFalling =  Char->GetMovementComponent()->IsFalling();
	const bool CanPayCost = CheckCost(Handle, ActorInfo);

	return !IsFalling && CanPayCost;
}


void UBDodgeRollAbility::OnDodgeAnimFinished(UAnimMontage* Montage, bool bInterrupted, FGameplayAbilitySpecHandle SpecHandle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	
	ACharacter* Char = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get());
	ABorneCharacter* PlayerChar = CastChecked<ABorneCharacter>(Char);
	PlayerChar->GetNiagaraEffectComponent()->SetActive(false);
	
	ActorInfo->AbilitySystemComponent->RemoveLooseGameplayTags(TagsToGive);
	Super::EndAbility(SpecHandle, ActorInfo, ActivationInfo, false, false);
}
