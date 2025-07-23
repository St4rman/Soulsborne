#include "SoulsAIController.h"

ASoulsAIController::ASoulsAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASoulsAIController::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASoulsAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

