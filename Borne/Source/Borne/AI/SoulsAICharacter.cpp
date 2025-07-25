#include "SoulsAICharacter.h"


ASoulsAICharacter::ASoulsAICharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	LockOnWidget = CreateDefaultSubobject<UWidgetComponent>("LockOnWidget");
	LockOnWidget->SetupAttachment(RootComponent);
	LockOnWidget->SetVisibility(false);
}

void ASoulsAICharacter::SetSelfAsTarget_Implementation()
{
	ITargetableInterface::SetSelfAsTarget_Implementation();
	LockOnWidget->SetVisibility(true);
}

void ASoulsAICharacter::RemoveSelfAsTarget_Implementation()
{
	LockOnWidget->SetVisibility(false);
	ITargetableInterface::RemoveSelfAsTarget_Implementation();
}

void ASoulsAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASoulsAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASoulsAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

