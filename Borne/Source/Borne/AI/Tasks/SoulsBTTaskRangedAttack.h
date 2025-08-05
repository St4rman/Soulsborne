// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/ValueOrBBKey.h"
#include "AIController.h"
#include "Borne/Pawns/SDmgProjectile.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SoulsBTTaskRangedAttack.generated.h"


/**
 * 
 */
UCLASS()
class BORNE_API USoulsBTTaskRangedAttack : public UBTTaskNode
{
	GENERATED_BODY()

	UPROPERTY(Category = Node, EditAnywhere)
	FValueOrBBKey_Object AnimationToPlay = TObjectPtr<UAnimMontage>();
	
	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> MyOwnerComp;
	
	USkeletalMeshComponent* MeshCache;

	FTimerDelegate AnimFinishedDelegate;
	FTimerHandle   AnimFinishHandle;
	
	FTimerDelegate SpawnProjectileDelegate;
	FTimerHandle   SpawnHandle;

	FVector SpawnLocation;
	FRotator SpawnRotation;
	
	AActor* TargetActor;
	
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileClass;


	UPROPERTY(EditAnywhere)
	int HalfNumber = 4;

	void OnAnimFinished();

	void FireProjectile(FVector Direction, const FVector Location);

	
};
