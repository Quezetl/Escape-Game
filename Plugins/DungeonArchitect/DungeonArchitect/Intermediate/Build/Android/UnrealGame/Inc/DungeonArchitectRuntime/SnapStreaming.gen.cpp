// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapStreaming() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapStreamingChunk_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapStreamingChunk();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunk();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapStreamingChunkActorData_NoRegister();
// End Cross Module References
	void USnapStreamingChunk::StaticRegisterNativesUSnapStreamingChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapStreamingChunk);
	UClass* Z_Construct_UClass_USnapStreamingChunk_NoRegister()
	{
		return USnapStreamingChunk::StaticClass();
	}
	struct Z_Construct_UClass_USnapStreamingChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SerializedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapStreamingChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonStreamingChunk,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapStreamingChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_ModuleTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_ModuleTransform = { "ModuleTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapStreamingChunk, ModuleTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_ModuleTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_ModuleTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_SerializedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Streaming/SnapStreaming.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapStreamingChunk, SerializedData), Z_Construct_UClass_USnapStreamingChunkActorData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_SerializedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_SerializedData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapStreamingChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_ModuleTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapStreamingChunk_Statics::NewProp_SerializedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapStreamingChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapStreamingChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapStreamingChunk_Statics::ClassParams = {
		&USnapStreamingChunk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapStreamingChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunk_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapStreamingChunk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapStreamingChunk()
	{
		if (!Z_Registration_Info_UClass_USnapStreamingChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapStreamingChunk.OuterSingleton, Z_Construct_UClass_USnapStreamingChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapStreamingChunk.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapStreamingChunk>()
	{
		return USnapStreamingChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapStreamingChunk);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapStreamingChunk, USnapStreamingChunk::StaticClass, TEXT("USnapStreamingChunk"), &Z_Registration_Info_UClass_USnapStreamingChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapStreamingChunk), 2139903672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_2077468675(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Streaming_SnapStreaming_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
