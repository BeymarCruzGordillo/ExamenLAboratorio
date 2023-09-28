// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_B/PvZ_BGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePvZ_BGameMode() {}
// Cross Module References
	PVZ_B_API UClass* Z_Construct_UClass_APvZ_BGameMode_NoRegister();
	PVZ_B_API UClass* Z_Construct_UClass_APvZ_BGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PvZ_B();
// End Cross Module References
	void APvZ_BGameMode::StaticRegisterNativesAPvZ_BGameMode()
	{
	}
	UClass* Z_Construct_UClass_APvZ_BGameMode_NoRegister()
	{
		return APvZ_BGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APvZ_BGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APvZ_BGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_B,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APvZ_BGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PvZ_BGameMode.h" },
		{ "ModuleRelativePath", "PvZ_BGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APvZ_BGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APvZ_BGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APvZ_BGameMode_Statics::ClassParams = {
		&APvZ_BGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APvZ_BGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APvZ_BGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APvZ_BGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APvZ_BGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APvZ_BGameMode, 3745857169);
	template<> PVZ_B_API UClass* StaticClass<APvZ_BGameMode>()
	{
		return APvZ_BGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APvZ_BGameMode(Z_Construct_UClass_APvZ_BGameMode, &APvZ_BGameMode::StaticClass, TEXT("/Script/PvZ_B"), TEXT("APvZ_BGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APvZ_BGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
