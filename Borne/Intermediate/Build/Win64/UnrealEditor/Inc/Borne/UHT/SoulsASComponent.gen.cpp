// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/SoulsASComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulsASComponent() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_USoulsASComponent();
BORNE_API UClass* Z_Construct_UClass_USoulsASComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USoulsASComponent
void USoulsASComponent::StaticRegisterNativesUSoulsASComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoulsASComponent);
UClass* Z_Construct_UClass_USoulsASComponent_NoRegister()
{
	return USoulsASComponent::StaticClass();
}
struct Z_Construct_UClass_USoulsASComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GAS/SoulsASComponent.h" },
		{ "ModuleRelativePath", "GAS/SoulsASComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoulsASComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoulsASComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoulsASComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoulsASComponent_Statics::ClassParams = {
	&USoulsASComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoulsASComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USoulsASComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoulsASComponent()
{
	if (!Z_Registration_Info_UClass_USoulsASComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoulsASComponent.OuterSingleton, Z_Construct_UClass_USoulsASComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoulsASComponent.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USoulsASComponent>()
{
	return USoulsASComponent::StaticClass();
}
USoulsASComponent::USoulsASComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoulsASComponent);
USoulsASComponent::~USoulsASComponent() {}
// End Class USoulsASComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_SoulsASComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoulsASComponent, USoulsASComponent::StaticClass, TEXT("USoulsASComponent"), &Z_Registration_Info_UClass_USoulsASComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoulsASComponent), 1757335740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_SoulsASComponent_h_1297470410(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_SoulsASComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_SoulsASComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
