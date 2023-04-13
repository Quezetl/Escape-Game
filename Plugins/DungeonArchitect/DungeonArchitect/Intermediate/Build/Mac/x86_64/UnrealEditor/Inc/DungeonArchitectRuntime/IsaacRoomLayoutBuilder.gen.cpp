// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/RoomLayouts/IsaacRoomLayoutBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacRoomLayoutBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UIsaacRoomLayoutBuilder::StaticRegisterNativesUIsaacRoomLayoutBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacRoomLayoutBuilder);
	UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder_NoRegister()
	{
		return UIsaacRoomLayoutBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Isaac/RoomLayouts/IsaacRoomLayoutBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/RoomLayouts/IsaacRoomLayoutBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacRoomLayoutBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::ClassParams = {
		&UIsaacRoomLayoutBuilder::StaticClass,
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
		0x043010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder()
	{
		if (!Z_Registration_Info_UClass_UIsaacRoomLayoutBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacRoomLayoutBuilder.OuterSingleton, Z_Construct_UClass_UIsaacRoomLayoutBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsaacRoomLayoutBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacRoomLayoutBuilder>()
	{
		return UIsaacRoomLayoutBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacRoomLayoutBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacRoomLayoutBuilder, UIsaacRoomLayoutBuilder::StaticClass, TEXT("UIsaacRoomLayoutBuilder"), &Z_Registration_Info_UClass_UIsaacRoomLayoutBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacRoomLayoutBuilder), 3243178032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_2793588947(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_RoomLayouts_IsaacRoomLayoutBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
