// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/PlayerComponents/SInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInventoryComponent() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_ASBWeaponBase_NoRegister();
BORNE_API UClass* Z_Construct_UClass_USInventoryComponent();
BORNE_API UClass* Z_Construct_UClass_USInventoryComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USInventoryComponent Function DropCurrentWeapon
struct Z_Construct_UFunction_USInventoryComponent_DropCurrentWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "PlayerComponents/SInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInventoryComponent_DropCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInventoryComponent, nullptr, "DropCurrentWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USInventoryComponent_DropCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USInventoryComponent_DropCurrentWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USInventoryComponent_DropCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInventoryComponent_DropCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USInventoryComponent::execDropCurrentWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropCurrentWeapon();
	P_NATIVE_END;
}
// End Class USInventoryComponent Function DropCurrentWeapon

// Begin Class USInventoryComponent Function PickUpWeapon
struct Z_Construct_UFunction_USInventoryComponent_PickUpWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "PlayerComponents/SInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInventoryComponent_PickUpWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInventoryComponent, nullptr, "PickUpWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USInventoryComponent_PickUpWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USInventoryComponent_PickUpWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USInventoryComponent_PickUpWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInventoryComponent_PickUpWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USInventoryComponent::execPickUpWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickUpWeapon();
	P_NATIVE_END;
}
// End Class USInventoryComponent Function PickUpWeapon

// Begin Class USInventoryComponent Function WeaponInPickUpRange
struct Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics
{
	struct SInventoryComponent_eventWeaponInPickUpRange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Detector" },
		{ "ModuleRelativePath", "PlayerComponents/SInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SInventoryComponent_eventWeaponInPickUpRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SInventoryComponent_eventWeaponInPickUpRange_Parms), &Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInventoryComponent, nullptr, "WeaponInPickUpRange", nullptr, nullptr, Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::SInventoryComponent_eventWeaponInPickUpRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::SInventoryComponent_eventWeaponInPickUpRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USInventoryComponent::execWeaponInPickUpRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WeaponInPickUpRange();
	P_NATIVE_END;
}
// End Class USInventoryComponent Function WeaponInPickUpRange

// Begin Class USInventoryComponent
void USInventoryComponent::StaticRegisterNativesUSInventoryComponent()
{
	UClass* Class = USInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropCurrentWeapon", &USInventoryComponent::execDropCurrentWeapon },
		{ "PickUpWeapon", &USInventoryComponent::execPickUpWeapon },
		{ "WeaponInPickUpRange", &USInventoryComponent::execWeaponInPickUpRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USInventoryComponent);
UClass* Z_Construct_UClass_USInventoryComponent_NoRegister()
{
	return USInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_USInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerComponents/SInventoryComponent.h" },
		{ "ModuleRelativePath", "PlayerComponents/SInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "PlayerComponents/SInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectorRadius_MetaData[] = {
		{ "Category", "Detector" },
		{ "ModuleRelativePath", "PlayerComponents/SInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponObjectType_MetaData[] = {
		{ "Category", "Detector" },
		{ "ModuleRelativePath", "PlayerComponents/SInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectorRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponObjectType_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponObjectType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USInventoryComponent_DropCurrentWeapon, "DropCurrentWeapon" }, // 1503011976
		{ &Z_Construct_UFunction_USInventoryComponent_PickUpWeapon, "PickUpWeapon" }, // 1415005986
		{ &Z_Construct_UFunction_USInventoryComponent_WeaponInPickUpRange, "WeaponInPickUpRange" }, // 3128705628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USInventoryComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USInventoryComponent, EquippedWeapon), Z_Construct_UClass_ASBWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USInventoryComponent_Statics::NewProp_DetectorRadius = { "DetectorRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USInventoryComponent, DetectorRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectorRadius_MetaData), NewProp_DetectorRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USInventoryComponent_Statics::NewProp_WeaponObjectType_Inner = { "WeaponObjectType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USInventoryComponent_Statics::NewProp_WeaponObjectType = { "WeaponObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USInventoryComponent, WeaponObjectType), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponObjectType_MetaData), NewProp_WeaponObjectType_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInventoryComponent_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInventoryComponent_Statics::NewProp_DetectorRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInventoryComponent_Statics::NewProp_WeaponObjectType_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInventoryComponent_Statics::NewProp_WeaponObjectType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USInventoryComponent_Statics::ClassParams = {
	&USInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USInventoryComponent()
{
	if (!Z_Registration_Info_UClass_USInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USInventoryComponent.OuterSingleton, Z_Construct_UClass_USInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USInventoryComponent.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USInventoryComponent>()
{
	return USInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USInventoryComponent);
USInventoryComponent::~USInventoryComponent() {}
// End Class USInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USInventoryComponent, USInventoryComponent::StaticClass, TEXT("USInventoryComponent"), &Z_Registration_Info_UClass_USInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInventoryComponent), 1973043249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_1060925848(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
