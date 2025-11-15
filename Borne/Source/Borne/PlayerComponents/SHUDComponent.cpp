#include "SHUDComponent.h"
#include "Borne/BorneCharacter.h"


USHUDComponent::USHUDComponent()
{

	PrimaryComponentTick.bCanEverTick = true;
	
	PlayerHUD = nullptr;
	PlayerHUDClass = nullptr;
	
	Player = Cast<ABorneCharacter>(GetOwner());
	if(Player)
	{
		AttribSet = Cast<UBaseAttributesSet>(Player->GetAbilitySystemComponent()->GetAttributeSet(UBaseAttributesSet::StaticClass()));
	}
}


void USHUDComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (Player->IsLocallyControlled() && PlayerHUDClass)
	{
		AController* PlayerController = Player->GetController();
		PlayerHUD = CreateWidget<UPlayerHUD>(GetWorld(), PlayerHUDClass);
		check(PlayerController);
		PlayerHUD->AddToPlayerScreen();
		SetMeleeIcon(EmptyTexture);
		PlayerHUD->ToggleBossBarVisibility(false);
		PlayerHUD->SetVisibility(ESlateVisibility::Hidden);
	}
}

void USHUDComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if(PlayerHUD)
	{
		PlayerHUD->RemoveFromParent();
		PlayerHUD = nullptr;
	}
	Super::EndPlay(EndPlayReason);
	
}

void  USHUDComponent::SetStamina(const float Stamina, const float MaxStamina) const
{
	PlayerHUD->SetStamina(Stamina, MaxStamina);
}

void USHUDComponent::SetHealth(const float Health, const float MaxHealth) const
{
	PlayerHUD->SetHealth(Health, MaxHealth);
}

void USHUDComponent::SetMeleeIcon(UTexture2D* Texture) const
{
	PlayerHUD->SetMeleeIcon(Texture, true);
}

void USHUDComponent::SetBossHealth(const float Health, const float MaxHealth)
{
	PlayerHUD->SetBossHealth(Health, MaxHealth);
}

void USHUDComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

void USHUDComponent::ToggleBossHealth(bool toggle)
{
	PlayerHUD->ToggleBossBarVisibility(toggle);
}

void USHUDComponent::UpdateFlask(FText FlaskCount)
{
	PlayerHUD->UpdateFlask(FlaskCount);
}