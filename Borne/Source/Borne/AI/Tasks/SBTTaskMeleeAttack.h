// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AIController.h"
#include "BehaviorTree/ValueOrBBKey.h"
#include "GameFramework/Character.h"
#include "SBTTaskMeleeAttack.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API USBTTaskMeleeAttack : public UBTTaskNode
{
	GENERATED_BODY()

	UPROPERTY(Category = Node, EditAnywhere)
	FValueOrBBKey_Object AnimationToPlay = TObjectPtr<UAnimMontage>();

	UPROPERTY(Category = Node, EditAnywhere)
	FValueOrBBKey_Float fCost = 10;

	UPROPERTY(Category = Node, EditAnywhere)
	FName BlackBoardStaminaValueName = "Stamina";
	
	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> MyOwnerComp;
	
	FTimerDelegate TimerDelegate;
	FTimerHandle TimerHandle;

	USkeletalMeshComponent* MeshCache;

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	void OnAnimFinished();
	bool CalculateCost(UBehaviorTreeComponent& OwnerComp,  const float Cost);
	
};
