// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/PlayerComponents/CamMoveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamMoveComponent() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UCamMoveComponent();
BORNE_API UClass* Z_Construct_UClass_UCamMoveComponent_NoRegister();
BORNE_API UEnum* Z_Construct_UEnum_Borne_CameraState();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Enum CameraState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CameraState;
static UEnum* CameraState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CameraState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CameraState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Borne_CameraState, (UObject*)Z_Construct_UPackage__Script_Borne(), TEXT("CameraState"));
	}
	return Z_Registration_Info_UEnum_CameraState.OuterSingleton;
}
template<> BORNE_API UEnum* StaticEnum<CameraState>()
{
	return CameraState_StaticEnum();
}
struct Z_Construct_UEnum_Borne_CameraState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Free.DisplayName", "Free" },
		{ "Free.Name", "Free" },
		{ "Locked.DisplayName", "Locked" },
		{ "Locked.Name", "Locked" },
		{ "ModuleRelativePath", "PlayerComponents/CamMoveComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Free", (int64)Free },
		{ "Locked", (int64)Locked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Borne_CameraState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Borne,
	nullptr,
	"CameraState",
	"CameraState",
	Z_Construct_UEnum_Borne_CameraState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Borne_CameraState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Borne_CameraState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Borne_CameraState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Borne_CameraState()
{
	if (!Z_Registration_Info_UEnum_CameraState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CameraState.InnerSingleton, Z_Construct_UEnum_Borne_CameraState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CameraState.InnerSingleton;
}
// End Enum CameraState

// Begin Class UCamMoveComponent
void UCamMoveComponent::StaticRegisterNativesUCamMoveComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCamMoveComponent);
UClass* Z_Construct_UClass_UCamMoveComponent_NoRegister()
{
	return UCamMoveComponent::StaticClass();
}
struct Z_Construct_UClass_UCamMoveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerComponents/CamMoveComponent.h" },
		{ "ModuleRelativePath", "PlayerComponents/CamMoveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnTarget_MetaData[] = {
		{ "ModuleRelativePath", "PlayerComponents/CamMoveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerComponents/CamMoveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerComponents/CamMoveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatPitch_MetaData[] = {
		{ "Category", "Combat Cameras" },
		{ "ModuleRelativePath", "PlayerComponents/CamMoveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatLength_MetaData[] = {
		{ "Category", "Combat Cameras" },
		{ "ModuleRelativePath", "PlayerComponents/CamMoveComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamMoveComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_LockOnTarget = { "LockOnTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCamMoveComponent, LockOnTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnTarget_MetaData), NewProp_LockOnTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_PlayerCameraComp = { "PlayerCameraComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCamMoveComponent, PlayerCameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCameraComp_MetaData), NewProp_PlayerCameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCamMoveComponent, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_CombatPitch = { "CombatPitch", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCamMoveComponent, CombatPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatPitch_MetaData), NewProp_CombatPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_CombatLength = { "CombatLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCamMoveComponent, CombatLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatLength_MetaData), NewProp_CombatLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCamMoveComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_LockOnTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_PlayerCameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_CombatPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamMoveComponent_Statics::NewProp_CombatLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCamMoveComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCamMoveComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCamMoveComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCamMoveComponent_Statics::ClassParams = {
	&UCamMoveComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCamMoveComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCamMoveComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCamMoveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCamMoveComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCamMoveComponent()
{
	if (!Z_Registration_Info_UClass_UCamMoveComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCamMoveComponent.OuterSingleton, Z_Construct_UClass_UCamMoveComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCamMoveComponent.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UCamMoveComponent>()
{
	return UCamMoveComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCamMoveComponent);
UCamMoveComponent::~UCamMoveComponent() {}
// End Class UCamMoveComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ CameraState_StaticEnum, TEXT("CameraState"), &Z_Registration_Info_UEnum_CameraState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3399523276U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCamMoveComponent, UCamMoveComponent::StaticClass, TEXT("UCamMoveComponent"), &Z_Registration_Info_UClass_UCamMoveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCamMoveComponent), 2194207667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_1092457931(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
