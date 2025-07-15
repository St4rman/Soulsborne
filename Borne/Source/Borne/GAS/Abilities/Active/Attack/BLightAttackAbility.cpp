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

	ACharacter* Char = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get());
	ABorneCharacter* PlayerChar = CastChecked<ABorneCharacter>(Char);
	UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
	
	if (!CheckAbilityConditions(ActorInfo))
	{
		check(NoWeaponAnimMontage);
		float const Dur = AnimInstance->Montage_Play(NoWeaponAnimMontage, 3.0f);
		Super::EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
		return;
	}

	const ASBWeaponBase* CurrentWeapon = PlayerChar->GetInventoryComponent()->GetCurrentEquippedWeapon();
	const float CurrentCost =CurrentWeapon->LightStaminaCost;

	if (CustomCheckCost(CurrentCost, ActorInfo) && ensure(CurrentWeapon))
	{
		FGameplayEffectContextHandle ContextHandle =  PlayerChar->GetAbilitySystemComponent()->MakeEffectContext();
		ContextHandle.AddSourceObject(ActorInfo->AvatarActor.Get());
		
		const FGameplayEffectSpecHandle SpecHandle =  PlayerChar->GetAbilitySystemComponent()->MakeOutgoingSpec(EffectClass, 1.0f, ContextHandle);
		const FGameplayEffectSpecHandle NewSpecHandle = UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, Dynamic, CurrentCost * -1.0f);
		PlayerChar->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToSelf(*NewSpecHandle.Data.Get());

		UAnimMontage* LightAttack = CurrentWeapon->GetLightAnim();
		float const Duration = AnimInstance->Montage_Play(LightAttack);
		ActorInfo->AbilitySystemComponent->AddLooseGameplayTags(AttackingTags);
	}

	FOnMontageEnded EndDelegate;
	EndDelegate.BindUObject(this, &UBLightAttackAbility::OnAttackAnimFinished, Handle, ActorInfo, ActivationInfo);
	AnimInstance->Montage_SetEndDelegate(EndDelegate);
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

void UBLightAttackAbility::OnAttackAnimFinished(UAnimMontage* Montage, bool bInterrupted, FGameplayAbilitySpecHandle SpecHandle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	ActorInfo->AbilitySystemComponent->RemoveLooseGameplayTags(AttackingTags);
	Super::EndAbility(SpecHandle, ActorInfo, ActivationInfo, false, false);
}

bool UBLightAttackAbility::CustomCheckCost(const float Cost, const FGameplayAbilityActorInfo* ActorInfo)
{
	UAbilitySystemComponent* AbilitySystemComponent = ActorInfo ? ActorInfo->AbilitySystemComponent.Get() : nullptr;
	if (ensure(AbilitySystemComponent))
	{
		return Cost < AbilitySystemComponent->GetSet<UBaseAttributesSet>()->GetStamina();
	}
	return false;
}