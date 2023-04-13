// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAbstractNode() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractNode_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowGraphItem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowAbstractNodeGroup();
// End Cross Module References
	DEFINE_FUNCTION(UFlowAbstractNode::execContainsItem)
	{
		P_GET_ENUM(EFlowGraphItemType,Z_Param_ItemType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsItem(EFlowGraphItemType(Z_Param_ItemType),Z_Param_Out_Count);
		P_NATIVE_END;
	}
	void UFlowAbstractNode::StaticRegisterNativesUFlowAbstractNode()
	{
		UClass* Class = UFlowAbstractNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsItem", &UFlowAbstractNode::execContainsItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics
	{
		struct FlowAbstractNode_eventContainsItem_Parms
		{
			EFlowGraphItemType ItemType;
			int32 Count;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowAbstractNode_eventContainsItem_Parms, ItemType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType, METADATA_PARAMS(nullptr, 0) }; // 312840227
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowAbstractNode_eventContainsItem_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowAbstractNode_eventContainsItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowAbstractNode_eventContainsItem_Parms), &Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAbstractNode, nullptr, "ContainsItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::FlowAbstractNode_eventContainsItem_Parms), Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAbstractNode_ContainsItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowAbstractNode);
	UClass* Z_Construct_UClass_UFlowAbstractNode_NoRegister()
	{
		return UFlowAbstractNode::StaticClass();
	}
	struct Z_Construct_UClass_UFlowAbstractNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MergedCompositeNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergedCompositeNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MergedCompositeNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrossDomainNodeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossDomainNodeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CrossDomainNodeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PathIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PathLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowAbstractNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlowAbstractNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowAbstractNode_ContainsItem, "ContainsItem" }, // 30667383
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	void Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((UFlowAbstractNode*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowAbstractNode), &Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Coord_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, Coord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Coord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, PathName), METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems_Inner = { "NodeItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowGraphItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems = { "NodeItems", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, NodeItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PreviewLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PreviewLocation = { "PreviewLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, PreviewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PreviewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PreviewLocation_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes_Inner = { "MergedCompositeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowAbstractNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes_MetaData[] = {
		{ "Comment", "/** This node may be a composite node which was created by merging these nodes */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
		{ "ToolTip", "This node may be a composite node which was created by merging these nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes = { "MergedCompositeNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, MergedCompositeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData_Inner = { "CrossDomainNodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData_MetaData[] = {
		{ "Comment", "// Node data saved for use with another domain further down the lane (e.g. tilemap data, voxel data etc)\n" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
		{ "ToolTip", "Node data saved for use with another domain further down the lane (e.g. tilemap data, voxel data etc)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData = { "CrossDomainNodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, CrossDomainNodeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathIndex_MetaData[] = {
		{ "Comment", "/** How far is this node from the start of this branch */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
		{ "ToolTip", "How far is this node from the start of this branch" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathIndex = { "PathIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, PathIndex), METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathLength_MetaData[] = {
		{ "Comment", "/** The length of this branch */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
		{ "ToolTip", "The length of this branch" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathLength = { "PathLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractNode, PathLength), METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowAbstractNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Coord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PreviewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowAbstractNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowAbstractNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowAbstractNode_Statics::ClassParams = {
		&UFlowAbstractNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlowAbstractNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowAbstractNode()
	{
		if (!Z_Registration_Info_UClass_UFlowAbstractNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowAbstractNode.OuterSingleton, Z_Construct_UClass_UFlowAbstractNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowAbstractNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowAbstractNode>()
	{
		return UFlowAbstractNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowAbstractNode);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup;
class UScriptStruct* FFlowAbstractNodeGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowAbstractNodeGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowAbstractNodeGroup>()
{
	return FFlowAbstractNodeGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowAbstractNodeGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowAbstractNodeGroup, GroupId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes_Inner = { "GroupNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes = { "GroupNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowAbstractNodeGroup, GroupNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowAbstractNodeGroup",
		sizeof(FFlowAbstractNodeGroup),
		alignof(FFlowAbstractNodeGroup),
		Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowAbstractNodeGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.InnerSingleton, Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractNode_h_Statics::ScriptStructInfo[] = {
		{ FFlowAbstractNodeGroup::StaticStruct, Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewStructOps, TEXT("FlowAbstractNodeGroup"), &Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowAbstractNodeGroup), 1947318506U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowAbstractNode, UFlowAbstractNode::StaticClass, TEXT("UFlowAbstractNode"), &Z_Registration_Info_UClass_UFlowAbstractNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowAbstractNode), 349717395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractNode_h_3900682579(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
