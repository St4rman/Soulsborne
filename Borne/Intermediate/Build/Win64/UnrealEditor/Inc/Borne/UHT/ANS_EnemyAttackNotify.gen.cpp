// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Anims/ANS_EnemyAttackNotify.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeANS_EnemyAttackNotify() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UANS_EnemyAttackNotify();
BORNE_API UClass* Z_Construct_UClass_UANS_EnemyAttackNotify_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UANS_EnemyAttackNotify
void UANS_EnemyAttackNotify::StaticRegisterNativesUANS_EnemyAttackNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UANS_EnemyAttackNotify);
UClass* Z_Construct_UClass_UANS_EnemyAttackNotify_NoRegister()
{
	return UANS_EnemyAttackNotify::StaticClass();
}
struct Z_Construct_UClass_UANS_EnemyAttackNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Anims/ANS_EnemyAttackNotify.h" },
		{ "ModuleRelativePath", "Anims/ANS_EnemyAttackNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ANS_EnemyAttackNotify" },
		{ "ModuleRelativePath", "Anims/ANS_EnemyAttackNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ANS_EnemyAttackNotify" },
		{ "ModuleRelativePath", "Anims/ANS_EnemyAttackNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceIgnoreActors_MetaData[] = {
		{ "ModuleRelativePath", "Anims/ANS_EnemyAttackNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoar_MetaData[] = {
		{ "Category", "ANS_EnemyAttackNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TODO: fix this\n" },
#endif
		{ "ModuleRelativePath", "Anims/ANS_EnemyAttackNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: fix this" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceIgnoreActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceIgnoreActors;
	static void NewProp_bIsRoar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_EnemyAttackNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_DamageGameplayEffect = { "DamageGameplayEffect", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_EnemyAttackNotify, DamageGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageGameplayEffect_MetaData), NewProp_DamageGameplayEffect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_DamageTag = { "DamageTag", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_EnemyAttackNotify, DamageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTag_MetaData), NewProp_DamageTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_TraceIgnoreActors_Inner = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_TraceIgnoreActors = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_EnemyAttackNotify, TraceIgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceIgnoreActors_MetaData), NewProp_TraceIgnoreActors_MetaData) };
void Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_bIsRoar_SetBit(void* Obj)
{
	((UANS_EnemyAttackNotify*)Obj)->bIsRoar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_bIsRoar = { "bIsRoar", nullptr, (EPropertyFlags)0x0010000000020011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UANS_EnemyAttackNotify), &Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_bIsRoar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRoar_MetaData), NewProp_bIsRoar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_DamageGameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_DamageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_TraceIgnoreActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_TraceIgnoreActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::NewProp_bIsRoar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::ClassParams = {
	&UANS_EnemyAttackNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UANS_EnemyAttackNotify()
{
	if (!Z_Registration_Info_UClass_UANS_EnemyAttackNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_EnemyAttackNotify.OuterSingleton, Z_Construct_UClass_UANS_EnemyAttackNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UANS_EnemyAttackNotify.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UANS_EnemyAttackNotify>()
{
	return UANS_EnemyAttackNotify::StaticClass();
}
UANS_EnemyAttackNotify::UANS_EnemyAttackNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_EnemyAttackNotify);
UANS_EnemyAttackNotify::~UANS_EnemyAttackNotify() {}
// End Class UANS_EnemyAttackNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_EnemyAttackNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UANS_EnemyAttackNotify, UANS_EnemyAttackNotify::StaticClass, TEXT("UANS_EnemyAttackNotify"), &Z_Registration_Info_UClass_UANS_EnemyAttackNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_EnemyAttackNotify), 112644475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_EnemyAttackNotify_h_2029236054(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_EnemyAttackNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Anims_ANS_EnemyAttackNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
