// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test20/MyActorTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorTest() {}
// Cross Module References
	TEST20_API UClass* Z_Construct_UClass_AMyActorTest_NoRegister();
	TEST20_API UClass* Z_Construct_UClass_AMyActorTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test20();
// End Cross Module References
	void AMyActorTest::StaticRegisterNativesAMyActorTest()
	{
	}
	UClass* Z_Construct_UClass_AMyActorTest_NoRegister()
	{
		return AMyActorTest::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorTest.h" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorTest_Statics::ClassParams = {
		&AMyActorTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorTest, 3557495821);
	template<> TEST20_API UClass* StaticClass<AMyActorTest>()
	{
		return AMyActorTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorTest(Z_Construct_UClass_AMyActorTest, &AMyActorTest::StaticClass, TEXT("/Script/Test20"), TEXT("AMyActorTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
