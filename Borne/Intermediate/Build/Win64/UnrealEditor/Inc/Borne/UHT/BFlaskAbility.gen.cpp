// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/Abilities/Active/Flask/BFlaskAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBFlaskAbility() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UBFlaskAbility();
BORNE_API UClass* Z_Construct_UClass_UBFlaskAbility_NoRegister();
BORNE_API UClass* Z_Construct_UClass_USoulGameplayAbility();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UBFlaskAbility
void UBFlaskAbility::StaticRegisterNativesUBFlaskAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBFlaskAbility);
UClass* Z_Construct_UClass_UBFlaskAbility_NoRegister()
{
	return UBFlaskAbility::StaticClass();
}
struct Z_Construct_UClass_UBFlaskAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/Active/Flask/BFlaskAbility.h" },
		{ "ModuleRelativePath", "GAS/Abilities/Active/Flask/BFlaskAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBFlaskAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBFlaskAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoulGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBFlaskAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBFlaskAbility_Statics::ClassParams = {
	&UBFlaskAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBFlaskAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBFlaskAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBFlaskAbility()
{
	if (!Z_Registration_Info_UClass_UBFlaskAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBFlaskAbility.OuterSingleton, Z_Construct_UClass_UBFlaskAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBFlaskAbility.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UBFlaskAbility>()
{
	return UBFlaskAbility::StaticClass();
}
UBFlaskAbility::UBFlaskAbility() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBFlaskAbility);
UBFlaskAbility::~UBFlaskAbility() {}
// End Class UBFlaskAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBFlaskAbility, UBFlaskAbility::StaticClass, TEXT("UBFlaskAbility"), &Z_Registration_Info_UClass_UBFlaskAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBFlaskAbility), 254958183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_3500393607(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Flask_BFlaskAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
