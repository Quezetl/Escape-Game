// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonModel() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonModel();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionInstance();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraph_NoRegister();
// End Cross Module References
	void USnapMapDungeonModel::StaticRegisterNativesUSnapMapDungeonModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonModel);
	UClass* Z_Construct_UClass_USnapMapDungeonModel_NoRegister()
	{
		return USnapMapDungeonModel::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapDungeonModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissionGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapDungeonModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonModel,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapConnectionInstance, METADATA_PARAMS(nullptr, 0) }; // 2880625270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_Connections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapDungeonModel, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_Connections_MetaData)) }; // 2880625270
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_ModuleInstances_Inner = { "ModuleInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData, METADATA_PARAMS(nullptr, 0) }; // 881553849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_ModuleInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_ModuleInstances = { "ModuleInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapDungeonModel, ModuleInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_ModuleInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_ModuleInstances_MetaData)) }; // 881553849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_MissionGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_MissionGraph = { "MissionGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapDungeonModel, MissionGraph), Z_Construct_UClass_UGrammarScriptGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_MissionGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_MissionGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapDungeonModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_ModuleInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_ModuleInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonModel_Statics::NewProp_MissionGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapDungeonModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonModel_Statics::ClassParams = {
		&USnapMapDungeonModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapMapDungeonModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapDungeonModel()
	{
		if (!Z_Registration_Info_UClass_USnapMapDungeonModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonModel.OuterSingleton, Z_Construct_UClass_USnapMapDungeonModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapDungeonModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonModel>()
	{
		return USnapMapDungeonModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonModel);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonModel, USnapMapDungeonModel::StaticClass, TEXT("USnapMapDungeonModel"), &Z_Registration_Info_UClass_USnapMapDungeonModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonModel), 1921100473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_162079617(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
