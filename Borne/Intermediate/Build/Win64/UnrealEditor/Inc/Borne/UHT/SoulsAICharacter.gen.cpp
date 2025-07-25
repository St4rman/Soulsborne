// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/AI/SoulsAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulsAICharacter() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_ASoulsAICharacter();
BORNE_API UClass* Z_Construct_UClass_ASoulsAICharacter_NoRegister();
BORNE_API UClass* Z_Construct_UClass_UTargetableInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ASoulsAICharacter
void ASoulsAICharacter::StaticRegisterNativesASoulsAICharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoulsAICharacter);
UClass* Z_Construct_UClass_ASoulsAICharacter_NoRegister()
{
	return ASoulsAICharacter::StaticClass();
}
struct Z_Construct_UClass_ASoulsAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/SoulsAICharacter.h" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnWidget_MetaData[] = {
		{ "Category", "SoulsAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTargeted_MetaData[] = {
		{ "Category", "SoulsAICharacter" },
		{ "ModuleRelativePath", "AI/SoulsAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnWidget;
	static void NewProp_IsTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTargeted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulsAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_LockOnWidget = { "LockOnWidget", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoulsAICharacter, LockOnWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnWidget_MetaData), NewProp_LockOnWidget_MetaData) };
void Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_IsTargeted_SetBit(void* Obj)
{
	((ASoulsAICharacter*)Obj)->IsTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_IsTargeted = { "IsTargeted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASoulsAICharacter), &Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_IsTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTargeted_MetaData), NewProp_IsTargeted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoulsAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_LockOnWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulsAICharacter_Statics::NewProp_IsTargeted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoulsAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASoulsAICharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTargetableInterface_NoRegister, (int32)VTABLE_OFFSET(ASoulsAICharacter, ITargetableInterface), false },  // 3318039286
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoulsAICharacter_Statics::ClassParams = {
	&ASoulsAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASoulsAICharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoulsAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoulsAICharacter()
{
	if (!Z_Registration_Info_UClass_ASoulsAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoulsAICharacter.OuterSingleton, Z_Construct_UClass_ASoulsAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoulsAICharacter.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ASoulsAICharacter>()
{
	return ASoulsAICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoulsAICharacter);
ASoulsAICharacter::~ASoulsAICharacter() {}
// End Class ASoulsAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoulsAICharacter, ASoulsAICharacter::StaticClass, TEXT("ASoulsAICharacter"), &Z_Registration_Info_UClass_ASoulsAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoulsAICharacter), 1855960777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_880584187(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_AI_SoulsAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
