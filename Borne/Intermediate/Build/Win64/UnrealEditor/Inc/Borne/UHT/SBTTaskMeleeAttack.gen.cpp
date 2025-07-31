// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/Tasks/SBTTaskMeleeAttack.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBTTaskMeleeAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Bool();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Object();
BORNE_API UClass* Z_Construct_UClass_USBTTaskMeleeAttack();
BORNE_API UClass* Z_Construct_UClass_USBTTaskMeleeAttack_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "AI/Tasks/SBTTaskMeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Node" },
		{ "DisplayName", "Looping" },
		{ "ModuleRelativePath", "AI/Tasks/SBTTaskMeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNonBlocking_MetaData[] = {
		{ "Category", "Node" },
		{ "DisplayName", "NonBlocking" },
		{ "ModuleRelativePath", "AI/Tasks/SBTTaskMeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Tasks/SBTTaskMeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimMontage_MetaData[] = {
		{ "Category", "SBTTaskMeleeAttack" },
		{ "ModuleRelativePath", "AI/Tasks/SBTTaskMeleeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationToPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bNonBlocking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBTTaskMeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USBTTaskMeleeAttack, AnimationToPlay), Z_Construct_UScriptStruct_FValueOrBBKey_Object, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationToPlay_MetaData), NewProp_AnimationToPlay_MetaData) }; // 2783390860
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USBTTaskMeleeAttack, bLooping), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_bNonBlocking = { "bNonBlocking", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USBTTaskMeleeAttack, bNonBlocking), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNonBlocking_MetaData), NewProp_bNonBlocking_MetaData) }; // 1056548058
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USBTTaskMeleeAttack, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyOwnerComp_MetaData), NewProp_MyOwnerComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_AttackAnimMontage = { "AttackAnimMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USBTTaskMeleeAttack, AttackAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimMontage_MetaData), NewProp_AttackAnimMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBTTaskMeleeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_AnimationToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_bNonBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_MyOwnerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBTTaskMeleeAttack_Statics::NewProp_AttackAnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USBTTaskMeleeAttack_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_USBTTaskMeleeAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USBTTaskMeleeAttack_Statics::PropPointers),
	0,
	0x009000A0u,
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
		{ Z_Construct_UClass_USBTTaskMeleeAttack, USBTTaskMeleeAttack::StaticClass, TEXT("USBTTaskMeleeAttack"), &Z_Registration_Info_UClass_USBTTaskMeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBTTaskMeleeAttack), 3072220774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_3238757396(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SBTTaskMeleeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
