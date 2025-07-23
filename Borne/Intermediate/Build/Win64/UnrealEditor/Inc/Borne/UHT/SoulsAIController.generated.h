// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/SoulsAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_SoulsAIController_generated_h
#error "SoulsAIController.generated.h already included, missing '#pragma once' in SoulsAIController.h"
#endif
#define BORNE_SoulsAIController_generated_h

#define FID_Borne_Source_Borne_AI_SoulsAIController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoulsAIController(); \
	friend struct Z_Construct_UClass_ASoulsAIController_Statics; \
public: \
	DECLARE_CLASS(ASoulsAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(ASoulsAIController)


#define FID_Borne_Source_Borne_AI_SoulsAIController_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASoulsAIController(ASoulsAIController&&); \
	ASoulsAIController(const ASoulsAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoulsAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoulsAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoulsAIController) \
	NO_API virtual ~ASoulsAIController();


#define FID_Borne_Source_Borne_AI_SoulsAIController_h_7_PROLOG
#define FID_Borne_Source_Borne_AI_SoulsAIController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_AI_SoulsAIController_h_10_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_AI_SoulsAIController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class ASoulsAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_AI_SoulsAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
