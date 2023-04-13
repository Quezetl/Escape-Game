// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonArchitectRuntime_init() {}
	DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature();
	DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature();
	DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature();
	DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DungeonArchitectRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_DungeonArchitectRuntime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonFlowItemMetadataEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DungeonArchitectRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x179BA533,
				0xACFCD5DC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DungeonArchitectRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DungeonArchitectRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DungeonArchitectRuntime(Z_Construct_UPackage__Script_DungeonArchitectRuntime, TEXT("/Script/DungeonArchitectRuntime"), Z_Registration_Info_UPackage__Script_DungeonArchitectRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x179BA533, 0xACFCD5DC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
