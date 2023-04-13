// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/LaunchPad/Data/LaunchPadData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPadData() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadCategoryItem();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadCategories();
	DUNGEONARCHITECTEDITOR_API UEnum* Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageHeader();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid();
	DUNGEONARCHITECTEDITOR_API UEnum* Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageActionData();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem;
class UScriptStruct* FLaunchPadCategoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadCategoryItem, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadCategoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadCategoryItem>()
{
	return FLaunchPadCategoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Page_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Page;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/////////////////// Categories /////////////////// \n" },
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
		{ "ToolTip", "/ Categories /" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadCategoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Page_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadCategoryItem, Page), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Page_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Page_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadCategoryItem, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewProp_Title,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"LaunchPadCategoryItem",
		sizeof(FLaunchPadCategoryItem),
		alignof(FLaunchPadCategoryItem),
		Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadCategoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadCategories;
class UScriptStruct* FLaunchPadCategories::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadCategories.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadCategories.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadCategories, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadCategories"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadCategories.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadCategories>()
{
	return FLaunchPadCategories::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchPadCategories_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadCategories>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLaunchPadCategoryItem, METADATA_PARAMS(nullptr, 0) }; // 936010245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadCategories, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items_MetaData)) }; // 936010245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"LaunchPadCategories",
		sizeof(FLaunchPadCategories),
		alignof(FLaunchPadCategories),
		Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadCategories()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchPadCategories.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadCategories.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchPadCategories.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELaunchPagePageLayout;
	static UEnum* ELaunchPagePageLayout_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELaunchPagePageLayout.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELaunchPagePageLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("ELaunchPagePageLayout"));
		}
		return Z_Registration_Info_UEnum_ELaunchPagePageLayout.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<ELaunchPagePageLayout>()
	{
		return ELaunchPagePageLayout_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enumerators[] = {
		{ "ELaunchPagePageLayout::CardGrid", (int64)ELaunchPagePageLayout::CardGrid },
		{ "ELaunchPagePageLayout::Details", (int64)ELaunchPagePageLayout::Details },
		{ "ELaunchPagePageLayout::News", (int64)ELaunchPagePageLayout::News },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enum_MetaDataParams[] = {
		{ "CardGrid.Name", "ELaunchPagePageLayout::CardGrid" },
		{ "Comment", "/////////////////// Page /////////////////// \n" },
		{ "Details.Name", "ELaunchPagePageLayout::Details" },
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
		{ "News.Name", "ELaunchPagePageLayout::News" },
		{ "ToolTip", "/ Page /" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		"ELaunchPagePageLayout",
		"ELaunchPagePageLayout",
		Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout()
	{
		if (!Z_Registration_Info_UEnum_ELaunchPagePageLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELaunchPagePageLayout.InnerSingleton, Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELaunchPagePageLayout.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageHeader;
class UScriptStruct* FLaunchPadPageHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageHeader, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageHeader"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageHeader>()
{
	return FLaunchPadPageHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Layout_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Layout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageHeader, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageHeader, Layout), Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPagePageLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout_MetaData)) }; // 177625167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewProp_Layout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"LaunchPadPageHeader",
		sizeof(FLaunchPadPageHeader),
		alignof(FLaunchPadPageHeader),
		Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchPadPageHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo;
class UScriptStruct* FLaunchPadPageLayout_CardGrid_CardInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageLayout_CardGrid_CardInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageLayout_CardGrid_CardInfo>()
{
	return FLaunchPadPageLayout_CardGrid_CardInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Link;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/////////////////// Page Layout: CardGrid /////////////////// \n" },
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
		{ "ToolTip", "/ Page Layout: CardGrid /" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageLayout_CardGrid_CardInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Desc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Desc), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Desc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Image_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Image), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Link_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Link), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Link_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Link_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Url_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_CardInfo, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Link,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewProp_Url,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"LaunchPadPageLayout_CardGrid_CardInfo",
		sizeof(FLaunchPadPageLayout_CardGrid_CardInfo),
		alignof(FLaunchPadPageLayout_CardGrid_CardInfo),
		Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category;
class UScriptStruct* FLaunchPadPageLayout_CardGrid_Category::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageLayout_CardGrid_Category"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageLayout_CardGrid_Category>()
{
	return FLaunchPadPageLayout_CardGrid_Category::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageLayout_CardGrid_Category>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_Category, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo, METADATA_PARAMS(nullptr, 0) }; // 3062968357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid_Category, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards_MetaData)) }; // 3062968357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewProp_Cards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"LaunchPadPageLayout_CardGrid_Category",
		sizeof(FLaunchPadPageLayout_CardGrid_Category),
		alignof(FLaunchPadPageLayout_CardGrid_Category),
		Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid;
class UScriptStruct* FLaunchPadPageLayout_CardGrid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageLayout_CardGrid"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageLayout_CardGrid>()
{
	return FLaunchPadPageLayout_CardGrid::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowCategoryTitles_MetaData[];
#endif
		static void NewProp_ShowCategoryTitles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCategoryTitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CardHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPadding_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CardPadding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageLayout_CardGrid>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles_SetBit(void* Obj)
	{
		((FLaunchPadPageLayout_CardGrid*)Obj)->ShowCategoryTitles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles = { "ShowCategoryTitles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLaunchPadPageLayout_CardGrid), &Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageWidth = { "ImageWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, ImageWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageHeight = { "ImageHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, ImageHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardHeight = { "CardHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, CardHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardPadding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardPadding = { "CardPadding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, CardPadding), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardPadding_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category, METADATA_PARAMS(nullptr, 0) }; // 1706638901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_CardGrid, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories_MetaData)) }; // 1706638901
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ShowCategoryTitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_ImageHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_CardPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewProp_Categories,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"LaunchPadPageLayout_CardGrid",
		sizeof(FLaunchPadPageLayout_CardGrid),
		alignof(FLaunchPadPageLayout_CardGrid),
		Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELaunchPadActionType;
	static UEnum* ELaunchPadActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELaunchPadActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELaunchPadActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("ELaunchPadActionType"));
		}
		return Z_Registration_Info_UEnum_ELaunchPadActionType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<ELaunchPadActionType>()
	{
		return ELaunchPadActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enumerators[] = {
		{ "ELaunchPadActionType::None", (int64)ELaunchPadActionType::None },
		{ "ELaunchPadActionType::OpenFolder", (int64)ELaunchPadActionType::OpenFolder },
		{ "ELaunchPadActionType::OpenScene", (int64)ELaunchPadActionType::OpenScene },
		{ "ELaunchPadActionType::OpenTheme", (int64)ELaunchPadActionType::OpenTheme },
		{ "ELaunchPadActionType::OpenSnapFlow", (int64)ELaunchPadActionType::OpenSnapFlow },
		{ "ELaunchPadActionType::OpenGridFlow", (int64)ELaunchPadActionType::OpenGridFlow },
		{ "ELaunchPadActionType::CloneScene", (int64)ELaunchPadActionType::CloneScene },
		{ "ELaunchPadActionType::CloneSceneAndBuild", (int64)ELaunchPadActionType::CloneSceneAndBuild },
		{ "ELaunchPadActionType::CloneTheme", (int64)ELaunchPadActionType::CloneTheme },
		{ "ELaunchPadActionType::CloneSnapFlow", (int64)ELaunchPadActionType::CloneSnapFlow },
		{ "ELaunchPadActionType::CloneGridFlow", (int64)ELaunchPadActionType::CloneGridFlow },
		{ "ELaunchPadActionType::CloneSnapGridFlow", (int64)ELaunchPadActionType::CloneSnapGridFlow },
		{ "ELaunchPadActionType::Documentation", (int64)ELaunchPadActionType::Documentation },
		{ "ELaunchPadActionType::LauncherURL", (int64)ELaunchPadActionType::LauncherURL },
		{ "ELaunchPadActionType::AddStarterContent", (int64)ELaunchPadActionType::AddStarterContent },
		{ "ELaunchPadActionType::Video", (int64)ELaunchPadActionType::Video },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enum_MetaDataParams[] = {
		{ "AddStarterContent.Name", "ELaunchPadActionType::AddStarterContent" },
		{ "CloneGridFlow.Name", "ELaunchPadActionType::CloneGridFlow" },
		{ "CloneScene.Name", "ELaunchPadActionType::CloneScene" },
		{ "CloneSceneAndBuild.Name", "ELaunchPadActionType::CloneSceneAndBuild" },
		{ "CloneSnapFlow.Name", "ELaunchPadActionType::CloneSnapFlow" },
		{ "CloneSnapGridFlow.Name", "ELaunchPadActionType::CloneSnapGridFlow" },
		{ "CloneTheme.Name", "ELaunchPadActionType::CloneTheme" },
		{ "Documentation.Name", "ELaunchPadActionType::Documentation" },
		{ "LauncherURL.Name", "ELaunchPadActionType::LauncherURL" },
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
		{ "None.Name", "ELaunchPadActionType::None" },
		{ "OpenFolder.Name", "ELaunchPadActionType::OpenFolder" },
		{ "OpenGridFlow.Name", "ELaunchPadActionType::OpenGridFlow" },
		{ "OpenScene.Name", "ELaunchPadActionType::OpenScene" },
		{ "OpenSnapFlow.Name", "ELaunchPadActionType::OpenSnapFlow" },
		{ "OpenTheme.Name", "ELaunchPadActionType::OpenTheme" },
		{ "Video.Name", "ELaunchPadActionType::Video" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		"ELaunchPadActionType",
		"ELaunchPadActionType",
		Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType()
	{
		if (!Z_Registration_Info_UEnum_ELaunchPadActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELaunchPadActionType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELaunchPadActionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageActionData;
class UScriptStruct* FLaunchPadPageActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageActionData, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageActionData"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageActionData>()
{
	return FLaunchPadPageActionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageActionData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Type), Z_Construct_UEnum_DungeonArchitectEditor_ELaunchPadActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type_MetaData)) }; // 3598158496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Icon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Icon), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageActionData, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Width_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewProp_Width,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"LaunchPadPageActionData",
		sizeof(FLaunchPadPageActionData),
		alignof(FLaunchPadPageActionData),
		Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageActionData()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchPadPageActionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details;
class UScriptStruct* FLaunchPadPageLayout_Details::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("LaunchPadPageLayout_Details"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FLaunchPadPageLayout_Details>()
{
	return FLaunchPadPageLayout_Details::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Image;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchPadPageLayout_Details>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_Details, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Desc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_Details, Desc), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Desc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Image_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_Details, Image), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Image_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLaunchPadPageActionData, METADATA_PARAMS(nullptr, 0) }; // 2861022846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Data/LaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLaunchPadPageLayout_Details, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions_MetaData)) }; // 2861022846
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewProp_Actions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"LaunchPadPageLayout_Details",
		sizeof(FLaunchPadPageLayout_Details),
		alignof(FLaunchPadPageLayout_Details),
		Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.InnerSingleton, Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::EnumInfo[] = {
		{ ELaunchPagePageLayout_StaticEnum, TEXT("ELaunchPagePageLayout"), &Z_Registration_Info_UEnum_ELaunchPagePageLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 177625167U) },
		{ ELaunchPadActionType_StaticEnum, TEXT("ELaunchPadActionType"), &Z_Registration_Info_UEnum_ELaunchPadActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3598158496U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::ScriptStructInfo[] = {
		{ FLaunchPadCategoryItem::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics::NewStructOps, TEXT("LaunchPadCategoryItem"), &Z_Registration_Info_UScriptStruct_LaunchPadCategoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadCategoryItem), 936010245U) },
		{ FLaunchPadCategories::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadCategories_Statics::NewStructOps, TEXT("LaunchPadCategories"), &Z_Registration_Info_UScriptStruct_LaunchPadCategories, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadCategories), 918987582U) },
		{ FLaunchPadPageHeader::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics::NewStructOps, TEXT("LaunchPadPageHeader"), &Z_Registration_Info_UScriptStruct_LaunchPadPageHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageHeader), 705157058U) },
		{ FLaunchPadPageLayout_CardGrid_CardInfo::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics::NewStructOps, TEXT("LaunchPadPageLayout_CardGrid_CardInfo"), &Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_CardInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageLayout_CardGrid_CardInfo), 3062968357U) },
		{ FLaunchPadPageLayout_CardGrid_Category::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics::NewStructOps, TEXT("LaunchPadPageLayout_CardGrid_Category"), &Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid_Category, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageLayout_CardGrid_Category), 1706638901U) },
		{ FLaunchPadPageLayout_CardGrid::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics::NewStructOps, TEXT("LaunchPadPageLayout_CardGrid"), &Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_CardGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageLayout_CardGrid), 2052032265U) },
		{ FLaunchPadPageActionData::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics::NewStructOps, TEXT("LaunchPadPageActionData"), &Z_Registration_Info_UScriptStruct_LaunchPadPageActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageActionData), 2861022846U) },
		{ FLaunchPadPageLayout_Details::StaticStruct, Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics::NewStructOps, TEXT("LaunchPadPageLayout_Details"), &Z_Registration_Info_UScriptStruct_LaunchPadPageLayout_Details, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchPadPageLayout_Details), 4179658324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_1474798646(TEXT("/Script/DungeonArchitectEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
