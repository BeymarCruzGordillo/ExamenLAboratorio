// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVZ_B_PvZ_BProjectile_generated_h
#error "PvZ_BProjectile.generated.h already included, missing '#pragma once' in PvZ_BProjectile.h"
#endif
#define PVZ_B_PvZ_BProjectile_generated_h

#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_SPARSE_DATA
#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPvZ_BProjectile(); \
	friend struct Z_Construct_UClass_APvZ_BProjectile_Statics; \
public: \
	DECLARE_CLASS(APvZ_BProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_B"), NO_API) \
	DECLARE_SERIALIZER(APvZ_BProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPvZ_BProjectile(); \
	friend struct Z_Construct_UClass_APvZ_BProjectile_Statics; \
public: \
	DECLARE_CLASS(APvZ_BProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_B"), NO_API) \
	DECLARE_SERIALIZER(APvZ_BProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APvZ_BProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APvZ_BProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APvZ_BProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APvZ_BProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APvZ_BProjectile(APvZ_BProjectile&&); \
	NO_API APvZ_BProjectile(const APvZ_BProjectile&); \
public:


#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APvZ_BProjectile(APvZ_BProjectile&&); \
	NO_API APvZ_BProjectile(const APvZ_BProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APvZ_BProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APvZ_BProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APvZ_BProjectile)


#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APvZ_BProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APvZ_BProjectile, ProjectileMovement); }


#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_12_PROLOG
#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_SPARSE_DATA \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_RPC_WRAPPERS \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_INCLASS \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_SPARSE_DATA \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PvZ_B_Source_PvZ_B_PvZ_BProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_B_API UClass* StaticClass<class APvZ_BProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PvZ_B_Source_PvZ_B_PvZ_BProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
