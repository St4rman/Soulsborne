#pragma once

#include "CoreMinimal.h"
#include "Borne/Interfaces/TargetableInterface.h"
#include "Components/WidgetComponent.h"
#include "MotionWarpingComponent.h"
#include "AIController.h"
#include "NiagaraComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Borne/Core/HelperData.h"
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


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentBleed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxBleed = 3;
	
	UPROPERTY(VisibleAnywhere)
	TEnumAsByte<ELocomotionMode> CurrentLocomotionMode;

	UMotionWarpingComponent* MotionWarp;

	UPROPERTY(EditAnywhere)
	FName MotionWarpName = "PlayerLocation";

	AActor* Target;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=" Effects ", meta = (AllowPrivateAccess = "true"))
	UNiagaraComponent* NiagaraRoarComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=" Effects ", meta = (AllowPrivateAccess = "true"))
	USoundBase* HurtNoise;

	FTimerHandle BleedTimer;
	
public:

	UPROPERTY(BlueprintReadOnly)
	bool IsTargeted;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	 ASBWeaponBase* GetWeapon() const {return MainWeapon; }

	void TakeDamage( const float DamageAmount );

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateHealth();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();

	void SetLocomotionMode(ELocomotionMode ToMode ) { CurrentLocomotionMode = ToMode;}
	ELocomotionMode GetCurrentLocomotionMode() { return CurrentLocomotionMode; }
	void UpdateMotionWarpingTarget();

	FORCEINLINE UNiagaraComponent* GetNiagaraComponent() const { return NiagaraRoarComponent; }

	void IncreaseBleedStack();
	void DecreaseBleedStacks();
	void ApplyBleedBurst();

	UFUNCTION(BlueprintCallable)
	float GetCurrentBleed(){ return CurrentBleed;};
};
