// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "PlayerComponents/DetectorComponent.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "PlayerComponents/CamMoveComponent.h"
#include "BorneCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

class UDetectorComponent;
class UCamMoveComponent;

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UENUM(BlueprintType)
enum ELocomotionMode : uint8
{
	L_Free = 0   UMETA(DisplayName = "Free", ToolTip = "Free, normal locomotion"),
	L_Locked = 1 UMETA(DisplayName = "Locked - normal", Tooltip = "Locked, to targets when not in combat"),
	L_InCombat = 2 UMETA(DisplayName = "Locked - In Combat", Tooltip = "Locked to target, IN COMBAT. Changes movement"),
};

UCLASS(config=Game)
class ABorneCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DetectAction;

	/** Detection */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detector", meta = (AllowPrivateAccess = "true"))
	UDetectorComponent* EnemyDetector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detector", meta = (AllowPrivateAccess = "true"))
	UCamMoveComponent* CameraHandlerComponent;

	ELocomotionMode MainLocomotionMode;
	
public:
	ABorneCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
	void FireDetection();
	void SetPlayerRotation(float dt);

protected:

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE FVector GetCamFwd() const {return GetFollowCamera()->GetForwardVector();}
	FORCEINLINE void SetCurrentLocomotionMode(ELocomotionMode dest) {MainLocomotionMode = dest;}

	UFUNCTION(BlueprintCallable)
	ELocomotionMode GetCurrentLocomotionMode() const {return MainLocomotionMode;};

	
};

