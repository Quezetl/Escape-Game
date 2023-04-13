// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskFinalize() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskFinalize_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskFinalize();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UGridFlowLayoutTaskFinalize::StaticRegisterNativesUGridFlowLayoutTaskFinalize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskFinalize);
	UClass* Z_Construct_UClass_UGridFlowLayoutTaskFinalize_NoRegister()
	{
		return UGridFlowLayoutTaskFinalize::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCorridors_MetaData[];
#endif
		static void NewProp_bGenerateCorridors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCorridors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCaves_MetaData[];
#endif
		static void NewProp_bGenerateCaves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnemiesPerCaveNode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEnemiesPerCaveNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskFinalize,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
		{ "MenuPriority", "1500" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
		{ "Title", "Finalize Graph" },
		{ "Tooltip", "Call this to finalize the layout graph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors_MetaData[] = {
		{ "Category", "Finalize Graph" },
		{ "Comment", "/**\n        Indicates if corridors are allowed. A corridor is created if it has one entrance and one exit \n        and they are in the same line (i.e. both along X or Y axis)\n\n        Variable Name: bGenerateCorridors\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
		{ "ToolTip", "Indicates if corridors are allowed. A corridor is created if it has one entrance and one exit\nand they are in the same line (i.e. both along X or Y axis)\n\nVariable Name: bGenerateCorridors" },
	};
#endif
	void Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors_SetBit(void* Obj)
	{
		((UGridFlowLayoutTaskFinalize*)Obj)->bGenerateCorridors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors = { "bGenerateCorridors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridFlowLayoutTaskFinalize), &Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves_MetaData[] = {
		{ "Category", "Finalize Graph" },
		{ "Comment", "/**\n        Indicates if caves are allowed. A room node is promoted to a cave \n        if the number of enemies in this node is less than or equal to MaxEnemiesPerCaveNode\n\n        Variable Name: bGenerateCaves\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
		{ "ToolTip", "Indicates if caves are allowed. A room node is promoted to a cave\nif the number of enemies in this node is less than or equal to MaxEnemiesPerCaveNode\n\nVariable Name: bGenerateCaves" },
	};
#endif
	void Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves_SetBit(void* Obj)
	{
		((UGridFlowLayoutTaskFinalize*)Obj)->bGenerateCaves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves = { "bGenerateCaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridFlowLayoutTaskFinalize), &Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_MaxEnemiesPerCaveNode_MetaData[] = {
		{ "Category", "Finalize Graph" },
		{ "Comment", "/**\n        The condition for promoting a room to a cave.  If the number of enemies in the room node is \n        less than or equal to this value, it is promoted to a cave.\n        Sometimes, it might still be room regardless of this value, if we need a door and there \n        are no nearby rooms (caves chunks don't have doors)\n\n        Variable Name: MaxEnemiesPerCaveNode\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
		{ "ToolTip", "The condition for promoting a room to a cave.  If the number of enemies in the room node is\nless than or equal to this value, it is promoted to a cave.\nSometimes, it might still be room regardless of this value, if we need a door and there\nare no nearby rooms (caves chunks don't have doors)\n\nVariable Name: MaxEnemiesPerCaveNode" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_MaxEnemiesPerCaveNode = { "MaxEnemiesPerCaveNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowLayoutTaskFinalize, MaxEnemiesPerCaveNode), METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_MaxEnemiesPerCaveNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_MaxEnemiesPerCaveNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_MaxEnemiesPerCaveNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskFinalize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::ClassParams = {
		&UGridFlowLayoutTaskFinalize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowLayoutTaskFinalize()
	{
		if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskFinalize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskFinalize.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowLayoutTaskFinalize.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskFinalize>()
	{
		return UGridFlowLayoutTaskFinalize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskFinalize);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskFinalize, UGridFlowLayoutTaskFinalize::StaticClass, TEXT("UGridFlowLayoutTaskFinalize"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskFinalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskFinalize), 1645333479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_1744066601(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
