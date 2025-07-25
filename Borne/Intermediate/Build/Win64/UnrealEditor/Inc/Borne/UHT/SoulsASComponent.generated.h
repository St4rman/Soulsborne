// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/SoulsASComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_SoulsASComponent_generated_h
#error "SoulsASComponent.generated.h already included, missing '#pragma once' in SoulsASComponent.h"
#endif
#define BORNE_SoulsASComponent_generated_h

#define FID_Borne_Source_Borne_GAS_SoulsASComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoulsASComponent(); \
	friend struct Z_Construct_UClass_USoulsASComponent_Statics; \
public: \
	DECLARE_CLASS(USoulsASComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(USoulsASComponent)


#define FID_Borne_Source_Borne_GAS_SoulsASComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoulsASComponent(USoulsASComponent&&); \
	USoulsASComponent(const USoulsASComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoulsASComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoulsASComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoulsASComponent) \
	NO_API virtual ~USoulsASComponent();


#define FID_Borne_Source_Borne_GAS_SoulsASComponent_h_12_PROLOG
#define FID_Borne_Source_Borne_GAS_SoulsASComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_GAS_SoulsASComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_GAS_SoulsASComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class USoulsASComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_GAS_SoulsASComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
