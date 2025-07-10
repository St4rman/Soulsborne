#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum class ESoulsAbilityInputID: uint8
{
	None,
	Confirm,
	Cancel,
	Roll,
	Attack
};

/**
 * Enum to track player locomotion, to be used incase locking without comabt.
 */
UENUM(BlueprintType)
enum ELocomotionMode : uint8
{
	L_Free		= 0 UMETA(DisplayName = "Free", ToolTip = "Free, normal locomotion"),
	L_Locked	= 1 UMETA(DisplayName = "Locked - normal", Tooltip = "Locked, to targets when not in combat"),
	L_InCombat	= 2 UMETA(DisplayName = "Locked - In Combat", Tooltip = "Locked to target, IN COMBAT. Changes movement"),
};

/**
 * Enum for camera state.
 */
UENUM(BlueprintType)
enum ECameraState : uint8
{
	Free		= 0 UMETA(DisplayName = "Free"),
	Locked		= 1 UMETA(DisplayName = "Locked"),
};

/**
 * 
 */
class BORNE_API HelperData
{
};

