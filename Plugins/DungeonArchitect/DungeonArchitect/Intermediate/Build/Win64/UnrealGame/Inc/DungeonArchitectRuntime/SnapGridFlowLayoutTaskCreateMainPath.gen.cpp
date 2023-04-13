// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowLayoutTaskCreateMainPath() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_NoRegister();
// End Cross Module References
	void USnapGridFlowLayoutTaskCreateMainPath::StaticRegisterNativesUSnapGridFlowLayoutTaskCreateMainPath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowLayoutTaskCreateMainPath);
	UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_NoRegister()
	{
		return USnapGridFlowLayoutTaskCreateMainPath::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNodeCreationConstraint_MetaData[];
#endif
		static void NewProp_bUseNodeCreationConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNodeCreationConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeCreationConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeCreationConstraint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleCategories;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModuleCategoryOverrideMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleCategoryOverrideMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModuleCategoryOverrideMethod;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartNodeCategoryOverride_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNodeCategoryOverride_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartNodeCategoryOverride;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndNodeCategoryOverride_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndNodeCategoryOverride_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EndNodeCategoryOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryOverrideLogic_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryOverrideLogic_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryOverrideLogic_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryOverrideLogic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
		{ "MenuPriority", "1100" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
		{ "Title", "Create Main Path" },
		{ "Tooltip", "Create a main path with spawn and goal" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bUseNodeCreationConstraint_MetaData[] = {
		{ "Category", "Node Constraints" },
		{ "Comment", "/**\n        Enable this to control where the nodes are created\n\n        Variable Name: bUseNodeCreationConstraint\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Enable this to control where the nodes are created\n\nVariable Name: bUseNodeCreationConstraint" },
	};
#endif
	void Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bUseNodeCreationConstraint_SetBit(void* Obj)
	{
		((USnapGridFlowLayoutTaskCreateMainPath*)Obj)->bUseNodeCreationConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bUseNodeCreationConstraint = { "bUseNodeCreationConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapGridFlowLayoutTaskCreateMainPath), &Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bUseNodeCreationConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bUseNodeCreationConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bUseNodeCreationConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_NodeCreationConstraint_MetaData[] = {
		{ "Category", "Node Constraints" },
		{ "Comment", "/**\n        Use a blueprint to control where the layout nodes are allowed to be created   \n        This is useful if you want static entrances to your dungeon\n        This parameter requires bUseNodeCreationConstraint flag to be set\n\n        Variable Name: N/A\n    */" },
		{ "EditCondition", "bUseNodeCreationConstraint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Use a blueprint to control where the layout nodes are allowed to be created\nThis is useful if you want static entrances to your dungeon\nThis parameter requires bUseNodeCreationConstraint flag to be set\n\nVariable Name: N/A" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_NodeCreationConstraint = { "NodeCreationConstraint", nullptr, (EPropertyFlags)0x001202000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreateMainPath, NodeCreationConstraint), Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_NodeCreationConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_NodeCreationConstraint_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategories_Inner = { "ModuleCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategories_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategories = { "ModuleCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreateMainPath, ModuleCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategories_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategoryOverrideMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategoryOverrideMethod_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategoryOverrideMethod = { "ModuleCategoryOverrideMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreateMainPath, ModuleCategoryOverrideMethod), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapFlowAGTaskModuleCategoryOverrideMethod, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategoryOverrideMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategoryOverrideMethod_MetaData)) }; // 253266331
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodeCategoryOverride_Inner = { "StartNodeCategoryOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodeCategoryOverride_MetaData[] = {
		{ "Category", "Snap" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodeCategoryOverride = { "StartNodeCategoryOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreateMainPath, StartNodeCategoryOverride), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodeCategoryOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodeCategoryOverride_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodeCategoryOverride_Inner = { "EndNodeCategoryOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodeCategoryOverride_MetaData[] = {
		{ "Category", "Snap" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::StartEnd" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodeCategoryOverride = { "EndNodeCategoryOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreateMainPath, EndNodeCategoryOverride), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodeCategoryOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodeCategoryOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic_Inner_MetaData[] = {
		{ "Category", "Snap" },
		{ "Comment", "// Use a blueprint logic to change the category list on a per-node basis, if needed.\n// Create a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function\n" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Use a blueprint logic to change the category list on a per-node basis, if needed.\nCreate a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic_Inner = { "CategoryOverrideLogic", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USnapFlowNodeCategorySelectionOverride_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic_MetaData[] = {
		{ "Category", "Snap" },
		{ "Comment", "// Use a blueprint logic to change the category list on a per-node basis, if needed.\n// Create a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function\n" },
		{ "EditCondition", "ModuleCategoryOverrideMethod == ESnapFlowAGTaskModuleCategoryOverrideMethod::Blueprint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Use a blueprint logic to change the category list on a per-node basis, if needed.\nCreate a blueprint inherited from \"Snap Flow Node Category Selection Override\". Then override the \"TryOverrideCategories\" function" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic = { "CategoryOverrideLogic", nullptr, (EPropertyFlags)0x0010028000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreateMainPath, CategoryOverrideLogic), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bUseNodeCreationConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_NodeCreationConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategoryOverrideMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_ModuleCategoryOverrideMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodeCategoryOverride_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodeCategoryOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodeCategoryOverride_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodeCategoryOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::NewProp_CategoryOverrideLogic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowLayoutTaskCreateMainPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::ClassParams = {
		&USnapGridFlowLayoutTaskCreateMainPath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreateMainPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreateMainPath.OuterSingleton, Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreateMainPath.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowLayoutTaskCreateMainPath>()
	{
		return USnapGridFlowLayoutTaskCreateMainPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowLayoutTaskCreateMainPath);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateMainPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateMainPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowLayoutTaskCreateMainPath, USnapGridFlowLayoutTaskCreateMainPath::StaticClass, TEXT("USnapGridFlowLayoutTaskCreateMainPath"), &Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreateMainPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowLayoutTaskCreateMainPath), 688633690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateMainPath_h_3016832424(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateMainPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateMainPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
