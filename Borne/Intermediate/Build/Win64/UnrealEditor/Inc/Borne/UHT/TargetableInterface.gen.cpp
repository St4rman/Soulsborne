// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Interfaces/TargetableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetableInterface() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UTargetableInterface();
BORNE_API UClass* Z_Construct_UClass_UTargetableInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Interface UTargetableInterface Function RemoveSelfAsTarget
void ITargetableInterface::RemoveSelfAsTarget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveSelfAsTarget instead.");
}
static FName NAME_UTargetableInterface_RemoveSelfAsTarget = FName(TEXT("RemoveSelfAsTarget"));
void ITargetableInterface::Execute_RemoveSelfAsTarget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_RemoveSelfAsTarget);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		I->RemoveSelfAsTarget_Implementation();
	}
}
struct Z_Construct_UFunction_UTargetableInterface_RemoveSelfAsTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/TargetableInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_RemoveSelfAsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "RemoveSelfAsTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_RemoveSelfAsTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_RemoveSelfAsTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTargetableInterface_RemoveSelfAsTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_RemoveSelfAsTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execRemoveSelfAsTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSelfAsTarget_Implementation();
	P_NATIVE_END;
}
// End Interface UTargetableInterface Function RemoveSelfAsTarget

// Begin Interface UTargetableInterface Function SetSelfAsTarget
void ITargetableInterface::SetSelfAsTarget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSelfAsTarget instead.");
}
static FName NAME_UTargetableInterface_SetSelfAsTarget = FName(TEXT("SetSelfAsTarget"));
void ITargetableInterface::Execute_SetSelfAsTarget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UTargetableInterface_SetSelfAsTarget);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ITargetableInterface*)(O->GetNativeInterfaceAddress(UTargetableInterface::StaticClass())))
	{
		I->SetSelfAsTarget_Implementation();
	}
}
struct Z_Construct_UFunction_UTargetableInterface_SetSelfAsTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/TargetableInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetableInterface_SetSelfAsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetableInterface, nullptr, "SetSelfAsTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetableInterface_SetSelfAsTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetableInterface_SetSelfAsTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTargetableInterface_SetSelfAsTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetableInterface_SetSelfAsTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITargetableInterface::execSetSelfAsTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelfAsTarget_Implementation();
	P_NATIVE_END;
}
// End Interface UTargetableInterface Function SetSelfAsTarget

// Begin Interface UTargetableInterface
void UTargetableInterface::StaticRegisterNativesUTargetableInterface()
{
	UClass* Class = UTargetableInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveSelfAsTarget", &ITargetableInterface::execRemoveSelfAsTarget },
		{ "SetSelfAsTarget", &ITargetableInterface::execSetSelfAsTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetableInterface);
UClass* Z_Construct_UClass_UTargetableInterface_NoRegister()
{
	return UTargetableInterface::StaticClass();
}
struct Z_Construct_UClass_UTargetableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/TargetableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetableInterface_RemoveSelfAsTarget, "RemoveSelfAsTarget" }, // 222203329
		{ &Z_Construct_UFunction_UTargetableInterface_SetSelfAsTarget, "SetSelfAsTarget" }, // 2582658099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTargetableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetableInterface_Statics::ClassParams = {
	&UTargetableInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetableInterface()
{
	if (!Z_Registration_Info_UClass_UTargetableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetableInterface.OuterSingleton, Z_Construct_UClass_UTargetableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetableInterface.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UTargetableInterface>()
{
	return UTargetableInterface::StaticClass();
}
UTargetableInterface::UTargetableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetableInterface);
UTargetableInterface::~UTargetableInterface() {}
// End Interface UTargetableInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetableInterface, UTargetableInterface::StaticClass, TEXT("UTargetableInterface"), &Z_Registration_Info_UClass_UTargetableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetableInterface), 3318039286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_974878628(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Interfaces_TargetableInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
