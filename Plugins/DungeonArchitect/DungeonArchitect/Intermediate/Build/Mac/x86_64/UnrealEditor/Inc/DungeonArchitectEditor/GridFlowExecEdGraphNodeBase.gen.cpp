// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowExecEdGraphNodeBase() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UGridFlowExecEdGraphNodeBase::StaticRegisterNativesUGridFlowExecEdGraphNodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowExecEdGraphNodeBase);
	UClass* Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_NoRegister()
	{
		return UGridFlowExecEdGraphNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodeBase.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/Nodes/GridFlowExecEdGraphNodeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowExecEdGraphNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_Statics::ClassParams = {
		&UGridFlowExecEdGraphNodeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowExecEdGraphNodeBase()
	{
		if (!Z_Registration_Info_UClass_UGridFlowExecEdGraphNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowExecEdGraphNodeBase.OuterSingleton, Z_Construct_UClass_UGridFlowExecEdGraphNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowExecEdGraphNodeBase.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowExecEdGraphNodeBase>()
	{
		return UGridFlowExecEdGraphNodeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowExecEdGraphNodeBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowExecEdGraphNodeBase, UGridFlowExecEdGraphNodeBase::StaticClass, TEXT("UGridFlowExecEdGraphNodeBase"), &Z_Registration_Info_UClass_UGridFlowExecEdGraphNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowExecEdGraphNodeBase), 2746605558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodeBase_h_808851530(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_Nodes_GridFlowExecEdGraphNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
