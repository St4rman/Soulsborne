// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/WeaponInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BORNE_WeaponInterface_generated_h
#error "WeaponInterface.generated.h already included, missing '#pragma once' in WeaponInterface.h"
#endif
#define BORNE_WeaponInterface_generated_h

#define FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnWeaponDrop_Implementation() {}; \
	virtual void OnWeaponPickup_Implementation(AActor* ReferenceActor) {}; \
	DECLARE_FUNCTION(execOnWeaponDrop); \
	DECLARE_FUNCTION(execOnWeaponPickup);


#define FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_CALLBACK_WRAPPERS
#define FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponInterface(UWeaponInterface&&); \
	UWeaponInterface(const UWeaponInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponInterface) \
	NO_API virtual ~UWeaponInterface();


#define FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWeaponInterface(); \
	friend struct Z_Construct_UClass_UWeaponInterface_Statics; \
public: \
	DECLARE_CLASS(UWeaponInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UWeaponInterface)


#define FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWeaponInterface() {} \
public: \
	typedef UWeaponInterface UClassType; \
	typedef IWeaponInterface ThisClass; \
	static void Execute_OnWeaponDrop(UObject* O); \
	static void Execute_OnWeaponPickup(UObject* O, AActor* ReferenceActor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_10_PROLOG
#define FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_CALLBACK_WRAPPERS \
	FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UWeaponInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_Interfaces_WeaponInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
