#include "PlayerHUD.h"



void UPlayerHUD::SetHealth(const float Health, const float MaxHealth)
{
	if (HealthBar != nullptr)
	{
		HealthBar->SetPercent(Health / MaxHealth);
	}
}

void UPlayerHUD::SetStamina(const float Stamina, const float MaxStamina)
{
	if (StaminaBar != nullptr)
	{
		StaminaBar->SetPercent(Stamina / MaxStamina);
	}
}

void UPlayerHUD::SetMeleeIcon(UTexture2D* WeaponTexture, bool bMatchSize)
{
	if (MeleeIcon != nullptr)
	{
		MeleeIcon->SetBrushFromTexture(WeaponTexture, bMatchSize);
	}
}
