#include "SoulsAIController.h"

#include "Borne/Core/HelperData.h"


ASoulsAIController::ASoulsAIController()
{
	PrimaryActorTick.bCanEverTick = true;
	CurrentState = EAIState::Strafing;
}

void ASoulsAIController::BeginPlay()
{
	Super::BeginPlay();
	RunBehaviorTree(MainBehaviorTree);


	// APawn* player = UGameplayStatics::GetPlayerPawn(this, 0);
	// if (player)
	// {
	// 	GetBlackboardComponent()->SetValueAsObject("TargetActor", player);
	// 	
	// }
	GetBlackboardComponent()->SetValueAsEnum( BlackBoardStateKeyValue, EAIState::Strafing );
}

void ASoulsAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

