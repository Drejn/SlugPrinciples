// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlugPrinciples/Public/Holograms/FGSlugPrinciplesStackableHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSlugPrinciplesStackableHologram() {}
// Cross Module References
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesStackableHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_SlugPrinciples();
// End Cross Module References
	void AFGSlugPrinciplesStackableHologram::StaticRegisterNativesAFGSlugPrinciplesStackableHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_NoRegister()
	{
		return AFGSlugPrinciplesStackableHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_SlugPrinciples,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Holograms/FGSlugPrinciplesStackableHologram.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Holograms/FGSlugPrinciplesStackableHologram.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSlugPrinciplesStackableHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_Statics::ClassParams = {
		&AFGSlugPrinciplesStackableHologram::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSlugPrinciplesStackableHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSlugPrinciplesStackableHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSlugPrinciplesStackableHologram, 633571760);
	template<> SLUGPRINCIPLES_API UClass* StaticClass<AFGSlugPrinciplesStackableHologram>()
	{
		return AFGSlugPrinciplesStackableHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSlugPrinciplesStackableHologram(Z_Construct_UClass_AFGSlugPrinciplesStackableHologram, &AFGSlugPrinciplesStackableHologram::StaticClass, TEXT("/Script/SlugPrinciples"), TEXT("AFGSlugPrinciplesStackableHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSlugPrinciplesStackableHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
