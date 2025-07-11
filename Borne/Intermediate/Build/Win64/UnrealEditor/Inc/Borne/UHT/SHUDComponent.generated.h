// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerComponents/SHUDComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_SHUDComponent_generated_h
#error "SHUDComponent.generated.h already included, missing '#pragma once' in SHUDComponent.h"
#endif
#define BORNE_SHUDComponent_generated_h

#define FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execSetStamina);


#define FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHUDComponent(); \
	friend struct Z_Construct_UClass_USHUDComponent_Statics; \
public: \
	DECLARE_CLASS(USHUDComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(USHUDComponent)


#define FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USHUDComponent(USHUDComponent&&); \
	USHUDComponent(const USHUDComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHUDComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHUDComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHUDComponent) \
	NO_API virtual ~USHUDComponent();


#define FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_13_PROLOG
#define FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class USHUDComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
