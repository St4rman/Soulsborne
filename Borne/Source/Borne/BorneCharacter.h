// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Core/HelperData.h"
#include "Core/HelperBPLib.h"

#include "Camera/CameraComponent.h"
#include "PlayerComponents/DetectorComponent.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GAS/SoulsASComponent.h"
#include "GAS/Abilities/SoulGameplayAbility.h"
#include "GAS/AttributeSets/BaseAttributesSet.h"
#include "Logging/LogMacros.h"
#include "PlayerComponents/CamMoveComponent.h"
#include "PlayerComponents/SInventoryComponent.h"
#include "BorneCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UBaseAttributesSet;
class UDetectorComponent;
class UCamMoveComponent;
class USoulGameplayAbility;
class USInventoryComponent;
class UInputMappingContext;
class UInputAction;

struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);


UCLASS(config=Game)
class ABorneCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
	ELocomotionMode MainLocomotionMode;
	AActor* CurrentMainTarget;

	
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

	/** Detect Enemy Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DetectAction;

	/** Roll action for dodging*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* RollAction;
	
	/** Detection */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detector", meta = (AllowPrivateAccess = "true"))
	UDetectorComponent* EnemyDetector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detector", meta = (AllowPrivateAccess = "true"))
	UCamMoveComponent* CameraHandlerComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detector", meta = (AllowPrivateAccess = "true"))
	USInventoryComponent* InventoryComponent;

	/**ABILTIES ////////////////////////////////////////////
	 */

	/** Ability Systsem Component*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USoulsASComponent> SoulsAbilitySystemComponent;
	
	UPROPERTY(VisibleAnywhere)
	const class UBaseAttributesSet* BaseSet;

	
	
public:
	ABorneCharacter();
	virtual void BeginPlay() override;

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
	void FireDetection();
	void DoRoll();
	void SetPlayerRotation(float dt);
	void AddStartUpGameplayAbilities();
	
	FVector2D InputCache;

	/**
	 * ABILITIES ///////////////////////////////////////////////////////
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	TArray<TSubclassOf<UGameplayEffect>> PassiveGameplayEffects;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
	TArray<TSubclassOf<USoulGameplayAbility>> GameplayAbilities;

	UPROPERTY()
	uint8 bAbilitiesInitialized:1;

	
protected:

	virtual void NotifyControllerChanged() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	/** returns ability system suboject **/
	FORCEINLINE virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override {return SoulsAbilitySystemComponent;}
	/** returns inventory subobject **/
	FORCEINLINE class USInventoryComponent* GetInventoryComponent() const { return InventoryComponent; }
	/** Returns camera forward vector **/
	FORCEINLINE FVector GetCamFwd() const {return GetFollowCamera()->GetForwardVector();}
	/** Sets current Locomotion mode **/
	FORCEINLINE void SetCurrentLocomotionMode(ELocomotionMode dest) {MainLocomotionMode = dest;}
	/** Returns current Locomotion mode **/
	UFUNCTION(BlueprintCallable)
	ELocomotionMode GetCurrentLocomotionMode() const {return MainLocomotionMode;}

	UFUNCTION(BlueprintCallable)
	FVector2D GetInputCache();
};

