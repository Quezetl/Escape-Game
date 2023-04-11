// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceableMarker() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerComponent_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_APlaceableMarkerActor_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_APlaceableMarkerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings;
class UScriptStruct* FPlaceableMarkerAssetSpriteSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("PlaceableMarkerAssetSpriteSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FPlaceableMarkerAssetSpriteSettings>()
{
	return FPlaceableMarkerAssetSpriteSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaceableMarkerAssetSpriteSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaceableMarkerAssetSpriteSettings, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_OffsetZ_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_OffsetZ = { "OffsetZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaceableMarkerAssetSpriteSettings, OffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_OffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_OffsetZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_OffsetZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"PlaceableMarkerAssetSpriteSettings",
		sizeof(FPlaceableMarkerAssetSpriteSettings),
		alignof(FPlaceableMarkerAssetSpriteSettings),
		Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.InnerSingleton, Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.InnerSingleton;
	}
	void UPlaceableMarkerAsset::StaticRegisterNativesUPlaceableMarkerAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaceableMarkerAsset);
	UClass* Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister()
	{
		return UPlaceableMarkerAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPlaceableMarkerAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSpriteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewSpriteSettings;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaceableMarkerAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableMarkerAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames_Inner = { "MarkerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames = { "MarkerNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceableMarkerAsset, MarkerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceableMarkerAsset, Version), METADATA_PARAMS(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_Version_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSprite_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** An editor-only sprite to attach to the placed actor. This is purely for visual purpose while designing your levels */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "ToolTip", "An editor-only sprite to attach to the placed actor. This is purely for visual purpose while designing your levels" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSprite = { "PreviewSprite", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceableMarkerAsset, PreviewSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSpriteSettings_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSpriteSettings = { "PreviewSpriteSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceableMarkerAsset, PreviewSpriteSettings), Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings, METADATA_PARAMS(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSpriteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSpriteSettings_MetaData)) }; // 2388095867
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaceableMarkerAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_Version,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSpriteSettings,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaceableMarkerAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceableMarkerAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::ClassParams = {
		&UPlaceableMarkerAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlaceableMarkerAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaceableMarkerAsset()
	{
		if (!Z_Registration_Info_UClass_UPlaceableMarkerAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaceableMarkerAsset.OuterSingleton, Z_Construct_UClass_UPlaceableMarkerAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaceableMarkerAsset.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UPlaceableMarkerAsset>()
	{
		return UPlaceableMarkerAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceableMarkerAsset);
	void UPlaceableMarkerComponent::StaticRegisterNativesUPlaceableMarkerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaceableMarkerComponent);
	UClass* Z_Construct_UClass_UPlaceableMarkerComponent_NoRegister()
	{
		return UPlaceableMarkerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlaceableMarkerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaceableMarkerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableMarkerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Place a marker on to the world.   If the theme engine picks this component up (which depends on the builder),\n * then it will spawn the objects defined in the theme file under the specified marker name\n */" },
		{ "HideCategories", "Rendering Input Actor Misc Replication Collision LOD Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "ToolTip", "Place a marker on to the world.   If the theme engine picks this component up (which depends on the builder),\nthen it will spawn the objects defined in the theme file under the specified marker name" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableMarkerComponent_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceableMarkerComponent_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceableMarkerComponent, MarkerAsset), Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::NewProp_MarkerAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaceableMarkerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerComponent_Statics::NewProp_MarkerAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaceableMarkerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceableMarkerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaceableMarkerComponent_Statics::ClassParams = {
		&UPlaceableMarkerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlaceableMarkerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaceableMarkerComponent()
	{
		if (!Z_Registration_Info_UClass_UPlaceableMarkerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaceableMarkerComponent.OuterSingleton, Z_Construct_UClass_UPlaceableMarkerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaceableMarkerComponent.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UPlaceableMarkerComponent>()
	{
		return UPlaceableMarkerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceableMarkerComponent);
	void APlaceableMarkerActor::StaticRegisterNativesAPlaceableMarkerActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaceableMarkerActor);
	UClass* Z_Construct_UClass_APlaceableMarkerActor_NoRegister()
	{
		return APlaceableMarkerActor::StaticClass();
	}
	struct Z_Construct_UClass_APlaceableMarkerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableMarkerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceableMarkerComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaceableMarkerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableMarkerActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Input Actor Misc Replication Collision LOD Cooking" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_PlaceableMarkerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_PlaceableMarkerComponent = { "PlaceableMarkerComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlaceableMarkerActor, PlaceableMarkerComponent), Z_Construct_UClass_UPlaceableMarkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_PlaceableMarkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_PlaceableMarkerComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlaceableMarkerActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000800082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlaceableMarkerActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlaceableMarkerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_PlaceableMarkerComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaceableMarkerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaceableMarkerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaceableMarkerActor_Statics::ClassParams = {
		&APlaceableMarkerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlaceableMarkerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlaceableMarkerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaceableMarkerActor()
	{
		if (!Z_Registration_Info_UClass_APlaceableMarkerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaceableMarkerActor.OuterSingleton, Z_Construct_UClass_APlaceableMarkerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlaceableMarkerActor.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<APlaceableMarkerActor>()
	{
		return APlaceableMarkerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaceableMarkerActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ScriptStructInfo[] = {
		{ FPlaceableMarkerAssetSpriteSettings::StaticStruct, Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewStructOps, TEXT("PlaceableMarkerAssetSpriteSettings"), &Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaceableMarkerAssetSpriteSettings), 2388095867U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlaceableMarkerAsset, UPlaceableMarkerAsset::StaticClass, TEXT("UPlaceableMarkerAsset"), &Z_Registration_Info_UClass_UPlaceableMarkerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaceableMarkerAsset), 827925928U) },
		{ Z_Construct_UClass_UPlaceableMarkerComponent, UPlaceableMarkerComponent::StaticClass, TEXT("UPlaceableMarkerComponent"), &Z_Registration_Info_UClass_UPlaceableMarkerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaceableMarkerComponent), 3477065605U) },
		{ Z_Construct_UClass_APlaceableMarkerActor, APlaceableMarkerActor::StaticClass, TEXT("APlaceableMarkerActor"), &Z_Registration_Info_UClass_APlaceableMarkerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaceableMarkerActor), 3634270465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_2826792392(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
