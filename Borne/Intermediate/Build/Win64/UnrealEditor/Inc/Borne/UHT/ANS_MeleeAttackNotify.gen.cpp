// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Anims/ANS_MeleeAttackNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_MeleeAttackNotify() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UANS_MeleeAttackNotify();
BORNE_API UClass* Z_Construct_UClass_UANS_MeleeAttackNotify_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UANS_MeleeAttackNotify
void UANS_MeleeAttackNotify::StaticRegisterNativesUANS_MeleeAttackNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_MeleeAttackNotify);
UClass* Z_Construct_UClass_UANS_MeleeAttackNotify_NoRegister()
{
	return UANS_MeleeAttackNotify::StaticClass();
}
struct Z_Construct_UClass_UANS_MeleeAttackNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Anims/ANS_MeleeAttackNotify.h" },
		{ "ModuleRelativePath", "Anims/ANS_MeleeAttackNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceIgnoreActors_MetaData[] = {
		{ "ModuleRelativePath", "Anims/ANS_MeleeAttackNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceIgnoreActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceIgnoreActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_MeleeAttackNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::NewProp_TraceIgnoreActors_Inner = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::NewProp_TraceIgnoreActors = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_MeleeAttackNotify, TraceIgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceIgnoreActors_MetaData), NewProp_TraceIgnoreActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::NewProp_TraceIgnoreActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::NewProp_TraceIgnoreActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::ClassParams = {
	&UANS_MeleeAttackNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UANS_MeleeAttackNotify()
{
	if (!Z_Registration_Info_UClass_UANS_MeleeAttackNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_MeleeAttackNotify.OuterSingleton, Z_Construct_UClass_UANS_MeleeAttackNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UANS_MeleeAttackNotify.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UANS_MeleeAttackNotify>()
{
	return UANS_MeleeAttackNotify::StaticClass();
}
UANS_MeleeAttackNotify::UANS_MeleeAttackNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_MeleeAttackNotify);
UANS_MeleeAttackNotify::~UANS_MeleeAttackNotify() {}
// End Class UANS_MeleeAttackNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_MeleeAttackNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UANS_MeleeAttackNotify, UANS_MeleeAttackNotify::StaticClass, TEXT("UANS_MeleeAttackNotify"), &Z_Registration_Info_UClass_UANS_MeleeAttackNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_MeleeAttackNotify), 2087616413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_MeleeAttackNotify_h_1231233213(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_MeleeAttackNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_MeleeAttackNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
