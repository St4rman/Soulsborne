// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/Abilities/SoulGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulGameplayAbility() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_USoulGameplayAbility();
BORNE_API UClass* Z_Construct_UClass_USoulGameplayAbility_NoRegister();
BORNE_API UEnum* Z_Construct_UEnum_Borne_ESoulsAbilityInputID();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USoulGameplayAbility
void USoulGameplayAbility::StaticRegisterNativesUSoulGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoulGameplayAbility);
UClass* Z_Construct_UClass_USoulGameplayAbility_NoRegister()
{
	return USoulGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_USoulGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/SoulGameplayAbility.h" },
		{ "ModuleRelativePath", "GAS/Abilities/SoulGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActivateAbilityOnGrant_MetaData[] = {
		{ "Category", "SoulGameplayAbility" },
		{ "ModuleRelativePath", "GAS/Abilities/SoulGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this input will be used to activate the ability\n" },
#endif
		{ "ModuleRelativePath", "GAS/Abilities/SoulGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this input will be used to activate the ability" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bActivateAbilityOnGrant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateAbilityOnGrant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoulGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USoulGameplayAbility_Statics::NewProp_bActivateAbilityOnGrant_SetBit(void* Obj)
{
	((USoulGameplayAbility*)Obj)->bActivateAbilityOnGrant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoulGameplayAbility_Statics::NewProp_bActivateAbilityOnGrant = { "bActivateAbilityOnGrant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoulGameplayAbility), &Z_Construct_UClass_USoulGameplayAbility_Statics::NewProp_bActivateAbilityOnGrant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActivateAbilityOnGrant_MetaData), NewProp_bActivateAbilityOnGrant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoulGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoulGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoulGameplayAbility, AbilityInputID), Z_Construct_UEnum_Borne_ESoulsAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputID_MetaData), NewProp_AbilityInputID_MetaData) }; // 2515057219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoulGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulGameplayAbility_Statics::NewProp_bActivateAbilityOnGrant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulGameplayAbility_Statics::NewProp_AbilityInputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoulGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoulGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoulGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoulGameplayAbility_Statics::ClassParams = {
	&USoulGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoulGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoulGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoulGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_USoulGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoulGameplayAbility()
{
	if (!Z_Registration_Info_UClass_USoulGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoulGameplayAbility.OuterSingleton, Z_Construct_UClass_USoulGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoulGameplayAbility.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USoulGameplayAbility>()
{
	return USoulGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoulGameplayAbility);
USoulGameplayAbility::~USoulGameplayAbility() {}
// End Class USoulGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_SoulGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoulGameplayAbility, USoulGameplayAbility::StaticClass, TEXT("USoulGameplayAbility"), &Z_Registration_Info_UClass_USoulGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoulGameplayAbility), 515537836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_SoulGameplayAbility_h_1437616457(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_SoulGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_SoulGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
