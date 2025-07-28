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
	GetBlackboardComponent()->SetValueAsEnum( BlackBoardStateKeyValue, EAIState::Strafing );
}

void ASoulsAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

