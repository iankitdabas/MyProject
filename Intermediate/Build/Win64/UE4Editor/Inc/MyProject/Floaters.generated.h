// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Floaters_generated_h
#error "Floaters.generated.h already included, missing '#pragma once' in Floaters.h"
#endif
#define MYPROJECT_Floaters_generated_h

#define MyProject_Source_MyProject_Floaters_h_12_SPARSE_DATA
#define MyProject_Source_MyProject_Floaters_h_12_RPC_WRAPPERS
#define MyProject_Source_MyProject_Floaters_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Floaters_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloaters(); \
	friend struct Z_Construct_UClass_AFloaters_Statics; \
public: \
	DECLARE_CLASS(AFloaters, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AFloaters)


#define MyProject_Source_MyProject_Floaters_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloaters(); \
	friend struct Z_Construct_UClass_AFloaters_Statics; \
public: \
	DECLARE_CLASS(AFloaters, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AFloaters)


#define MyProject_Source_MyProject_Floaters_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloaters(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloaters) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloaters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloaters); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloaters(AFloaters&&); \
	NO_API AFloaters(const AFloaters&); \
public:


#define MyProject_Source_MyProject_Floaters_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloaters(AFloaters&&); \
	NO_API AFloaters(const AFloaters&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloaters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloaters); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloaters)


#define MyProject_Source_MyProject_Floaters_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Amplitude() { return STRUCT_OFFSET(AFloaters, Amplitude); } \
	FORCEINLINE static uint32 __PPO__TimeStretch() { return STRUCT_OFFSET(AFloaters, TimeStretch); } \
	FORCEINLINE static uint32 __PPO__MidPoint() { return STRUCT_OFFSET(AFloaters, MidPoint); }


#define MyProject_Source_MyProject_Floaters_h_9_PROLOG
#define MyProject_Source_MyProject_Floaters_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Floaters_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Floaters_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_Floaters_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_Floaters_h_12_INCLASS \
	MyProject_Source_MyProject_Floaters_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Floaters_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Floaters_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Floaters_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_Floaters_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Floaters_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Floaters_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AFloaters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Floaters_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
