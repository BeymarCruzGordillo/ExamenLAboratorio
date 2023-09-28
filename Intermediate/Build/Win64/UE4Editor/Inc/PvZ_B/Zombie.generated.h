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
#ifdef PVZ_B_Zombie_generated_h
#error "Zombie.generated.h already included, missing '#pragma once' in Zombie.h"
#endif
#define PVZ_B_Zombie_generated_h

#define PvZ_B_Source_PvZ_B_Zombie_h_12_SPARSE_DATA
#define PvZ_B_Source_PvZ_B_Zombie_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBeginFunction);


#define PvZ_B_Source_PvZ_B_Zombie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBeginFunction);


#define PvZ_B_Source_PvZ_B_Zombie_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_B"), NO_API) \
	DECLARE_SERIALIZER(AZombie)


#define PvZ_B_Source_PvZ_B_Zombie_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_B"), NO_API) \
	DECLARE_SERIALIZER(AZombie)


#define PvZ_B_Source_PvZ_B_Zombie_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public:


#define PvZ_B_Source_PvZ_B_Zombie_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombie)


#define PvZ_B_Source_PvZ_B_Zombie_h_12_PRIVATE_PROPERTY_OFFSET
#define PvZ_B_Source_PvZ_B_Zombie_h_9_PROLOG
#define PvZ_B_Source_PvZ_B_Zombie_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_B_Source_PvZ_B_Zombie_h_12_PRIVATE_PROPERTY_OFFSET \
	PvZ_B_Source_PvZ_B_Zombie_h_12_SPARSE_DATA \
	PvZ_B_Source_PvZ_B_Zombie_h_12_RPC_WRAPPERS \
	PvZ_B_Source_PvZ_B_Zombie_h_12_INCLASS \
	PvZ_B_Source_PvZ_B_Zombie_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_B_Source_PvZ_B_Zombie_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_B_Source_PvZ_B_Zombie_h_12_PRIVATE_PROPERTY_OFFSET \
	PvZ_B_Source_PvZ_B_Zombie_h_12_SPARSE_DATA \
	PvZ_B_Source_PvZ_B_Zombie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PvZ_B_Source_PvZ_B_Zombie_h_12_INCLASS_NO_PURE_DECLS \
	PvZ_B_Source_PvZ_B_Zombie_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_B_API UClass* StaticClass<class AZombie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PvZ_B_Source_PvZ_B_Zombie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
