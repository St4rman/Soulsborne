// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/Tasks/SoulsBTTaskRangedAttack.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulsBTTaskRangedAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Object();
BORNE_API UClass* Z_Construct_UClass_USoulsBTTaskRangedAttack();
BORNE_API UClass* Z_Construct_UClass_USoulsBTTaskRangedAttack_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USoulsBTTaskRangedAttack
void USoulsBTTaskRangedAttack::StaticRegisterNativesUSoulsBTTaskRangedAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoulsBTTaskRangedAttack);
UClass* Z_Construct_UClass_USoulsBTTaskRangedAttack_NoRegister()
{
	return USoulsBTTaskRangedAttack::StaticClass();
}
struct Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Tasks/SoulsBTTaskRangedAttack.h" },
		{ "ModuleRelativePath", "AI/Tasks/SoulsBTTaskRangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "AI/Tasks/SoulsBTTaskRangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Tasks/SoulsBTTaskRangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "SoulsBTTaskRangedAttack" },
		{ "ModuleRelativePath", "AI/Tasks/SoulsBTTaskRangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfNumber_MetaData[] = {
		{ "Category", "SoulsBTTaskRangedAttack" },
		{ "ModuleRelativePath", "AI/Tasks/SoulsBTTaskRangedAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationToPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HalfNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoulsBTTaskRangedAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoulsBTTaskRangedAttack, AnimationToPlay), Z_Construct_UScriptStruct_FValueOrBBKey_Object, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationToPlay_MetaData), NewProp_AnimationToPlay_MetaData) }; // 2783390860
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoulsBTTaskRangedAttack, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyOwnerComp_MetaData), NewProp_MyOwnerComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoulsBTTaskRangedAttack, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::NewProp_HalfNumber = { "HalfNumber", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoulsBTTaskRangedAttack, HalfNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfNumber_MetaData), NewProp_HalfNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::NewProp_AnimationToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::NewProp_MyOwnerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::NewProp_HalfNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::ClassParams = {
	&USoulsBTTaskRangedAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoulsBTTaskRangedAttack()
{
	if (!Z_Registration_Info_UClass_USoulsBTTaskRangedAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoulsBTTaskRangedAttack.OuterSingleton, Z_Construct_UClass_USoulsBTTaskRangedAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoulsBTTaskRangedAttack.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USoulsBTTaskRangedAttack>()
{
	return USoulsBTTaskRangedAttack::StaticClass();
}
USoulsBTTaskRangedAttack::USoulsBTTaskRangedAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoulsBTTaskRangedAttack);
USoulsBTTaskRangedAttack::~USoulsBTTaskRangedAttack() {}
// End Class USoulsBTTaskRangedAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SoulsBTTaskRangedAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoulsBTTaskRangedAttack, USoulsBTTaskRangedAttack::StaticClass, TEXT("USoulsBTTaskRangedAttack"), &Z_Registration_Info_UClass_USoulsBTTaskRangedAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoulsBTTaskRangedAttack), 1588017141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SoulsBTTaskRangedAttack_h_366490909(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SoulsBTTaskRangedAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_Tasks_SoulsBTTaskRangedAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
