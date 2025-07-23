// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/SoulsAICharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_SoulsAICharacter_generated_h
#error "SoulsAICharacter.generated.h already included, missing '#pragma once' in SoulsAICharacter.h"
#endif
#define BORNE_SoulsAICharacter_generated_h

#define FID_Borne_Source_Borne_AI_SoulsAICharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoulsAICharacter(); \
	friend struct Z_Construct_UClass_ASoulsAICharacter_Statics; \
public: \
	DECLARE_CLASS(ASoulsAICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(ASoulsAICharacter)


#define FID_Borne_Source_Borne_AI_SoulsAICharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASoulsAICharacter(ASoulsAICharacter&&); \
	ASoulsAICharacter(const ASoulsAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoulsAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoulsAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoulsAICharacter) \
	NO_API virtual ~ASoulsAICharacter();


#define FID_Borne_Source_Borne_AI_SoulsAICharacter_h_7_PROLOG
#define FID_Borne_Source_Borne_AI_SoulsAICharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_AI_SoulsAICharacter_h_10_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_AI_SoulsAICharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class ASoulsAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_AI_SoulsAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
