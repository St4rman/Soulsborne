// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pawns/SDmgProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BORNE_SDmgProjectile_generated_h
#error "SDmgProjectile.generated.h already included, missing '#pragma once' in SDmgProjectile.h"
#endif
#define BORNE_SDmgProjectile_generated_h

#define FID_Borne_Source_Borne_Pawns_SDmgProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorOverlap);


#define FID_Borne_Source_Borne_Pawns_SDmgProjectile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASDmgProjectile(); \
	friend struct Z_Construct_UClass_ASDmgProjectile_Statics; \
public: \
	DECLARE_CLASS(ASDmgProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(ASDmgProjectile)


#define FID_Borne_Source_Borne_Pawns_SDmgProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASDmgProjectile(ASDmgProjectile&&); \
	ASDmgProjectile(const ASDmgProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDmgProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDmgProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASDmgProjectile) \
	NO_API virtual ~ASDmgProjectile();


#define FID_Borne_Source_Borne_Pawns_SDmgProjectile_h_15_PROLOG
#define FID_Borne_Source_Borne_Pawns_SDmgProjectile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_Pawns_SDmgProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Pawns_SDmgProjectile_h_18_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Pawns_SDmgProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class ASDmgProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_Pawns_SDmgProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
