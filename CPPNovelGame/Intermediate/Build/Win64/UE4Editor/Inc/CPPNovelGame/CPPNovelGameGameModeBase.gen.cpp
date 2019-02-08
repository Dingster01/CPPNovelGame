// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPNovelGame/CPPNovelGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPNovelGameGameModeBase() {}
// Cross Module References
	CPPNOVELGAME_API UClass* Z_Construct_UClass_ACPPNovelGameGameModeBase_NoRegister();
	CPPNOVELGAME_API UClass* Z_Construct_UClass_ACPPNovelGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPPNovelGame();
// End Cross Module References
	void ACPPNovelGameGameModeBase::StaticRegisterNativesACPPNovelGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACPPNovelGameGameModeBase_NoRegister()
	{
		return ACPPNovelGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPPNovelGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPPNovelGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPNovelGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPNovelGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPPNovelGameGameModeBase.h" },
		{ "ModuleRelativePath", "CPPNovelGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPPNovelGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPNovelGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPPNovelGameGameModeBase_Statics::ClassParams = {
		&ACPPNovelGameGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACPPNovelGameGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACPPNovelGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPPNovelGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPPNovelGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPPNovelGameGameModeBase, 3242928932);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPPNovelGameGameModeBase(Z_Construct_UClass_ACPPNovelGameGameModeBase, &ACPPNovelGameGameModeBase::StaticClass, TEXT("/Script/CPPNovelGame"), TEXT("ACPPNovelGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPNovelGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
