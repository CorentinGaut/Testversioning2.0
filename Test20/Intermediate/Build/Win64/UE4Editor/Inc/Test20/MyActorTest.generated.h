// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST20_MyActorTest_generated_h
#error "MyActorTest.generated.h already included, missing '#pragma once' in MyActorTest.h"
#endif
#define TEST20_MyActorTest_generated_h

#define Test20_Source_Test20_MyActorTest_h_12_SPARSE_DATA
#define Test20_Source_Test20_MyActorTest_h_12_RPC_WRAPPERS
#define Test20_Source_Test20_MyActorTest_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Test20_Source_Test20_MyActorTest_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActorTest(); \
	friend struct Z_Construct_UClass_AMyActorTest_Statics; \
public: \
	DECLARE_CLASS(AMyActorTest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test20"), NO_API) \
	DECLARE_SERIALIZER(AMyActorTest)


#define Test20_Source_Test20_MyActorTest_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyActorTest(); \
	friend struct Z_Construct_UClass_AMyActorTest_Statics; \
public: \
	DECLARE_CLASS(AMyActorTest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test20"), NO_API) \
	DECLARE_SERIALIZER(AMyActorTest)


#define Test20_Source_Test20_MyActorTest_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActorTest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActorTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActorTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActorTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActorTest(AMyActorTest&&); \
	NO_API AMyActorTest(const AMyActorTest&); \
public:


#define Test20_Source_Test20_MyActorTest_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActorTest(AMyActorTest&&); \
	NO_API AMyActorTest(const AMyActorTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActorTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActorTest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActorTest)


#define Test20_Source_Test20_MyActorTest_h_12_PRIVATE_PROPERTY_OFFSET
#define Test20_Source_Test20_MyActorTest_h_9_PROLOG
#define Test20_Source_Test20_MyActorTest_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test20_Source_Test20_MyActorTest_h_12_PRIVATE_PROPERTY_OFFSET \
	Test20_Source_Test20_MyActorTest_h_12_SPARSE_DATA \
	Test20_Source_Test20_MyActorTest_h_12_RPC_WRAPPERS \
	Test20_Source_Test20_MyActorTest_h_12_INCLASS \
	Test20_Source_Test20_MyActorTest_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test20_Source_Test20_MyActorTest_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test20_Source_Test20_MyActorTest_h_12_PRIVATE_PROPERTY_OFFSET \
	Test20_Source_Test20_MyActorTest_h_12_SPARSE_DATA \
	Test20_Source_Test20_MyActorTest_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test20_Source_Test20_MyActorTest_h_12_INCLASS_NO_PURE_DECLS \
	Test20_Source_Test20_MyActorTest_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST20_API UClass* StaticClass<class AMyActorTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test20_Source_Test20_MyActorTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
