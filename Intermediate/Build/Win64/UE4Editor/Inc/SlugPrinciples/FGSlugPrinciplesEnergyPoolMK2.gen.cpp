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
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesFluidPress_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFGSlugPrinciplesEnergyPoolMK2::execGetFluidPress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFGSlugPrinciplesFluidPress**)Z_Param__Result=P_THIS->GetFluidPress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesEnergyPoolMK2::execDisconnectFluidPress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectFluidPress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesEnergyPoolMK2::execHasFluidPress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFluidPress();
		P_NATIVE_END;
	}
	void AFGSlugPrinciplesEnergyPoolMK2::StaticRegisterNativesAFGSlugPrinciplesEnergyPoolMK2()
	{
		UClass* Class = AFGSlugPrinciplesEnergyPoolMK2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisconnectFluidPress", &AFGSlugPrinciplesEnergyPoolMK2::execDisconnectFluidPress },
			{ "GetFluidPress", &AFGSlugPrinciplesEnergyPoolMK2::execGetFluidPress },
			{ "HasFluidPress", &AFGSlugPrinciplesEnergyPoolMK2::execHasFluidPress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_DisconnectFluidPress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_DisconnectFluidPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Energy Pool MK2" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesEnergyPoolMK2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_DisconnectFluidPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2, nullptr, "DisconnectFluidPress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_DisconnectFluidPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_DisconnectFluidPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_DisconnectFluidPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_DisconnectFluidPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics
	{
		struct FGSlugPrinciplesEnergyPoolMK2_eventGetFluidPress_Parms
		{
			AFGSlugPrinciplesFluidPress* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesEnergyPoolMK2_eventGetFluidPress_Parms, ReturnValue), Z_Construct_UClass_AFGSlugPrinciplesFluidPress_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|SlugPrinciplesBuilding|EnergyPoolMK2" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesEnergyPoolMK2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2, nullptr, "GetFluidPress", nullptr, nullptr, sizeof(FGSlugPrinciplesEnergyPoolMK2_eventGetFluidPress_Parms), Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics
	{
		struct FGSlugPrinciplesEnergyPoolMK2_eventHasFluidPress_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSlugPrinciplesEnergyPoolMK2_eventHasFluidPress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSlugPrinciplesEnergyPoolMK2_eventHasFluidPress_Parms), &Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Energy Pool MK2" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesEnergyPoolMK2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2, nullptr, "HasFluidPress", nullptr, nullptr, sizeof(FGSlugPrinciplesEnergyPoolMK2_eventHasFluidPress_Parms), Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_NoRegister()
	{
		return AFGSlugPrinciplesEnergyPoolMK2::StaticClass();
	}
	struct Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_DisconnectFluidPress, "DisconnectFluidPress" }, // 4211622234
		{ &Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_GetFluidPress, "GetFluidPress" }, // 1131049632
		{ &Z_Construct_UFunction_AFGSlugPrinciplesEnergyPoolMK2_HasFluidPress, "HasFluidPress" }, // 3531850867
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AFGSlugPrinciplesEnergyPoolMK2, 3248265988);
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
