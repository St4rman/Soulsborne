﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UDamageableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BORNE_API IDamageableInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DoDamageFeedback();
};
