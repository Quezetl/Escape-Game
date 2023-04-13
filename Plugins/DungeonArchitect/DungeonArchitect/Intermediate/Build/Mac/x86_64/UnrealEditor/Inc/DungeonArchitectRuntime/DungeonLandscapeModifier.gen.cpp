// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Landscape/DungeonLandscapeModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonLandscapeModifier() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLandscapeModifier_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLandscapeModifier();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
// End Cross Module References
	void UDungeonLandscapeModifier::StaticRegisterNativesUDungeonLandscapeModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonLandscapeModifier);
	UClass* Z_Construct_UClass_UDungeonLandscapeModifier_NoRegister()
	{
		return UDungeonLandscapeModifier::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonLandscapeModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightBlurRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightBlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightBlurIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeightBlurIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightBlurWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightBlurWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintBlurRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintBlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintBlurIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PaintBlurIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintBlurWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintBlurWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintBlurWeightCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintBlurWeightCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHeight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonLandscapeModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonEventListener,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Modifies the landscape.  Attach to the dungeon actor\n*/" },
		{ "IncludePath", "Core/Landscape/DungeonLandscapeModifier.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Modifies the landscape.  Attach to the dungeon actor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Landscape_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Landscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Landscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurRadius_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurRadius = { "HeightBlurRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, HeightBlurRadius), METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurIterations_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurIterations = { "HeightBlurIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, HeightBlurIterations), METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurWeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurWeight = { "HeightBlurWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, HeightBlurWeight), METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurRadius_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurRadius = { "PaintBlurRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, PaintBlurRadius), METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurIterations_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurIterations = { "PaintBlurIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, PaintBlurIterations), METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeight = { "PaintBlurWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, PaintBlurWeight), METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeightCurve_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeightCurve = { "PaintBlurWeightCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, PaintBlurWeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeightCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeightCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_BaseHeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_BaseHeight = { "BaseHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, BaseHeight), METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_BaseHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_BaseHeight_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonLandscapeModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Landscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeightCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_BaseHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonLandscapeModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonLandscapeModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::ClassParams = {
		&UDungeonLandscapeModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonLandscapeModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonLandscapeModifier()
	{
		if (!Z_Registration_Info_UClass_UDungeonLandscapeModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonLandscapeModifier.OuterSingleton, Z_Construct_UClass_UDungeonLandscapeModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonLandscapeModifier.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonLandscapeModifier>()
	{
		return UDungeonLandscapeModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonLandscapeModifier);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonLandscapeModifier, UDungeonLandscapeModifier::StaticClass, TEXT("UDungeonLandscapeModifier"), &Z_Registration_Info_UClass_UDungeonLandscapeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonLandscapeModifier), 1248266607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_2589493918(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
