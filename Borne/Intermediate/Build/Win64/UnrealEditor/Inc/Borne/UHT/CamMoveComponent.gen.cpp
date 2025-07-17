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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UCamMoveComponent Function GetLockedOn
struct Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics
{
	struct CamMoveComponent_eventGetLockedOn_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerComponents/CamMoveComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CamMoveComponent_eventGetLockedOn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamMoveComponent, nullptr, "GetLockedOn", nullptr, nullptr, Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::CamMoveComponent_eventGetLockedOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::CamMoveComponent_eventGetLockedOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCamMoveComponent_GetLockedOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCamMoveComponent_GetLockedOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCamMoveComponent::execGetLockedOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetLockedOn();
	P_NATIVE_END;
}
// End Class UCamMoveComponent Function GetLockedOn

// Begin Class UCamMoveComponent
void UCamMoveComponent::StaticRegisterNativesUCamMoveComponent()
{
	UClass* Class = UCamMoveComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLockedOn", &UCamMoveComponent::execGetLockedOn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCamMoveComponent_GetLockedOn, "GetLockedOn" }, // 2589479833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UCamMoveComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCamMoveComponent, UCamMoveComponent::StaticClass, TEXT("UCamMoveComponent"), &Z_Registration_Info_UClass_UCamMoveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCamMoveComponent), 1965653506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_3848071756(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_CamMoveComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
