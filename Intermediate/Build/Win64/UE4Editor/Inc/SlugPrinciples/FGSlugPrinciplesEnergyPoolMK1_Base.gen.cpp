// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlugPrinciples/Public/Buildings/FGSlugPrinciplesEnergyPoolMK1_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSlugPrinciplesEnergyPoolMK1_Base() {}
// Cross Module References
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesBuilding();
	UPackage* Z_Construct_UPackage__Script_SlugPrinciples();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_NoRegister();
// End Cross Module References
	void AFGSlugPrinciplesEnergyPoolMK1_Base::StaticRegisterNativesAFGSlugPrinciplesEnergyPoolMK1_Base()
	{
	}
	UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_NoRegister()
	{
		return AFGSlugPrinciplesEnergyPoolMK1_Base::StaticClass();
	}
	struct Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnergyPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSlugPrinciplesBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_SlugPrinciples,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Buildings/FGSlugPrinciplesEnergyPoolMK1_Base.h" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesEnergyPoolMK1_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::NewProp_EnergyPool_MetaData[] = {
		{ "Category", "FGSlugPrinciplesEnergyPoolMK1_Base" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesEnergyPoolMK1_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::NewProp_EnergyPool = { "EnergyPool", nullptr, (EPropertyFlags)0x0010000001000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesEnergyPoolMK1_Base, EnergyPool), Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::NewProp_EnergyPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::NewProp_EnergyPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::NewProp_EnergyPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSlugPrinciplesEnergyPoolMK1_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::ClassParams = {
		&AFGSlugPrinciplesEnergyPoolMK1_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSlugPrinciplesEnergyPoolMK1_Base, 4281064494);
	template<> SLUGPRINCIPLES_API UClass* StaticClass<AFGSlugPrinciplesEnergyPoolMK1_Base>()
	{
		return AFGSlugPrinciplesEnergyPoolMK1_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base(Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK1_Base, &AFGSlugPrinciplesEnergyPoolMK1_Base::StaticClass, TEXT("/Script/SlugPrinciples"), TEXT("AFGSlugPrinciplesEnergyPoolMK1_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSlugPrinciplesEnergyPoolMK1_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
