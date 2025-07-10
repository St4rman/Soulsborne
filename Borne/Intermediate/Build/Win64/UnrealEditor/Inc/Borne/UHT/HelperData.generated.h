// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/HelperData.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_HelperData_generated_h
#error "HelperData.generated.h already included, missing '#pragma once' in HelperData.h"
#endif
#define BORNE_HelperData_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_Core_HelperData_h


#define FOREACH_ENUM_ESOULSABILITYINPUTID(op) \
	op(ESoulsAbilityInputID::None) \
	op(ESoulsAbilityInputID::Confirm) \
	op(ESoulsAbilityInputID::Cancel) \
	op(ESoulsAbilityInputID::Roll) \
	op(ESoulsAbilityInputID::Attack) 

enum class ESoulsAbilityInputID : uint8;
template<> struct TIsUEnumClass<ESoulsAbilityInputID> { enum { Value = true }; };
template<> BORNE_API UEnum* StaticEnum<ESoulsAbilityInputID>();

#define FOREACH_ENUM_ELOCOMOTIONMODE(op) \
	op(L_Free) \
	op(L_Locked) \
	op(L_InCombat) 

enum ELocomotionMode : uint8;
template<> BORNE_API UEnum* StaticEnum<ELocomotionMode>();

#define FOREACH_ENUM_ECAMERASTATE(op) \
	op(Free) \
	op(Locked) 

enum ECameraState : uint8;
template<> BORNE_API UEnum* StaticEnum<ECameraState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
