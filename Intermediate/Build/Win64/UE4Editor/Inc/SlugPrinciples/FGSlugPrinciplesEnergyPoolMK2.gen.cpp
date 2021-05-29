// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlugPrinciples/Public/Buildings/FGSlugPrinciplesEnergyPoolMK2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSlugPrinciplesEnergyPoolMK2() {}
// Cross Module References
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesBuilding();
	UPackage* Z_Construct_UPackage__Script_SlugPrinciples();
// End Cross Module References
	void AFGSlugPrinciplesEnergyPoolMK2::StaticRegisterNativesAFGSlugPrinciplesEnergyPoolMK2()
	{
	}
	UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_NoRegister()
	{
		return AFGSlugPrinciplesEnergyPoolMK2::StaticClass();
	}
	struct Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSlugPrinciplesBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_SlugPrinciples,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Buildings/FGSlugPrinciplesEnergyPoolMK2.h" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesEnergyPoolMK2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSlugPrinciplesEnergyPoolMK2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics::ClassParams = {
		&AFGSlugPrinciplesEnergyPoolMK2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSlugPrinciplesEnergyPoolMK2, 977963854);
	template<> SLUGPRINCIPLES_API UClass* StaticClass<AFGSlugPrinciplesEnergyPoolMK2>()
	{
		return AFGSlugPrinciplesEnergyPoolMK2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSlugPrinciplesEnergyPoolMK2(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2, &AFGSlugPrinciplesEnergyPoolMK2::StaticClass, TEXT("/Script/SlugPrinciples"), TEXT("AFGSlugPrinciplesEnergyPoolMK2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSlugPrinciplesEnergyPoolMK2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
