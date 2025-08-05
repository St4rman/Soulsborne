// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAttributesSet.h"

#include "Borne/BorneCharacter.h"

UBaseAttributesSet::UBaseAttributesSet()
{
	
}

void UBaseAttributesSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	// Super::PostGameplayEffectExecute(Data);

	FGameplayEffectContextHandle Ctx = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* OwningASC = Ctx.GetInstigatorAbilitySystemComponent();
	const FGameplayTagContainer OwnedTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();

	float Delta = 0.f;

	//CHANGE STUFF
	
	
	if (Data.EvaluatedData.ModifierOp == EGameplayModOp::Type::Additive)
	{
		Delta = Data.EvaluatedData.Magnitude;
		
		if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
		{
			const float OldStaminaValue = GetStamina();
			const float MaxStaminaValue = GetMaxStamina();
			const float NewStaminaValue = FMath::Clamp(OldStaminaValue, 0.0f, MaxStaminaValue);
		
			if (OldStaminaValue != NewStaminaValue)
			{
				SetStamina(NewStaminaValue);
			}
		}

		if (Data.EvaluatedData.Attribute == GetHealthAttribute())
		{
			const float OldHealthValue = GetHealth();
			const float NewHealth = OldHealthValue + Delta;

			if (NewHealth < 0.0)
			{
				
				AActor* Owner = OwningASC->GetOwner();

				if (ABorneCharacter* Player = Cast<ABorneCharacter>(Owner))
				{
					Player->OnPlayerDeath();
				}
			}
		}
	}
	
}
 