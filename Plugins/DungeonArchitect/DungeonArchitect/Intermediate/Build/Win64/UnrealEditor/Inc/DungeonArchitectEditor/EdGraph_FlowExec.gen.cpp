// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraph_FlowExec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_FlowExec() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_FlowExec_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_FlowExec();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecEntryNode_NoRegister();
// End Cross Module References
	void UEdGraph_FlowExec::StaticRegisterNativesUEdGraph_FlowExec()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_FlowExec);
	UClass* Z_Construct_UClass_UEdGraph_FlowExec_NoRegister()
	{
		return UEdGraph_FlowExec::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraph_FlowExec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraph_FlowExec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_FlowExec_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/EdGraph_FlowExec.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraph_FlowExec.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_FlowExec_Statics::NewProp_EntryNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraph_FlowExec.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_FlowExec_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraph_FlowExec, EntryNode), Z_Construct_UClass_UEdGraphNode_ExecEntryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_FlowExec_Statics::NewProp_EntryNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_FlowExec_Statics::NewProp_EntryNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraph_FlowExec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_FlowExec_Statics::NewProp_EntryNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraph_FlowExec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_FlowExec>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_FlowExec_Statics::ClassParams = {
		&UEdGraph_FlowExec::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraph_FlowExec_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_FlowExec_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraph_FlowExec_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_FlowExec_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraph_FlowExec()
	{
		if (!Z_Registration_Info_UClass_UEdGraph_FlowExec.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_FlowExec.OuterSingleton, Z_Construct_UClass_UEdGraph_FlowExec_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraph_FlowExec.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraph_FlowExec>()
	{
		return UEdGraph_FlowExec::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_FlowExec);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_FlowExec_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_FlowExec_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_FlowExec, UEdGraph_FlowExec::StaticClass, TEXT("UEdGraph_FlowExec"), &Z_Registration_Info_UClass_UEdGraph_FlowExec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_FlowExec), 1752040676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_FlowExec_h_2887682246(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_FlowExec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraph_FlowExec_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
