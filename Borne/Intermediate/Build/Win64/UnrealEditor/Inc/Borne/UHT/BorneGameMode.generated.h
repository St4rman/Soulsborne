// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BorneGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_BorneGameMode_generated_h
#error "BorneGameMode.generated.h already included, missing '#pragma once' in BorneGameMode.h"
#endif
#define BORNE_BorneGameMode_generated_h

#define FID_Borne_Source_Borne_BorneGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABorneGameMode(); \
	friend struct Z_Construct_UClass_ABorneGameMode_Statics; \
public: \
	DECLARE_CLASS(ABorneGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), BORNE_API) \
	DECLARE_SERIALIZER(ABorneGameMode)


#define FID_Borne_Source_Borne_BorneGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABorneGameMode(ABorneGameMode&&); \
	ABorneGameMode(const ABorneGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BORNE_API, ABorneGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABorneGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABorneGameMode) \
	BORNE_API virtual ~ABorneGameMode();


#define FID_Borne_Source_Borne_BorneGameMode_h_9_PROLOG
#define FID_Borne_Source_Borne_BorneGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_BorneGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_BorneGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class ABorneGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_BorneGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
