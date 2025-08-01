// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBTTTurnToFacePlayer.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API USBTTTurnToFacePlayer : public UBTTaskNode
{
	GENERATED_BODY()

public:
	USBTTTurnToFacePlayer(const FObjectInitializer& ObjectInitializer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LookRotationRate = 0.25f;
};
