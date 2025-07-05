// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/HelperBPLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAnimMontage;
#ifdef BORNE_HelperBPLib_generated_h
#error "HelperBPLib.generated.h already included, missing '#pragma once' in HelperBPLib.h"
#endif
#define BORNE_HelperBPLib_generated_h

#define FID_Borne_Source_Borne_Core_HelperBPLib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddRotationPreDodge); \
	DECLARE_FUNCTION(execHasLastMovementInput); \
	DECLARE_FUNCTION(execPlayImportantAnimMontage);


#define FID_Borne_Source_Borne_Core_HelperBPLib_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHelperBPLib(); \
	friend struct Z_Construct_UClass_UHelperBPLib_Statics; \
public: \
	DECLARE_CLASS(UHelperBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UHelperBPLib)


#define FID_Borne_Source_Borne_Core_HelperBPLib_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHelperBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHelperBPLib(UHelperBPLib&&); \
	UHelperBPLib(const UHelperBPLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHelperBPLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHelperBPLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHelperBPLib) \
	NO_API virtual ~UHelperBPLib();


#define FID_Borne_Source_Borne_Core_HelperBPLib_h_12_PROLOG
#define FID_Borne_Source_Borne_Core_HelperBPLib_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_Core_HelperBPLib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Core_HelperBPLib_h_15_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Core_HelperBPLib_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UHelperBPLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_Core_HelperBPLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
