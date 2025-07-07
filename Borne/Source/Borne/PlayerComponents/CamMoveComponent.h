#pragma once

#include "CoreMinimal.h"
#include "../Core/HelperData.h"
#include "Components/ActorComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CamMoveComponent.generated.h"

class ABorneCharacter;
class UCharacterMovementComponent;
class UCameraComponent;
class USpringArmComponent;



UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BORNE_API UCamMoveComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCamMoveComponent();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY()
	AActor* LockOnTarget;
	
	ECameraState CurrentCameraState;

	UPROPERTY()
	UCameraComponent* PlayerCameraComp;

	UPROPERTY()
	USpringArmComponent* SpringArm;

	ABorneCharacter* Player;
	
	UPROPERTY( EditAnywhere, Category = "Combat Cameras" )
	float CombatPitch = -20.0f;
	
	UPROPERTY( EditAnywhere, Category = "Combat Cameras" )
	float CombatLength = 700.0f;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void UpdateCamLocation(float dt);
	void UpdateSpringArm(float dt);
	
	FORCEINLINE void SetLockedOn(AActor* Target);
	void SetCamFree();
	FORCEINLINE ECameraState GetCamState() const {return CurrentCameraState; }
};
