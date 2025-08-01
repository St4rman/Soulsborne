// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BTD_CheckPlayerInRange.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API UBTD_CheckPlayerInRange : public UBTDecorator
{
	GENERATED_BODY()

	UBTD_CheckPlayerInRange();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float FCloseDistance = 100.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float FFarDistance = 500.0f;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector PlayerTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	uint8 bIsLongRanged:1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	uint8 bIsShortRanged:1;
	
	
protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
