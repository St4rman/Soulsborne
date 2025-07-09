// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/Passive/PGA_StaminaRegen.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_PGA_StaminaRegen_generated_h
#error "PGA_StaminaRegen.generated.h already included, missing '#pragma once' in PGA_StaminaRegen.h"
#endif
#define BORNE_PGA_StaminaRegen_generated_h

#define FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPGA_StaminaRegen(); \
	friend struct Z_Construct_UClass_UPGA_StaminaRegen_Statics; \
public: \
	DECLARE_CLASS(UPGA_StaminaRegen, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UPGA_StaminaRegen)


#define FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPGA_StaminaRegen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPGA_StaminaRegen(UPGA_StaminaRegen&&); \
	UPGA_StaminaRegen(const UPGA_StaminaRegen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPGA_StaminaRegen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPGA_StaminaRegen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPGA_StaminaRegen) \
	NO_API virtual ~UPGA_StaminaRegen();


#define FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_12_PROLOG
#define FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_15_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UPGA_StaminaRegen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
