// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Borne/Weapons/SBWeaponBase.h"
#include "Components/ActorComponent.h"
#include "SInventoryComponent.generated.h"

class ABorneCharacter;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BORNE_API USInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USInventoryComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	ASBWeaponBase* EquippedWeapon;

protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,FActorComponentTickFunction* ThisTickFunction) override;
	ASBWeaponBase* GetCurrentEquippedWeapon() const {return EquippedWeapon;}

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void SetCurrentEquippedWeapon(ASBWeaponBase* NewWeapon);
};
