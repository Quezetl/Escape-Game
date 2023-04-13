// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonProceduralMesh() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshTangent();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshVertex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshSection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAProcMeshComponent_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAProcMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAProcMeshTangent;
class UScriptStruct* FDAProcMeshTangent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshTangent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAProcMeshTangent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAProcMeshTangent, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAProcMeshTangent"));
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshTangent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAProcMeshTangent>()
{
	return FDAProcMeshTangent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[];
#endif
		static void NewProp_bFlipTangentY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Struct used to specify a tangent vector for a vertex\n*\x09The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.\n*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAProcMeshTangent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_TangentX_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Direction of X tangent for this vertex */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Direction of X tangent for this vertex" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
	};
#endif
	void Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
	{
		((FDAProcMeshTangent*)Obj)->bFlipTangentY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDAProcMeshTangent), &Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_TangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewProp_bFlipTangentY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DAProcMeshTangent",
		sizeof(FDAProcMeshTangent),
		alignof(FDAProcMeshTangent),
		Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshTangent()
	{
		if (!Z_Registration_Info_UScriptStruct_DAProcMeshTangent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAProcMeshTangent.InnerSingleton, Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAProcMeshTangent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAProcMeshVertex;
class UScriptStruct* FDAProcMeshVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAProcMeshVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAProcMeshVertex, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAProcMeshVertex"));
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshVertex.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAProcMeshVertex>()
{
	return FDAProcMeshVertex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** One vertex for the procedural mesh, used for storing data internally */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "One vertex for the procedural mesh, used for storing data internally" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAProcMeshVertex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex position */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex normal */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex normal" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshVertex, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex tangent */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex tangent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshVertex, Tangent), Z_Construct_UScriptStruct_FDAProcMeshTangent, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Tangent_MetaData)) }; // 357722681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex color */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV1_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV2_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV3_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewProp_UV3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DAProcMeshVertex",
		sizeof(FDAProcMeshVertex),
		alignof(FDAProcMeshVertex),
		Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshVertex()
	{
		if (!Z_Registration_Info_UScriptStruct_DAProcMeshVertex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAProcMeshVertex.InnerSingleton, Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAProcMeshVertex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAProcMeshSection;
class UScriptStruct* FDAProcMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAProcMeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAProcMeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAProcMeshSection, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAProcMeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_DAProcMeshSection.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAProcMeshSection>()
{
	return FDAProcMeshSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAProcMeshSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcVertexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcVertexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcVertexBuffer;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProcIndexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcIndexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcIndexBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionLocalBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionLocalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSectionVisible_MetaData[];
#endif
		static void NewProp_bSectionVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSectionVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** One section of the procedural mesh. Each material has its own section. */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "One section of the procedural mesh. Each material has its own section." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAProcMeshSection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDAProcMeshVertex, METADATA_PARAMS(nullptr, 0) }; // 2359363628
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData[] = {
		{ "Comment", "/** Vertex buffer for this section */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Vertex buffer for this section" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshSection, ProcVertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData)) }; // 2359363628
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData[] = {
		{ "Comment", "/** Index buffer for this section */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Index buffer for this section" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshSection, ProcIndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData[] = {
		{ "Comment", "/** Local bounding box of section */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Local bounding box of section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_SectionLocalBox = { "SectionLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshSection, SectionLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Comment", "/** Should we build collision data for triangles in this section */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Should we build collision data for triangles in this section" },
	};
#endif
	void Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FDAProcMeshSection*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDAProcMeshSection), &Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible_MetaData[] = {
		{ "Comment", "/** Should we display this section */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Should we display this section" },
	};
#endif
	void Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible_SetBit(void* Obj)
	{
		((FDAProcMeshSection*)Obj)->bSectionVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible = { "bSectionVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDAProcMeshSection), &Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_PrimitiveType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAProcMeshSection, PrimitiveType), METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_PrimitiveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_PrimitiveType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcVertexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_ProcIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_SectionLocalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_bSectionVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewProp_PrimitiveType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DAProcMeshSection",
		sizeof(FDAProcMeshSection),
		alignof(FDAProcMeshSection),
		Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAProcMeshSection()
	{
		if (!Z_Registration_Info_UScriptStruct_DAProcMeshSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAProcMeshSection.InnerSingleton, Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAProcMeshSection.InnerSingleton;
	}
	DEFINE_FUNCTION(UDAProcMeshComponent::execClearCollisionConvexMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCollisionConvexMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAProcMeshComponent::execAddCollisionConvexMesh)
	{
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollisionConvexMesh(Z_Param_ConvexVerts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAProcMeshComponent::execGetNumSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAProcMeshComponent::execIsMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAProcMeshComponent::execSetMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAProcMeshComponent::execClearAllMeshSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllMeshSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAProcMeshComponent::execClearMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMeshSection(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDAProcMeshComponent::execCreateMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FDAProcMeshVertex,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Indices);
		P_GET_PROPERTY(FIntProperty,Z_Param_PrimitiveType);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Indices,Z_Param_PrimitiveType,Z_Param_bCreateCollision);
		P_NATIVE_END;
	}
	void UDAProcMeshComponent::StaticRegisterNativesUDAProcMeshComponent()
	{
		UClass* Class = UDAProcMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCollisionConvexMesh", &UDAProcMeshComponent::execAddCollisionConvexMesh },
			{ "ClearAllMeshSections", &UDAProcMeshComponent::execClearAllMeshSections },
			{ "ClearCollisionConvexMeshes", &UDAProcMeshComponent::execClearCollisionConvexMeshes },
			{ "ClearMeshSection", &UDAProcMeshComponent::execClearMeshSection },
			{ "CreateMeshSection", &UDAProcMeshComponent::execCreateMeshSection },
			{ "GetNumSections", &UDAProcMeshComponent::execGetNumSections },
			{ "IsMeshSectionVisible", &UDAProcMeshComponent::execIsMeshSectionVisible },
			{ "SetMeshSectionVisible", &UDAProcMeshComponent::execSetMeshSectionVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics
	{
		struct DAProcMeshComponent_eventAddCollisionConvexMesh_Parms
		{
			TArray<FVector> ConvexVerts;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexVerts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexVerts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner = { "ConvexVerts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts = { "ConvexVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventAddCollisionConvexMesh_Parms, ConvexVerts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Add simple collision convex to this component */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Add simple collision convex to this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "AddCollisionConvexMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::DAProcMeshComponent_eventAddCollisionConvexMesh_Parms), Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Clear all mesh sections and reset to empty state */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Clear all mesh sections and reset to empty state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "ClearAllMeshSections", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Add simple collision convex to this component */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Add simple collision convex to this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "ClearCollisionConvexMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics
	{
		struct DAProcMeshComponent_eventClearMeshSection_Parms
		{
			int32 SectionIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventClearMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Clear a section of the procedural mesh. Other sections do not change index. */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Clear a section of the procedural mesh. Other sections do not change index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "ClearMeshSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::DAProcMeshComponent_eventClearMeshSection_Parms), Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics
	{
		struct DAProcMeshComponent_eventCreateMeshSection_Parms
		{
			int32 SectionIndex;
			TArray<FDAProcMeshVertex> Vertices;
			TArray<int32> Indices;
			int32 PrimitiveType;
			bool bCreateCollision;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveType;
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDAProcMeshVertex, METADATA_PARAMS(nullptr, 0) }; // 2359363628
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData)) }; // 2359363628
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventCreateMeshSection_Parms, PrimitiveType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((DAProcMeshComponent_eventCreateMeshSection_Parms*)Obj)->bCreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DAProcMeshComponent_eventCreateMeshSection_Parms), &Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_Indices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_PrimitiveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09\x09*\x09""Create/replace a section for this procedural mesh component.\n\x09\x09*\x09This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n\x09\x09*\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09\x09*\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09\x09*\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09\x09*\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09\x09*\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09\x09*\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09\x09*\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09\x09*\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Create Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Create/replace a section for this procedural mesh component.\nThis function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "CreateMeshSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::DAProcMeshComponent_eventCreateMeshSection_Parms), Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics
	{
		struct DAProcMeshComponent_eventGetNumSections_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Returns number of sections currently created for this component */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Returns number of sections currently created for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "GetNumSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::DAProcMeshComponent_eventGetNumSections_Parms), Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics
	{
		struct DAProcMeshComponent_eventIsMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventIsMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DAProcMeshComponent_eventIsMeshSectionVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DAProcMeshComponent_eventIsMeshSectionVisible_Parms), &Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Returns whether a particular section is currently visible */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Returns whether a particular section is currently visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "IsMeshSectionVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::DAProcMeshComponent_eventIsMeshSectionVisible_Parms), Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics
	{
		struct DAProcMeshComponent_eventSetMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool bNewVisibility;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DAProcMeshComponent_eventSetMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((DAProcMeshComponent_eventSetMeshSectionVisible_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DAProcMeshComponent_eventSetMeshSectionVisible_Parms), &Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Control visibility of a particular section */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Control visibility of a particular section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDAProcMeshComponent, nullptr, "SetMeshSectionVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::DAProcMeshComponent_eventSetMeshSectionVisible_Parms), Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAProcMeshComponent);
	UClass* Z_Construct_UClass_UDAProcMeshComponent_NoRegister()
	{
		return UDAProcMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDAProcMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimpleCollision_MetaData[];
#endif
		static void NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimpleCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[];
#endif
		static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshBodySetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshSections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionConvexElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionConvexElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionConvexElems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncBodySetupQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDAProcMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDAProcMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDAProcMeshComponent_AddCollisionConvexMesh, "AddCollisionConvexMesh" }, // 187020636
		{ &Z_Construct_UFunction_UDAProcMeshComponent_ClearAllMeshSections, "ClearAllMeshSections" }, // 3138896417
		{ &Z_Construct_UFunction_UDAProcMeshComponent_ClearCollisionConvexMeshes, "ClearCollisionConvexMeshes" }, // 1925648585
		{ &Z_Construct_UFunction_UDAProcMeshComponent_ClearMeshSection, "ClearMeshSection" }, // 1941148002
		{ &Z_Construct_UFunction_UDAProcMeshComponent_CreateMeshSection, "CreateMeshSection" }, // 1422685471
		{ &Z_Construct_UFunction_UDAProcMeshComponent_GetNumSections, "GetNumSections" }, // 995177675
		{ &Z_Construct_UFunction_UDAProcMeshComponent_IsMeshSectionVisible, "IsMeshSectionVisible" }, // 2594156930
		{ &Z_Construct_UFunction_UDAProcMeshComponent_SetMeshSectionVisible, "SetMeshSectionVisible" }, // 3870651979
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAProcMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/** \n\x09 *\x09""Controls whether the complex (Per poly) geometry should be treated as 'simple' collision. \n\x09 *\x09Should be set to false if this component is going to be given simple collision and simulated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\nShould be set to false if this component is going to be given simple collision and simulated." },
	};
#endif
	void Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj)
	{
		((UDAProcMeshComponent*)Obj)->bUseComplexAsSimpleCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision = { "bUseComplexAsSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDAProcMeshComponent), &Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/**\n\x09*\x09""Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)" },
	};
#endif
	void Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
	{
		((UDAProcMeshComponent*)Obj)->bUseAsyncCooking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDAProcMeshComponent), &Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshBodySetup_MetaData[] = {
		{ "Comment", "/** Collision data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Collision data" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshBodySetup = { "MeshBodySetup", nullptr, (EPropertyFlags)0x0012000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDAProcMeshComponent, MeshBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshBodySetup_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshSections_Inner = { "MeshSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDAProcMeshSection, METADATA_PARAMS(nullptr, 0) }; // 2462480694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshSections_MetaData[] = {
		{ "Comment", "/** Array of sections of mesh */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Array of sections of mesh" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshSections = { "MeshSections", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDAProcMeshComponent, MeshSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshSections_MetaData)) }; // 2462480694
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems_Inner = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(nullptr, 0) }; // 3351838121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData[] = {
		{ "Comment", "/** Convex shapes used for simple collision */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Convex shapes used for simple collision" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDAProcMeshComponent, CollisionConvexElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData)) }; // 3351838121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "Comment", "/** Local space bounds of mesh */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Local space bounds of mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDAProcMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LocalBounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData[] = {
		{ "Comment", "/** Queue for async body setups that are being cooked */" },
		{ "ModuleRelativePath", "Public/Frameworks/Meshing/Geometry/DungeonProceduralMesh.h" },
		{ "ToolTip", "Queue for async body setups that are being cooked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDAProcMeshComponent, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAProcMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_bUseAsyncCooking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshBodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_MeshSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_CollisionConvexElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_LocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAProcMeshComponent_Statics::NewProp_AsyncBodySetupQueue,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDAProcMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UDAProcMeshComponent, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDAProcMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAProcMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAProcMeshComponent_Statics::ClassParams = {
		&UDAProcMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDAProcMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDAProcMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDAProcMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDAProcMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UDAProcMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAProcMeshComponent.OuterSingleton, Z_Construct_UClass_UDAProcMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDAProcMeshComponent.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDAProcMeshComponent>()
	{
		return UDAProcMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDAProcMeshComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ScriptStructInfo[] = {
		{ FDAProcMeshTangent::StaticStruct, Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics::NewStructOps, TEXT("DAProcMeshTangent"), &Z_Registration_Info_UScriptStruct_DAProcMeshTangent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAProcMeshTangent), 357722681U) },
		{ FDAProcMeshVertex::StaticStruct, Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics::NewStructOps, TEXT("DAProcMeshVertex"), &Z_Registration_Info_UScriptStruct_DAProcMeshVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAProcMeshVertex), 2359363628U) },
		{ FDAProcMeshSection::StaticStruct, Z_Construct_UScriptStruct_FDAProcMeshSection_Statics::NewStructOps, TEXT("DAProcMeshSection"), &Z_Registration_Info_UScriptStruct_DAProcMeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAProcMeshSection), 2462480694U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDAProcMeshComponent, UDAProcMeshComponent::StaticClass, TEXT("UDAProcMeshComponent"), &Z_Registration_Info_UClass_UDAProcMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAProcMeshComponent), 2921486435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_3267090956(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
