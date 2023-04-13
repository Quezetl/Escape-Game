// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/RoomLayouts/SimpleIsaacRoomLayoutBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleIsaacRoomLayoutBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void USimpleIsaacRoomLayoutBuilder::StaticRegisterNativesUSimpleIsaacRoomLayoutBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleIsaacRoomLayoutBuilder);
	UClass* Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_NoRegister()
	{
		return USimpleIsaacRoomLayoutBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIsaacRoomLayoutBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Isaac/RoomLayouts/SimpleIsaacRoomLayoutBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/RoomLayouts/SimpleIsaacRoomLayoutBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleIsaacRoomLayoutBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::ClassParams = {
		&USimpleIsaacRoomLayoutBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder()
	{
		if (!Z_Registration_Info_UClass_USimpleIsaacRoomLayoutBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleIsaacRoomLayoutBuilder.OuterSingleton, Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleIsaacRoomLayoutBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleIsaacRoomLayoutBuilder>()
	{
		return USimpleIsaacRoomLayoutBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleIsaacRoomLayoutBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleIsaacRoomLayoutBuilder, USimpleIsaacRoomLayoutBuilder::StaticClass, TEXT("USimpleIsaacRoomLayoutBuilder"), &Z_Registration_Info_UClass_USimpleIsaacRoomLayoutBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleIsaacRoomLayoutBuilder), 2707214405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_1874046137(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_SimpleIsaacRoomLayoutBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
