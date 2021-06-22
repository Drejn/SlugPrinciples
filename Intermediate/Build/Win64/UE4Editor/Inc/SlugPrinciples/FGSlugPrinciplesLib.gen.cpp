// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlugPrinciples/Public/Lib/FGSlugPrinciplesLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSlugPrinciplesLib() {}
// Cross Module References
	SLUGPRINCIPLES_API UFunction* Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SlugPrinciples();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_UFGSlugPrinciplesLib_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_UFGSlugPrinciplesLib();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics
	{
		struct _Script_SlugPrinciples_eventOnWidgetConstruct_Parms
		{
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SlugPrinciples_eventOnWidgetConstruct_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Lib/FGSlugPrinciplesLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SlugPrinciples, nullptr, "OnWidgetConstruct__DelegateSignature", nullptr, nullptr, sizeof(_Script_SlugPrinciples_eventOnWidgetConstruct_Parms), Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFGSlugPrinciplesLib::execBindOnWidgetConstruct)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFGSlugPrinciplesLib::BindOnWidgetConstruct(Z_Param_WidgetClass,FOnWidgetConstruct(Z_Param_Binding));
		P_NATIVE_END;
	}
	void UFGSlugPrinciplesLib::StaticRegisterNativesUFGSlugPrinciplesLib()
	{
		UClass* Class = UFGSlugPrinciplesLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindOnWidgetConstruct", &UFGSlugPrinciplesLib::execBindOnWidgetConstruct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics
	{
		struct FGSlugPrinciplesLib_eventBindOnWidgetConstruct_Parms
		{
			TSubclassOf<UUserWidget>  WidgetClass;
			FScriptDelegate Binding;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesLib_eventBindOnWidgetConstruct_Parms, Binding), Z_Construct_UDelegateFunction_SlugPrinciples_OnWidgetConstruct__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesLib_eventBindOnWidgetConstruct_Parms, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::NewProp_Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::NewProp_WidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Lib/FGSlugPrinciplesLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSlugPrinciplesLib, nullptr, "BindOnWidgetConstruct", nullptr, nullptr, sizeof(FGSlugPrinciplesLib_eventBindOnWidgetConstruct_Parms), Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSlugPrinciplesLib_NoRegister()
	{
		return UFGSlugPrinciplesLib::StaticClass();
	}
	struct Z_Construct_UClass_UFGSlugPrinciplesLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSlugPrinciplesLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SlugPrinciples,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSlugPrinciplesLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSlugPrinciplesLib_BindOnWidgetConstruct, "BindOnWidgetConstruct" }, // 666211485
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSlugPrinciplesLib_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Lib/FGSlugPrinciplesLib.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Lib/FGSlugPrinciplesLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSlugPrinciplesLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSlugPrinciplesLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSlugPrinciplesLib_Statics::ClassParams = {
		&UFGSlugPrinciplesLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGSlugPrinciplesLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGSlugPrinciplesLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSlugPrinciplesLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSlugPrinciplesLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSlugPrinciplesLib, 3285576859);
	template<> SLUGPRINCIPLES_API UClass* StaticClass<UFGSlugPrinciplesLib>()
	{
		return UFGSlugPrinciplesLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSlugPrinciplesLib(Z_Construct_UClass_UFGSlugPrinciplesLib, &UFGSlugPrinciplesLib::StaticClass, TEXT("/Script/SlugPrinciples"), TEXT("UFGSlugPrinciplesLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSlugPrinciplesLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
