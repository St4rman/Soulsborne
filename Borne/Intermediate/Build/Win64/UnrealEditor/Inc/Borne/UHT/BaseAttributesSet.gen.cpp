// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/AttributeSets/BaseAttributesSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttributesSet() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UBaseAttributesSet();
BORNE_API UClass* Z_Construct_UClass_UBaseAttributesSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UBaseAttributesSet
void UBaseAttributesSet::StaticRegisterNativesUBaseAttributesSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAttributesSet);
UClass* Z_Construct_UClass_UBaseAttributesSet_NoRegister()
{
	return UBaseAttributesSet::StaticClass();
}
struct Z_Construct_UClass_UBaseAttributesSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base Attribute set, can be applied for both players and enemies\n */" },
#endif
		{ "IncludePath", "GAS/AttributeSets/BaseAttributesSet.h" },
		{ "ModuleRelativePath", "GAS/AttributeSets/BaseAttributesSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Attribute set, can be applied for both players and enemies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "BaseAttributesSet" },
		{ "ModuleRelativePath", "GAS/AttributeSets/BaseAttributesSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "BaseAttributesSet" },
		{ "ModuleRelativePath", "GAS/AttributeSets/BaseAttributesSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "BaseAttributesSet" },
		{ "ModuleRelativePath", "GAS/AttributeSets/BaseAttributesSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "BaseAttributesSet" },
		{ "ModuleRelativePath", "GAS/AttributeSets/BaseAttributesSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributesSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributesSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributesSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributesSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributesSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributesSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributesSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributesSet_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributesSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributesSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributesSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributesSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributesSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributesSet_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributesSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseAttributesSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributesSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributesSet_Statics::ClassParams = {
	&UBaseAttributesSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseAttributesSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributesSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributesSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributesSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAttributesSet()
{
	if (!Z_Registration_Info_UClass_UBaseAttributesSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributesSet.OuterSingleton, Z_Construct_UClass_UBaseAttributesSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAttributesSet.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UBaseAttributesSet>()
{
	return UBaseAttributesSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttributesSet);
UBaseAttributesSet::~UBaseAttributesSet() {}
// End Class UBaseAttributesSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributesSet, UBaseAttributesSet::StaticClass, TEXT("UBaseAttributesSet"), &Z_Registration_Info_UClass_UBaseAttributesSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributesSet), 243670118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_2806263765(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_AttributeSets_BaseAttributesSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
