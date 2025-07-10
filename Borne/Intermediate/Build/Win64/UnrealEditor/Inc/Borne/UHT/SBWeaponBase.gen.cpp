// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Weapons/SBWeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBWeaponBase() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_ASBWeaponBase();
BORNE_API UClass* Z_Construct_UClass_ASBWeaponBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ASBWeaponBase
void ASBWeaponBase::StaticRegisterNativesASBWeaponBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASBWeaponBase);
UClass* Z_Construct_UClass_ASBWeaponBase_NoRegister()
{
	return ASBWeaponBase::StaticClass();
}
struct Z_Construct_UClass_ASBWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/SBWeaponBase.h" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAttackAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Anim Montage" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Anim Montage" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargedDmg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightStaminaCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyStaminaCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightAttackAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargedDmg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightStaminaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeavyStaminaCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightAttackAnim = { "LightAttackAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, LightAttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAttackAnim_MetaData), NewProp_LightAttackAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_HeavyAttackAnim = { "HeavyAttackAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, HeavyAttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyAttackAnim_MetaData), NewProp_HeavyAttackAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightDamage = { "LightDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, LightDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightDamage_MetaData), NewProp_LightDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_ChargedDmg = { "ChargedDmg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, ChargedDmg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargedDmg_MetaData), NewProp_ChargedDmg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightStaminaCost = { "LightStaminaCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, LightStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightStaminaCost_MetaData), NewProp_LightStaminaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_HeavyStaminaCost = { "HeavyStaminaCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, HeavyStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyStaminaCost_MetaData), NewProp_HeavyStaminaCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightAttackAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_HeavyAttackAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_ChargedDmg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_HeavyStaminaCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASBWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASBWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASBWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASBWeaponBase_Statics::ClassParams = {
	&ASBWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASBWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASBWeaponBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASBWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASBWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASBWeaponBase()
{
	if (!Z_Registration_Info_UClass_ASBWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASBWeaponBase.OuterSingleton, Z_Construct_UClass_ASBWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASBWeaponBase.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ASBWeaponBase>()
{
	return ASBWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASBWeaponBase);
ASBWeaponBase::~ASBWeaponBase() {}
// End Class ASBWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASBWeaponBase, ASBWeaponBase::StaticClass, TEXT("ASBWeaponBase"), &Z_Registration_Info_UClass_ASBWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASBWeaponBase), 2628712464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_120066729(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
