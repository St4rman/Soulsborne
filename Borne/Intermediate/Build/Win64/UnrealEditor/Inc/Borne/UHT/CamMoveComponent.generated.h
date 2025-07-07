// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerComponents/CamMoveComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_CamMoveComponent_generated_h
#error "CamMoveComponent.generated.h already included, missing '#pragma once' in CamMoveComponent.h"
#endif
#define BORNE_CamMoveComponent_generated_h

#define FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamMoveComponent(); \
	friend struct Z_Construct_UClass_UCamMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UCamMoveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UCamMoveComponent)


#define FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCamMoveComponent(UCamMoveComponent&&); \
	UCamMoveComponent(const UCamMoveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamMoveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamMoveComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCamMoveComponent) \
	NO_API virtual ~UCamMoveComponent();


#define FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_18_PROLOG
#define FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UCamMoveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
