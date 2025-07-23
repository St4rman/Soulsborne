#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SoulsAIController.generated.h"

UCLASS()
class BORNE_API ASoulsAIController : public AAIController
{
	GENERATED_BODY()

public:
	ASoulsAIController();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
