// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Borne/PlayerComponents/DetectorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectorComponent() {}

// Begin Cross Module References
BORNE_API UClass* Z_Construct_UClass_UDetectorComponent();
BORNE_API UClass* Z_Construct_UClass_UDetectorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_Borne();
// End Cross Module References

// Begin Class UDetectorComponent
void UDetectorComponent::StaticRegisterNativesUDetectorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetectorComponent);
UClass* Z_Construct_UClass_UDetectorComponent_NoRegister()
{
	return UDetectorComponent::StaticClass();
}
struct Z_Construct_UClass_UDetectorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerComponents/DetectorComponent.h" },
		{ "ModuleRelativePath", "PlayerComponents/DetectorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectorRadius_MetaData[] = {
		{ "Category", "Detector" },
		{ "ModuleRelativePath", "PlayerComponents/DetectorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Detector" },
		{ "ModuleRelativePath", "PlayerComponents/DetectorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectorRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDetectorComponent_Statics::NewProp_DetectorRadius = { "DetectorRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetectorComponent, DetectorRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectorRadius_MetaData), NewProp_DetectorRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDetectorComponent_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetectorComponent, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetectorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectorComponent_Statics::NewProp_DetectorRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectorComponent_Statics::NewProp_CollisionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDetectorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Borne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetectorComponent_Statics::ClassParams = {
	&UDetectorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDetectorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDetectorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDetectorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDetectorComponent()
{
	if (!Z_Registration_Info_UClass_UDetectorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetectorComponent.OuterSingleton, Z_Construct_UClass_UDetectorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDetectorComponent.OuterSingleton;
}
template<> BORNE_API UClass* StaticClass<UDetectorComponent>()
{
	return UDetectorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectorComponent);
UDetectorComponent::~UDetectorComponent() {}
// End Class UDetectorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_DetectorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDetectorComponent, UDetectorComponent::StaticClass, TEXT("UDetectorComponent"), &Z_Registration_Info_UClass_UDetectorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetectorComponent), 3810749842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_DetectorComponent_h_1545425023(TEXT("/Script/Borne"),
	Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_DetectorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Borne_Source_Borne_PlayerComponents_DetectorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
