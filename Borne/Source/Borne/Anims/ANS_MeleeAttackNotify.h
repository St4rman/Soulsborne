// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Borne/Core/HelperBPLib.h"
#include "Borne/BorneCharacter.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_MeleeAttackNotify.generated.h"

/**
 * 
 */
UCLASS()
class BORNE_API UANS_MeleeAttackNotify : public UAnimNotifyState
{
	GENERATED_BODY()


public:
	UPROPERTY()
	bool bIsActive = false;
	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
};
