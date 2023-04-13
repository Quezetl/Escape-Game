// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/ExecGraph/GridFlowExecEdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowExecEdGraphSchema() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphSchema_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode();
// End Cross Module References
	void UGridFlowExecEdGraphSchema::StaticRegisterNativesUGridFlowExecEdGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowExecEdGraphSchema);
	UClass* Z_Construct_UClass_UGridFlowExecEdGraphSchema_NoRegister()
	{
		return UGridFlowExecEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowExecEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowExecEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowExecEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/GridFlowExecEdGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/GridFlowExecEdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowExecEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowExecEdGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowExecEdGraphSchema_Statics::ClassParams = {
		&UGridFlowExecEdGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowExecEdGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowExecEdGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UGridFlowExecEdGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowExecEdGraphSchema.OuterSingleton, Z_Construct_UClass_UGridFlowExecEdGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowExecEdGraphSchema.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowExecEdGraphSchema>()
	{
		return UGridFlowExecEdGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowExecEdGraphSchema);

static_assert(std::is_polymorphic<FGridFlowExecSchemaAction_NewNode>() == std::is_polymorphic<FDungeonSchemaAction_NewNode>(), "USTRUCT FGridFlowExecSchemaAction_NewNode cannot be polymorphic unless super FDungeonSchemaAction_NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridFlowExecSchemaAction_NewNode;
class UScriptStruct* FGridFlowExecSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowExecSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridFlowExecSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("GridFlowExecSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_GridFlowExecSchemaAction_NewNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FGridFlowExecSchemaAction_NewNode>()
{
	return FGridFlowExecSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/GridFlowExecEdGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridFlowExecSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode,
		&NewStructOps,
		"GridFlowExecSchemaAction_NewNode",
		sizeof(FGridFlowExecSchemaAction_NewNode),
		alignof(FGridFlowExecSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GridFlowExecSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridFlowExecSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridFlowExecSchemaAction_NewNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FGridFlowExecSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FGridFlowExecSchemaAction_NewNode_Statics::NewStructOps, TEXT("GridFlowExecSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_GridFlowExecSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridFlowExecSchemaAction_NewNode), 2453194829U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowExecEdGraphSchema, UGridFlowExecEdGraphSchema::StaticClass, TEXT("UGridFlowExecEdGraphSchema"), &Z_Registration_Info_UClass_UGridFlowExecEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowExecEdGraphSchema), 1857178755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraphSchema_h_3122187377(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
