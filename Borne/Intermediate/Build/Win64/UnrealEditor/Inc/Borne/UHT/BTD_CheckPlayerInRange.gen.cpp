// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/Decorators/BTD_CheckPlayerInRange.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTD_CheckPlayerInRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
BORNE_API UClass* Z_Construct_UClass_UBTD_CheckPlayerInRange();
BORNE_API UClass* Z_Construct_UClass_UBTD_CheckPlayerInRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UBTD_CheckPlayerInRange
void UBTD_CheckPlayerInRange::StaticRegisterNativesUBTD_CheckPlayerInRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTD_CheckPlayerInRange);
UClass* Z_Construct_UClass_UBTD_CheckPlayerInRange_NoRegister()
{
	return UBTD_CheckPlayerInRange::StaticClass();
}
struct Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Decorators/BTD_CheckPlayerInRange.h" },
		{ "ModuleRelativePath", "AI/Decorators/BTD_CheckPlayerInRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FCloseDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Decorators/BTD_CheckPlayerInRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFarDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Decorators/BTD_CheckPlayerInRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Decorators/BTD_CheckPlayerInRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLongRanged_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Decorators/BTD_CheckPlayerInRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsShortRanged_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Decorators/BTD_CheckPlayerInRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FCloseDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FFarDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTarget;
	static void NewProp_bIsLongRanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLongRanged;
	static void NewProp_bIsShortRanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShortRanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTD_CheckPlayerInRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_FCloseDistance = { "FCloseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTD_CheckPlayerInRange, FCloseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FCloseDistance_MetaData), NewProp_FCloseDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_FFarDistance = { "FFarDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTD_CheckPlayerInRange, FFarDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFarDistance_MetaData), NewProp_FFarDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_PlayerTarget = { "PlayerTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTD_CheckPlayerInRange, PlayerTarget), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTarget_MetaData), NewProp_PlayerTarget_MetaData) }; // 3940742986
void Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_bIsLongRanged_SetBit(void* Obj)
{
	((UBTD_CheckPlayerInRange*)Obj)->bIsLongRanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_bIsLongRanged = { "bIsLongRanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTD_CheckPlayerInRange), &Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_bIsLongRanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLongRanged_MetaData), NewProp_bIsLongRanged_MetaData) };
void Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_bIsShortRanged_SetBit(void* Obj)
{
	((UBTD_CheckPlayerInRange*)Obj)->bIsShortRanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_bIsShortRanged = { "bIsShortRanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTD_CheckPlayerInRange), &Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_bIsShortRanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsShortRanged_MetaData), NewProp_bIsShortRanged_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_FCloseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_FFarDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_PlayerTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_bIsLongRanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::NewProp_bIsShortRanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::ClassParams = {
	&UBTD_CheckPlayerInRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTD_CheckPlayerInRange()
{
	if (!Z_Registration_Info_UClass_UBTD_CheckPlayerInRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTD_CheckPlayerInRange.OuterSingleton, Z_Construct_UClass_UBTD_CheckPlayerInRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTD_CheckPlayerInRange.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UBTD_CheckPlayerInRange>()
{
	return UBTD_CheckPlayerInRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTD_CheckPlayerInRange);
UBTD_CheckPlayerInRange::~UBTD_CheckPlayerInRange() {}
// End Class UBTD_CheckPlayerInRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Decorators_BTD_CheckPlayerInRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTD_CheckPlayerInRange, UBTD_CheckPlayerInRange::StaticClass, TEXT("UBTD_CheckPlayerInRange"), &Z_Registration_Info_UClass_UBTD_CheckPlayerInRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTD_CheckPlayerInRange), 3673516673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Decorators_BTD_CheckPlayerInRange_h_1650818252(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Decorators_BTD_CheckPlayerInRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Decorators_BTD_CheckPlayerInRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
