#include "SoulsAIController.h"



ASoulsAIController::ASoulsAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASoulsAIController::BeginPlay()
{
	Super::BeginPlay();
	RunBehaviorTree(MainBehaviorTree);


	APawn* player = UGameplayStatics::GetPlayerPawn(this, 0);
	if (player)
	{
		GetBlackboardComponent()->SetValueAsVector("MoveToLocation", player->GetActorLocation());
		
	}
}

void ASoulsAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

