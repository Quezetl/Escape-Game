// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_DungeonProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_DungeonProp() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_DungeonProp_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_DungeonProp();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
// End Cross Module References
	void UEdGraphSchema_DungeonProp::StaticRegisterNativesUEdGraphSchema_DungeonProp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_DungeonProp);
	UClass* Z_Construct_UClass_UEdGraphSchema_DungeonProp_NoRegister()
	{
		return UEdGraphSchema_DungeonProp::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_DungeonProp.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_DungeonProp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_DungeonProp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::ClassParams = {
		&UEdGraphSchema_DungeonProp::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_DungeonProp()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_DungeonProp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_DungeonProp.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_DungeonProp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_DungeonProp.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphSchema_DungeonProp>()
	{
		return UEdGraphSchema_DungeonProp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_DungeonProp);

static_assert(std::is_polymorphic<FDungeonSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDungeonSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment;
class UScriptStruct* FDungeonSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DungeonSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDungeonSchemaAction_NewComment>()
{
	return FDungeonSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a comment node to the graph */" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_DungeonProp.h" },
		{ "ToolTip", "Action to add a comment node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"DungeonSchemaAction_NewComment",
		sizeof(FDungeonSchemaAction_NewComment),
		alignof(FDungeonSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ScriptStructInfo[] = {
		{ FDungeonSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FDungeonSchemaAction_NewComment_Statics::NewStructOps, TEXT("DungeonSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonSchemaAction_NewComment), 838381076U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_DungeonProp, UEdGraphSchema_DungeonProp::StaticClass, TEXT("UEdGraphSchema_DungeonProp"), &Z_Registration_Info_UClass_UEdGraphSchema_DungeonProp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_DungeonProp), 2283237887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_1099672064(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_DungeonProp_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
