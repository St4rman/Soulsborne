// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/AbilityTasks/PreDodgeTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_PreDodgeTask_generated_h
#error "PreDodgeTask.generated.h already included, missing '#pragma once' in PreDodgeTask.h"
#endif
#define BORNE_PreDodgeTask_generated_h

#define FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreDodgeTask(); \
	friend struct Z_Construct_UClass_UPreDodgeTask_Statics; \
public: \
	DECLARE_CLASS(UPreDodgeTask, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UPreDodgeTask)


#define FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPreDodgeTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPreDodgeTask(UPreDodgeTask&&); \
	UPreDodgeTask(const UPreDodgeTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPreDodgeTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreDodgeTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreDodgeTask) \
	NO_API virtual ~UPreDodgeTask();


#define FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_12_PROLOG
#define FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_15_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UPreDodgeTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
