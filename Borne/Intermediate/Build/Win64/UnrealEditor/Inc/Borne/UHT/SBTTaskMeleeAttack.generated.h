// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Tasks/SBTTaskMeleeAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_SBTTaskMeleeAttack_generated_h
#error "SBTTaskMeleeAttack.generated.h already included, missing '#pragma once' in SBTTaskMeleeAttack.h"
#endif
#define BORNE_SBTTaskMeleeAttack_generated_h

#define FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBTTaskMeleeAttack(); \
	friend struct Z_Construct_UClass_USBTTaskMeleeAttack_Statics; \
public: \
	DECLARE_CLASS(USBTTaskMeleeAttack, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(USBTTaskMeleeAttack)


#define FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBTTaskMeleeAttack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USBTTaskMeleeAttack(USBTTaskMeleeAttack&&); \
	USBTTaskMeleeAttack(const USBTTaskMeleeAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBTTaskMeleeAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBTTaskMeleeAttack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBTTaskMeleeAttack) \
	NO_API virtual ~USBTTaskMeleeAttack();


#define FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_15_PROLOG
#define FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_18_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class USBTTaskMeleeAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
