// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/AttributeSets/BaseAttributesSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_BaseAttributesSet_generated_h
#error "BaseAttributesSet.generated.h already included, missing '#pragma once' in BaseAttributesSet.h"
#endif
#define BORNE_BaseAttributesSet_generated_h

#define FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttributesSet(); \
	friend struct Z_Construct_UClass_UBaseAttributesSet_Statics; \
public: \
	DECLARE_CLASS(UBaseAttributesSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttributesSet)


#define FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseAttributesSet(UBaseAttributesSet&&); \
	UBaseAttributesSet(const UBaseAttributesSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttributesSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttributesSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseAttributesSet) \
	NO_API virtual ~UBaseAttributesSet();


#define FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_19_PROLOG
#define FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_22_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UBaseAttributesSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
