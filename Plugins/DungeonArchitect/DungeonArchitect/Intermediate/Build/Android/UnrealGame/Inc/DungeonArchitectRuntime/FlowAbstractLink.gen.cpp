// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAbstractLink() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractLink_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractLink();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowGraphItem_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowAbstractLinkType;
	static UEnum* EFlowAbstractLinkType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlowAbstractLinkType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlowAbstractLinkType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EFlowAbstractLinkType"));
		}
		return Z_Registration_Info_UEnum_EFlowAbstractLinkType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowAbstractLinkType>()
	{
		return EFlowAbstractLinkType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics::Enumerators[] = {
		{ "EFlowAbstractLinkType::Unconnected", (int64)EFlowAbstractLinkType::Unconnected },
		{ "EFlowAbstractLinkType::Connected", (int64)EFlowAbstractLinkType::Connected },
		{ "EFlowAbstractLinkType::OneWay", (int64)EFlowAbstractLinkType::OneWay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics::Enum_MetaDataParams[] = {
		{ "Connected.Name", "EFlowAbstractLinkType::Connected" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
		{ "OneWay.Name", "EFlowAbstractLinkType::OneWay" },
		{ "Unconnected.Name", "EFlowAbstractLinkType::Unconnected" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EFlowAbstractLinkType",
		"EFlowAbstractLinkType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType()
	{
		if (!Z_Registration_Info_UEnum_EFlowAbstractLinkType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowAbstractLinkType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlowAbstractLinkType.InnerSingleton;
	}
	void UFlowAbstractLink::StaticRegisterNativesUFlowAbstractLink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowAbstractLink);
	UClass* Z_Construct_UClass_UFlowAbstractLink_NoRegister()
	{
		return UFlowAbstractLink::StaticClass();
	}
	struct Z_Construct_UClass_UFlowAbstractLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSubNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceSubNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationSubNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationSubNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowAbstractLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractLink_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkId = { "LinkId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractLink, LinkId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractLink, Source), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Destination_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractLink, Destination), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Destination_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractLink, Type), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowAbstractLinkType, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Type_MetaData)) }; // 1221080387
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkItems_Inner = { "LinkItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowGraphItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkItems = { "LinkItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractLink, LinkItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_SourceSubNode_MetaData[] = {
		{ "Comment", "/** If the source node was merged, the original unmerged node id would be here */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
		{ "ToolTip", "If the source node was merged, the original unmerged node id would be here" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_SourceSubNode = { "SourceSubNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractLink, SourceSubNode), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_SourceSubNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_SourceSubNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_DestinationSubNode_MetaData[] = {
		{ "Comment", "/** If the destination node was merged, the original unmerged node id would be here */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractLink.h" },
		{ "ToolTip", "If the destination node was merged, the original unmerged node id would be here" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_DestinationSubNode = { "DestinationSubNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAbstractLink, DestinationSubNode), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_DestinationSubNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_DestinationSubNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowAbstractLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_LinkItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_SourceSubNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractLink_Statics::NewProp_DestinationSubNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowAbstractLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowAbstractLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowAbstractLink_Statics::ClassParams = {
		&UFlowAbstractLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowAbstractLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowAbstractLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowAbstractLink()
	{
		if (!Z_Registration_Info_UClass_UFlowAbstractLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowAbstractLink.OuterSingleton, Z_Construct_UClass_UFlowAbstractLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowAbstractLink.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowAbstractLink>()
	{
		return UFlowAbstractLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowAbstractLink);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractLink_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractLink_h_Statics::EnumInfo[] = {
		{ EFlowAbstractLinkType_StaticEnum, TEXT("EFlowAbstractLinkType"), &Z_Registration_Info_UEnum_EFlowAbstractLinkType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1221080387U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowAbstractLink, UFlowAbstractLink::StaticClass, TEXT("UFlowAbstractLink"), &Z_Registration_Info_UClass_UFlowAbstractLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowAbstractLink), 710550431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractLink_h_1510735272(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractLink_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractLink_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Core_FlowAbstractLink_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
