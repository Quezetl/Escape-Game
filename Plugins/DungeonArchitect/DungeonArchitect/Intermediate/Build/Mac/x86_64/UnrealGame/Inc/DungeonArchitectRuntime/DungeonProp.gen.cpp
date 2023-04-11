// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonProp() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAMarkerInfo();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropChildSocketData();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropTypeData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAMarkerInfo;
class UScriptStruct* FDAMarkerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAMarkerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAMarkerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAMarkerInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAMarkerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DAMarkerInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAMarkerInfo>()
{
	return FDAMarkerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAMarkerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterThemeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClusterThemeOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAMarkerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "DungeonMarker" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAMarkerInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "DungeonMarker" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAMarkerInfo, MarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_MarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_ClusterThemeOverride_MetaData[] = {
		{ "Category", "DungeonMarker" },
		{ "Comment", "/** The name of the clustered theme to override on this marker */" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
		{ "ToolTip", "The name of the clustered theme to override on this marker" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_ClusterThemeOverride = { "ClusterThemeOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAMarkerInfo, ClusterThemeOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_ClusterThemeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_ClusterThemeOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "DungeonMarker" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAMarkerInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_ClusterThemeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DAMarkerInfo",
		sizeof(FDAMarkerInfo),
		alignof(FDAMarkerInfo),
		Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAMarkerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DAMarkerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAMarkerInfo.InnerSingleton, Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAMarkerInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropChildSocketData;
class UScriptStruct* FPropChildSocketData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropChildSocketData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropChildSocketData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropChildSocketData, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("PropChildSocketData"));
	}
	return Z_Registration_Info_UScriptStruct_PropChildSocketData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FPropChildSocketData>()
{
	return FPropChildSocketData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropChildSocketData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SocketType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropChildSocketData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Props can emit new sockets when they are inserted, to add more child props relative to them */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
		{ "ToolTip", "Props can emit new sockets when they are inserted, to add more child props relative to them" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropChildSocketData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_SocketType_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_SocketType = { "SocketType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropChildSocketData, SocketType), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_SocketType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_SocketType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropChildSocketData, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropChildSocketData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_SocketType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropChildSocketData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"PropChildSocketData",
		sizeof(FPropChildSocketData),
		alignof(FPropChildSocketData),
		Z_Construct_UScriptStruct_FPropChildSocketData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropChildSocketData()
	{
		if (!Z_Registration_Info_UScriptStruct_PropChildSocketData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropChildSocketData.InnerSingleton, Z_Construct_UScriptStruct_FPropChildSocketData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropChildSocketData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropTypeData;
class UScriptStruct* FPropTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropTypeData, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("PropTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_PropTypeData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FPropTypeData>()
{
	return FPropTypeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropTypeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToSocket_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttachToSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelectionLogic_MetaData[];
#endif
		static void NewProp_bUseSelectionLogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelectionLogic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogicOverridesAffinity_MetaData[];
#endif
		static void NewProp_bLogicOverridesAffinity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogicOverridesAffinity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionLogics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionLogics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectionLogics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTransformLogic_MetaData[];
#endif
		static void NewProp_bUseTransformLogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTransformLogic;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformLogics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformLogics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformLogics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpawnLogic_MetaData[];
#endif
		static void NewProp_bUseSpawnLogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpawnLogic;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLogics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLogics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLogics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeOnAttach_MetaData[];
#endif
		static void NewProp_ConsumeOnAttach_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConsumeOnAttach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialConstraint_MetaData[];
#endif
		static void NewProp_bUseSpatialConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpatialConstraint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildSockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildSockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildSockets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropTypeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, NodeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AssetObject_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AssetObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AssetObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AttachToSocket_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AttachToSocket = { "AttachToSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, AttachToSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AttachToSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AttachToSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Probability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic_SetBit(void* Obj)
	{
		((FPropTypeData*)Obj)->bUseSelectionLogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic = { "bUseSelectionLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity_SetBit(void* Obj)
	{
		((FPropTypeData*)Obj)->bLogicOverridesAffinity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity = { "bLogicOverridesAffinity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics_Inner = { "SelectionLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonSelectorLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics = { "SelectionLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, SelectionLogics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic_SetBit(void* Obj)
	{
		((FPropTypeData*)Obj)->bUseTransformLogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic = { "bUseTransformLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics_Inner = { "TransformLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonTransformLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics = { "TransformLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, TransformLogics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic_SetBit(void* Obj)
	{
		((FPropTypeData*)Obj)->bUseSpawnLogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic = { "bUseSpawnLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics_Inner = { "SpawnLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonSpawnLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics = { "SpawnLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, SpawnLogics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach_SetBit(void* Obj)
	{
		((FPropTypeData*)Obj)->ConsumeOnAttach = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach = { "ConsumeOnAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint_SetBit(void* Obj)
	{
		((FPropTypeData*)Obj)->bUseSpatialConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint = { "bUseSpatialConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpatialConstraint_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpatialConstraint = { "SpatialConstraint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, SpatialConstraint), Z_Construct_UClass_UDungeonSpatialConstraint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpatialConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpatialConstraint_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets_Inner = { "ChildSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropChildSocketData, METADATA_PARAMS(nullptr, 0) }; // 643422053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets = { "ChildSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropTypeData, ChildSockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets_MetaData)) }; // 643422053
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropTypeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AssetObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AttachToSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Probability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpatialConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"PropTypeData",
		sizeof(FPropTypeData),
		alignof(FPropTypeData),
		Z_Construct_UScriptStruct_FPropTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropTypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropTypeData()
	{
		if (!Z_Registration_Info_UScriptStruct_PropTypeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropTypeData.InnerSingleton, Z_Construct_UScriptStruct_FPropTypeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropTypeData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_Statics::ScriptStructInfo[] = {
		{ FDAMarkerInfo::StaticStruct, Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewStructOps, TEXT("DAMarkerInfo"), &Z_Registration_Info_UScriptStruct_DAMarkerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAMarkerInfo), 1351477826U) },
		{ FPropChildSocketData::StaticStruct, Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewStructOps, TEXT("PropChildSocketData"), &Z_Registration_Info_UScriptStruct_PropChildSocketData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropChildSocketData), 643422053U) },
		{ FPropTypeData::StaticStruct, Z_Construct_UScriptStruct_FPropTypeData_Statics::NewStructOps, TEXT("PropTypeData"), &Z_Registration_Info_UScriptStruct_PropTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropTypeData), 2548122646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_1260065921(TEXT("/Script/DungeonArchitectRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
