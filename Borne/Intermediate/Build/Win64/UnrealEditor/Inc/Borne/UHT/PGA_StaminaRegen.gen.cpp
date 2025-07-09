// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/Abilities/Passive/PGA_StaminaRegen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGA_StaminaRegen() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UPGA_StaminaRegen();
BORNE_API UClass* Z_Construct_UClass_UPGA_StaminaRegen_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UPGA_StaminaRegen
void UPGA_StaminaRegen::StaticRegisterNativesUPGA_StaminaRegen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPGA_StaminaRegen);
UClass* Z_Construct_UClass_UPGA_StaminaRegen_NoRegister()
{
	return UPGA_StaminaRegen::StaticClass();
}
struct Z_Construct_UClass_UPGA_StaminaRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/Passive/PGA_StaminaRegen.h" },
		{ "ModuleRelativePath", "GAS/Abilities/Passive/PGA_StaminaRegen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPGA_StaminaRegen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPGA_StaminaRegen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPGA_StaminaRegen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPGA_StaminaRegen_Statics::ClassParams = {
	&UPGA_StaminaRegen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPGA_StaminaRegen_Statics::Class_MetaDataParams), Z_Construct_UClass_UPGA_StaminaRegen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPGA_StaminaRegen()
{
	if (!Z_Registration_Info_UClass_UPGA_StaminaRegen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPGA_StaminaRegen.OuterSingleton, Z_Construct_UClass_UPGA_StaminaRegen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPGA_StaminaRegen.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UPGA_StaminaRegen>()
{
	return UPGA_StaminaRegen::StaticClass();
}
UPGA_StaminaRegen::UPGA_StaminaRegen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPGA_StaminaRegen);
UPGA_StaminaRegen::~UPGA_StaminaRegen() {}
// End Class UPGA_StaminaRegen

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPGA_StaminaRegen, UPGA_StaminaRegen::StaticClass, TEXT("UPGA_StaminaRegen"), &Z_Registration_Info_UClass_UPGA_StaminaRegen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPGA_StaminaRegen), 2682078467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_93954042(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_Abilities_Passive_PGA_StaminaRegen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
