#include "PlayerHUD.h"

#include "Components/TextBlock.h"

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

void UPlayerHUD::SetBossHealth(const float Health, const float MaxHealth)
{
	if (BossHealthBar != nullptr)
	{
		BossHealthBar->SetPercent(Health / MaxHealth);
	}
}

void UPlayerHUD::ToggleBossBarVisibility(const bool Toggle)
{
	if (BossHealthBar != nullptr)
	{
		const ESlateVisibility CurVis = Toggle ? ESlateVisibility::Visible : ESlateVisibility::Hidden;
		BossHealthBar->SetVisibility(CurVis);
	}
}

void UPlayerHUD::UpdateFlask(const FText Value)
{
	if (FlaskNum != nullptr)
	{
		FlaskNum->SetText(Value);
	}
}