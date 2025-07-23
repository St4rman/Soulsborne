#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SoulsAIController.generated.h"

class UBehaviorTree;
class UBlackboardComponent;

UCLASS()
class BORNE_API ASoulsAIController : public AAIController
{
	GENERATED_BODY()

public:
	ASoulsAIController();

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* MainBehaviorTree;
	
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float DeltaTime) override;
};
