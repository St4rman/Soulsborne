// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/Tasks/SBTTTurnToFacePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBTTTurnToFacePlayer() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
BORNE_API UClass* Z_Construct_UClass_USBTTTurnToFacePlayer();
BORNE_API UClass* Z_Construct_UClass_USBTTTurnToFacePlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USBTTTurnToFacePlayer
void USBTTTurnToFacePlayer::StaticRegisterNativesUSBTTTurnToFacePlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USBTTTurnToFacePlayer);
UClass* Z_Construct_UClass_USBTTTurnToFacePlayer_NoRegister()
{
	return USBTTTurnToFacePlayer::StaticClass();
}
struct Z_Construct_UClass_USBTTTurnToFacePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Tasks/SBTTTurnToFacePlayer.h" },
		{ "ModuleRelativePath", "AI/Tasks/SBTTTurnToFacePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookRotationRate_MetaData[] = {
		{ "Category", "SBTTTurnToFacePlayer" },
		{ "ModuleRelativePath", "AI/Tasks/SBTTTurnToFacePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookRotationRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBTTTurnToFacePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::NewProp_LookRotationRate = { "LookRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USBTTTurnToFacePlayer, LookRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookRotationRate_MetaData), NewProp_LookRotationRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::NewProp_LookRotationRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::ClassParams = {
	&USBTTTurnToFacePlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USBTTTurnToFacePlayer()
{
	if (!Z_Registration_Info_UClass_USBTTTurnToFacePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USBTTTurnToFacePlayer.OuterSingleton, Z_Construct_UClass_USBTTTurnToFacePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USBTTTurnToFacePlayer.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USBTTTurnToFacePlayer>()
{
	return USBTTTurnToFacePlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USBTTTurnToFacePlayer);
USBTTTurnToFacePlayer::~USBTTTurnToFacePlayer() {}
// End Class USBTTTurnToFacePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTTurnToFacePlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USBTTTurnToFacePlayer, USBTTTurnToFacePlayer::StaticClass, TEXT("USBTTTurnToFacePlayer"), &Z_Registration_Info_UClass_USBTTTurnToFacePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBTTTurnToFacePlayer), 1200342792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTTurnToFacePlayer_h_846253407(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTTurnToFacePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTTurnToFacePlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
