// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/MarkerGenLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarkerGenLayer() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenLayer_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenLayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPattern_NoRegister();
// End Cross Module References
	void UMarkerGenLayer::StaticRegisterNativesUMarkerGenLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenLayer);
	UClass* Z_Construct_UClass_UMarkerGenLayer_NoRegister()
	{
		return UMarkerGenLayer::StaticClass();
	}
	struct Z_Construct_UClass_UMarkerGenLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateToFit_MetaData[];
#endif
		static void NewProp_bRotateToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateToFit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeFittingOrder_MetaData[];
#endif
		static void NewProp_bRandomizeFittingOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeFittingOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInsertionOverlaps_MetaData[];
#endif
		static void NewProp_bAllowInsertionOverlaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInsertionOverlaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarkerGenLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenLayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/MarkerGenLayer.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenLayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "Marker Generator" },
		{ "DisplayName", "Pattern Name" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenLayer.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenLayer, LayerName), METADATA_PARAMS(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "Marker Generator" },
		{ "Comment", "/* The probability of running the patter matcher on the scene.\n\x09 * Set to 1.0 to run it everywhere (100% of the time), 0.5 to insert this randomly 50% of the time, 0.0 to disable it\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenLayer.h" },
		{ "ToolTip", "The probability of running the patter matcher on the scene.\n       * Set to 1.0 to run it everywhere (100% of the time), 0.5 to insert this randomly 50% of the time, 0.0 to disable it" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenLayer, Probability), METADATA_PARAMS(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Probability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRotateToFit_MetaData[] = {
		{ "Category", "Pattern Matching" },
		{ "Comment", "/**\n\x09 * Rotate the pattern as many times as needed to fit in all directions (e.g. rotate the pattern in 0, 90, 180 and 270 degrees and try to fit there\n\x09 * You might want to disable this if your fitting needs to happen in a fixed direction, e.g. a top down diablo-like game where\n\x09 * you'd want to consider the camera angle before placing the assets\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenLayer.h" },
		{ "ToolTip", "Rotate the pattern as many times as needed to fit in all directions (e.g. rotate the pattern in 0, 90, 180 and 270 degrees and try to fit there\nYou might want to disable this if your fitting needs to happen in a fixed direction, e.g. a top down diablo-like game where\nyou'd want to consider the camera angle before placing the assets" },
	};
#endif
	void Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRotateToFit_SetBit(void* Obj)
	{
		((UMarkerGenLayer*)Obj)->bRotateToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRotateToFit = { "bRotateToFit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMarkerGenLayer), &Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRotateToFit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRotateToFit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRotateToFit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRandomizeFittingOrder_MetaData[] = {
		{ "Category", "Pattern Matching" },
		{ "Comment", "/**\n\x09 * If disabled, the system tries to match the pattern from left to right, top to bottom in the generated level, which would\n\x09 * create a ordered fitting pattern (e.g. a 2x1 tile would all face the same way). \n\x09 * Enable this to create a more organic randomized fitting order\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenLayer.h" },
		{ "ToolTip", "If disabled, the system tries to match the pattern from left to right, top to bottom in the generated level, which would\ncreate a ordered fitting pattern (e.g. a 2x1 tile would all face the same way).\nEnable this to create a more organic randomized fitting order" },
	};
#endif
	void Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRandomizeFittingOrder_SetBit(void* Obj)
	{
		((UMarkerGenLayer*)Obj)->bRandomizeFittingOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRandomizeFittingOrder = { "bRandomizeFittingOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMarkerGenLayer), &Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRandomizeFittingOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRandomizeFittingOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRandomizeFittingOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bAllowInsertionOverlaps_MetaData[] = {
		{ "Category", "Pattern Matching" },
		{ "Comment", "/**\n\x09 * As the pattern is matched on a layer, cell by cell, some cells will be skipped if the rule inserts a marker which might overlap with another marker\n\x09 * that was inserted same layer previously (HintWillInsertAssetHere flag on the rule block). Enable this to allow overlaps\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenLayer.h" },
		{ "ToolTip", "As the pattern is matched on a layer, cell by cell, some cells will be skipped if the rule inserts a marker which might overlap with another marker\nthat was inserted same layer previously (HintWillInsertAssetHere flag on the rule block). Enable this to allow overlaps" },
	};
#endif
	void Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bAllowInsertionOverlaps_SetBit(void* Obj)
	{
		((UMarkerGenLayer*)Obj)->bAllowInsertionOverlaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bAllowInsertionOverlaps = { "bAllowInsertionOverlaps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMarkerGenLayer), &Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bAllowInsertionOverlaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bAllowInsertionOverlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bAllowInsertionOverlaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Pattern_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenLayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenLayer, Pattern), Z_Construct_UClass_UMarkerGenPattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Pattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Pattern_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarkerGenLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Probability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRotateToFit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bRandomizeFittingOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_bAllowInsertionOverlaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenLayer_Statics::NewProp_Pattern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarkerGenLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenLayer_Statics::ClassParams = {
		&UMarkerGenLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMarkerGenLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenLayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMarkerGenLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarkerGenLayer()
	{
		if (!Z_Registration_Info_UClass_UMarkerGenLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenLayer.OuterSingleton, Z_Construct_UClass_UMarkerGenLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMarkerGenLayer.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenLayer>()
	{
		return UMarkerGenLayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenLayer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMarkerGenLayer, UMarkerGenLayer::StaticClass, TEXT("UMarkerGenLayer"), &Z_Registration_Info_UClass_UMarkerGenLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenLayer), 1841224894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenLayer_h_1199822219(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
