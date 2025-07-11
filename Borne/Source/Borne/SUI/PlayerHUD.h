// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "PlayerHUD.generated.h"


/**
 * 
 */
UCLASS(Abstract)
class BORNE_API UPlayerHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetHealth(const float Health, const float MaxHealth);

	UFUNCTION(BlueprintCallable)
	void SetStamina(const float Stamina, const float MaxStamina);

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	class UProgressBar* StaminaBar;
};
