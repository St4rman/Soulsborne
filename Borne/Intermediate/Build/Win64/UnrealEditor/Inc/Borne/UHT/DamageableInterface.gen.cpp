// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Interfaces/DamageableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageableInterface() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UDamageableInterface();
BORNE_API UClass* Z_Construct_UClass_UDamageableInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Interface UDamageableInterface Function DoPlayerDamage
struct DamageableInterface_eventDoPlayerDamage_Parms
{
	float IncomingDamage;
	UObject* Source;
};
void IDamageableInterface::DoPlayerDamage(const float IncomingDamage, UObject* Source)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DoPlayerDamage instead.");
}
static FName NAME_UDamageableInterface_DoPlayerDamage = FName(TEXT("DoPlayerDamage"));
void IDamageableInterface::Execute_DoPlayerDamage(UObject* O, const float IncomingDamage, UObject* Source)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageableInterface::StaticClass()));
	DamageableInterface_eventDoPlayerDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDamageableInterface_DoPlayerDamage);
	if (Func)
	{
		Parms.IncomingDamage=IncomingDamage;
		Parms.Source=Source;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDamageableInterface*)(O->GetNativeInterfaceAddress(UDamageableInterface::StaticClass())))
	{
		I->DoPlayerDamage_Implementation(IncomingDamage,Source);
	}
}
struct Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/DamageableInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IncomingDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::NewProp_IncomingDamage = { "IncomingDamage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageableInterface_eventDoPlayerDamage_Parms, IncomingDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingDamage_MetaData), NewProp_IncomingDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageableInterface_eventDoPlayerDamage_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::NewProp_IncomingDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageableInterface, nullptr, "DoPlayerDamage", nullptr, nullptr, Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::PropPointers), sizeof(DamageableInterface_eventDoPlayerDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(DamageableInterface_eventDoPlayerDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageableInterface::execDoPlayerDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_IncomingDamage);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoPlayerDamage_Implementation(Z_Param_IncomingDamage,Z_Param_Source);
	P_NATIVE_END;
}
// End Interface UDamageableInterface Function DoPlayerDamage

// Begin Interface UDamageableInterface
void UDamageableInterface::StaticRegisterNativesUDamageableInterface()
{
	UClass* Class = UDamageableInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoPlayerDamage", &IDamageableInterface::execDoPlayerDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageableInterface);
UClass* Z_Construct_UClass_UDamageableInterface_NoRegister()
{
	return UDamageableInterface::StaticClass();
}
struct Z_Construct_UClass_UDamageableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/DamageableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageableInterface_DoPlayerDamage, "DoPlayerDamage" }, // 384215460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageableInterface_Statics::ClassParams = {
	&UDamageableInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageableInterface()
{
	if (!Z_Registration_Info_UClass_UDamageableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageableInterface.OuterSingleton, Z_Construct_UClass_UDamageableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageableInterface.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UDamageableInterface>()
{
	return UDamageableInterface::StaticClass();
}
UDamageableInterface::UDamageableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageableInterface);
UDamageableInterface::~UDamageableInterface() {}
// End Interface UDamageableInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageableInterface, UDamageableInterface::StaticClass, TEXT("UDamageableInterface"), &Z_Registration_Info_UClass_UDamageableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageableInterface), 1242764880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_3821850231(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
