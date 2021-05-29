// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlugPrinciples/Public/Buildings/FGSlugPrinciplesEnergyPoolMK1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSlugPrinciplesEnergyPoolMK1() {}
// Cross Module References
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesBuilding();
	UPackage* Z_Construct_UPackage__Script_SlugPrinciples();
// End Cross Module References
	void AFGSlugPrinciplesEnergyPoolMK1::StaticRegisterNativesAFGSlugPrinciplesEnergyPoolMK1()
	{
	}
	UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_NoRegister()
	{
		return AFGSlugPrinciplesEnergyPoolMK1::StaticClass();
	}
	struct Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSlugPrinciplesBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_SlugPrinciples,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Buildings/FGSlugPrinciplesEnergyPoolMK1.h" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesEnergyPoolMK1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSlugPrinciplesEnergyPoolMK1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Statics::ClassParams = {
		&AFGSlugPrinciplesEnergyPoolMK1::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSlugPrinciplesEnergyPoolMK1, 1922698086);
	template<> SLUGPRINCIPLES_API UClass* StaticClass<AFGSlugPrinciplesEnergyPoolMK1>()
	{
		return AFGSlugPrinciplesEnergyPoolMK1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSlugPrinciplesEnergyPoolMK1(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1, &AFGSlugPrinciplesEnergyPoolMK1::StaticClass, TEXT("/Script/SlugPrinciples"), TEXT("AFGSlugPrinciplesEnergyPoolMK1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSlugPrinciplesEnergyPoolMK1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
