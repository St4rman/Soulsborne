#include "SoulsAICharacter.h"


ASoulsAICharacter::ASoulsAICharacter()
{
	PrimaryActorTick.bCanEverTick = true;
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

