// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAbstractItem() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowItemCustomInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowGraphItem_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowGraphItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonFlowItemMetadataComponent_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonFlowItemMetadataComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowGraphItemType;
	static UEnum* EFlowGraphItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlowGraphItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlowGraphItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EFlowGraphItemType"));
		}
		return Z_Registration_Info_UEnum_EFlowGraphItemType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowGraphItemType>()
	{
		return EFlowGraphItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics::Enumerators[] = {
		{ "EFlowGraphItemType::Enemy", (int64)EFlowGraphItemType::Enemy },
		{ "EFlowGraphItemType::Entrance", (int64)EFlowGraphItemType::Entrance },
		{ "EFlowGraphItemType::Exit", (int64)EFlowGraphItemType::Exit },
		{ "EFlowGraphItemType::Treasure", (int64)EFlowGraphItemType::Treasure },
		{ "EFlowGraphItemType::Key", (int64)EFlowGraphItemType::Key },
		{ "EFlowGraphItemType::Lock", (int64)EFlowGraphItemType::Lock },
		{ "EFlowGraphItemType::Teleporter", (int64)EFlowGraphItemType::Teleporter },
		{ "EFlowGraphItemType::Custom", (int64)EFlowGraphItemType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics::Enum_MetaDataParams[] = {
		{ "Custom.Name", "EFlowGraphItemType::Custom" },
		{ "Enemy.Name", "EFlowGraphItemType::Enemy" },
		{ "Entrance.Name", "EFlowGraphItemType::Entrance" },
		{ "Exit.Name", "EFlowGraphItemType::Exit" },
		{ "Key.Name", "EFlowGraphItemType::Key" },
		{ "Lock.Name", "EFlowGraphItemType::Lock" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
		{ "Teleporter.Name", "EFlowGraphItemType::Teleporter" },
		{ "Treasure.Name", "EFlowGraphItemType::Treasure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EFlowGraphItemType",
		"EFlowGraphItemType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType()
	{
		if (!Z_Registration_Info_UEnum_EFlowGraphItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowGraphItemType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlowGraphItemType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowItemCustomInfo;
class UScriptStruct* FFlowItemCustomInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowItemCustomInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowItemCustomInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowItemCustomInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowItemCustomInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FlowItemCustomInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowItemCustomInfo>()
{
	return FFlowItemCustomInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FontScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowItemCustomInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewText_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewText = { "PreviewText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowItemCustomInfo, PreviewText), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewTextColor_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewTextColor = { "PreviewTextColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowItemCustomInfo, PreviewTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewTextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewBackgroundColor_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewBackgroundColor = { "PreviewBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowItemCustomInfo, PreviewBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_FontScale_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_FontScale = { "FontScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowItemCustomInfo, FontScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_FontScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_FontScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_PreviewBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewProp_FontScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowItemCustomInfo",
		sizeof(FFlowItemCustomInfo),
		alignof(FFlowItemCustomInfo),
		Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowItemCustomInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowItemCustomInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowItemCustomInfo.InnerSingleton, Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowItemCustomInfo.InnerSingleton;
	}
	void UFlowGraphItem::StaticRegisterNativesUFlowGraphItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowGraphItem);
	UClass* Z_Construct_UClass_UFlowGraphItem_NoRegister()
	{
		return UFlowGraphItem::StaticClass();
	}
	struct Z_Construct_UClass_UFlowGraphItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedItemIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedItemIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedItemIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditorSelected_MetaData[];
#endif
		static void NewProp_bEditorSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowGraphItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphItem, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphItem, ItemType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemType_MetaData)) }; // 312840227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphItem, MarkerName), METADATA_PARAMS(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_MarkerName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ReferencedItemIds_Inner = { "ReferencedItemIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ReferencedItemIds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ReferencedItemIds = { "ReferencedItemIds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphItem, ReferencedItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ReferencedItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ReferencedItemIds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_bEditorSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	void Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_bEditorSelected_SetBit(void* Obj)
	{
		((UFlowGraphItem*)Obj)->bEditorSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_bEditorSelected = { "bEditorSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowGraphItem), &Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_bEditorSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_bEditorSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_bEditorSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_CustomInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_CustomInfo = { "CustomInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphItem, CustomInfo), Z_Construct_UScriptStruct_FFlowItemCustomInfo, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_CustomInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_CustomInfo_MetaData)) }; // 1056672046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowGraphItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ReferencedItemIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_ReferencedItemIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_bEditorSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphItem_Statics::NewProp_CustomInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowGraphItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowGraphItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowGraphItem_Statics::ClassParams = {
		&UFlowGraphItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowGraphItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowGraphItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowGraphItem()
	{
		if (!Z_Registration_Info_UClass_UFlowGraphItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowGraphItem.OuterSingleton, Z_Construct_UClass_UFlowGraphItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowGraphItem.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowGraphItem>()
	{
		return UFlowGraphItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowGraphItem);
	struct Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics
	{
		struct _Script_DungeonArchitectRuntime_eventDungeonFlowItemMetadataEvent_Parms
		{
			const UFlowGraphItem* Item;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDungeonFlowItemMetadataEvent_Parms, Item), Z_Construct_UClass_UFlowGraphItem_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime, nullptr, "DungeonFlowItemMetadataEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDungeonFlowItemMetadataEvent_Parms), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UDungeonFlowItemMetadataComponent::StaticRegisterNativesUDungeonFlowItemMetadataComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonFlowItemMetadataComponent);
	UClass* Z_Construct_UClass_UDungeonFlowItemMetadataComponent_NoRegister()
	{
		return UDungeonFlowItemMetadataComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowItem_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FlowItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFlowItemUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlowItemUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_FlowItem_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_FlowItem = { "FlowItem", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonFlowItemMetadataComponent, FlowItem), Z_Construct_UClass_UFlowGraphItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_FlowItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_FlowItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_OnFlowItemUpdated_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractItem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_OnFlowItemUpdated = { "OnFlowItemUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonFlowItemMetadataComponent, OnFlowItemUpdated), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_OnFlowItemUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_OnFlowItemUpdated_MetaData)) }; // 3821833034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_FlowItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::NewProp_OnFlowItemUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonFlowItemMetadataComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::ClassParams = {
		&UDungeonFlowItemMetadataComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonFlowItemMetadataComponent()
	{
		if (!Z_Registration_Info_UClass_UDungeonFlowItemMetadataComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonFlowItemMetadataComponent.OuterSingleton, Z_Construct_UClass_UDungeonFlowItemMetadataComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonFlowItemMetadataComponent.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonFlowItemMetadataComponent>()
	{
		return UDungeonFlowItemMetadataComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonFlowItemMetadataComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::EnumInfo[] = {
		{ EFlowGraphItemType_StaticEnum, TEXT("EFlowGraphItemType"), &Z_Registration_Info_UEnum_EFlowGraphItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 312840227U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::ScriptStructInfo[] = {
		{ FFlowItemCustomInfo::StaticStruct, Z_Construct_UScriptStruct_FFlowItemCustomInfo_Statics::NewStructOps, TEXT("FlowItemCustomInfo"), &Z_Registration_Info_UScriptStruct_FlowItemCustomInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowItemCustomInfo), 1056672046U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowGraphItem, UFlowGraphItem::StaticClass, TEXT("UFlowGraphItem"), &Z_Registration_Info_UClass_UFlowGraphItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowGraphItem), 2142340557U) },
		{ Z_Construct_UClass_UDungeonFlowItemMetadataComponent, UDungeonFlowItemMetadataComponent::StaticClass, TEXT("UDungeonFlowItemMetadataComponent"), &Z_Registration_Info_UClass_UDungeonFlowItemMetadataComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonFlowItemMetadataComponent), 1789434903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_4191590328(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractItem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
