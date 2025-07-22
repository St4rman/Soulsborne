// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/SBWeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UTexture2D;
#ifdef BORNE_SBWeaponBase_generated_h
#error "SBWeaponBase.generated.h already included, missing '#pragma once' in SBWeaponBase.h"
#endif
#define BORNE_SBWeaponBase_generated_h

#define FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopFloating_Implementation(); \
	DECLARE_FUNCTION(execStopFloating); \
	DECLARE_FUNCTION(execIsWeaponEquipped); \
	DECLARE_FUNCTION(execOnWeaponDrop_Implementation); \
	DECLARE_FUNCTION(execOnWeaponPickup_Implementation); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetLightAnim);


#define FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_CALLBACK_WRAPPERS
#define FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBWeaponBase(); \
	friend struct Z_Construct_UClass_ASBWeaponBase_Statics; \
public: \
	DECLARE_CLASS(ASBWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(ASBWeaponBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASBWeaponBase*>(this); }


#define FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASBWeaponBase(ASBWeaponBase&&); \
	ASBWeaponBase(const ASBWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASBWeaponBase) \
	NO_API virtual ~ASBWeaponBase();


#define FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_11_PROLOG
#define FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_CALLBACK_WRAPPERS \
	FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class ASBWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_Weapons_SBWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
