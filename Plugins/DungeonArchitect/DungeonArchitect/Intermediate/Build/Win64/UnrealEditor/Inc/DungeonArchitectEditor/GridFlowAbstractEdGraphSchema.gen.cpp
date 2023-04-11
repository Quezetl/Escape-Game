// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/AbstractGraph/GridFlowAbstractEdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowAbstractEdGraphSchema() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowAbstractEdGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode();
// End Cross Module References
	void UGridFlowAbstractEdGraphSchema::StaticRegisterNativesUGridFlowAbstractEdGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowAbstractEdGraphSchema);
	UClass* Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_NoRegister()
	{
		return UGridFlowAbstractEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/GridFlowAbstractEdGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/GridFlowAbstractEdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowAbstractEdGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_Statics::ClassParams = {
		&UGridFlowAbstractEdGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowAbstractEdGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UGridFlowAbstractEdGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowAbstractEdGraphSchema.OuterSingleton, Z_Construct_UClass_UGridFlowAbstractEdGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowAbstractEdGraphSchema.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowAbstractEdGraphSchema>()
	{
		return UGridFlowAbstractEdGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowAbstractEdGraphSchema);

static_assert(std::is_polymorphic<FGridFlowAbstractSchemaAction_NewNode>() == std::is_polymorphic<FDungeonSchemaAction_NewNode>(), "USTRUCT FGridFlowAbstractSchemaAction_NewNode cannot be polymorphic unless super FDungeonSchemaAction_NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridFlowAbstractSchemaAction_NewNode;
class UScriptStruct* FGridFlowAbstractSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowAbstractSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridFlowAbstractSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("GridFlowAbstractSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_GridFlowAbstractSchemaAction_NewNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FGridFlowAbstractSchemaAction_NewNode>()
{
	return FGridFlowAbstractSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/GridFlowAbstractEdGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridFlowAbstractSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode,
		&NewStructOps,
		"GridFlowAbstractSchemaAction_NewNode",
		sizeof(FGridFlowAbstractSchemaAction_NewNode),
		alignof(FGridFlowAbstractSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GridFlowAbstractSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridFlowAbstractSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridFlowAbstractSchemaAction_NewNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FGridFlowAbstractSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FGridFlowAbstractSchemaAction_NewNode_Statics::NewStructOps, TEXT("GridFlowAbstractSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_GridFlowAbstractSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridFlowAbstractSchemaAction_NewNode), 3569765850U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowAbstractEdGraphSchema, UGridFlowAbstractEdGraphSchema::StaticClass, TEXT("UGridFlowAbstractEdGraphSchema"), &Z_Registration_Info_UClass_UGridFlowAbstractEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowAbstractEdGraphSchema), 602304657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraphSchema_h_2708803972(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
