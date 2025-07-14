// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/SUI/PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UPlayerHUD();
BORNE_API UClass* Z_Construct_UClass_UPlayerHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UPlayerHUD Function SetHealth
struct Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics
{
	struct PlayerHUD_eventSetHealth_Parms
	{
		float Health;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SUI/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHUD_eventSetHealth_Parms, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHUD_eventSetHealth_Parms, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PlayerHUD_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PlayerHUD_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerHUD_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUD::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_Health,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// End Class UPlayerHUD Function SetHealth

// Begin Class UPlayerHUD Function SetStamina
struct Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics
{
	struct PlayerHUD_eventSetStamina_Parms
	{
		float Stamina;
		float MaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SUI/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHUD_eventSetStamina_Parms, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHUD_eventSetStamina_Parms, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "SetStamina", nullptr, nullptr, Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::PlayerHUD_eventSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::PlayerHUD_eventSetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerHUD_SetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_SetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUD::execSetStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStamina(Z_Param_Stamina,Z_Param_MaxStamina);
	P_NATIVE_END;
}
// End Class UPlayerHUD Function SetStamina

// Begin Class UPlayerHUD
void UPlayerHUD::StaticRegisterNativesUPlayerHUD()
{
	UClass* Class = UPlayerHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealth", &UPlayerHUD::execSetHealth },
		{ "SetStamina", &UPlayerHUD::execSetStamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUD);
UClass* Z_Construct_UClass_UPlayerHUD_NoRegister()
{
	return UPlayerHUD::StaticClass();
}
struct Z_Construct_UClass_UPlayerHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SUI/PlayerHUD.h" },
		{ "ModuleRelativePath", "SUI/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SUI/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SUI/PlayerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUD_SetHealth, "SetHealth" }, // 3907579355
		{ &Z_Construct_UFunction_UPlayerHUD_SetStamina, "SetStamina" }, // 968323183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_StaminaBar = { "StaminaBar", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, StaminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaBar_MetaData), NewProp_StaminaBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_StaminaBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUD_Statics::ClassParams = {
	&UPlayerHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerHUD()
{
	if (!Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton, Z_Construct_UClass_UPlayerHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UPlayerHUD>()
{
	return UPlayerHUD::StaticClass();
}
UPlayerHUD::UPlayerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUD);
UPlayerHUD::~UPlayerHUD() {}
// End Class UPlayerHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_SUI_PlayerHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUD, UPlayerHUD::StaticClass, TEXT("UPlayerHUD"), &Z_Registration_Info_UClass_UPlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUD), 1461032945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_SUI_PlayerHUD_h_1681000865(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_SUI_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_SUI_PlayerHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
