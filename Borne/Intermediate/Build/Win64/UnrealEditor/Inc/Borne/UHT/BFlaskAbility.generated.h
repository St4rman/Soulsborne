// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/Active/Flask/BFlaskAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_BFlaskAbility_generated_h
#error "BFlaskAbility.generated.h already included, missing '#pragma once' in BFlaskAbility.h"
#endif
#define BORNE_BFlaskAbility_generated_h

#define FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBFlaskAbility(); \
	friend struct Z_Construct_UClass_UBFlaskAbility_Statics; \
public: \
	DECLARE_CLASS(UBFlaskAbility, USoulGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UBFlaskAbility)


#define FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBFlaskAbility(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBFlaskAbility(UBFlaskAbility&&); \
	UBFlaskAbility(const UBFlaskAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBFlaskAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBFlaskAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBFlaskAbility) \
	NO_API virtual ~UBFlaskAbility();


#define FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_12_PROLOG
#define FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UBFlaskAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
