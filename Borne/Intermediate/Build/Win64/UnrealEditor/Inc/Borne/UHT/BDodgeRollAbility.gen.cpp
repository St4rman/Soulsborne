// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/Abilities/Active/BDodgeRollAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBDodgeRollAbility() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UBDodgeRollAbility();
BORNE_API UClass* Z_Construct_UClass_UBDodgeRollAbility_NoRegister();
BORNE_API UClass* Z_Construct_UClass_USoulGameplayAbility();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UBDodgeRollAbility
void UBDodgeRollAbility::StaticRegisterNativesUBDodgeRollAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBDodgeRollAbility);
UClass* Z_Construct_UClass_UBDodgeRollAbility_NoRegister()
{
	return UBDodgeRollAbility::StaticClass();
}
struct Z_Construct_UClass_UBDodgeRollAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/Active/BDodgeRollAbility.h" },
		{ "ModuleRelativePath", "GAS/Abilities/Active/BDodgeRollAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontages_MetaData[] = {
		{ "Category", "DodgeAbility" },
		{ "ModuleRelativePath", "GAS/Abilities/Active/BDodgeRollAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToGive_MetaData[] = {
		{ "Category", "DodgeAbility" },
		{ "ModuleRelativePath", "GAS/Abilities/Active/BDodgeRollAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardDashMontage_MetaData[] = {
		{ "Category", "DodgeAbility" },
		{ "ModuleRelativePath", "GAS/Abilities/Active/BDodgeRollAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimMontages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToGive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardDashMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBDodgeRollAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBDodgeRollAbility_Statics::NewProp_AnimMontages_Inner = { "AnimMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBDodgeRollAbility_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBDodgeRollAbility, AnimMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontages_MetaData), NewProp_AnimMontages_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBDodgeRollAbility_Statics::NewProp_TagsToGive = { "TagsToGive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBDodgeRollAbility, TagsToGive), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToGive_MetaData), NewProp_TagsToGive_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBDodgeRollAbility_Statics::NewProp_ForwardDashMontage = { "ForwardDashMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBDodgeRollAbility, ForwardDashMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardDashMontage_MetaData), NewProp_ForwardDashMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBDodgeRollAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDodgeRollAbility_Statics::NewProp_AnimMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDodgeRollAbility_Statics::NewProp_AnimMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDodgeRollAbility_Statics::NewProp_TagsToGive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBDodgeRollAbility_Statics::NewProp_ForwardDashMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDodgeRollAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBDodgeRollAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoulGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBDodgeRollAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBDodgeRollAbility_Statics::ClassParams = {
	&UBDodgeRollAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBDodgeRollAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBDodgeRollAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBDodgeRollAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBDodgeRollAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBDodgeRollAbility()
{
	if (!Z_Registration_Info_UClass_UBDodgeRollAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBDodgeRollAbility.OuterSingleton, Z_Construct_UClass_UBDodgeRollAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBDodgeRollAbility.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UBDodgeRollAbility>()
{
	return UBDodgeRollAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBDodgeRollAbility);
UBDodgeRollAbility::~UBDodgeRollAbility() {}
// End Class UBDodgeRollAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_BDodgeRollAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBDodgeRollAbility, UBDodgeRollAbility::StaticClass, TEXT("UBDodgeRollAbility"), &Z_Registration_Info_UClass_UBDodgeRollAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBDodgeRollAbility), 1836866931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_BDodgeRollAbility_h_2914725808(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_BDodgeRollAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Active_BDodgeRollAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
