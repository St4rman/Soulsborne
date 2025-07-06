// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/GAS/AbilityTasks/PreDodgeTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreDodgeTask() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UPreDodgeTask();
BORNE_API UClass* Z_Construct_UClass_UPreDodgeTask_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UPreDodgeTask
void UPreDodgeTask::StaticRegisterNativesUPreDodgeTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreDodgeTask);
UClass* Z_Construct_UClass_UPreDodgeTask_NoRegister()
{
	return UPreDodgeTask::StaticClass();
}
struct Z_Construct_UClass_UPreDodgeTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/AbilityTasks/PreDodgeTask.h" },
		{ "ModuleRelativePath", "GAS/AbilityTasks/PreDodgeTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreDodgeTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPreDodgeTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPreDodgeTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreDodgeTask_Statics::ClassParams = {
	&UPreDodgeTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPreDodgeTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UPreDodgeTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPreDodgeTask()
{
	if (!Z_Registration_Info_UClass_UPreDodgeTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreDodgeTask.OuterSingleton, Z_Construct_UClass_UPreDodgeTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPreDodgeTask.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UPreDodgeTask>()
{
	return UPreDodgeTask::StaticClass();
}
UPreDodgeTask::UPreDodgeTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPreDodgeTask);
UPreDodgeTask::~UPreDodgeTask() {}
// End Class UPreDodgeTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPreDodgeTask, UPreDodgeTask::StaticClass, TEXT("UPreDodgeTask"), &Z_Registration_Info_UClass_UPreDodgeTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreDodgeTask), 3085182384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_1880409385(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_GAS_AbilityTasks_PreDodgeTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
