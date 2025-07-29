// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BTService.h"
#include "Borne/Core/HelperData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SStateCheckService.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API USStateCheckService : public UBTService
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector BlackboardKey;

	UPROPERTY(EditAnywhere, Category = "Ranges")
	float MeleeRange;

	UPROPERTY(EditAnywhere, Category = "Ranges")
	float MediumRange;

	UPROPERTY(EditAnywhere, Category = "References")
	FName ReferencesKey;
	
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
