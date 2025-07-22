// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Borne/Weapons/SBWeaponBase.h"
#include "Components/ActorComponent.h"
#include "SInventoryComponent.generated.h"

class ABUarmedWeapon;
class ABorneCharacter;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BORNE_API USInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USInventoryComponent();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	ASBWeaponBase* EquippedWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Detector")
	float DetectorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Detector")
	TArray<TEnumAsByte<EObjectTypeQuery>> WeaponObjectType;

	TArray<AActor*> ActorsToIgnore;

	ABorneCharacter* Player;

protected:

	ASBWeaponBase* CurrentTargetWeapon;
	virtual void BeginPlay() override;

public:
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,FActorComponentTickFunction* ThisTickFunction) override;
	ASBWeaponBase* GetCurrentEquippedWeapon() const {return EquippedWeapon;}
	
	void SetCurrentEquippedWeapon(ASBWeaponBase* NewWeapon);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void DropCurrentWeapon();
	
	UFUNCTION(BlueprintCallable, Category = "Detector")
	bool WeaponInPickUpRange();

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void PickUpWeapon();
};
