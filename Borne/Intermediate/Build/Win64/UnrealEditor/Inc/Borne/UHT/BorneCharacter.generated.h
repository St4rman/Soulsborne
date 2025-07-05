// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BorneCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_BorneCharacter_generated_h
#error "BorneCharacter.generated.h already included, missing '#pragma once' in BorneCharacter.h"
#endif
#define BORNE_BorneCharacter_generated_h

#define FID_Borne_Source_Borne_BorneCharacter_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentLocomotionMode);


#define FID_Borne_Source_Borne_BorneCharacter_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABorneCharacter(); \
	friend struct Z_Construct_UClass_ABorneCharacter_Statics; \
public: \
	DECLARE_CLASS(ABorneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(ABorneCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABorneCharacter*>(this); }


#define FID_Borne_Source_Borne_BorneCharacter_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABorneCharacter(ABorneCharacter&&); \
	ABorneCharacter(const ABorneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABorneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABorneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABorneCharacter) \
	NO_API virtual ~ABorneCharacter();


#define FID_Borne_Source_Borne_BorneCharacter_h_35_PROLOG
#define FID_Borne_Source_Borne_BorneCharacter_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_BorneCharacter_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_BorneCharacter_h_38_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_BorneCharacter_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class ABorneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_BorneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
