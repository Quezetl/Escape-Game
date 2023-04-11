// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapModuleDatabase() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo;
class UScriptStruct* FSnapMapModuleDatabaseConnectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapMapModuleDatabaseConnectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapMapModuleDatabaseConnectionInfo>()
{
	return FSnapMapModuleDatabaseConnectionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapMapModuleDatabaseConnectionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseConnectionInfo, ConnectionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseConnectionInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo = { "ConnectionInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseConnectionInfo, ConnectionInfo), Z_Construct_UClass_USnapConnectionInfo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint = { "ConnectionConstraint", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseConnectionInfo, ConnectionConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_MetaData)) }; // 4201058760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewProp_ConnectionConstraint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SnapMapModuleDatabaseConnectionInfo",
		sizeof(FSnapMapModuleDatabaseConnectionInfo),
		alignof(FSnapMapModuleDatabaseConnectionInfo),
		Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem;
class UScriptStruct* FSnapMapModuleDatabaseItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapMapModuleDatabaseItem"));
	}
	return Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapMapModuleDatabaseItem>()
{
	return FSnapMapModuleDatabaseItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapMapModuleDatabaseItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBounds_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBounds = { "ModuleBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, ModuleBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBounds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo, METADATA_PARAMS(nullptr, 0) }; // 1143800198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapMapModuleDatabaseItem, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections_MetaData)) }; // 1143800198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_ModuleBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewProp_Connections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SnapMapModuleDatabaseItem",
		sizeof(FSnapMapModuleDatabaseItem),
		alignof(FSnapMapModuleDatabaseItem),
		Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.InnerSingleton, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem.InnerSingleton;
	}
	void USnapMapModuleDatabase::StaticRegisterNativesUSnapMapModuleDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapModuleDatabase);
	UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister()
	{
		return USnapMapModuleDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapModuleDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapModuleDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapModuleDatabase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem, METADATA_PARAMS(nullptr, 0) }; // 1687671776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapMap/SnapMapModuleDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapModuleDatabase, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules_MetaData)) }; // 1687671776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapModuleDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapModuleDatabase_Statics::NewProp_Modules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapModuleDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapModuleDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapModuleDatabase_Statics::ClassParams = {
		&USnapMapModuleDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapMapModuleDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapModuleDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapModuleDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapModuleDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapModuleDatabase()
	{
		if (!Z_Registration_Info_UClass_USnapMapModuleDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapModuleDatabase.OuterSingleton, Z_Construct_UClass_USnapMapModuleDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapModuleDatabase.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapModuleDatabase>()
	{
		return USnapMapModuleDatabase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapModuleDatabase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ScriptStructInfo[] = {
		{ FSnapMapModuleDatabaseConnectionInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseConnectionInfo_Statics::NewStructOps, TEXT("SnapMapModuleDatabaseConnectionInfo"), &Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseConnectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapMapModuleDatabaseConnectionInfo), 1143800198U) },
		{ FSnapMapModuleDatabaseItem::StaticStruct, Z_Construct_UScriptStruct_FSnapMapModuleDatabaseItem_Statics::NewStructOps, TEXT("SnapMapModuleDatabaseItem"), &Z_Registration_Info_UScriptStruct_SnapMapModuleDatabaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapMapModuleDatabaseItem), 1687671776U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapModuleDatabase, USnapMapModuleDatabase::StaticClass, TEXT("USnapMapModuleDatabase"), &Z_Registration_Info_UClass_USnapMapModuleDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapModuleDatabase), 3796745608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_1054868778(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapMap_SnapMapModuleDatabase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
