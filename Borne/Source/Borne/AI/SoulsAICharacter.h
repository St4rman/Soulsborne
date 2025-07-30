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

	UPROPERTY(EditAnywhere, Category = "Weapon")
	ASBWeaponBase* MainWeapon;

	void PostInitializeComponents() override;
public:

	UPROPERTY(BlueprintReadOnly)
	bool IsTargeted;
	
};
