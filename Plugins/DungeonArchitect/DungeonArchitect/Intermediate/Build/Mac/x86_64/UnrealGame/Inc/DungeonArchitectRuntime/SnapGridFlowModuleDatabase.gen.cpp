// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowModuleDatabase() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssemblySide();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssembly();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell;
class UScriptStruct* FSGFModuleAssemblySideCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SGFModuleAssemblySideCell"));
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSGFModuleAssemblySideCell>()
{
	return FSGFModuleAssemblySideCell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////// Snap Grid Flow Module Assembly ////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "ToolTip", "/ Snap Grid Flow Module Assembly /" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGFModuleAssemblySideCell>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_ConnectionIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_ConnectionIdx = { "ConnectionIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssemblySideCell, ConnectionIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_ConnectionIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_ConnectionIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssemblySideCell, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkedNodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkedNodeId = { "LinkedNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssemblySideCell, LinkedNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkedNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkedNodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkId = { "LinkId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssemblySideCell, LinkId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_ConnectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkedNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewProp_LinkId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SGFModuleAssemblySideCell",
		sizeof(FSGFModuleAssemblySideCell),
		alignof(FSGFModuleAssemblySideCell),
		Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell()
	{
		if (!Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.InnerSingleton, Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide;
class UScriptStruct* FSGFModuleAssemblySide::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGFModuleAssemblySide, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SGFModuleAssemblySide"));
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSGFModuleAssemblySide>()
{
	return FSGFModuleAssemblySide::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectionIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGFModuleAssemblySide>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssemblySide, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssemblySide, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices_Inner = { "ConnectionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell, METADATA_PARAMS(nullptr, 0) }; // 3237248046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices = { "ConnectionIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssemblySide, ConnectionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices_MetaData)) }; // 3237248046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewProp_ConnectionIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SGFModuleAssemblySide",
		sizeof(FSGFModuleAssemblySide),
		alignof(FSGFModuleAssemblySide),
		Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssemblySide()
	{
		if (!Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.InnerSingleton, Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SGFModuleAssembly;
class UScriptStruct* FSGFModuleAssembly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SGFModuleAssembly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SGFModuleAssembly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGFModuleAssembly, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SGFModuleAssembly"));
	}
	return Z_Registration_Info_UScriptStruct_SGFModuleAssembly.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSGFModuleAssembly>()
{
	return FSGFModuleAssembly::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChunks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumChunks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Front;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Back;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Down;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGFModuleAssembly>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_NumChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_NumChunks = { "NumChunks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssembly, NumChunks), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_NumChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_NumChunks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Front_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssembly, Front), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Front_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Front_MetaData)) }; // 3723400268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Left_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssembly, Left), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Left_MetaData)) }; // 3723400268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Back_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssembly, Back), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Back_MetaData)) }; // 3723400268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Right_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssembly, Right), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Right_MetaData)) }; // 3723400268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Top_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssembly, Top), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Top_MetaData)) }; // 3723400268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Down_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Down = { "Down", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGFModuleAssembly, Down), Z_Construct_UScriptStruct_FSGFModuleAssemblySide, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Down_MetaData)) }; // 3723400268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_NumChunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Front,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Back,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewProp_Down,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SGFModuleAssembly",
		sizeof(FSGFModuleAssembly),
		alignof(FSGFModuleAssembly),
		Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSGFModuleAssembly()
	{
		if (!Z_Registration_Info_UScriptStruct_SGFModuleAssembly.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SGFModuleAssembly.InnerSingleton, Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SGFModuleAssembly.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo;
class UScriptStruct* FSnapGridFlowModuleDatabaseConnectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapGridFlowModuleDatabaseConnectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapGridFlowModuleDatabaseConnectionInfo>()
{
	return FSnapGridFlowModuleDatabaseConnectionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////// Snap Grid Flow Module Database ////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "ToolTip", "/ Snap Grid Flow Module Database /" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapGridFlowModuleDatabaseConnectionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseConnectionInfo, ConnectionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseConnectionInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo = { "ConnectionInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseConnectionInfo, ConnectionInfo), Z_Construct_UClass_USnapConnectionInfo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint = { "ConnectionConstraint", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseConnectionInfo, ConnectionConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_MetaData)) }; // 4201058760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SnapGridFlowModuleDatabaseConnectionInfo",
		sizeof(FSnapGridFlowModuleDatabaseConnectionInfo),
		alignof(FSnapGridFlowModuleDatabaseConnectionInfo),
		Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem;
class UScriptStruct* FSnapGridFlowModuleDatabaseItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapGridFlowModuleDatabaseItem"));
	}
	return Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapGridFlowModuleDatabaseItem>()
{
	return FSnapGridFlowModuleDatabaseItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRotation_MetaData[];
#endif
		static void NewProp_bAllowRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChunks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumChunks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableMarkers_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AvailableMarkers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AvailableMarkers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotatedAssemblies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatedAssemblies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotatedAssemblies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapGridFlowModuleDatabaseItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation_SetBit(void* Obj)
	{
		((FSnapGridFlowModuleDatabaseItem*)Obj)->bAllowRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation = { "bAllowRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnapGridFlowModuleDatabaseItem), &Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_SelectionWeight_MetaData[] = {
		{ "Category", "Module" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * How often do you want this to be selected?  0.0 for least preference, 1.0 for most preference.  Specify a value from 0.0 to 1.0\n     */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "ToolTip", "How often do you want this to be selected?  0.0 for least preference, 1.0 for most preference.  Specify a value from 0.0 to 1.0" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_SelectionWeight = { "SelectionWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, SelectionWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_SelectionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_SelectionWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBounds_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBounds = { "ModuleBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, ModuleBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_NumChunks_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_NumChunks = { "NumChunks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, NumChunks), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_NumChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_NumChunks_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo, METADATA_PARAMS(nullptr, 0) }; // 712228359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections_MetaData)) }; // 712228359
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_ValueProp = { "AvailableMarkers", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_Key_KeyProp = { "AvailableMarkers_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers = { "AvailableMarkers", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, AvailableMarkers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies_Inner = { "RotatedAssemblies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSGFModuleAssembly, METADATA_PARAMS(nullptr, 0) }; // 3659755184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies = { "RotatedAssemblies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapGridFlowModuleDatabaseItem, RotatedAssemblies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies_MetaData)) }; // 3659755184
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_bAllowRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_SelectionWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_ModuleBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_NumChunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_AvailableMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewProp_RotatedAssemblies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SnapGridFlowModuleDatabaseItem",
		sizeof(FSnapGridFlowModuleDatabaseItem),
		alignof(FSnapGridFlowModuleDatabaseItem),
		Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.InnerSingleton, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem.InnerSingleton;
	}
	void USnapGridFlowModuleDatabase::StaticRegisterNativesUSnapGridFlowModuleDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModuleDatabase);
	UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister()
	{
		return USnapGridFlowModuleDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBoundsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModuleBoundsAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_ModuleBoundsAsset_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_ModuleBoundsAsset = { "ModuleBoundsAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleDatabase, ModuleBoundsAsset), Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_ModuleBoundsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_ModuleBoundsAsset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem, METADATA_PARAMS(nullptr, 0) }; // 3311463662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleDatabase, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules_MetaData)) }; // 3311463662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_ModuleBoundsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::NewProp_Modules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModuleDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::ClassParams = {
		&USnapGridFlowModuleDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowModuleDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModuleDatabase.OuterSingleton, Z_Construct_UClass_USnapGridFlowModuleDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowModuleDatabase.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowModuleDatabase>()
	{
		return USnapGridFlowModuleDatabase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModuleDatabase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ScriptStructInfo[] = {
		{ FSGFModuleAssemblySideCell::StaticStruct, Z_Construct_UScriptStruct_FSGFModuleAssemblySideCell_Statics::NewStructOps, TEXT("SGFModuleAssemblySideCell"), &Z_Registration_Info_UScriptStruct_SGFModuleAssemblySideCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGFModuleAssemblySideCell), 3237248046U) },
		{ FSGFModuleAssemblySide::StaticStruct, Z_Construct_UScriptStruct_FSGFModuleAssemblySide_Statics::NewStructOps, TEXT("SGFModuleAssemblySide"), &Z_Registration_Info_UScriptStruct_SGFModuleAssemblySide, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGFModuleAssemblySide), 3723400268U) },
		{ FSGFModuleAssembly::StaticStruct, Z_Construct_UScriptStruct_FSGFModuleAssembly_Statics::NewStructOps, TEXT("SGFModuleAssembly"), &Z_Registration_Info_UScriptStruct_SGFModuleAssembly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGFModuleAssembly), 3659755184U) },
		{ FSnapGridFlowModuleDatabaseConnectionInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseConnectionInfo_Statics::NewStructOps, TEXT("SnapGridFlowModuleDatabaseConnectionInfo"), &Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseConnectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapGridFlowModuleDatabaseConnectionInfo), 712228359U) },
		{ FSnapGridFlowModuleDatabaseItem::StaticStruct, Z_Construct_UScriptStruct_FSnapGridFlowModuleDatabaseItem_Statics::NewStructOps, TEXT("SnapGridFlowModuleDatabaseItem"), &Z_Registration_Info_UScriptStruct_SnapGridFlowModuleDatabaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapGridFlowModuleDatabaseItem), 3311463662U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowModuleDatabase, USnapGridFlowModuleDatabase::StaticClass, TEXT("USnapGridFlowModuleDatabase"), &Z_Registration_Info_UClass_USnapGridFlowModuleDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModuleDatabase), 2050929827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_2913668295(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleDatabase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
