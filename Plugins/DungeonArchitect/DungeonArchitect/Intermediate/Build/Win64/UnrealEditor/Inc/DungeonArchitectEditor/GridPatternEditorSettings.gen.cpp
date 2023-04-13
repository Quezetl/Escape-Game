// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPatternEditorSettings() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGGridPatternEditorSettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGGridPatternEditorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors;
class UScriptStruct* FMGGridPatternGroundMeshItemColors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("MGGridPatternGroundMeshItemColors"));
	}
	return Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FMGGridPatternGroundMeshItemColors>()
{
	return FMGGridPatternGroundMeshItemColors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverBodyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoverBodyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverBorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoverBorderColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMGGridPatternGroundMeshItemColors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BodyColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BodyColor = { "BodyColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternGroundMeshItemColors, BodyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BodyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BodyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternGroundMeshItemColors, BorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBodyColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBodyColor = { "HoverBodyColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternGroundMeshItemColors, HoverBodyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBodyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBodyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBorderColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBorderColor = { "HoverBorderColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternGroundMeshItemColors, HoverBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBorderColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BodyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBodyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBorderColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"MGGridPatternGroundMeshItemColors",
		sizeof(FMGGridPatternGroundMeshItemColors),
		alignof(FMGGridPatternGroundMeshItemColors),
		Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors()
	{
		if (!Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.InnerSingleton, Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings;
class UScriptStruct* FMGGridPatternEdGroundSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("MGGridPatternEdGroundSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FMGGridPatternEdGroundSettings>()
{
	return FMGGridPatternEdGroundSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverBorderThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverBorderThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverAnimationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverAnimationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CornerColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMGGridPatternEdGroundSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, Start), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_End_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, End), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, TileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeSize_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeSize = { "EdgeSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, EdgeSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_BorderThickness_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_BorderThickness = { "BorderThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, BorderThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_BorderThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_BorderThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverBorderThickness_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverBorderThickness = { "HoverBorderThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, HoverBorderThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverBorderThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverBorderThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimationTime_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimationTime = { "HoverAnimationTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, HoverAnimationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimation_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimation = { "HoverAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, HoverAnimation), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_GroundColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_GroundColor = { "GroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, GroundColor), Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_GroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_GroundColor_MetaData)) }; // 1424014086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeColor = { "EdgeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, EdgeColor), Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeColor_MetaData)) }; // 1424014086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_CornerColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_CornerColor = { "CornerColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, CornerColor), Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_CornerColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_CornerColor_MetaData)) }; // 1424014086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_BorderThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverBorderThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_GroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_CornerColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"MGGridPatternEdGroundSettings",
		sizeof(FMGGridPatternEdGroundSettings),
		alignof(FMGGridPatternEdGroundSettings),
		Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.InnerSingleton, Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.InnerSingleton;
	}
	void UMGGridPatternEditorSettings::StaticRegisterNativesUMGGridPatternEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGGridPatternEditorSettings);
	UClass* Z_Construct_UClass_UMGGridPatternEditorSettings_NoRegister()
	{
		return UMGGridPatternEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMGGridPatternEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::NewProp_GroundSettings_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::NewProp_GroundSettings = { "GroundSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGGridPatternEditorSettings, GroundSettings), Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings, METADATA_PARAMS(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::NewProp_GroundSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::NewProp_GroundSettings_MetaData)) }; // 4191084123
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::NewProp_GroundSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGGridPatternEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::ClassParams = {
		&UMGGridPatternEditorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGGridPatternEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UMGGridPatternEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGGridPatternEditorSettings.OuterSingleton, Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGGridPatternEditorSettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGGridPatternEditorSettings>()
	{
		return UMGGridPatternEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGGridPatternEditorSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FMGGridPatternGroundMeshItemColors::StaticStruct, Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewStructOps, TEXT("MGGridPatternGroundMeshItemColors"), &Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMGGridPatternGroundMeshItemColors), 1424014086U) },
		{ FMGGridPatternEdGroundSettings::StaticStruct, Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewStructOps, TEXT("MGGridPatternEdGroundSettings"), &Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMGGridPatternEdGroundSettings), 4191084123U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGGridPatternEditorSettings, UMGGridPatternEditorSettings::StaticClass, TEXT("UMGGridPatternEditorSettings"), &Z_Registration_Info_UClass_UMGGridPatternEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGGridPatternEditorSettings), 2620065626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_2084665507(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
