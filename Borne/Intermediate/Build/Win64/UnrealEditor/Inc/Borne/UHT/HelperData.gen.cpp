// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/Core/HelperData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelperData() {}

// Begin Cross Module References
BORNE_API UEnum* Z_Construct_UEnum_Borne_ECameraState();
BORNE_API UEnum* Z_Construct_UEnum_Borne_ELocomotionMode();
BORNE_API UEnum* Z_Construct_UEnum_Borne_ESoulsAbilityInputID();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Enum ESoulsAbilityInputID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoulsAbilityInputID;
static UEnum* ESoulsAbilityInputID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoulsAbilityInputID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoulsAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Borne_ESoulsAbilityInputID, (UObject*)Z_Construct_UPackage__Script_Borne(), TEXT("ESoulsAbilityInputID"));
	}
	return Z_Registration_Info_UEnum_ESoulsAbilityInputID.OuterSingleton;
}
template<> BORNE_API UEnum* StaticEnum<ESoulsAbilityInputID>()
{
	return ESoulsAbilityInputID_StaticEnum();
}
struct Z_Construct_UEnum_Borne_ESoulsAbilityInputID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Name", "ESoulsAbilityInputID::Attack" },
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "ESoulsAbilityInputID::Cancel" },
		{ "Confirm.Name", "ESoulsAbilityInputID::Confirm" },
		{ "ModuleRelativePath", "Core/HelperData.h" },
		{ "None.Name", "ESoulsAbilityInputID::None" },
		{ "Roll.Name", "ESoulsAbilityInputID::Roll" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESoulsAbilityInputID::None", (int64)ESoulsAbilityInputID::None },
		{ "ESoulsAbilityInputID::Confirm", (int64)ESoulsAbilityInputID::Confirm },
		{ "ESoulsAbilityInputID::Cancel", (int64)ESoulsAbilityInputID::Cancel },
		{ "ESoulsAbilityInputID::Roll", (int64)ESoulsAbilityInputID::Roll },
		{ "ESoulsAbilityInputID::Attack", (int64)ESoulsAbilityInputID::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Borne_ESoulsAbilityInputID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Borne,
	nullptr,
	"ESoulsAbilityInputID",
	"ESoulsAbilityInputID",
	Z_Construct_UEnum_Borne_ESoulsAbilityInputID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Borne_ESoulsAbilityInputID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Borne_ESoulsAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Borne_ESoulsAbilityInputID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Borne_ESoulsAbilityInputID()
{
	if (!Z_Registration_Info_UEnum_ESoulsAbilityInputID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoulsAbilityInputID.InnerSingleton, Z_Construct_UEnum_Borne_ESoulsAbilityInputID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoulsAbilityInputID.InnerSingleton;
}
// End Enum ESoulsAbilityInputID

// Begin Enum ELocomotionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocomotionMode;
static UEnum* ELocomotionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocomotionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocomotionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Borne_ELocomotionMode, (UObject*)Z_Construct_UPackage__Script_Borne(), TEXT("ELocomotionMode"));
	}
	return Z_Registration_Info_UEnum_ELocomotionMode.OuterSingleton;
}
template<> BORNE_API UEnum* StaticEnum<ELocomotionMode>()
{
	return ELocomotionMode_StaticEnum();
}
struct Z_Construct_UEnum_Borne_ELocomotionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum to track player locomotion, to be used incase locking without comabt.\n */" },
#endif
		{ "L_Free.DisplayName", "Free" },
		{ "L_Free.Name", "L_Free" },
		{ "L_Free.ToolTip", "Free, normal locomotion" },
		{ "L_InCombat.DisplayName", "Locked - In Combat" },
		{ "L_InCombat.Name", "L_InCombat" },
		{ "L_InCombat.Tooltip", "Locked to target, IN COMBAT. Changes movement" },
		{ "L_Locked.DisplayName", "Locked - normal" },
		{ "L_Locked.Name", "L_Locked" },
		{ "L_Locked.Tooltip", "Locked, to targets when not in combat" },
		{ "ModuleRelativePath", "Core/HelperData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to track player locomotion, to be used incase locking without comabt." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "L_Free", (int64)L_Free },
		{ "L_Locked", (int64)L_Locked },
		{ "L_InCombat", (int64)L_InCombat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Borne_ELocomotionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Borne,
	nullptr,
	"ELocomotionMode",
	"ELocomotionMode",
	Z_Construct_UEnum_Borne_ELocomotionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Borne_ELocomotionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Borne_ELocomotionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Borne_ELocomotionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Borne_ELocomotionMode()
{
	if (!Z_Registration_Info_UEnum_ELocomotionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocomotionMode.InnerSingleton, Z_Construct_UEnum_Borne_ELocomotionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocomotionMode.InnerSingleton;
}
// End Enum ELocomotionMode

// Begin Enum ECameraState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraState;
static UEnum* ECameraState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Borne_ECameraState, (UObject*)Z_Construct_UPackage__Script_Borne(), TEXT("ECameraState"));
	}
	return Z_Registration_Info_UEnum_ECameraState.OuterSingleton;
}
template<> BORNE_API UEnum* StaticEnum<ECameraState>()
{
	return ECameraState_StaticEnum();
}
struct Z_Construct_UEnum_Borne_ECameraState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum for camera state.\n */" },
#endif
		{ "Free.DisplayName", "Free" },
		{ "Free.Name", "Free" },
		{ "Locked.DisplayName", "Locked" },
		{ "Locked.Name", "Locked" },
		{ "ModuleRelativePath", "Core/HelperData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum for camera state." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Free", (int64)Free },
		{ "Locked", (int64)Locked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Borne_ECameraState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Borne,
	nullptr,
	"ECameraState",
	"ECameraState",
	Z_Construct_UEnum_Borne_ECameraState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Borne_ECameraState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Borne_ECameraState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Borne_ECameraState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Borne_ECameraState()
{
	if (!Z_Registration_Info_UEnum_ECameraState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraState.InnerSingleton, Z_Construct_UEnum_Borne_ECameraState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraState.InnerSingleton;
}
// End Enum ECameraState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_Core_HelperData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESoulsAbilityInputID_StaticEnum, TEXT("ESoulsAbilityInputID"), &Z_Registration_Info_UEnum_ESoulsAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2896397640U) },
		{ ELocomotionMode_StaticEnum, TEXT("ELocomotionMode"), &Z_Registration_Info_UEnum_ELocomotionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2571520345U) },
		{ ECameraState_StaticEnum, TEXT("ECameraState"), &Z_Registration_Info_UEnum_ECameraState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4218898129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_Core_HelperData_h_3967080373(TEXT("/Script/Borne"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_Core_HelperData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_Core_HelperData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
