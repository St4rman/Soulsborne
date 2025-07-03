// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetableEnemy.h"


// Sets default values
ATargetableEnemy::ATargetableEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ATargetableEnemy::SetSelfAsTarget_Implementation()
{
	ITargetableInterface::SetSelfAsTarget_Implementation();
	IsTargeted = true;
	// GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, "Target is self");
}

void ATargetableEnemy::RemoveSelfAsTarget_Implementation()
{
	IsTargeted = false;
	ITargetableInterface::RemoveSelfAsTarget_Implementation();
}

// Called when the game starts or when spawned
void ATargetableEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetableEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATargetableEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

