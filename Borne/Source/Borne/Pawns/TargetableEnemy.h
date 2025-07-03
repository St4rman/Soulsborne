// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Borne/Interfaces/TargetableInterface.h"

#include "GameFramework/Character.h"
#include "TargetableEnemy.generated.h"

class UUserWidget;

UCLASS()
class BORNE_API ATargetableEnemy : public ACharacter, public ITargetableInterface
{
	GENERATED_BODY()

public:
	
	ATargetableEnemy();
	
	virtual void SetSelfAsTarget_Implementation() override;
	virtual void RemoveSelfAsTarget_Implementation() override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	bool IsTargeted;
	
};
