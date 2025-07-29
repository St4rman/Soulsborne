#include "SoulsAIController.h"
#include "Borne/Core/HelperData.h"


ASoulsAIController::ASoulsAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASoulsAIController::BeginPlay()
{
	Super::BeginPlay();
	RunBehaviorTree(MainBehaviorTree);
	GetBlackboardComponent()->SetValueAsEnum( BlackBoardStateKeyValue, CurrentState );
}

void ASoulsAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

