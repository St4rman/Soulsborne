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
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Interface UDamageableInterface Function DoDamageFeedback
void IDamageableInterface::DoDamageFeedback()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DoDamageFeedback instead.");
}
static FName NAME_UDamageableInterface_DoDamageFeedback = FName(TEXT("DoDamageFeedback"));
void IDamageableInterface::Execute_DoDamageFeedback(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageableInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDamageableInterface_DoDamageFeedback);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDamageableInterface*)(O->GetNativeInterfaceAddress(UDamageableInterface::StaticClass())))
	{
		I->DoDamageFeedback_Implementation();
	}
}
struct Z_Construct_UFunction_UDamageableInterface_DoDamageFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/DamageableInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageableInterface_DoDamageFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageableInterface, nullptr, "DoDamageFeedback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageableInterface_DoDamageFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageableInterface_DoDamageFeedback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDamageableInterface_DoDamageFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageableInterface_DoDamageFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageableInterface::execDoDamageFeedback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoDamageFeedback_Implementation();
	P_NATIVE_END;
}
// End Interface UDamageableInterface Function DoDamageFeedback

// Begin Interface UDamageableInterface
void UDamageableInterface::StaticRegisterNativesUDamageableInterface()
{
	UClass* Class = UDamageableInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoDamageFeedback", &IDamageableInterface::execDoDamageFeedback },
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
		{ &Z_Construct_UFunction_UDamageableInterface_DoDamageFeedback, "DoDamageFeedback" }, // 591063445
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
		{ Z_Construct_UClass_UDamageableInterface, UDamageableInterface::StaticClass, TEXT("UDamageableInterface"), &Z_Registration_Info_UClass_UDamageableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageableInterface), 961404820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_2875056781(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_DamageableInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
