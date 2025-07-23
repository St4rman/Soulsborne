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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulsAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ASoulsAIController, ASoulsAIController::StaticClass, TEXT("ASoulsAIController"), &Z_Registration_Info_UClass_ASoulsAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoulsAIController), 2593459950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAIController_h_4092423777(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
