// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Core/HelperBPLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelperBPLib() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UHelperBPLib();
BORNE_API UClass* Z_Construct_UClass_UHelperBPLib_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UHelperBPLib Function PlayImportantAnimMontage
struct Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics
{
	struct HelperBPLib_eventPlayImportantAnimMontage_Parms
	{
		ACharacter* SourceChar;
		UAnimMontage* MontageToPlay;
		float InPlayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HelperBPLib" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "ModuleRelativePath", "Core/HelperBPLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceChar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::NewProp_SourceChar = { "SourceChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperBPLib_eventPlayImportantAnimMontage_Parms, SourceChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperBPLib_eventPlayImportantAnimMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelperBPLib_eventPlayImportantAnimMontage_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::NewProp_SourceChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::NewProp_InPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHelperBPLib, nullptr, "PlayImportantAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::HelperBPLib_eventPlayImportantAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::HelperBPLib_eventPlayImportantAnimMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelperBPLib::execPlayImportantAnimMontage)
{
	P_GET_OBJECT(ACharacter,Z_Param_SourceChar);
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHelperBPLib::PlayImportantAnimMontage(Z_Param_SourceChar,Z_Param_MontageToPlay,Z_Param_InPlayRate);
	P_NATIVE_END;
}
// End Class UHelperBPLib Function PlayImportantAnimMontage

// Begin Class UHelperBPLib
void UHelperBPLib::StaticRegisterNativesUHelperBPLib()
{
	UClass* Class = UHelperBPLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayImportantAnimMontage", &UHelperBPLib::execPlayImportantAnimMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHelperBPLib);
UClass* Z_Construct_UClass_UHelperBPLib_NoRegister()
{
	return UHelperBPLib::StaticClass();
}
struct Z_Construct_UClass_UHelperBPLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/HelperBPLib.h" },
		{ "ModuleRelativePath", "Core/HelperBPLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHelperBPLib_PlayImportantAnimMontage, "PlayImportantAnimMontage" }, // 2388554092
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHelperBPLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHelperBPLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHelperBPLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHelperBPLib_Statics::ClassParams = {
	&UHelperBPLib::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHelperBPLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UHelperBPLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHelperBPLib()
{
	if (!Z_Registration_Info_UClass_UHelperBPLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHelperBPLib.OuterSingleton, Z_Construct_UClass_UHelperBPLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHelperBPLib.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UHelperBPLib>()
{
	return UHelperBPLib::StaticClass();
}
UHelperBPLib::UHelperBPLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHelperBPLib);
UHelperBPLib::~UHelperBPLib() {}
// End Class UHelperBPLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Core_HelperBPLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHelperBPLib, UHelperBPLib::StaticClass, TEXT("UHelperBPLib"), &Z_Registration_Info_UClass_UHelperBPLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHelperBPLib), 824361192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Core_HelperBPLib_h_3720209402(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Core_HelperBPLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Core_HelperBPLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
