// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAbstractGraph() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractGraphBase_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractGraphBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractNode_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractLink_NoRegister();
// End Cross Module References
	void UFlowAbstractGraphBase::StaticRegisterNativesUFlowAbstractGraphBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowAbstractGraphBase);
	UClass* Z_Construct_UClass_UFlowAbstractGraphBase_NoRegister()
	{
		return UFlowAbstractGraphBase::StaticClass();
	}
	struct Z_Construct_UClass_UFlowAbstractGraphBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphLinks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowAbstractGraphBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractGraphBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes_Inner = { "GraphNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowAbstractNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes = { "GraphNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractGraphBase, GraphNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks_Inner = { "GraphLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowAbstractLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks = { "GraphLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractGraphBase, GraphLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowAbstractGraphBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractGraphBase_Statics::NewProp_GraphLinks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowAbstractGraphBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowAbstractGraphBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowAbstractGraphBase_Statics::ClassParams = {
		&UFlowAbstractGraphBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowAbstractGraphBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractGraphBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowAbstractGraphBase()
	{
		if (!Z_Registration_Info_UClass_UFlowAbstractGraphBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowAbstractGraphBase.OuterSingleton, Z_Construct_UClass_UFlowAbstractGraphBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowAbstractGraphBase.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowAbstractGraphBase>()
	{
		return UFlowAbstractGraphBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowAbstractGraphBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowAbstractGraphBase, UFlowAbstractGraphBase::StaticClass, TEXT("UFlowAbstractGraphBase"), &Z_Registration_Info_UClass_UFlowAbstractGraphBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowAbstractGraphBase), 42492921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractGraph_h_646487897(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
