// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/BorneCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBorneCharacter() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_ABorneCharacter();
BORNE_API UClass* Z_Construct_UClass_ABorneCharacter_NoRegister();
BORNE_API UClass* Z_Construct_UClass_UCamMoveComponent_NoRegister();
BORNE_API UClass* Z_Construct_UClass_UDetectorComponent_NoRegister();
BORNE_API UEnum* Z_Construct_UEnum_Borne_ELocomotionMode();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

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
		{ "L_Free.DisplayName", "Free" },
		{ "L_Free.Name", "L_Free" },
		{ "L_Free.ToolTip", "Free, normal locomotion" },
		{ "L_InCombat.DisplayName", "Locked - In Combat" },
		{ "L_InCombat.Name", "L_InCombat" },
		{ "L_InCombat.Tooltip", "Locked to target, IN COMBAT. Changes movement" },
		{ "L_Locked.DisplayName", "Locked - normal" },
		{ "L_Locked.Name", "L_Locked" },
		{ "L_Locked.Tooltip", "Locked, to targets when not in combat" },
		{ "ModuleRelativePath", "BorneCharacter.h" },
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

// Begin Class ABorneCharacter Function GetCurrentLocomotionMode
struct Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics
{
	struct BorneCharacter_eventGetCurrentLocomotionMode_Parms
	{
		TEnumAsByte<ELocomotionMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BorneCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BorneCharacter_eventGetCurrentLocomotionMode_Parms, ReturnValue), Z_Construct_UEnum_Borne_ELocomotionMode, METADATA_PARAMS(0, nullptr) }; // 2669941529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABorneCharacter, nullptr, "GetCurrentLocomotionMode", nullptr, nullptr, Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::BorneCharacter_eventGetCurrentLocomotionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::BorneCharacter_eventGetCurrentLocomotionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABorneCharacter::execGetCurrentLocomotionMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ELocomotionMode>*)Z_Param__Result=P_THIS->GetCurrentLocomotionMode();
	P_NATIVE_END;
}
// End Class ABorneCharacter Function GetCurrentLocomotionMode

// Begin Class ABorneCharacter
void ABorneCharacter::StaticRegisterNativesABorneCharacter()
{
	UClass* Class = ABorneCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentLocomotionMode", &ABorneCharacter::execGetCurrentLocomotionMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABorneCharacter);
UClass* Z_Construct_UClass_ABorneCharacter_NoRegister()
{
	return ABorneCharacter::StaticClass();
}
struct Z_Construct_UClass_ABorneCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BorneCharacter.h" },
		{ "ModuleRelativePath", "BorneCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Detect Enemy Action */" },
#endif
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detect Enemy Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Roll action for dodging*/" },
#endif
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Roll action for dodging" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyDetector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Detector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Detection */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BorneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraHandlerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Detector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BorneCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyDetector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraHandlerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABorneCharacter_GetCurrentLocomotionMode, "GetCurrentLocomotionMode" }, // 254126133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABorneCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_DetectAction = { "DetectAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, DetectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectAction_MetaData), NewProp_DetectAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_RollAction = { "RollAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, RollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollAction_MetaData), NewProp_RollAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_EnemyDetector = { "EnemyDetector", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, EnemyDetector), Z_Construct_UClass_UDetectorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyDetector_MetaData), NewProp_EnemyDetector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorneCharacter_Statics::NewProp_CameraHandlerComponent = { "CameraHandlerComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABorneCharacter, CameraHandlerComponent), Z_Construct_UClass_UCamMoveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraHandlerComponent_MetaData), NewProp_CameraHandlerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABorneCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_DetectAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_RollAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_EnemyDetector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorneCharacter_Statics::NewProp_CameraHandlerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABorneCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABorneCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABorneCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABorneCharacter_Statics::ClassParams = {
	&ABorneCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABorneCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABorneCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABorneCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABorneCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABorneCharacter()
{
	if (!Z_Registration_Info_UClass_ABorneCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABorneCharacter.OuterSingleton, Z_Construct_UClass_ABorneCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABorneCharacter.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<ABorneCharacter>()
{
	return ABorneCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABorneCharacter);
ABorneCharacter::~ABorneCharacter() {}
// End Class ABorneCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocomotionMode_StaticEnum, TEXT("ELocomotionMode"), &Z_Registration_Info_UEnum_ELocomotionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2669941529U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABorneCharacter, ABorneCharacter::StaticClass, TEXT("ABorneCharacter"), &Z_Registration_Info_UClass_ABorneCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABorneCharacter), 682351792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneCharacter_h_2223738005(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_BorneCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
