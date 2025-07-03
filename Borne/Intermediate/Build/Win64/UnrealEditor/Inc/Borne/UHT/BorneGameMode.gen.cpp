// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/BorneGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBorneGameMode() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_ABorneGameMode();
BORNE_API UClass* Z_Construct_UClass_ABorneGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ABorneGameMode
void ABorneGameMode::StaticRegisterNativesABorneGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABorneGameMode);
UClass* Z_Construct_UClass_ABorneGameMode_NoRegister()
{
	return ABorneGameMode::StaticClass();
}
struct Z_Construct_UClass_ABorneGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BorneGameMode.h" },
		{ "ModuleRelativePath", "BorneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABorneGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABorneGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABorneGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABorneGameMode_Statics::ClassParams = {
	&ABorneGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABorneGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABorneGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABorneGameMode()
{
	if (!Z_Registration_Info_UClass_ABorneGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABorneGameMode.OuterSingleton, Z_Construct_UClass_ABorneGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABorneGameMode.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ABorneGameMode>()
{
	return ABorneGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABorneGameMode);
ABorneGameMode::~ABorneGameMode() {}
// End Class ABorneGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABorneGameMode, ABorneGameMode::StaticClass, TEXT("ABorneGameMode"), &Z_Registration_Info_UClass_ABorneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABorneGameMode), 1802017624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneGameMode_h_755473858(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
