// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
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
	
	void SetHealth(const float Health, const float MaxHealth);
	void SetStamina(const float Stamina, const float MaxStamina);
	void SetMeleeIcon(UTexture2D* WeaponTexture, bool bMatchSize);
	
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	class UProgressBar* StaminaBar;

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	class UImage* ShieldIcon;
	
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	class UImage* MeleeIcon;
};
