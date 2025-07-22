// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Interfaces/WeaponInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponInterface() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UWeaponInterface();
BORNE_API UClass* Z_Construct_UClass_UWeaponInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Interface UWeaponInterface Function OnWeaponDrop
void IWeaponInterface::OnWeaponDrop()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnWeaponDrop instead.");
}
static FName NAME_UWeaponInterface_OnWeaponDrop = FName(TEXT("OnWeaponDrop"));
void IWeaponInterface::Execute_OnWeaponDrop(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWeaponInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UWeaponInterface_OnWeaponDrop);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IWeaponInterface*)(O->GetNativeInterfaceAddress(UWeaponInterface::StaticClass())))
	{
		I->OnWeaponDrop_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponInterface_OnWeaponDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/WeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInterface_OnWeaponDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInterface, nullptr, "OnWeaponDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_OnWeaponDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInterface_OnWeaponDrop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponInterface_OnWeaponDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInterface_OnWeaponDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWeaponInterface::execOnWeaponDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponDrop_Implementation();
	P_NATIVE_END;
}
// End Interface UWeaponInterface Function OnWeaponDrop

// Begin Interface UWeaponInterface Function OnWeaponPickup
struct WeaponInterface_eventOnWeaponPickup_Parms
{
	AActor* ReferenceActor;
};
void IWeaponInterface::OnWeaponPickup(AActor* ReferenceActor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnWeaponPickup instead.");
}
static FName NAME_UWeaponInterface_OnWeaponPickup = FName(TEXT("OnWeaponPickup"));
void IWeaponInterface::Execute_OnWeaponPickup(UObject* O, AActor* ReferenceActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWeaponInterface::StaticClass()));
	WeaponInterface_eventOnWeaponPickup_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWeaponInterface_OnWeaponPickup);
	if (Func)
	{
		Parms.ReferenceActor=ReferenceActor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IWeaponInterface*)(O->GetNativeInterfaceAddress(UWeaponInterface::StaticClass())))
	{
		I->OnWeaponPickup_Implementation(ReferenceActor);
	}
}
struct Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/WeaponInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::NewProp_ReferenceActor = { "ReferenceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponInterface_eventOnWeaponPickup_Parms, ReferenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::NewProp_ReferenceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInterface, nullptr, "OnWeaponPickup", nullptr, nullptr, Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::PropPointers), sizeof(WeaponInterface_eventOnWeaponPickup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponInterface_eventOnWeaponPickup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWeaponInterface::execOnWeaponPickup)
{
	P_GET_OBJECT(AActor,Z_Param_ReferenceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponPickup_Implementation(Z_Param_ReferenceActor);
	P_NATIVE_END;
}
// End Interface UWeaponInterface Function OnWeaponPickup

// Begin Interface UWeaponInterface
void UWeaponInterface::StaticRegisterNativesUWeaponInterface()
{
	UClass* Class = UWeaponInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnWeaponDrop", &IWeaponInterface::execOnWeaponDrop },
		{ "OnWeaponPickup", &IWeaponInterface::execOnWeaponPickup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponInterface);
UClass* Z_Construct_UClass_UWeaponInterface_NoRegister()
{
	return UWeaponInterface::StaticClass();
}
struct Z_Construct_UClass_UWeaponInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/WeaponInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponInterface_OnWeaponDrop, "OnWeaponDrop" }, // 4149173292
		{ &Z_Construct_UFunction_UWeaponInterface_OnWeaponPickup, "OnWeaponPickup" }, // 1398360018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWeaponInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeaponInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponInterface_Statics::ClassParams = {
	&UWeaponInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponInterface()
{
	if (!Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton, Z_Construct_UClass_UWeaponInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UWeaponInterface>()
{
	return UWeaponInterface::StaticClass();
}
UWeaponInterface::UWeaponInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponInterface);
UWeaponInterface::~UWeaponInterface() {}
// End Interface UWeaponInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponInterface, UWeaponInterface::StaticClass, TEXT("UWeaponInterface"), &Z_Registration_Info_UClass_UWeaponInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponInterface), 2173716592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_1974699939(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_WeaponInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
