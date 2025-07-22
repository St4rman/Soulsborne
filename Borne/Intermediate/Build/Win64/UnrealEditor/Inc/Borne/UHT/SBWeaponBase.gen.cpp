// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Weapons/SBWeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBWeaponBase() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_ASBWeaponBase();
BORNE_API UClass* Z_Construct_UClass_ASBWeaponBase_NoRegister();
BORNE_API UClass* Z_Construct_UClass_UWeaponInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class ASBWeaponBase Function GetIcon
struct Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics
{
	struct SBWeaponBase_eventGetIcon_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SBWeaponBase_eventGetIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBWeaponBase, nullptr, "GetIcon", nullptr, nullptr, Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::SBWeaponBase_eventGetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::SBWeaponBase_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASBWeaponBase_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBWeaponBase_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASBWeaponBase::execGetIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetIcon();
	P_NATIVE_END;
}
// End Class ASBWeaponBase Function GetIcon

// Begin Class ASBWeaponBase Function GetLightAnim
struct Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics
{
	struct SBWeaponBase_eventGetLightAnim_Parms
	{
		UAnimMontage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SBWeaponBase_eventGetLightAnim_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBWeaponBase, nullptr, "GetLightAnim", nullptr, nullptr, Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::SBWeaponBase_eventGetLightAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::SBWeaponBase_eventGetLightAnim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASBWeaponBase_GetLightAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBWeaponBase_GetLightAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASBWeaponBase::execGetLightAnim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->GetLightAnim();
	P_NATIVE_END;
}
// End Class ASBWeaponBase Function GetLightAnim

// Begin Class ASBWeaponBase Function OnWeaponPickup_Implementation
struct Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics
{
	struct SBWeaponBase_eventOnWeaponPickup_Implementation_Parms
	{
		AActor* ReferenceActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::NewProp_ReferenceActor = { "ReferenceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SBWeaponBase_eventOnWeaponPickup_Implementation_Parms, ReferenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::NewProp_ReferenceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBWeaponBase, nullptr, "OnWeaponPickup_Implementation", nullptr, nullptr, Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::SBWeaponBase_eventOnWeaponPickup_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::SBWeaponBase_eventOnWeaponPickup_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASBWeaponBase::execOnWeaponPickup_Implementation)
{
	P_GET_OBJECT(AActor,Z_Param_ReferenceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponPickup_Implementation(Z_Param_ReferenceActor);
	P_NATIVE_END;
}
// End Class ASBWeaponBase Function OnWeaponPickup_Implementation

// Begin Class ASBWeaponBase
void ASBWeaponBase::StaticRegisterNativesASBWeaponBase()
{
	UClass* Class = ASBWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIcon", &ASBWeaponBase::execGetIcon },
		{ "GetLightAnim", &ASBWeaponBase::execGetLightAnim },
		{ "OnWeaponPickup_Implementation", &ASBWeaponBase::execOnWeaponPickup_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASBWeaponBase);
UClass* Z_Construct_UClass_ASBWeaponBase_NoRegister()
{
	return ASBWeaponBase::StaticClass();
}
struct Z_Construct_UClass_ASBWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/SBWeaponBase.h" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAttackAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Anim Montage" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Anim Montage" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargedDmg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightStaminaCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyStaminaCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAttackSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "Weapons/SBWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightAttackAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargedDmg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightStaminaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeavyStaminaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightAttackSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBWeaponBase_GetIcon, "GetIcon" }, // 1229079396
		{ &Z_Construct_UFunction_ASBWeaponBase_GetLightAnim, "GetLightAnim" }, // 1980117797
		{ &Z_Construct_UFunction_ASBWeaponBase_OnWeaponPickup_Implementation, "OnWeaponPickup_Implementation" }, // 515731518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightAttackAnim = { "LightAttackAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, LightAttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAttackAnim_MetaData), NewProp_LightAttackAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_HeavyAttackAnim = { "HeavyAttackAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, HeavyAttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyAttackAnim_MetaData), NewProp_HeavyAttackAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightDamage = { "LightDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, LightDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightDamage_MetaData), NewProp_LightDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_ChargedDmg = { "ChargedDmg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, ChargedDmg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargedDmg_MetaData), NewProp_ChargedDmg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightStaminaCost = { "LightStaminaCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, LightStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightStaminaCost_MetaData), NewProp_LightStaminaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_HeavyStaminaCost = { "HeavyStaminaCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, HeavyStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyStaminaCost_MetaData), NewProp_HeavyStaminaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightAttackSpeed = { "LightAttackSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, LightAttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAttackSpeed_MetaData), NewProp_LightAttackSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASBWeaponBase, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightAttackAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_HeavyAttackAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_ChargedDmg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_HeavyStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_LightAttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBWeaponBase_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASBWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASBWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASBWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBWeaponBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWeaponInterface_NoRegister, (int32)VTABLE_OFFSET(ASBWeaponBase, IWeaponInterface), false },  // 2474437687
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASBWeaponBase_Statics::ClassParams = {
	&ASBWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASBWeaponBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASBWeaponBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASBWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASBWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASBWeaponBase()
{
	if (!Z_Registration_Info_UClass_ASBWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASBWeaponBase.OuterSingleton, Z_Construct_UClass_ASBWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASBWeaponBase.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ASBWeaponBase>()
{
	return ASBWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASBWeaponBase);
ASBWeaponBase::~ASBWeaponBase() {}
// End Class ASBWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASBWeaponBase, ASBWeaponBase::StaticClass, TEXT("ASBWeaponBase"), &Z_Registration_Info_UClass_ASBWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASBWeaponBase), 2058131483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_2045963896(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Weapons_SBWeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
