// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonEventListener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonEventListener() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonMarkerInfo();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonEventListener::execOnDungeonDestroyed)
	{
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDungeonDestroyed_Implementation(Z_Param_Dungeon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonEventListener::execOnPreDungeonDestroy)
	{
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreDungeonDestroy_Implementation(Z_Param_Dungeon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonEventListener::execOnPostDungeonBuild)
	{
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostDungeonBuild_Implementation(Z_Param_Dungeon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonEventListener::execOnMarkersEmitted)
	{
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_GET_TARRAY_REF(FDungeonMarkerInfo,Z_Param_Out_MarkerList);
		P_GET_TARRAY_REF(FDungeonMarkerInfo,Z_Param_Out_MarkerListRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMarkersEmitted_Implementation(Z_Param_Dungeon,Z_Param_Out_MarkerList,Z_Param_Out_MarkerListRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonEventListener::execOnDungeonLayoutBuilt)
	{
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDungeonLayoutBuilt_Implementation(Z_Param_Dungeon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonEventListener::execOnPreDungeonBuild)
	{
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreDungeonBuild_Implementation(Z_Param_Dungeon);
		P_NATIVE_END;
	}
	static FName NAME_UDungeonEventListener_OnDungeonDestroyed = FName(TEXT("OnDungeonDestroyed"));
	void UDungeonEventListener::OnDungeonDestroyed(ADungeon* Dungeon)
	{
		DungeonEventListener_eventOnDungeonDestroyed_Parms Parms;
		Parms.Dungeon=Dungeon;
		ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnDungeonDestroyed),&Parms);
	}
	static FName NAME_UDungeonEventListener_OnDungeonLayoutBuilt = FName(TEXT("OnDungeonLayoutBuilt"));
	void UDungeonEventListener::OnDungeonLayoutBuilt(ADungeon* Dungeon)
	{
		DungeonEventListener_eventOnDungeonLayoutBuilt_Parms Parms;
		Parms.Dungeon=Dungeon;
		ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnDungeonLayoutBuilt),&Parms);
	}
	static FName NAME_UDungeonEventListener_OnMarkersEmitted = FName(TEXT("OnMarkersEmitted"));
	void UDungeonEventListener::OnMarkersEmitted(ADungeon* Dungeon, TArray<FDungeonMarkerInfo>& MarkerList, TArray<FDungeonMarkerInfo>& MarkerListRef)
	{
		DungeonEventListener_eventOnMarkersEmitted_Parms Parms;
		Parms.Dungeon=Dungeon;
		Parms.MarkerList=MarkerList;
		Parms.MarkerListRef=MarkerListRef;
		ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnMarkersEmitted),&Parms);
		MarkerList=Parms.MarkerList;
		MarkerListRef=Parms.MarkerListRef;
	}
	static FName NAME_UDungeonEventListener_OnPostDungeonBuild = FName(TEXT("OnPostDungeonBuild"));
	void UDungeonEventListener::OnPostDungeonBuild(ADungeon* Dungeon)
	{
		DungeonEventListener_eventOnPostDungeonBuild_Parms Parms;
		Parms.Dungeon=Dungeon;
		ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnPostDungeonBuild),&Parms);
	}
	static FName NAME_UDungeonEventListener_OnPreDungeonBuild = FName(TEXT("OnPreDungeonBuild"));
	void UDungeonEventListener::OnPreDungeonBuild(ADungeon* Dungeon)
	{
		DungeonEventListener_eventOnPreDungeonBuild_Parms Parms;
		Parms.Dungeon=Dungeon;
		ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnPreDungeonBuild),&Parms);
	}
	static FName NAME_UDungeonEventListener_OnPreDungeonDestroy = FName(TEXT("OnPreDungeonDestroy"));
	void UDungeonEventListener::OnPreDungeonDestroy(ADungeon* Dungeon)
	{
		DungeonEventListener_eventOnPreDungeonDestroy_Parms Parms;
		Parms.Dungeon=Dungeon;
		ProcessEvent(FindFunctionChecked(NAME_UDungeonEventListener_OnPreDungeonDestroy),&Parms);
	}
	void UDungeonEventListener::StaticRegisterNativesUDungeonEventListener()
	{
		UClass* Class = UDungeonEventListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDungeonDestroyed", &UDungeonEventListener::execOnDungeonDestroyed },
			{ "OnDungeonLayoutBuilt", &UDungeonEventListener::execOnDungeonLayoutBuilt },
			{ "OnMarkersEmitted", &UDungeonEventListener::execOnMarkersEmitted },
			{ "OnPostDungeonBuild", &UDungeonEventListener::execOnPostDungeonBuild },
			{ "OnPreDungeonBuild", &UDungeonEventListener::execOnPreDungeonBuild },
			{ "OnPreDungeonDestroy", &UDungeonEventListener::execOnPreDungeonDestroy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonEventListener_eventOnDungeonDestroyed_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::NewProp_Dungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called after the dungeon has been destroyed */" },
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
		{ "ToolTip", "Called after the dungeon has been destroyed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnDungeonDestroyed", nullptr, nullptr, sizeof(DungeonEventListener_eventOnDungeonDestroyed_Parms), Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonEventListener_eventOnDungeonLayoutBuilt_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::NewProp_Dungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called after the layout is generated in memory */" },
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
		{ "ToolTip", "Called after the layout is generated in memory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnDungeonLayoutBuilt", nullptr, nullptr, sizeof(DungeonEventListener_eventOnDungeonLayoutBuilt_Parms), Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerListRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerListRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonEventListener_eventOnMarkersEmitted_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerList_Inner = { "MarkerList", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDungeonMarkerInfo, METADATA_PARAMS(nullptr, 0) }; // 3778605977
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerList = { "MarkerList", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonEventListener_eventOnMarkersEmitted_Parms, MarkerList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3778605977
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerListRef_Inner = { "MarkerListRef", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDungeonMarkerInfo, METADATA_PARAMS(nullptr, 0) }; // 3778605977
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerListRef = { "MarkerListRef", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonEventListener_eventOnMarkersEmitted_Parms, MarkerListRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3778605977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_Dungeon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerListRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::NewProp_MarkerListRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called after all the markers are emitted into the scene */" },
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
		{ "ToolTip", "Called after all the markers are emitted into the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnMarkersEmitted", nullptr, nullptr, sizeof(DungeonEventListener_eventOnMarkersEmitted_Parms), Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonEventListener_eventOnPostDungeonBuild_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::NewProp_Dungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called after the dungeon is completely built */" },
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
		{ "ToolTip", "Called after the dungeon is completely built" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnPostDungeonBuild", nullptr, nullptr, sizeof(DungeonEventListener_eventOnPostDungeonBuild_Parms), Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonEventListener_eventOnPreDungeonBuild_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::NewProp_Dungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called before the dungeon is built */" },
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
		{ "ToolTip", "Called before the dungeon is built" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnPreDungeonBuild", nullptr, nullptr, sizeof(DungeonEventListener_eventOnPreDungeonBuild_Parms), Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonEventListener_eventOnPreDungeonDestroy_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::NewProp_Dungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called before the dungeon is about to be destroyed */" },
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
		{ "ToolTip", "Called before the dungeon is about to be destroyed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonEventListener, nullptr, "OnPreDungeonDestroy", nullptr, nullptr, sizeof(DungeonEventListener_eventOnPreDungeonDestroy_Parms), Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonEventListener);
	UClass* Z_Construct_UClass_UDungeonEventListener_NoRegister()
	{
		return UDungeonEventListener::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonEventListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonEventListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonEventListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonEventListener_OnDungeonDestroyed, "OnDungeonDestroyed" }, // 2707281989
		{ &Z_Construct_UFunction_UDungeonEventListener_OnDungeonLayoutBuilt, "OnDungeonLayoutBuilt" }, // 4231603337
		{ &Z_Construct_UFunction_UDungeonEventListener_OnMarkersEmitted, "OnMarkersEmitted" }, // 388754041
		{ &Z_Construct_UFunction_UDungeonEventListener_OnPostDungeonBuild, "OnPostDungeonBuild" }, // 4080694820
		{ &Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonBuild, "OnPreDungeonBuild" }, // 2165127265
		{ &Z_Construct_UFunction_UDungeonEventListener_OnPreDungeonDestroy, "OnPreDungeonDestroy" }, // 3450630967
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonEventListener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Implement this class in blueprint (or C++) to emit your own custom markers in the scene\n*/" },
		{ "IncludePath", "Core/DungeonEventListener.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonEventListener.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implement this class in blueprint (or C++) to emit your own custom markers in the scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonEventListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonEventListener>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonEventListener_Statics::ClassParams = {
		&UDungeonEventListener::StaticClass,
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
		0x043010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonEventListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEventListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonEventListener()
	{
		if (!Z_Registration_Info_UClass_UDungeonEventListener.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonEventListener.OuterSingleton, Z_Construct_UClass_UDungeonEventListener_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonEventListener.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonEventListener>()
	{
		return UDungeonEventListener::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonEventListener);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonEventListener, UDungeonEventListener::StaticClass, TEXT("UDungeonEventListener"), &Z_Registration_Info_UClass_UDungeonEventListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonEventListener), 3692633342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_1776559676(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
