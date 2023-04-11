// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	DEFINE_FUNCTION(USnapMapDungeonBuilder::execBuildPreviewSnapLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildPreviewSnapLayout();
		P_NATIVE_END;
	}
	void USnapMapDungeonBuilder::StaticRegisterNativesUSnapMapDungeonBuilder()
	{
		UClass* Class = USnapMapDungeonBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildPreviewSnapLayout", &USnapMapDungeonBuilder::execBuildPreviewSnapLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapMapDungeonBuilder, nullptr, "BuildPreviewSnapLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonBuilder);
	UClass* Z_Construct_UClass_USnapMapDungeonBuilder_NoRegister()
	{
		return USnapMapDungeonBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapDungeonBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapDungeonBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnapMapDungeonBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapMapDungeonBuilder_BuildPreviewSnapLayout, "BuildPreviewSnapLayout" }, // 4212959418
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The snap map builder\n*/" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonBuilder.h" },
		{ "ToolTip", "The snap map builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapDungeonBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonBuilder_Statics::ClassParams = {
		&USnapMapDungeonBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapDungeonBuilder()
	{
		if (!Z_Registration_Info_UClass_USnapMapDungeonBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonBuilder.OuterSingleton, Z_Construct_UClass_USnapMapDungeonBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapDungeonBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonBuilder>()
	{
		return USnapMapDungeonBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonBuilder, USnapMapDungeonBuilder::StaticClass, TEXT("USnapMapDungeonBuilder"), &Z_Registration_Info_UClass_USnapMapDungeonBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonBuilder), 2530081022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_1907910318(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
