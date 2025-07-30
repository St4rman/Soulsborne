#pragma once

#include "CoreMinimal.h"
#include "Borne/Interfaces/TargetableInterface.h"
#include "Components/WidgetComponent.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Borne/Weapons/SBWeaponBase.h"
#include "Perception/PawnSensingComponent.h"
#include "GameFramework/Character.h"
#include "SoulsAICharacter.generated.h"


class UUserWidget;
class UPawnSensingComponent;

UCLASS()
class BORNE_API ASoulsAICharacter : public ACharacter, public ITargetableInterface
{
	GENERATED_BODY()

public:

	ASoulsAICharacter();
	
	virtual void SetSelfAsTarget_Implementation() override;
	virtual void RemoveSelfAsTarget_Implementation() override;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UPawnSensingComponent* PawnSensingComponent;
	
	UPROPERTY(EditAnywhere)
	UWidgetComponent* LockOnWidget;

	UFUNCTION()
	void OnPawnSeen(APawn* Pawn);
	
	ASBWeaponBase* MainWeapon;

	UPROPERTY(EditAnywhere, Category = "WeaponBase Class")
	TSubclassOf<ASBWeaponBase> WeaponBase;

	virtual void PostInitializeComponents() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	float Health;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth;
	
public:

	UPROPERTY(BlueprintReadOnly)
	bool IsTargeted;

	virtual void BeginPlay() override;

	 ASBWeaponBase* GetWeapon() const {return MainWeapon; }

	void TakeDamage(float DamageAmount);
};
