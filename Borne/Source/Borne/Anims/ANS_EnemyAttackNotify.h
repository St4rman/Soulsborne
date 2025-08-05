// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ANS_EnemyAttackNotify.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API UANS_EnemyAttackNotify : public UAnimNotifyState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UGameplayEffect> DamageGameplayEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FGameplayTag DamageTag;
	
public:
	
	
	UPROPERTY()
	TArray<AActor*> TraceIgnoreActors;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDrawDebugTrace::Type> DebugDraw = EDrawDebugTrace::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius	= 70.0f;
	
	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;

};
