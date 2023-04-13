// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/SnapMap/SnapMapGraphSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapGraphSerialization() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapMapModuleInstanceSerializedData;
class UScriptStruct* FSnapMapModuleInstanceSerializedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapMapModuleInstanceSerializedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapMapModuleInstanceSerializedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapMapModuleInstanceSerializedData"));
	}
	return Z_Registration_Info_UScriptStruct_SnapMapModuleInstanceSerializedData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapMapModuleInstanceSerializedData>()
{
	return FSnapMapModuleInstanceSerializedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleInstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleInstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapGraphSerialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapMapModuleInstanceSerializedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleInstanceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapGraphSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleInstanceId = { "ModuleInstanceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleInstanceSerializedData, ModuleInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleInstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapGraphSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleInstanceSerializedData, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapGraphSerialization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleInstanceSerializedData, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapGraphSerialization.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleInstanceSerializedData, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapGraphSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleBounds = { "ModuleBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleInstanceSerializedData, ModuleBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewProp_ModuleBounds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SnapMapModuleInstanceSerializedData",
		sizeof(FSnapMapModuleInstanceSerializedData),
		alignof(FSnapMapModuleInstanceSerializedData),
		Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapMapModuleInstanceSerializedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapMapModuleInstanceSerializedData.InnerSingleton, Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapMapModuleInstanceSerializedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapGraphSerialization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapGraphSerialization_h_Statics::ScriptStructInfo[] = {
		{ FSnapMapModuleInstanceSerializedData::StaticStruct, Z_Construct_UScriptStruct_FSnapMapModuleInstanceSerializedData_Statics::NewStructOps, TEXT("SnapMapModuleInstanceSerializedData"), &Z_Registration_Info_UScriptStruct_SnapMapModuleInstanceSerializedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapMapModuleInstanceSerializedData), 881553849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapGraphSerialization_h_3644310765(TEXT("/Script/DungeonArchitectRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapGraphSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapGraphSerialization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
