// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/SoulsAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulsAICharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
BORNE_API UClass* Z_Construct_UClass_ASBWeaponBase_NoRegister();
BORNE_API UClass* Z_Construct_UClass_ASoulsAICharacter();
BORNE_API UClass* Z_Construct_UClass_ASoulsAICharacter_NoRegister();
BORNE_API UClass* Z_Construct_UClass_UTargetableInterface_NoRegister();
BORNE_API UEnum* Z_Construct_UEnum_Borne_ELocomotionMode();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ASoulsAICharacter Function OnPawnSeen
struct Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics
{
	struct SoulsAICharacter_eventOnPawnSeen_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoulsAICharacter_eventOnPawnSeen_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoulsAICharacter, nullptr, "OnPawnSeen", nullptr, nullptr, Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::SoulsAICharacter_eventOnPawnSeen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::SoulsAICharacter_eventOnPawnSeen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASoulsAICharacter::execOnPawnSeen)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnSeen(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class ASoulsAICharacter Function OnPawnSeen

// Begin Class ASoulsAICharacter Function UpdateHealth
static const FName NAME_ASoulsAICharacter_UpdateHealth = FName(TEXT("UpdateHealth"));
void ASoulsAICharacter::UpdateHealth()
{
	UFunction* Func = FindFunctionChecked(NAME_ASoulsAICharacter_UpdateHealth);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASoulsAICharacter_UpdateHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoulsAICharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoulsAICharacter, nullptr, "UpdateHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulsAICharacter_UpdateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASoulsAICharacter_UpdateHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASoulsAICharacter_UpdateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASoulsAICharacter_UpdateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ASoulsAICharacter Function UpdateHealth

// Begin Class ASoulsAICharacter
void ASoulsAICharacter::StaticRegisterNativesASoulsAICharacter()
{
	UClass* Class = ASoulsAICharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPawnSeen", &ASoulsAICharacter::execOnPawnSeen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoulsAICharacter);
UClass* Z_Construct_UClass_ASoulsAICharacter_NoRegister()
{
	return ASoulsAICharacter::StaticClass();
}
struct Z_Construct_UClass_ASoulsAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/SoulsAICharacter.h" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnWidget_MetaData[] = {
		{ "Category", "SoulsAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBase_MetaData[] = {
		{ "Category", "WeaponBase Class" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "SoulsAICharacter" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLocomotionMode_MetaData[] = {
		{ "Category", "SoulsAICharacter" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTargeted_MetaData[] = {
		{ "Category", "SoulsAICharacter" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponBase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentLocomotionMode;
	static void NewProp_IsTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTargeted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASoulsAICharacter_OnPawnSeen, "OnPawnSeen" }, // 3017015962
		{ &Z_Construct_UFunction_ASoulsAICharacter_UpdateHealth, "UpdateHealth" }, // 21523966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulsAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsAICharacter, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData), NewProp_PawnSensingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_LockOnWidget = { "LockOnWidget", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsAICharacter, LockOnWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnWidget_MetaData), NewProp_LockOnWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_WeaponBase = { "WeaponBase", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsAICharacter, WeaponBase), Z_Construct_UClass_UClass, Z_Construct_UClass_ASBWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBase_MetaData), NewProp_WeaponBase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsAICharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsAICharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_CurrentLocomotionMode = { "CurrentLocomotionMode", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsAICharacter, CurrentLocomotionMode), Z_Construct_UEnum_Borne_ELocomotionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLocomotionMode_MetaData), NewProp_CurrentLocomotionMode_MetaData) }; // 2571520345
void Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_IsTargeted_SetBit(void* Obj)
{
	((ASoulsAICharacter*)Obj)->IsTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_IsTargeted = { "IsTargeted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASoulsAICharacter), &Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_IsTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTargeted_MetaData), NewProp_IsTargeted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoulsAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_PawnSensingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_LockOnWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_WeaponBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_CurrentLocomotionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_IsTargeted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoulsAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASoulsAICharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTargetableInterface_NoRegister, (int32)VTABLE_OFFSET(ASoulsAICharacter, ITargetableInterface), false },  // 3318039286
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoulsAICharacter_Statics::ClassParams = {
	&ASoulsAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASoulsAICharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoulsAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoulsAICharacter()
{
	if (!Z_Registration_Info_UClass_ASoulsAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoulsAICharacter.OuterSingleton, Z_Construct_UClass_ASoulsAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoulsAICharacter.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ASoulsAICharacter>()
{
	return ASoulsAICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoulsAICharacter);
ASoulsAICharacter::~ASoulsAICharacter() {}
// End Class ASoulsAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoulsAICharacter, ASoulsAICharacter::StaticClass, TEXT("ASoulsAICharacter"), &Z_Registration_Info_UClass_ASoulsAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoulsAICharacter), 3397869581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_4084508199(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
