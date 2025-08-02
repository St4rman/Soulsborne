// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Anims/ANS_SpawnAOE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_SpawnAOE() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UANS_SpawnAOE();
BORNE_API UClass* Z_Construct_UClass_UANS_SpawnAOE_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UANS_SpawnAOE
void UANS_SpawnAOE::StaticRegisterNativesUANS_SpawnAOE()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_SpawnAOE);
UClass* Z_Construct_UClass_UANS_SpawnAOE_NoRegister()
{
	return UANS_SpawnAOE::StaticClass();
}
struct Z_Construct_UClass_UANS_SpawnAOE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Anims/ANS_SpawnAOE.h" },
		{ "ModuleRelativePath", "Anims/ANS_SpawnAOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceIgnoreActors_MetaData[] = {
		{ "ModuleRelativePath", "Anims/ANS_SpawnAOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "ANS_SpawnAOE" },
		{ "ModuleRelativePath", "Anims/ANS_SpawnAOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxRadius_MetaData[] = {
		{ "Category", "ANS_SpawnAOE" },
		{ "ModuleRelativePath", "Anims/ANS_SpawnAOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSocket_MetaData[] = {
		{ "Category", "ANS_SpawnAOE" },
		{ "ModuleRelativePath", "Anims/ANS_SpawnAOE.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceIgnoreActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceIgnoreActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitBoxRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceSocket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_SpawnAOE>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_TraceIgnoreActors_Inner = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_TraceIgnoreActors = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_SpawnAOE, TraceIgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceIgnoreActors_MetaData), NewProp_TraceIgnoreActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_SpawnAOE, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_HitBoxRadius = { "HitBoxRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_SpawnAOE, HitBoxRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBoxRadius_MetaData), NewProp_HitBoxRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_SourceSocket = { "SourceSocket", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_SpawnAOE, SourceSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSocket_MetaData), NewProp_SourceSocket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_SpawnAOE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_TraceIgnoreActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_TraceIgnoreActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_HitBoxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_SpawnAOE_Statics::NewProp_SourceSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SpawnAOE_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UANS_SpawnAOE_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SpawnAOE_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_SpawnAOE_Statics::ClassParams = {
	&UANS_SpawnAOE::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UANS_SpawnAOE_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SpawnAOE_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_SpawnAOE_Statics::Class_MetaDataParams), Z_Construct_UClass_UANS_SpawnAOE_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UANS_SpawnAOE()
{
	if (!Z_Registration_Info_UClass_UANS_SpawnAOE.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_SpawnAOE.OuterSingleton, Z_Construct_UClass_UANS_SpawnAOE_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UANS_SpawnAOE.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UANS_SpawnAOE>()
{
	return UANS_SpawnAOE::StaticClass();
}
UANS_SpawnAOE::UANS_SpawnAOE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_SpawnAOE);
UANS_SpawnAOE::~UANS_SpawnAOE() {}
// End Class UANS_SpawnAOE

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_SpawnAOE_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UANS_SpawnAOE, UANS_SpawnAOE::StaticClass, TEXT("UANS_SpawnAOE"), &Z_Registration_Info_UClass_UANS_SpawnAOE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_SpawnAOE), 3324932978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_SpawnAOE_h_61909715(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_SpawnAOE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_SpawnAOE_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
