// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/CollisionProfile.h"
#include "Components/ActorComponent.h"
#include "DetectorComponent.generated.h"


class ABorneCharacter;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BORNE_API UDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UDetectorComponent();

protected:
	
	virtual void BeginPlay() override;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detector")
	float DetectorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detector")
	TEnumAsByte<ECollisionChannel> CollisionChannel;
	
	FCollisionQueryParams CollisionParams;

	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectsToLookFor;
	TArray<AActor*> ActorsToIgnore;
	TArray<AActor*> Targets;

	AActor* MainTarget;
	
	TObjectPtr<ABorneCharacter> PlayerCharacter;

	void PickMainTarget();
	float ComputeTargetCompareData(AActor* NewTar);

public:
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	void FireDetection();
	//Setters
	FORCEINLINE void SetDetectorRadius(float newRadius ) { DetectorRadius = newRadius; }
	FORCEINLINE AActor* GetMainTarget() const {return MainTarget;}
};
