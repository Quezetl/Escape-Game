// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/AbstractGraph/Nodes/GridFlowAbstractEdGraphNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowAbstractEdGraphNodeBase() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UGridFlowAbstractEdGraphNodeBase::StaticRegisterNativesUGridFlowAbstractEdGraphNodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowAbstractEdGraphNodeBase);
	UClass* Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_NoRegister()
	{
		return UGridFlowAbstractEdGraphNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Nodes/GridFlowAbstractEdGraphNodeBase.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Nodes/GridFlowAbstractEdGraphNodeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowAbstractEdGraphNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_Statics::ClassParams = {
		&UGridFlowAbstractEdGraphNodeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase()
	{
		if (!Z_Registration_Info_UClass_UGridFlowAbstractEdGraphNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowAbstractEdGraphNodeBase.OuterSingleton, Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowAbstractEdGraphNodeBase.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowAbstractEdGraphNodeBase>()
	{
		return UGridFlowAbstractEdGraphNodeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowAbstractEdGraphNodeBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_Nodes_GridFlowAbstractEdGraphNodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_Nodes_GridFlowAbstractEdGraphNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowAbstractEdGraphNodeBase, UGridFlowAbstractEdGraphNodeBase::StaticClass, TEXT("UGridFlowAbstractEdGraphNodeBase"), &Z_Registration_Info_UClass_UGridFlowAbstractEdGraphNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowAbstractEdGraphNodeBase), 1859352024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_Nodes_GridFlowAbstractEdGraphNodeBase_h_3098392162(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_Nodes_GridFlowAbstractEdGraphNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_Nodes_GridFlowAbstractEdGraphNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
