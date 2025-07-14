// Fill out your copyright notice in the Description page of Project Settings.


#include "SHUDComponent.h"

#include "Borne/BorneCharacter.h"


// Sets default values for this component's properties
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


// Called when the game starts
void USHUDComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (Player->IsLocallyControlled() && PlayerHUDClass )
	{
		AController* PlayerController = Player->GetController();
		PlayerHUD = CreateWidget<UPlayerHUD>(GetWorld(), PlayerHUDClass);
		check(PlayerController);
		PlayerHUD->AddToPlayerScreen();
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

void  USHUDComponent::SetStamina(const float Stamina, const float MaxStamina)
{
	PlayerHUD->SetStamina(Stamina, MaxStamina);
}

void USHUDComponent::SetHealth(const float Health, const float MaxHealth)
{
	PlayerHUD->SetHealth(Health, MaxHealth);
}


void USHUDComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}
