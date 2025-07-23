// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/Services/SoulBTSCheckAttackRange.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulBTSCheckAttackRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
BORNE_API UClass* Z_Construct_UClass_USoulBTSCheckAttackRange();
BORNE_API UClass* Z_Construct_UClass_USoulBTSCheckAttackRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USoulBTSCheckAttackRange
void USoulBTSCheckAttackRange::StaticRegisterNativesUSoulBTSCheckAttackRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoulBTSCheckAttackRange);
UClass* Z_Construct_UClass_USoulBTSCheckAttackRange_NoRegister()
{
	return USoulBTSCheckAttackRange::StaticClass();
}
struct Z_Construct_UClass_USoulBTSCheckAttackRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Services/SoulBTSCheckAttackRange.h" },
		{ "ModuleRelativePath", "AI/Services/SoulBTSCheckAttackRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRangeKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Services/SoulBTSCheckAttackRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Services/SoulBTSCheckAttackRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackRangeKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoulBTSCheckAttackRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::NewProp_AttackRangeKey = { "AttackRangeKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoulBTSCheckAttackRange, AttackRangeKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRangeKey_MetaData), NewProp_AttackRangeKey_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::NewProp_MeleeRange = { "MeleeRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoulBTSCheckAttackRange, MeleeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeRange_MetaData), NewProp_MeleeRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::NewProp_AttackRangeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::NewProp_MeleeRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::ClassParams = {
	&USoulBTSCheckAttackRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::Class_MetaDataParams), Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoulBTSCheckAttackRange()
{
	if (!Z_Registration_Info_UClass_USoulBTSCheckAttackRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoulBTSCheckAttackRange.OuterSingleton, Z_Construct_UClass_USoulBTSCheckAttackRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoulBTSCheckAttackRange.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USoulBTSCheckAttackRange>()
{
	return USoulBTSCheckAttackRange::StaticClass();
}
USoulBTSCheckAttackRange::USoulBTSCheckAttackRange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoulBTSCheckAttackRange);
USoulBTSCheckAttackRange::~USoulBTSCheckAttackRange() {}
// End Class USoulBTSCheckAttackRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Services_SoulBTSCheckAttackRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoulBTSCheckAttackRange, USoulBTSCheckAttackRange::StaticClass, TEXT("USoulBTSCheckAttackRange"), &Z_Registration_Info_UClass_USoulBTSCheckAttackRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoulBTSCheckAttackRange), 3725308207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Services_SoulBTSCheckAttackRange_h_2825117601(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Services_SoulBTSCheckAttackRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Services_SoulBTSCheckAttackRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
