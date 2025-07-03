// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetableEnemy.h"


ATargetableEnemy::ATargetableEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATargetableEnemy::SetSelfAsTarget_Implementation()
{
	ITargetableInterface::SetSelfAsTarget_Implementation();
	IsTargeted = true;
	
}

void ATargetableEnemy::RemoveSelfAsTarget_Implementation()
{
	IsTargeted = false;
	ITargetableInterface::RemoveSelfAsTarget_Implementation();
}

void ATargetableEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATargetableEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

