// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/Abilities/Active/Attack/BLightAttackAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBLightAttackAbility() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UBLightAttackAbility();
BORNE_API UClass* Z_Construct_UClass_UBLightAttackAbility_NoRegister();
BORNE_API UClass* Z_Construct_UClass_USoulGameplayAbility();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoWeaponAnimMontage_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "GAS/Abilities/Active/Attack/BLightAttackAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackingTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "GAS/Abilities/Active/Attack/BLightAttackAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoWeaponAnimMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackingTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBLightAttackAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBLightAttackAbility_Statics::NewProp_NoWeaponAnimMontage = { "NoWeaponAnimMontage", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBLightAttackAbility, NoWeaponAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoWeaponAnimMontage_MetaData), NewProp_NoWeaponAnimMontage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBLightAttackAbility_Statics::NewProp_AttackingTags = { "AttackingTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBLightAttackAbility, AttackingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackingTags_MetaData), NewProp_AttackingTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBLightAttackAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBLightAttackAbility_Statics::NewProp_NoWeaponAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBLightAttackAbility_Statics::NewProp_AttackingTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBLightAttackAbility_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UBLightAttackAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBLightAttackAbility_Statics::PropPointers),
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
		{ Z_Construct_UClass_UBLightAttackAbility, UBLightAttackAbility::StaticClass, TEXT("UBLightAttackAbility"), &Z_Registration_Info_UClass_UBLightAttackAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBLightAttackAbility), 480284859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Attack_BLightAttackAbility_h_3529581553(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Attack_BLightAttackAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_Attack_BLightAttackAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
