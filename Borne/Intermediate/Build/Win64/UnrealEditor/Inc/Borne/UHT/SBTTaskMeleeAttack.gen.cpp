// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/Tasks/SBTTaskMeleeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBTTaskMeleeAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
BORNE_API UClass* Z_Construct_UClass_USBTTaskMeleeAttack();
BORNE_API UClass* Z_Construct_UClass_USBTTaskMeleeAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USBTTaskMeleeAttack
void USBTTaskMeleeAttack::StaticRegisterNativesUSBTTaskMeleeAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USBTTaskMeleeAttack);
UClass* Z_Construct_UClass_USBTTaskMeleeAttack_NoRegister()
{
	return USBTTaskMeleeAttack::StaticClass();
}
struct Z_Construct_UClass_USBTTaskMeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Tasks/SBTTaskMeleeAttack.h" },
		{ "ModuleRelativePath", "AI/Tasks/SBTTaskMeleeAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBTTaskMeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USBTTaskMeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USBTTaskMeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USBTTaskMeleeAttack_Statics::ClassParams = {
	&USBTTaskMeleeAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USBTTaskMeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_USBTTaskMeleeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USBTTaskMeleeAttack()
{
	if (!Z_Registration_Info_UClass_USBTTaskMeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USBTTaskMeleeAttack.OuterSingleton, Z_Construct_UClass_USBTTaskMeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USBTTaskMeleeAttack.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USBTTaskMeleeAttack>()
{
	return USBTTaskMeleeAttack::StaticClass();
}
USBTTaskMeleeAttack::USBTTaskMeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USBTTaskMeleeAttack);
USBTTaskMeleeAttack::~USBTTaskMeleeAttack() {}
// End Class USBTTaskMeleeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USBTTaskMeleeAttack, USBTTaskMeleeAttack::StaticClass, TEXT("USBTTaskMeleeAttack"), &Z_Registration_Info_UClass_USBTTaskMeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBTTaskMeleeAttack), 1669495664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_2481933391(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
