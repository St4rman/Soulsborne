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
BORNE_API UClass* Z_Construct_UClass_UTargetableInterface_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTargeted_MetaData[] = {
		{ "Category", "TargetableEnemy" },
		{ "ModuleRelativePath", "Pawns/TargetableEnemy.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTargeted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetableEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ATargetableEnemy_Statics::NewProp_IsTargeted_SetBit(void* Obj)
{
	((ATargetableEnemy*)Obj)->IsTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATargetableEnemy_Statics::NewProp_IsTargeted = { "IsTargeted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATargetableEnemy), &Z_Construct_UClass_ATargetableEnemy_Statics::NewProp_IsTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTargeted_MetaData), NewProp_IsTargeted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetableEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetableEnemy_Statics::NewProp_IsTargeted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATargetableEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATargetableEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTargetableInterface_NoRegister, (int32)VTABLE_OFFSET(ATargetableEnemy, ITargetableInterface), false },  // 3318039286
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetableEnemy_Statics::ClassParams = {
	&ATargetableEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATargetableEnemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableEnemy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_ATargetableEnemy, ATargetableEnemy::StaticClass, TEXT("ATargetableEnemy"), &Z_Registration_Info_UClass_ATargetableEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetableEnemy), 3719553211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_2636837672(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Pawns_TargetableEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
