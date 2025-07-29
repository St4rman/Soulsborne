// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/Services/SStateCheckService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSStateCheckService() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
BORNE_API UClass* Z_Construct_UClass_USStateCheckService();
BORNE_API UClass* Z_Construct_UClass_USStateCheckService_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USStateCheckService
void USStateCheckService::StaticRegisterNativesUSStateCheckService()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USStateCheckService);
UClass* Z_Construct_UClass_USStateCheckService_NoRegister()
{
	return USStateCheckService::StaticClass();
}
struct Z_Construct_UClass_USStateCheckService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Services/SStateCheckService.h" },
		{ "ModuleRelativePath", "AI/Services/SStateCheckService.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Services/SStateCheckService.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeRange_MetaData[] = {
		{ "Category", "Ranges" },
		{ "ModuleRelativePath", "AI/Services/SStateCheckService.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumRange_MetaData[] = {
		{ "Category", "Ranges" },
		{ "ModuleRelativePath", "AI/Services/SStateCheckService.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencesKey_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "AI/Services/SStateCheckService.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReferencesKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USStateCheckService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USStateCheckService_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USStateCheckService, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardKey_MetaData), NewProp_BlackboardKey_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USStateCheckService_Statics::NewProp_MeleeRange = { "MeleeRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USStateCheckService, MeleeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeRange_MetaData), NewProp_MeleeRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USStateCheckService_Statics::NewProp_MediumRange = { "MediumRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USStateCheckService, MediumRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumRange_MetaData), NewProp_MediumRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USStateCheckService_Statics::NewProp_ReferencesKey = { "ReferencesKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USStateCheckService, ReferencesKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencesKey_MetaData), NewProp_ReferencesKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USStateCheckService_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USStateCheckService_Statics::NewProp_BlackboardKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USStateCheckService_Statics::NewProp_MeleeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USStateCheckService_Statics::NewProp_MediumRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USStateCheckService_Statics::NewProp_ReferencesKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USStateCheckService_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USStateCheckService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USStateCheckService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USStateCheckService_Statics::ClassParams = {
	&USStateCheckService::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USStateCheckService_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USStateCheckService_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USStateCheckService_Statics::Class_MetaDataParams), Z_Construct_UClass_USStateCheckService_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USStateCheckService()
{
	if (!Z_Registration_Info_UClass_USStateCheckService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USStateCheckService.OuterSingleton, Z_Construct_UClass_USStateCheckService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USStateCheckService.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USStateCheckService>()
{
	return USStateCheckService::StaticClass();
}
USStateCheckService::USStateCheckService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USStateCheckService);
USStateCheckService::~USStateCheckService() {}
// End Class USStateCheckService

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Services_SStateCheckService_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USStateCheckService, USStateCheckService::StaticClass, TEXT("USStateCheckService"), &Z_Registration_Info_UClass_USStateCheckService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USStateCheckService), 3263298717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Services_SStateCheckService_h_1385405346(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Services_SStateCheckService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Services_SStateCheckService_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
