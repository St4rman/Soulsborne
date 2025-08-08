// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Pawns/TargetableEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetableEnemy() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_ATargetableEnemy();
BORNE_API UClass* Z_Construct_UClass_ATargetableEnemy_NoRegister();
BORNE_API UClass* Z_Construct_UClass_UTargetableInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ATargetableEnemy Function DoDamageTaken
struct TargetableEnemy_eventDoDamageTaken_Parms
{
	float IncomingDamage;
};
static const FName NAME_ATargetableEnemy_DoDamageTaken = FName(TEXT("DoDamageTaken"));
void ATargetableEnemy::DoDamageTaken(float IncomingDamage)
{
	UFunction* Func = FindFunctionChecked(NAME_ATargetableEnemy_DoDamageTaken);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		TargetableEnemy_eventDoDamageTaken_Parms Parms;
		Parms.IncomingDamage=IncomingDamage;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DoDamageTaken_Implementation(IncomingDamage);
	}
}
struct Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pawns/TargetableEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IncomingDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::NewProp_IncomingDamage = { "IncomingDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableEnemy_eventDoDamageTaken_Parms, IncomingDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::NewProp_IncomingDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetableEnemy, nullptr, "DoDamageTaken", nullptr, nullptr, Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::PropPointers), sizeof(TargetableEnemy_eventDoDamageTaken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::Function_MetaDataParams) };
static_assert(sizeof(TargetableEnemy_eventDoDamageTaken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATargetableEnemy::execDoDamageTaken)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_IncomingDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoDamageTaken_Implementation(Z_Param_IncomingDamage);
	P_NATIVE_END;
}
// End Class ATargetableEnemy Function DoDamageTaken

// Begin Class ATargetableEnemy
void ATargetableEnemy::StaticRegisterNativesATargetableEnemy()
{
	UClass* Class = ATargetableEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoDamageTaken", &ATargetableEnemy::execDoDamageTaken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetableEnemy);
UClass* Z_Construct_UClass_ATargetableEnemy_NoRegister()
{
	return ATargetableEnemy::StaticClass();
}
struct Z_Construct_UClass_ATargetableEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/TargetableEnemy.h" },
		{ "ModuleRelativePath", "Pawns/TargetableEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTargeted_MetaData[] = {
		{ "Category", "TargetableEnemy" },
		{ "ModuleRelativePath", "Pawns/TargetableEnemy.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTargeted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetableEnemy_DoDamageTaken, "DoDamageTaken" }, // 3908539315
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetableEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ATargetableEnemy_Statics::NewProp_IsTargeted_SetBit(void* Obj)
{
	((ATargetableEnemy*)Obj)->IsTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATargetableEnemy_Statics::NewProp_IsTargeted = { "IsTargeted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATargetableEnemy), &Z_Construct_UClass_ATargetableEnemy_Statics::NewProp_IsTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTargeted_MetaData), NewProp_IsTargeted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetableEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetableEnemy_Statics::NewProp_IsTargeted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATargetableEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATargetableEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTargetableInterface_NoRegister, (int32)VTABLE_OFFSET(ATargetableEnemy, ITargetableInterface), false },  // 3318039286
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetableEnemy_Statics::ClassParams = {
	&ATargetableEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATargetableEnemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetableEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATargetableEnemy()
{
	if (!Z_Registration_Info_UClass_ATargetableEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetableEnemy.OuterSingleton, Z_Construct_UClass_ATargetableEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATargetableEnemy.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ATargetableEnemy>()
{
	return ATargetableEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetableEnemy);
ATargetableEnemy::~ATargetableEnemy() {}
// End Class ATargetableEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATargetableEnemy, ATargetableEnemy::StaticClass, TEXT("ATargetableEnemy"), &Z_Registration_Info_UClass_ATargetableEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetableEnemy), 32453869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_1853968274(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
