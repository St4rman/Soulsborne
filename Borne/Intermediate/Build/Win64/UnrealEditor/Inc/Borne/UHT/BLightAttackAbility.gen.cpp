// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/Abilities/Active/Attack/BLightAttackAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBLightAttackAbility() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UBLightAttackAbility();
BORNE_API UClass* Z_Construct_UClass_UBLightAttackAbility_NoRegister();
BORNE_API UClass* Z_Construct_UClass_USoulGameplayAbility();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UBLightAttackAbility
void UBLightAttackAbility::StaticRegisterNativesUBLightAttackAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBLightAttackAbility);
UClass* Z_Construct_UClass_UBLightAttackAbility_NoRegister()
{
	return UBLightAttackAbility::StaticClass();
}
struct Z_Construct_UClass_UBLightAttackAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/Active/Attack/BLightAttackAbility.h" },
		{ "ModuleRelativePath", "GAS/Abilities/Active/Attack/BLightAttackAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBLightAttackAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBLightAttackAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoulGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBLightAttackAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBLightAttackAbility_Statics::ClassParams = {
	&UBLightAttackAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBLightAttackAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBLightAttackAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBLightAttackAbility()
{
	if (!Z_Registration_Info_UClass_UBLightAttackAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBLightAttackAbility.OuterSingleton, Z_Construct_UClass_UBLightAttackAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBLightAttackAbility.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UBLightAttackAbility>()
{
	return UBLightAttackAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBLightAttackAbility);
UBLightAttackAbility::~UBLightAttackAbility() {}
// End Class UBLightAttackAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Attack_BLightAttackAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBLightAttackAbility, UBLightAttackAbility::StaticClass, TEXT("UBLightAttackAbility"), &Z_Registration_Info_UClass_UBLightAttackAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBLightAttackAbility), 55981914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Attack_BLightAttackAbility_h_2320415284(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Attack_BLightAttackAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Attack_BLightAttackAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
