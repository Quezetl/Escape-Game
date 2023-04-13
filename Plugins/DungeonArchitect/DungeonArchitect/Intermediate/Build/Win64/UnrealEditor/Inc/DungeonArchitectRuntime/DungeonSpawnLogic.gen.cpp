// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/Rules/DungeonSpawnLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonSpawnLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonSpawnLogic::execOnItemSpawn)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemSpawn_Implementation(Z_Param_Actor,Z_Param_Dungeon);
		P_NATIVE_END;
	}
	static FName NAME_UDungeonSpawnLogic_OnItemSpawn = FName(TEXT("OnItemSpawn"));
	void UDungeonSpawnLogic::OnItemSpawn(AActor* Actor, ADungeon* Dungeon)
	{
		DungeonSpawnLogic_eventOnItemSpawn_Parms Parms;
		Parms.Actor=Actor;
		Parms.Dungeon=Dungeon;
		ProcessEvent(FindFunctionChecked(NAME_UDungeonSpawnLogic_OnItemSpawn),&Parms);
	}
	void UDungeonSpawnLogic::StaticRegisterNativesUDungeonSpawnLogic()
	{
		UClass* Class = UDungeonSpawnLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnItemSpawn", &UDungeonSpawnLogic::execOnItemSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonSpawnLogic_eventOnItemSpawn_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonSpawnLogic_eventOnItemSpawn_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::NewProp_Dungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called by the theming engine when a dungeon item is spawned into the scene */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Rules/DungeonSpawnLogic.h" },
		{ "ToolTip", "Called by the theming engine when a dungeon item is spawned into the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonSpawnLogic, nullptr, "OnItemSpawn", nullptr, nullptr, sizeof(DungeonSpawnLogic_eventOnItemSpawn_Parms), Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonSpawnLogic);
	UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister()
	{
		return UDungeonSpawnLogic::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonSpawnLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonSpawnLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonSpawnLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonSpawnLogic_OnItemSpawn, "OnItemSpawn" }, // 2314255183
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonSpawnLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Frameworks/ThemeEngine/Rules/DungeonSpawnLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Rules/DungeonSpawnLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonSpawnLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonSpawnLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonSpawnLogic_Statics::ClassParams = {
		&UDungeonSpawnLogic::StaticClass,
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
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonSpawnLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSpawnLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonSpawnLogic()
	{
		if (!Z_Registration_Info_UClass_UDungeonSpawnLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonSpawnLogic.OuterSingleton, Z_Construct_UClass_UDungeonSpawnLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonSpawnLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonSpawnLogic>()
	{
		return UDungeonSpawnLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonSpawnLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonSpawnLogic, UDungeonSpawnLogic::StaticClass, TEXT("UDungeonSpawnLogic"), &Z_Registration_Info_UClass_UDungeonSpawnLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonSpawnLogic), 334376679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_906408617(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
