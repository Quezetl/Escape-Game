// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/FlowAssetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAssetBase() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAssetBase_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAssetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowExecScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UFlowAssetBase::StaticRegisterNativesUFlowAssetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowAssetBase);
	UClass* Z_Construct_UClass_UFlowAssetBase_NoRegister()
	{
		return UFlowAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UFlowAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecScript;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecEdGraph;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAssetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/FlowAssetBase.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/FlowAssetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecScript_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/FlowAssetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecScript = { "ExecScript", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAssetBase, ExecScript), Z_Construct_UClass_UGridFlowExecScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecScript_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecEdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/FlowAssetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecEdGraph = { "ExecEdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAssetBase, ExecEdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecEdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecEdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowAssetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecScript,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAssetBase_Statics::NewProp_ExecEdGraph,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowAssetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowAssetBase_Statics::ClassParams = {
		&UFlowAssetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowAssetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAssetBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowAssetBase()
	{
		if (!Z_Registration_Info_UClass_UFlowAssetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowAssetBase.OuterSingleton, Z_Construct_UClass_UFlowAssetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowAssetBase.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowAssetBase>()
	{
		return UFlowAssetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowAssetBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_FlowAssetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_FlowAssetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowAssetBase, UFlowAssetBase::StaticClass, TEXT("UFlowAssetBase"), &Z_Registration_Info_UClass_UFlowAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowAssetBase), 161237342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_FlowAssetBase_h_70306127(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_FlowAssetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_FlowAssetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
