// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowExecEdGraphNodes() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Task();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphNodeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTask_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Result();
// End Cross Module References
	void UGridFlowExecEdGraphNode_Task::StaticRegisterNativesUGridFlowExecEdGraphNode_Task()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowExecEdGraphNode_Task);
	UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_NoRegister()
	{
		return UGridFlowExecEdGraphNode_Task::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridFlowExecEdGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::NewProp_TaskTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::NewProp_TaskTemplate = { "TaskTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowExecEdGraphNode_Task, TaskTemplate), Z_Construct_UClass_UFlowExecTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::NewProp_TaskTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::NewProp_TaskTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::NewProp_TaskTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowExecEdGraphNode_Task>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::ClassParams = {
		&UGridFlowExecEdGraphNode_Task::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Task()
	{
		if (!Z_Registration_Info_UClass_UGridFlowExecEdGraphNode_Task.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowExecEdGraphNode_Task.OuterSingleton, Z_Construct_UClass_UGridFlowExecEdGraphNode_Task_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowExecEdGraphNode_Task.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowExecEdGraphNode_Task>()
	{
		return UGridFlowExecEdGraphNode_Task::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowExecEdGraphNode_Task);
	void UGridFlowExecEdGraphNode_Result::StaticRegisterNativesUGridFlowExecEdGraphNode_Result()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowExecEdGraphNode_Result);
	UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_NoRegister()
	{
		return UGridFlowExecEdGraphNode_Result::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridFlowExecEdGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowExecEdGraphNode_Result>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_Statics::ClassParams = {
		&UGridFlowExecEdGraphNode_Result::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Result()
	{
		if (!Z_Registration_Info_UClass_UGridFlowExecEdGraphNode_Result.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowExecEdGraphNode_Result.OuterSingleton, Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowExecEdGraphNode_Result.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowExecEdGraphNode_Result>()
	{
		return UGridFlowExecEdGraphNode_Result::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowExecEdGraphNode_Result);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowExecEdGraphNode_Task, UGridFlowExecEdGraphNode_Task::StaticClass, TEXT("UGridFlowExecEdGraphNode_Task"), &Z_Registration_Info_UClass_UGridFlowExecEdGraphNode_Task, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowExecEdGraphNode_Task), 681652251U) },
		{ Z_Construct_UClass_UGridFlowExecEdGraphNode_Result, UGridFlowExecEdGraphNode_Result::StaticClass, TEXT("UGridFlowExecEdGraphNode_Result"), &Z_Registration_Info_UClass_UGridFlowExecEdGraphNode_Result, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowExecEdGraphNode_Result), 354389495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodes_h_1374591455(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
