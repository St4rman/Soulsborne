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

// Begin Class USInventoryComponent Function SetCurrentEquippedWeapon
struct Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics
{
	struct SInventoryComponent_eventSetCurrentEquippedWeapon_Parms
	{
		ASBWeaponBase* NewWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "PlayerComponents/SInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SInventoryComponent_eventSetCurrentEquippedWeapon_Parms, NewWeapon), Z_Construct_UClass_ASBWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USInventoryComponent, nullptr, "SetCurrentEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::SInventoryComponent_eventSetCurrentEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::SInventoryComponent_eventSetCurrentEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USInventoryComponent::execSetCurrentEquippedWeapon)
{
	P_GET_OBJECT(ASBWeaponBase,Z_Param_NewWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentEquippedWeapon(Z_Param_NewWeapon);
	P_NATIVE_END;
}
// End Class USInventoryComponent Function SetCurrentEquippedWeapon

// Begin Class USInventoryComponent
void USInventoryComponent::StaticRegisterNativesUSInventoryComponent()
{
	UClass* Class = USInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropCurrentWeapon", &USInventoryComponent::execDropCurrentWeapon },
		{ "SetCurrentEquippedWeapon", &USInventoryComponent::execSetCurrentEquippedWeapon },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USInventoryComponent_DropCurrentWeapon, "DropCurrentWeapon" }, // 1503011976
		{ &Z_Construct_UFunction_USInventoryComponent_SetCurrentEquippedWeapon, "SetCurrentEquippedWeapon" }, // 3674489307
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USInventoryComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USInventoryComponent, EquippedWeapon), Z_Construct_UClass_ASBWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USInventoryComponent_Statics::NewProp_EquippedWeapon,
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
		{ Z_Construct_UClass_USInventoryComponent, USInventoryComponent::StaticClass, TEXT("USInventoryComponent"), &Z_Registration_Info_UClass_USInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInventoryComponent), 2924313882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_1981973206(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
