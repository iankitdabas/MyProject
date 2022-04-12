// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/FirstProject_GameMode_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstProject_GameMode_Base() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AFirstProject_GameMode_Base_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AFirstProject_GameMode_Base();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AFirstProject_GameMode_Base::StaticRegisterNativesAFirstProject_GameMode_Base()
	{
	}
	UClass* Z_Construct_UClass_AFirstProject_GameMode_Base_NoRegister()
	{
		return AFirstProject_GameMode_Base::StaticClass();
	}
	struct Z_Construct_UClass_AFirstProject_GameMode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstProject_GameMode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstProject_GameMode_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstProject_GameMode_Base.h" },
		{ "ModuleRelativePath", "FirstProject_GameMode_Base.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstProject_GameMode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstProject_GameMode_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstProject_GameMode_Base_Statics::ClassParams = {
		&AFirstProject_GameMode_Base::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstProject_GameMode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstProject_GameMode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstProject_GameMode_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstProject_GameMode_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstProject_GameMode_Base, 1028162158);
	template<> MYPROJECT_API UClass* StaticClass<AFirstProject_GameMode_Base>()
	{
		return AFirstProject_GameMode_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstProject_GameMode_Base(Z_Construct_UClass_AFirstProject_GameMode_Base, &AFirstProject_GameMode_Base::StaticClass, TEXT("/Script/MyProject"), TEXT("AFirstProject_GameMode_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstProject_GameMode_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
