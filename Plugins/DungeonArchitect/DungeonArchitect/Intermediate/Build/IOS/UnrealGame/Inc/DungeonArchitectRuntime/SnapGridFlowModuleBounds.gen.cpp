// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowModuleBounds() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ASnapGridFlowModuleBoundsActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void USnapGridFlowModuleBoundsAsset::StaticRegisterNativesUSnapGridFlowModuleBoundsAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModuleBoundsAsset);
	UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_NoRegister()
	{
		return USnapGridFlowModuleBoundsAsset::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsWireColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsWireColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorOffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorOffsetZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////// Snap Grid Flow Module Bounds ////////////////////////////\n" },
		{ "IncludePath", "Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ToolTip", "/ Snap Grid Flow Module Bounds /" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_ChunkSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The world size of a module chunk (1x1x1).  A module can span multiple chunks (e.g 2x2x1) */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ToolTip", "The world size of a module chunk (1x1x1).  A module can span multiple chunks (e.g 2x2x1)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleBoundsAsset, ChunkSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_ChunkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_ChunkSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_BoundsWireColor_MetaData[] = {
		{ "Category", "Helper Visuals (Editor Only)" },
		{ "Comment", "/** The color of the bounds wireframe. Use this bounds as a reference while designing your module level files */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ToolTip", "The color of the bounds wireframe. Use this bounds as a reference while designing your module level files" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_BoundsWireColor = { "BoundsWireColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleBoundsAsset, BoundsWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_BoundsWireColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_BoundsWireColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorColor_MetaData[] = {
		{ "Category", "Helper Visuals (Editor Only)" },
		{ "Comment", "/** The color of the Door Info. Use this align the doors in your module level files */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ToolTip", "The color of the Door Info. Use this align the doors in your module level files" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorColor = { "DoorColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleBoundsAsset, DoorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorOffsetZ_MetaData[] = {
		{ "Category", "Helper Visuals (Editor Only)" },
		{ "Comment", "/**\n     * How high do you want the door to be from the lower bounds.\n     * This will create a door visual indicator on the bounds actor, aiding your while designing your modules\n     */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ToolTip", "How high do you want the door to be from the lower bounds.\nThis will create a door visual indicator on the bounds actor, aiding your while designing your modules" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorOffsetZ = { "DoorOffsetZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleBoundsAsset, DoorOffsetZ), METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorOffsetZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_ChunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_BoundsWireColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::NewProp_DoorOffsetZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModuleBoundsAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::ClassParams = {
		&USnapGridFlowModuleBoundsAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsAsset()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowModuleBoundsAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModuleBoundsAsset.OuterSingleton, Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowModuleBoundsAsset.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowModuleBoundsAsset>()
	{
		return USnapGridFlowModuleBoundsAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModuleBoundsAsset);
	void USnapGridFlowModuleBoundsComponent::StaticRegisterNativesUSnapGridFlowModuleBoundsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModuleBoundsComponent);
	UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_NoRegister()
	{
		return USnapGridFlowModuleBoundsComponent::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChunks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumChunks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderBounds_MetaData[];
#endif
		static void NewProp_bRenderBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBounds_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModuleBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Physics Lighting LOD Rendering TextureStreaming Transform Activation Components|Activation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_NumChunks_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * Specify the size of the combined room in logical node size.  E.g. (2, 1, 1) implies we try to fit this room\n    * with two adjacent nodes in the x axis \n    **/" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ToolTip", "Specify the size of the combined room in logical node size.  E.g. (2, 1, 1) implies we try to fit this room\nwith two adjacent nodes in the x axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_NumChunks = { "NumChunks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleBoundsComponent, NumChunks), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_NumChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_NumChunks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_bRenderBounds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * Indicates if the bounds are to be rendered in the editor.  You can safely turn this off if it gets in the way \n    **/" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ToolTip", "Indicates if the bounds are to be rendered in the editor.  You can safely turn this off if it gets in the way" },
	};
#endif
	void Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_bRenderBounds_SetBit(void* Obj)
	{
		((USnapGridFlowModuleBoundsComponent*)Obj)->bRenderBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_bRenderBounds = { "bRenderBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapGridFlowModuleBoundsComponent), &Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_bRenderBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_bRenderBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_bRenderBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_ModuleBounds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The module bounds asset reference. This is automatically assigned when you drag this asset from the content browser on to the scene */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "ToolTip", "The module bounds asset reference. This is automatically assigned when you drag this asset from the content browser on to the scene" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_ModuleBounds = { "ModuleBounds", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleBoundsComponent, ModuleBounds), Z_Construct_UClass_USnapGridFlowModuleBoundsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_ModuleBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_ModuleBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_NumChunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_bRenderBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::NewProp_ModuleBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModuleBoundsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::ClassParams = {
		&USnapGridFlowModuleBoundsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::PropPointers),
		0,
		0x04B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowModuleBoundsComponent()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowModuleBoundsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModuleBoundsComponent.OuterSingleton, Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowModuleBoundsComponent.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowModuleBoundsComponent>()
	{
		return USnapGridFlowModuleBoundsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModuleBoundsComponent);
	void ASnapGridFlowModuleBoundsActor::StaticRegisterNativesASnapGridFlowModuleBoundsActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnapGridFlowModuleBoundsActor);
	UClass* Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_NoRegister()
	{
		return ASnapGridFlowModuleBoundsActor::StaticClass();
	}
	struct Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::Class_MetaDataParams[] = {
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_BoundsComponent_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_BoundsComponent = { "BoundsComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapGridFlowModuleBoundsActor, BoundsComponent), Z_Construct_UClass_USnapGridFlowModuleBoundsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_BoundsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_BoundsComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_Billboard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleBounds.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x0010000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapGridFlowModuleBoundsActor, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_Billboard_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_BoundsComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::NewProp_Billboard,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnapGridFlowModuleBoundsActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::ClassParams = {
		&ASnapGridFlowModuleBoundsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::PropPointers),
		0,
		0x049000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnapGridFlowModuleBoundsActor()
	{
		if (!Z_Registration_Info_UClass_ASnapGridFlowModuleBoundsActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnapGridFlowModuleBoundsActor.OuterSingleton, Z_Construct_UClass_ASnapGridFlowModuleBoundsActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnapGridFlowModuleBoundsActor.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ASnapGridFlowModuleBoundsActor>()
	{
		return ASnapGridFlowModuleBoundsActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnapGridFlowModuleBoundsActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleBounds_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleBounds_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowModuleBoundsAsset, USnapGridFlowModuleBoundsAsset::StaticClass, TEXT("USnapGridFlowModuleBoundsAsset"), &Z_Registration_Info_UClass_USnapGridFlowModuleBoundsAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModuleBoundsAsset), 3520235566U) },
		{ Z_Construct_UClass_USnapGridFlowModuleBoundsComponent, USnapGridFlowModuleBoundsComponent::StaticClass, TEXT("USnapGridFlowModuleBoundsComponent"), &Z_Registration_Info_UClass_USnapGridFlowModuleBoundsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModuleBoundsComponent), 2866779944U) },
		{ Z_Construct_UClass_ASnapGridFlowModuleBoundsActor, ASnapGridFlowModuleBoundsActor::StaticClass, TEXT("ASnapGridFlowModuleBoundsActor"), &Z_Registration_Info_UClass_ASnapGridFlowModuleBoundsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnapGridFlowModuleBoundsActor), 1490859077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleBounds_h_1965204131(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleBounds_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
