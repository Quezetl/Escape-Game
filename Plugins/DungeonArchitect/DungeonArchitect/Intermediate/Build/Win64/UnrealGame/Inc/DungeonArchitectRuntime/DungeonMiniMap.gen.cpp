// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MiniMap/DungeonMiniMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMiniMap() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMiniMap_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMiniMap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMiniMapTrackedObject_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMiniMapTrackedObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonMiniMapIconCoordinateSystem;
	static UEnum* EDungeonMiniMapIconCoordinateSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDungeonMiniMapIconCoordinateSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDungeonMiniMapIconCoordinateSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonMiniMapIconCoordinateSystem"));
		}
		return Z_Registration_Info_UEnum_EDungeonMiniMapIconCoordinateSystem.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonMiniMapIconCoordinateSystem>()
	{
		return EDungeonMiniMapIconCoordinateSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics::Enumerators[] = {
		{ "EDungeonMiniMapIconCoordinateSystem::Pixels", (int64)EDungeonMiniMapIconCoordinateSystem::Pixels },
		{ "EDungeonMiniMapIconCoordinateSystem::WorldCoordinates", (int64)EDungeonMiniMapIconCoordinateSystem::WorldCoordinates },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
		{ "Pixels.DisplayName", "Pixels" },
		{ "Pixels.Name", "EDungeonMiniMapIconCoordinateSystem::Pixels" },
		{ "WorldCoordinates.DisplayName", "World Coordinates" },
		{ "WorldCoordinates.Name", "EDungeonMiniMapIconCoordinateSystem::WorldCoordinates" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EDungeonMiniMapIconCoordinateSystem",
		"EDungeonMiniMapIconCoordinateSystem",
		Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem()
	{
		if (!Z_Registration_Info_UEnum_EDungeonMiniMapIconCoordinateSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonMiniMapIconCoordinateSystem.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDungeonMiniMapIconCoordinateSystem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayIcon;
class UScriptStruct* FDungeonMiniMapOverlayIcon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayIcon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayIcon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonMiniMapOverlayIcon"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayIcon.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonMiniMapOverlayIcon>()
{
	return FDungeonMiniMapOverlayIcon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenSizeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSizeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScreenSizeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonMiniMapOverlayIcon>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayIcon, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayIcon, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayIcon, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSizeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSizeType_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSizeType = { "ScreenSizeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayIcon, ScreenSizeType), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonMiniMapIconCoordinateSystem, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSizeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSizeType_MetaData)) }; // 896938389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Tint_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayIcon, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayIcon, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSizeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_ScreenSizeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DungeonMiniMapOverlayIcon",
		sizeof(FDungeonMiniMapOverlayIcon),
		alignof(FDungeonMiniMapOverlayIcon),
		Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon()
	{
		if (!Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayIcon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayIcon.InnerSingleton, Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayIcon.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayTracking;
class UScriptStruct* FDungeonMiniMapOverlayTracking::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayTracking.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayTracking.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonMiniMapOverlayTracking"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayTracking.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonMiniMapOverlayTracking>()
{
	return FDungeonMiniMapOverlayTracking::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientToRotation_MetaData[];
#endif
		static void NewProp_bOrientToRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientToRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonMiniMapOverlayTracking>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_TrackedActor_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_TrackedActor = { "TrackedActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayTracking, TrackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_TrackedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_TrackedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayTracking, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_IconName_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMiniMapOverlayTracking, IconName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_IconName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_IconName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_bOrientToRotation_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_bOrientToRotation_SetBit(void* Obj)
	{
		((FDungeonMiniMapOverlayTracking*)Obj)->bOrientToRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_bOrientToRotation = { "bOrientToRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDungeonMiniMapOverlayTracking), &Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_bOrientToRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_bOrientToRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_bOrientToRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_TrackedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_IconName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewProp_bOrientToRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DungeonMiniMapOverlayTracking",
		sizeof(FDungeonMiniMapOverlayTracking),
		alignof(FDungeonMiniMapOverlayTracking),
		Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking()
	{
		if (!Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayTracking.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayTracking.InnerSingleton, Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayTracking.InnerSingleton;
	}
	DEFINE_FUNCTION(ADungeonMiniMap::execBuildLayout)
	{
		P_GET_OBJECT(UDungeonModel,Z_Param_DungeonModel);
		P_GET_OBJECT(UDungeonConfig,Z_Param_DungeonConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildLayout(Z_Param_DungeonModel,Z_Param_DungeonConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonMiniMap::execUpdateMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMaterial(Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonMiniMap::execCreateMaterialInstanceFromTemplate)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialTemplate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->CreateMaterialInstanceFromTemplate(Z_Param_InMaterialTemplate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonMiniMap::execCreateMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->CreateMaterialInstance();
		P_NATIVE_END;
	}
	void ADungeonMiniMap::StaticRegisterNativesADungeonMiniMap()
	{
		UClass* Class = ADungeonMiniMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildLayout", &ADungeonMiniMap::execBuildLayout },
			{ "CreateMaterialInstance", &ADungeonMiniMap::execCreateMaterialInstance },
			{ "CreateMaterialInstanceFromTemplate", &ADungeonMiniMap::execCreateMaterialInstanceFromTemplate },
			{ "UpdateMaterial", &ADungeonMiniMap::execUpdateMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics
	{
		struct DungeonMiniMap_eventBuildLayout_Parms
		{
			UDungeonModel* DungeonModel;
			UDungeonConfig* DungeonConfig;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonModel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::NewProp_DungeonModel = { "DungeonModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMiniMap_eventBuildLayout_Parms, DungeonModel), Z_Construct_UClass_UDungeonModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::NewProp_DungeonConfig = { "DungeonConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMiniMap_eventBuildLayout_Parms, DungeonConfig), Z_Construct_UClass_UDungeonConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::NewProp_DungeonModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::NewProp_DungeonConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonMiniMap, nullptr, "BuildLayout", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::DungeonMiniMap_eventBuildLayout_Parms), Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonMiniMap_BuildLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonMiniMap_BuildLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics
	{
		struct DungeonMiniMap_eventCreateMaterialInstance_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMiniMap_eventCreateMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonMiniMap, nullptr, "CreateMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::DungeonMiniMap_eventCreateMaterialInstance_Parms), Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics
	{
		struct DungeonMiniMap_eventCreateMaterialInstanceFromTemplate_Parms
		{
			UMaterialInterface* InMaterialTemplate;
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialTemplate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::NewProp_InMaterialTemplate = { "InMaterialTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMiniMap_eventCreateMaterialInstanceFromTemplate_Parms, InMaterialTemplate), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMiniMap_eventCreateMaterialInstanceFromTemplate_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::NewProp_InMaterialTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonMiniMap, nullptr, "CreateMaterialInstanceFromTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::DungeonMiniMap_eventCreateMaterialInstanceFromTemplate_Parms), Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics
	{
		struct DungeonMiniMap_eventUpdateMaterial_Parms
		{
			UMaterialInterface* InMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMiniMap_eventUpdateMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonMiniMap, nullptr, "UpdateMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::DungeonMiniMap_eventUpdateMaterial_Parms), Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonMiniMap);
	UClass* Z_Construct_UClass_ADungeonMiniMap_NoRegister()
	{
		return ADungeonMiniMap::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonMiniMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorThickness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayIcons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayIcons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialTemplate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicTracking_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTracking_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlurIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFogOfWar_MetaData[];
#endif
		static void NewProp_bEnableFogOfWar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFogOfWar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarTextureScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogOfWarTextureScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarTrackingItem_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FogOfWarTrackingItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarExploreTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FogOfWarExploreTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarVisiblityDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogOfWarVisiblityDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticOverlayTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticOverlayTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicOverlayTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicOverlayTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FogOfWarTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldToScreen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToScreen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonMiniMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeonMiniMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonMiniMap_BuildLayout, "BuildLayout" }, // 3238113152
		{ &Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstance, "CreateMaterialInstance" }, // 2410319041
		{ &Z_Construct_UFunction_ADungeonMiniMap_CreateMaterialInstanceFromTemplate, "CreateMaterialInstanceFromTemplate" }, // 2410039529
		{ &Z_Construct_UFunction_ADungeonMiniMap_UpdateMaterial, "UpdateMaterial" }, // 1433479876
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MiniMap/DungeonMiniMap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, TextureSize), METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OutlineThickness_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, OutlineThickness), METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OutlineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OutlineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DoorThickness_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DoorThickness = { "DoorThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, DoorThickness), METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DoorThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DoorThickness_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OverlayIcons_Inner = { "OverlayIcons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon, METADATA_PARAMS(nullptr, 0) }; // 1413027292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OverlayIcons_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OverlayIcons = { "OverlayIcons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, OverlayIcons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OverlayIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OverlayIcons_MetaData)) }; // 1413027292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaterialTemplate_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaterialTemplate = { "MaterialTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, MaterialTemplate), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaterialTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaterialTemplate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicTracking_Inner = { "DynamicTracking", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking, METADATA_PARAMS(nullptr, 0) }; // 4125819871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicTracking_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicTracking = { "DynamicTracking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, DynamicTracking), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicTracking_MetaData)) }; // 4125819871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurRadius_MetaData[] = {
		{ "Category", "MiniMap Blur Layer" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurRadius = { "BlurRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, BlurRadius), METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurIterations_MetaData[] = {
		{ "Category", "MiniMap Blur Layer" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurIterations = { "BlurIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, BlurIterations), METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_bEnableFogOfWar_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	void Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_bEnableFogOfWar_SetBit(void* Obj)
	{
		((ADungeonMiniMap*)Obj)->bEnableFogOfWar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_bEnableFogOfWar = { "bEnableFogOfWar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADungeonMiniMap), &Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_bEnableFogOfWar_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_bEnableFogOfWar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_bEnableFogOfWar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTextureScale_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "EditCondition", "bEnableFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTextureScale = { "FogOfWarTextureScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, FogOfWarTextureScale), METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTextureScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTrackingItem_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "EditCondition", "bEnableFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTrackingItem = { "FogOfWarTrackingItem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, FogOfWarTrackingItem), METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTrackingItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTrackingItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarExploreTexture_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "EditCondition", "bEnableFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarExploreTexture = { "FogOfWarExploreTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, FogOfWarExploreTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarExploreTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarExploreTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarVisiblityDistance_MetaData[] = {
		{ "Category", "Fog Of War" },
		{ "EditCondition", "bEnableFogOfWar" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarVisiblityDistance = { "FogOfWarVisiblityDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, FogOfWarVisiblityDistance), METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarVisiblityDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarVisiblityDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaskTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, MaskTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaskTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaskTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_StaticOverlayTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_StaticOverlayTexture = { "StaticOverlayTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, StaticOverlayTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_StaticOverlayTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_StaticOverlayTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicOverlayTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicOverlayTexture = { "DynamicOverlayTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, DynamicOverlayTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicOverlayTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicOverlayTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTexture = { "FogOfWarTexture", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, FogOfWarTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_WorldToScreen_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_WorldToScreen = { "WorldToScreen", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMiniMap, WorldToScreen), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_WorldToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_WorldToScreen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonMiniMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_TextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OutlineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DoorThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OverlayIcons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_OverlayIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaterialTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicTracking_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_BlurIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_bEnableFogOfWar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTextureScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTrackingItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarExploreTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarVisiblityDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_MaskTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_StaticOverlayTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_DynamicOverlayTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_FogOfWarTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMiniMap_Statics::NewProp_WorldToScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonMiniMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonMiniMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonMiniMap_Statics::ClassParams = {
		&ADungeonMiniMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADungeonMiniMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonMiniMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMiniMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonMiniMap()
	{
		if (!Z_Registration_Info_UClass_ADungeonMiniMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonMiniMap.OuterSingleton, Z_Construct_UClass_ADungeonMiniMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonMiniMap.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonMiniMap>()
	{
		return ADungeonMiniMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonMiniMap);
	void UDungeonMiniMapTrackedObject::StaticRegisterNativesUDungeonMiniMapTrackedObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonMiniMapTrackedObject);
	UClass* Z_Construct_UClass_UDungeonMiniMapTrackedObject_NoRegister()
	{
		return UDungeonMiniMapTrackedObject::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientToRotation_MetaData[];
#endif
		static void NewProp_bOrientToRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientToRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/MiniMap/DungeonMiniMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonMiniMapTrackedObject, Id), METADATA_PARAMS(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_IconName_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonMiniMapTrackedObject, IconName), METADATA_PARAMS(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_IconName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_IconName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_bOrientToRotation_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/Frameworks/MiniMap/DungeonMiniMap.h" },
	};
#endif
	void Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_bOrientToRotation_SetBit(void* Obj)
	{
		((UDungeonMiniMapTrackedObject*)Obj)->bOrientToRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_bOrientToRotation = { "bOrientToRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDungeonMiniMapTrackedObject), &Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_bOrientToRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_bOrientToRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_bOrientToRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_IconName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::NewProp_bOrientToRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonMiniMapTrackedObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::ClassParams = {
		&UDungeonMiniMapTrackedObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonMiniMapTrackedObject()
	{
		if (!Z_Registration_Info_UClass_UDungeonMiniMapTrackedObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonMiniMapTrackedObject.OuterSingleton, Z_Construct_UClass_UDungeonMiniMapTrackedObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonMiniMapTrackedObject.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonMiniMapTrackedObject>()
	{
		return UDungeonMiniMapTrackedObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonMiniMapTrackedObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::EnumInfo[] = {
		{ EDungeonMiniMapIconCoordinateSystem_StaticEnum, TEXT("EDungeonMiniMapIconCoordinateSystem"), &Z_Registration_Info_UEnum_EDungeonMiniMapIconCoordinateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 896938389U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::ScriptStructInfo[] = {
		{ FDungeonMiniMapOverlayIcon::StaticStruct, Z_Construct_UScriptStruct_FDungeonMiniMapOverlayIcon_Statics::NewStructOps, TEXT("DungeonMiniMapOverlayIcon"), &Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayIcon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonMiniMapOverlayIcon), 1413027292U) },
		{ FDungeonMiniMapOverlayTracking::StaticStruct, Z_Construct_UScriptStruct_FDungeonMiniMapOverlayTracking_Statics::NewStructOps, TEXT("DungeonMiniMapOverlayTracking"), &Z_Registration_Info_UScriptStruct_DungeonMiniMapOverlayTracking, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonMiniMapOverlayTracking), 4125819871U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonMiniMap, ADungeonMiniMap::StaticClass, TEXT("ADungeonMiniMap"), &Z_Registration_Info_UClass_ADungeonMiniMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonMiniMap), 984019076U) },
		{ Z_Construct_UClass_UDungeonMiniMapTrackedObject, UDungeonMiniMapTrackedObject::StaticClass, TEXT("UDungeonMiniMapTrackedObject"), &Z_Registration_Info_UClass_UDungeonMiniMapTrackedObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonMiniMapTrackedObject), 3896197386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_1601088760(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MiniMap_DungeonMiniMap_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
