// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_SimpleCitySpatialConstraintCellData_generated_h
#error "SimpleCitySpatialConstraintCellData.generated.h already included, missing '#pragma once' in SimpleCitySpatialConstraintCellData.h"
#endif
#define DUNGEONARCHITECTRUNTIME_SimpleCitySpatialConstraintCellData_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FSimpleCitySpatialConstraintCellData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h


#define FOREACH_ENUM_ESIMPLECITYSPATIALCELLOCCUPATION(op) \
	op(ESimpleCitySpatialCellOccupation::Ignore) \
	op(ESimpleCitySpatialCellOccupation::Road) \
	op(ESimpleCitySpatialCellOccupation::House) \
	op(ESimpleCitySpatialCellOccupation::Park) \
	op(ESimpleCitySpatialCellOccupation::Outskirts) 

enum class ESimpleCitySpatialCellOccupation : uint8;
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESimpleCitySpatialCellOccupation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
