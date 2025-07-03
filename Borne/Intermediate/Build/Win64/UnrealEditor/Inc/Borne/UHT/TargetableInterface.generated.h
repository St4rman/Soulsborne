// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/TargetableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BORNE_TargetableInterface_generated_h
#error "TargetableInterface.generated.h already included, missing '#pragma once' in TargetableInterface.h"
#endif
#define BORNE_TargetableInterface_generated_h

#define FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemoveSelfAsTarget_Implementation() {}; \
	virtual void SetSelfAsTarget_Implementation() {}; \
	DECLARE_FUNCTION(execRemoveSelfAsTarget); \
	DECLARE_FUNCTION(execSetSelfAsTarget);


#define FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_CALLBACK_WRAPPERS
#define FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTargetableInterface(UTargetableInterface&&); \
	UTargetableInterface(const UTargetableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetableInterface) \
	NO_API virtual ~UTargetableInterface();


#define FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTargetableInterface(); \
	friend struct Z_Construct_UClass_UTargetableInterface_Statics; \
public: \
	DECLARE_CLASS(UTargetableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Borne"), NO_API) \
	DECLARE_SERIALIZER(UTargetableInterface)


#define FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITargetableInterface() {} \
public: \
	typedef UTargetableInterface UClassType; \
	typedef ITargetableInterface ThisClass; \
	static void Execute_RemoveSelfAsTarget(UObject* O); \
	static void Execute_SetSelfAsTarget(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_10_PROLOG
#define FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_CALLBACK_WRAPPERS \
	FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BORNE_API UClass* StaticClass<class UTargetableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Borne_Source_Borne_Interfaces_TargetableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
