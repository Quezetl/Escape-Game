// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTilemapTaskCreateElevations() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskCreateElevations_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskCreateElevations();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UFlowTilemapTaskCreateElevations::StaticRegisterNativesUFlowTilemapTaskCreateElevations()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemapTaskCreateElevations);
	UClass* Z_Construct_UClass_UFlowTilemapTaskCreateElevations_NoRegister()
	{
		return UFlowTilemapTaskCreateElevations::StaticClass();
	}
	struct Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseOctaves_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NoiseOctaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseValuePower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseValuePower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeaColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeaColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinColorMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinColorMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseOctaves_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n        Number of octaves to apply on the Perlin noise\n\n        Variable Name: NoiseOctaves\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "Number of octaves to apply on the Perlin noise\n\nVariable Name: NoiseOctaves" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseOctaves = { "NoiseOctaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, NoiseOctaves), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseOctaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseOctaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseFrequency_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n        Frequency of the Noise\n\n        Variable Name: NoiseFrequency\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "Frequency of the Noise\n\nVariable Name: NoiseFrequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseFrequency = { "NoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, NoiseFrequency), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseValuePower_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\n        Variable Name: NoiseValuePower\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "Variable Name: NoiseValuePower" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseValuePower = { "NoiseValuePower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, NoiseValuePower), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseValuePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseValuePower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n        The Elevation noise field is divided into steps.  Increase this value for a smoother terrain\n\n        Variable Name: NumSteps\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The Elevation noise field is divided into steps.  Increase this value for a smoother terrain\n\nVariable Name: NumSteps" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, NumSteps), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NumSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/**\n        The marker name the emit on the elevation tile.   Create a marker node with this \n        name in the theme file and add your assets there\n\n        Variable Name: MarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The marker name the emit on the elevation tile.   Create a marker node with this\nname in the theme file and add your assets there\n\nVariable Name: MarkerName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, MarkerName), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "Height Settings" },
		{ "Comment", "/**\n        The minimum height of the elevation. This value is in logical units and will be \n        multiplied with the Dungeon actor's GridSize config height. So a \n        logical height of -2 would be multiplied with 200 if the GridSize is (400, 400, 200) to \n        have the final value of -400 in unreal units\n\n        Variable Name: MinHeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The minimum height of the elevation. This value is in logical units and will be\nmultiplied with the Dungeon actor's GridSize config height. So a\nlogical height of -2 would be multiplied with 200 if the GridSize is (400, 400, 200) to\nhave the final value of -400 in unreal units\n\nVariable Name: MinHeight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Height Settings" },
		{ "Comment", "/**\n        The maximum height of the elevation. This value is in logical units and will be\n        multiplied with the Dungeon actor's GridSize config height\n\n        Variable Name: MaxHeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The maximum height of the elevation. This value is in logical units and will be\nmultiplied with the Dungeon actor's GridSize config height\n\nVariable Name: MaxHeight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaLevel_MetaData[] = {
		{ "Category", "Height Settings" },
		{ "Comment", "/**\n        The sea level of the elevation. This value is in logical units and will be\n        multiplied with the Dungeon actor's GridSize config height\n\n        Variable Name: SeaLevel\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The sea level of the elevation. This value is in logical units and will be\nmultiplied with the Dungeon actor's GridSize config height\n\nVariable Name: SeaLevel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaLevel = { "SeaLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, SeaLevel), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_LandColor_MetaData[] = {
		{ "Category", "Color Settings" },
		{ "Comment", "/**\n        The color of the elevation tiles above the sea level.  Used only for visualization\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The color of the elevation tiles above the sea level.  Used only for visualization\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_LandColor = { "LandColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, LandColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_LandColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_LandColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaColor_MetaData[] = {
		{ "Category", "Color Settings" },
		{ "Comment", "/**\n        The color of the elevation tiles below the sea level.  Used only for visualization\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The color of the elevation tiles below the sea level.  Used only for visualization\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaColor = { "SeaColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, SeaColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinColorMultiplier_MetaData[] = {
		{ "Category", "Color Settings" },
		{ "Comment", "/**\n        Adjust the color tint multiplier of the land/sea colors\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "Adjust the color tint multiplier of the land/sea colors\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinColorMultiplier = { "MinColorMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, MinColorMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinColorMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinColorMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseOctaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseValuePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_LandColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinColorMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemapTaskCreateElevations>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::ClassParams = {
		&UFlowTilemapTaskCreateElevations::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowTilemapTaskCreateElevations()
	{
		if (!Z_Registration_Info_UClass_UFlowTilemapTaskCreateElevations.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemapTaskCreateElevations.OuterSingleton, Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowTilemapTaskCreateElevations.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowTilemapTaskCreateElevations>()
	{
		return UFlowTilemapTaskCreateElevations::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemapTaskCreateElevations);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowTilemapTaskCreateElevations, UFlowTilemapTaskCreateElevations::StaticClass, TEXT("UFlowTilemapTaskCreateElevations"), &Z_Registration_Info_UClass_UFlowTilemapTaskCreateElevations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemapTaskCreateElevations), 3030321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_2967365364(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
