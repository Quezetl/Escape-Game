// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_ExecNodeBase() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecNodeBase_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UEdGraphNode_ExecNodeBase::StaticRegisterNativesUEdGraphNode_ExecNodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_ExecNodeBase);
	UClass* Z_Construct_UClass_UEdGraphNode_ExecNodeBase_NoRegister()
	{
		return UEdGraphNode_ExecNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_ExecNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_ExecNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_ExecNodeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecNodeBase.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecNodeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_ExecNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_ExecNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_ExecNodeBase_Statics::ClassParams = {
		&UEdGraphNode_ExecNodeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_ExecNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_ExecNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_ExecNodeBase()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_ExecNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_ExecNodeBase.OuterSingleton, Z_Construct_UClass_UEdGraphNode_ExecNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_ExecNodeBase.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_ExecNodeBase>()
	{
		return UEdGraphNode_ExecNodeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_ExecNodeBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecNodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_ExecNodeBase, UEdGraphNode_ExecNodeBase::StaticClass, TEXT("UEdGraphNode_ExecNodeBase"), &Z_Registration_Info_UClass_UEdGraphNode_ExecNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_ExecNodeBase), 2022123105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecNodeBase_h_1820464136(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
