#include "BLightAttackAbility.h"


UBLightAttackAbility::UBLightAttackAbility()
{
	AbilityInputID = ESoulsAbilityInputID::Attack;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	CurrentComboIdx = 0;
}

bool UBLightAttackAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{

	// return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
	return true;
}

void UBLightAttackAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	ABorneCharacter* PlayerChar = CastChecked<ABorneCharacter>(ActorInfo->AvatarActor.Get());
	UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();
	
	if (!CheckAbilityConditions(ActorInfo , PlayerChar))
	{
		check(NoWeaponAnimMontage);
		float const Dur = AnimInstance->Montage_Play(NoWeaponAnimMontage, 3.0f);
		Super::EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
		return;
	}

	ASBWeaponBase* CurrentWeapon = PlayerChar->GetInventoryComponent()->GetCurrentEquippedWeapon();
	
	float CurrentCost = CurrentWeapon->LightStaminaCost;
	const float AttackSpeed = CurrentWeapon->LightAttackSpeed > 1.0f ? CurrentWeapon->LightAttackSpeed : 1.0f;
	
	if (CurrentWeapon != nullptr)
	{
		FGameplayEffectContextHandle ContextHandle =  PlayerChar->GetAbilitySystemComponent()->MakeEffectContext();
		ContextHandle.AddSourceObject(ActorInfo->AvatarActor.Get());
		
		const FGameplayEffectSpecHandle SpecHandle =  PlayerChar->GetAbilitySystemComponent()->MakeOutgoingSpec(EffectClass, 1.0f, ContextHandle);
		const FGameplayEffectSpecHandle NewSpecHandle = UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, Dynamic, CurrentCost * -1.0f);


		if (CurrentComboIdx > CurrentWeapon->GetComboLength()- 1 )
		{
			CurrentComboIdx = 0;
		}
		UAnimMontage* LightAttack = CurrentWeapon->GetLightAnimCombo( CurrentComboIdx );
		CurrentComboIdx++;
		
		
		if(CustomCheckCost(CurrentCost, ActorInfo))
		{
			AnimInstance->Montage_Play( LightAttack, AttackSpeed );
		}
		else
		{
			AnimInstance->Montage_Play( LightAttack, AttackSpeed * 0.8f );
			ResetCombo();
		}
		PlayerChar->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToSelf( *NewSpecHandle.Data.Get() );
		ActorInfo->AbilitySystemComponent->AddLooseGameplayTags( AttackingTags );
		ActorInfo->AbilitySystemComponent->NotifyAbilityCommit(this);
	}
	
	FOnMontageEnded EndDelegate;
	EndDelegate.BindUObject(this, &UBLightAttackAbility::OnAttackAnimFinished, Handle, ActorInfo, ActivationInfo);
	AnimInstance->Montage_SetEndDelegate(EndDelegate);
}

void UBLightAttackAbility::ResetCombo()
{
	// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "Resetting Combo");
	CurrentComboIdx = 0;
}

//returns true if we CAN attack
bool UBLightAttackAbility::CheckAbilityConditions(const FGameplayAbilityActorInfo* ActorInfo, const ABorneCharacter* Player )
{
	if (Player->GetInventoryComponent()->GetCurrentEquippedWeapon() == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No Equipped weapon - BLightAttackAbility.cpp"));
		return false;
	}
	return true;
}

void UBLightAttackAbility::OnAttackAnimFinished(UAnimMontage* Montage, bool bInterrupted, FGameplayAbilitySpecHandle SpecHandle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	ActorInfo->AbilitySystemComponent->RemoveLooseGameplayTags(AttackingTags);
	Super::EndAbility(SpecHandle, ActorInfo, ActivationInfo, true, false);
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