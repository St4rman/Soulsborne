// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Borne/Core/HelperBPLib.h"
#include "Borne/BorneCharacter.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_SpawnAOE.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API UANS_SpawnAOE : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	
	UPROPERTY()
	TArray<AActor*> TraceIgnoreActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitBoxRadius = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SourceSocket = "Tip";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDrawDebugTrace::Type> DebugDraw;

	
	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

};
