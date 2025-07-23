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
BORNE_API UClass* Z_Construct_UClass_ASoulsAICharacter();
BORNE_API UClass* Z_Construct_UClass_ASoulsAICharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ASoulsAICharacter
void ASoulsAICharacter::StaticRegisterNativesASoulsAICharacter()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulsAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASoulsAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoulsAICharacter_Statics::ClassParams = {
	&ASoulsAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
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
		{ Z_Construct_UClass_ASoulsAICharacter, ASoulsAICharacter::StaticClass, TEXT("ASoulsAICharacter"), &Z_Registration_Info_UClass_ASoulsAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoulsAICharacter), 1882250848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_3887880857(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
