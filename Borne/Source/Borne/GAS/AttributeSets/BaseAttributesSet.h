// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "BaseAttributesSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Base Attribute set, can be applied for both players and enemies
 */
UCLASS()
class BORNE_API UBaseAttributesSet : public UAttributeSet
{
	GENERATED_BODY()
	UBaseAttributesSet();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UBaseAttributesSet, Health)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayAttributeData  MaxHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributesSet, MaxHealth)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayAttributeData  Stamina;
	ATTRIBUTE_ACCESSORS(UBaseAttributesSet, Stamina)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayAttributeData  MaxStamina;
	ATTRIBUTE_ACCESSORS(UBaseAttributesSet, MaxStamina)
};
