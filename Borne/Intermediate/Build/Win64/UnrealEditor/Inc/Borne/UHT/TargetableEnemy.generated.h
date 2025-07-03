// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pawns/TargetableEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_TargetableEnemy_generated_h
#error "TargetableEnemy.generated.h already included, missing '#pragma once' in TargetableEnemy.h"
#endif
#define BORNE_TargetableEnemy_generated_h

#define FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATargetableEnemy(); \
	friend struct Z_Construct_UClass_ATargetableEnemy_Statics; \
public: \
	DECLARE_CLASS(ATargetableEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(ATargetableEnemy)


#define FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATargetableEnemy(ATargetableEnemy&&); \
	ATargetableEnemy(const ATargetableEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATargetableEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATargetableEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATargetableEnemy) \
	NO_API virtual ~ATargetableEnemy();


#define FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_9_PROLOG
#define FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class ATargetableEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_Pawns_TargetableEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
