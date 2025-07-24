// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DamageableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_DamageableInterface_generated_h
#error "DamageableInterface.generated.h already included, missing '#pragma once' in DamageableInterface.h"
#endif
#define BORNE_DamageableInterface_generated_h

#define FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DoDamageFeedback_Implementation() {}; \
	DECLARE_FUNCTION(execDoDamageFeedback);


#define FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_CALLBACK_WRAPPERS
#define FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDamageableInterface(UDamageableInterface&&); \
	UDamageableInterface(const UDamageableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageableInterface) \
	NO_API virtual ~UDamageableInterface();


#define FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageableInterface(); \
	friend struct Z_Construct_UClass_UDamageableInterface_Statics; \
public: \
	DECLARE_CLASS(UDamageableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UDamageableInterface)


#define FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageableInterface() {} \
public: \
	typedef UDamageableInterface UClassType; \
	typedef IDamageableInterface ThisClass; \
	static void Execute_DoDamageFeedback(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_10_PROLOG
#define FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_CALLBACK_WRAPPERS \
	FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UDamageableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_Interfaces_DamageableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
