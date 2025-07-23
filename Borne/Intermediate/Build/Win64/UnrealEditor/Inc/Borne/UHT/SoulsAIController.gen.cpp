// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/SoulsAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulsAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
BORNE_API UClass* Z_Construct_UClass_ASoulsAIController();
BORNE_API UClass* Z_Construct_UClass_ASoulsAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ASoulsAIController
void ASoulsAIController::StaticRegisterNativesASoulsAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoulsAIController);
UClass* Z_Construct_UClass_ASoulsAIController_NoRegister()
{
	return ASoulsAIController::StaticClass();
}
struct Z_Construct_UClass_ASoulsAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/SoulsAIController.h" },
		{ "ModuleRelativePath", "AI/SoulsAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainBehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/SoulsAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainBehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulsAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulsAIController_Statics::NewProp_MainBehaviorTree = { "MainBehaviorTree", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsAIController, MainBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainBehaviorTree_MetaData), NewProp_MainBehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoulsAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAIController_Statics::NewProp_MainBehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoulsAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoulsAIController_Statics::ClassParams = {
	&ASoulsAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASoulsAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoulsAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoulsAIController()
{
	if (!Z_Registration_Info_UClass_ASoulsAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoulsAIController.OuterSingleton, Z_Construct_UClass_ASoulsAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoulsAIController.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ASoulsAIController>()
{
	return ASoulsAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoulsAIController);
ASoulsAIController::~ASoulsAIController() {}
// End Class ASoulsAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoulsAIController, ASoulsAIController::StaticClass, TEXT("ASoulsAIController"), &Z_Registration_Info_UClass_ASoulsAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoulsAIController), 1743490415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAIController_h_3648284025(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
