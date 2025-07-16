// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerComponents/SInventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_SInventoryComponent_generated_h
#error "SInventoryComponent.generated.h already included, missing '#pragma once' in SInventoryComponent.h"
#endif
#define BORNE_SInventoryComponent_generated_h

#define FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDropCurrentWeapon);


#define FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSInventoryComponent(); \
	friend struct Z_Construct_UClass_USInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(USInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(USInventoryComponent)


#define FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USInventoryComponent(USInventoryComponent&&); \
	USInventoryComponent(const USInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USInventoryComponent) \
	NO_API virtual ~USInventoryComponent();


#define FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_13_PROLOG
#define FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class USInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
