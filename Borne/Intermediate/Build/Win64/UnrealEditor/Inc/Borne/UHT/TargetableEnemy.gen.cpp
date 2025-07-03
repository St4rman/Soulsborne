// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Pawns/TargetableEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetableEnemy() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_ATargetableEnemy();
BORNE_API UClass* Z_Construct_UClass_ATargetableEnemy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ATargetableEnemy
void ATargetableEnemy::StaticRegisterNativesATargetableEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetableEnemy);
UClass* Z_Construct_UClass_ATargetableEnemy_NoRegister()
{
	return ATargetableEnemy::StaticClass();
}
struct Z_Construct_UClass_ATargetableEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/TargetableEnemy.h" },
		{ "ModuleRelativePath", "Pawns/TargetableEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetableEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATargetableEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetableEnemy_Statics::ClassParams = {
	&ATargetableEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetableEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATargetableEnemy()
{
	if (!Z_Registration_Info_UClass_ATargetableEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetableEnemy.OuterSingleton, Z_Construct_UClass_ATargetableEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATargetableEnemy.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ATargetableEnemy>()
{
	return ATargetableEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetableEnemy);
ATargetableEnemy::~ATargetableEnemy() {}
// End Class ATargetableEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATargetableEnemy, ATargetableEnemy::StaticClass, TEXT("ATargetableEnemy"), &Z_Registration_Info_UClass_ATargetableEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetableEnemy), 506690322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_1100735901(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
