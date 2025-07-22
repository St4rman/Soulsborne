// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/PlayerComponents/SHUDComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHUDComponent() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UPlayerHUD_NoRegister();
BORNE_API UClass* Z_Construct_UClass_USHUDComponent();
BORNE_API UClass* Z_Construct_UClass_USHUDComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class USHUDComponent Function SetHealth
struct Z_Construct_UFunction_USHUDComponent_SetHealth_Statics
{
	struct SHUDComponent_eventSetHealth_Parms
	{
		float Health;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerComponents/SHUDComponent.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SHUDComponent_eventSetHealth_Parms, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SHUDComponent_eventSetHealth_Parms, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHUDComponent, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::SHUDComponent_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::SHUDComponent_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USHUDComponent_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHUDComponent_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USHUDComponent::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_Health,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// End Class USHUDComponent Function SetHealth

// Begin Class USHUDComponent Function SetMeleeIcon
struct Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics
{
	struct SHUDComponent_eventSetMeleeIcon_Parms
	{
		UTexture2D* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerComponents/SHUDComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SHUDComponent_eventSetMeleeIcon_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHUDComponent, nullptr, "SetMeleeIcon", nullptr, nullptr, Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::SHUDComponent_eventSetMeleeIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::SHUDComponent_eventSetMeleeIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USHUDComponent_SetMeleeIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHUDComponent_SetMeleeIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USHUDComponent::execSetMeleeIcon)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeleeIcon(Z_Param_Texture);
	P_NATIVE_END;
}
// End Class USHUDComponent Function SetMeleeIcon

// Begin Class USHUDComponent Function SetStamina
struct Z_Construct_UFunction_USHUDComponent_SetStamina_Statics
{
	struct SHUDComponent_eventSetStamina_Parms
	{
		float Stamina;
		float MaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerComponents/SHUDComponent.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SHUDComponent_eventSetStamina_Parms, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SHUDComponent_eventSetStamina_Parms, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHUDComponent, nullptr, "SetStamina", nullptr, nullptr, Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::SHUDComponent_eventSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::SHUDComponent_eventSetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USHUDComponent_SetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHUDComponent_SetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USHUDComponent::execSetStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStamina(Z_Param_Stamina,Z_Param_MaxStamina);
	P_NATIVE_END;
}
// End Class USHUDComponent Function SetStamina

// Begin Class USHUDComponent
void USHUDComponent::StaticRegisterNativesUSHUDComponent()
{
	UClass* Class = USHUDComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealth", &USHUDComponent::execSetHealth },
		{ "SetMeleeIcon", &USHUDComponent::execSetMeleeIcon },
		{ "SetStamina", &USHUDComponent::execSetStamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHUDComponent);
UClass* Z_Construct_UClass_USHUDComponent_NoRegister()
{
	return USHUDComponent::StaticClass();
}
struct Z_Construct_UClass_USHUDComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerComponents/SHUDComponent.h" },
		{ "ModuleRelativePath", "PlayerComponents/SHUDComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDClass_MetaData[] = {
		{ "Category", "SHUDComponent" },
		{ "ModuleRelativePath", "PlayerComponents/SHUDComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUD_MetaData[] = {
		{ "Category", "SHUDComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerComponents/SHUDComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USHUDComponent_SetHealth, "SetHealth" }, // 1039324302
		{ &Z_Construct_UFunction_USHUDComponent_SetMeleeIcon, "SetMeleeIcon" }, // 1892680031
		{ &Z_Construct_UFunction_USHUDComponent_SetStamina, "SetStamina" }, // 576948195
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHUDComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USHUDComponent_Statics::NewProp_PlayerHUDClass = { "PlayerHUDClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USHUDComponent, PlayerHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHUDClass_MetaData), NewProp_PlayerHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USHUDComponent_Statics::NewProp_PlayerHUD = { "PlayerHUD", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USHUDComponent, PlayerHUD), Z_Construct_UClass_UPlayerHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHUD_MetaData), NewProp_PlayerHUD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHUDComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHUDComponent_Statics::NewProp_PlayerHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHUDComponent_Statics::NewProp_PlayerHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USHUDComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USHUDComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USHUDComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USHUDComponent_Statics::ClassParams = {
	&USHUDComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USHUDComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USHUDComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USHUDComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USHUDComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USHUDComponent()
{
	if (!Z_Registration_Info_UClass_USHUDComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHUDComponent.OuterSingleton, Z_Construct_UClass_USHUDComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USHUDComponent.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<USHUDComponent>()
{
	return USHUDComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USHUDComponent);
USHUDComponent::~USHUDComponent() {}
// End Class USHUDComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USHUDComponent, USHUDComponent::StaticClass, TEXT("USHUDComponent"), &Z_Registration_Info_UClass_USHUDComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHUDComponent), 1766106097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_2432409852(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_SHUDComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
