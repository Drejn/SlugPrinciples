// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlugPrinciples/Public/Buildings/FGSlugPrinciplesFluidPress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSlugPrinciplesFluidPress() {}
// Cross Module References
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesFluidPress_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesFluidPress();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesBuilding();
	UPackage* Z_Construct_UPackage__Script_SlugPrinciples();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFGSlugPrinciplesFluidPress::execSetOutputInventoryIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputInventoryIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesFluidPress::execSetOutputInventory)
	{
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputInventory(Z_Param_inventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesFluidPress::execPushOutput)
	{
		P_GET_OBJECT(UFGItemDescriptor,Z_Param_itemPushed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushOutput(Z_Param_itemPushed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesFluidPress::execGetConnectedConveyor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFGFactoryConnectionComponent**)Z_Param__Result=P_THIS->GetConnectedConveyor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesFluidPress::execSetOutputConnection)
	{
		P_GET_OBJECT(UFGFactoryConnectionComponent,Z_Param_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFGFactoryConnectionComponent**)Z_Param__Result=P_THIS->SetOutputConnection(Z_Param_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesFluidPress::execGetParentBuilding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFGSlugPrinciplesEnergyPoolMK2**)Z_Param__Result=P_THIS->GetParentBuilding();
		P_NATIVE_END;
	}
	void AFGSlugPrinciplesFluidPress::StaticRegisterNativesAFGSlugPrinciplesFluidPress()
	{
		UClass* Class = AFGSlugPrinciplesFluidPress::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnectedConveyor", &AFGSlugPrinciplesFluidPress::execGetConnectedConveyor },
			{ "GetParentBuilding", &AFGSlugPrinciplesFluidPress::execGetParentBuilding },
			{ "PushOutput", &AFGSlugPrinciplesFluidPress::execPushOutput },
			{ "SetOutputConnection", &AFGSlugPrinciplesFluidPress::execSetOutputConnection },
			{ "SetOutputInventory", &AFGSlugPrinciplesFluidPress::execSetOutputInventory },
			{ "SetOutputInventoryIndex", &AFGSlugPrinciplesFluidPress::execSetOutputInventoryIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics
	{
		struct FGSlugPrinciplesFluidPress_eventGetConnectedConveyor_Parms
		{
			UFGFactoryConnectionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesFluidPress_eventGetConnectedConveyor_Parms, ReturnValue), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Fluid Press" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesFluidPress, nullptr, "GetConnectedConveyor", nullptr, nullptr, sizeof(FGSlugPrinciplesFluidPress_eventGetConnectedConveyor_Parms), Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics
	{
		struct FGSlugPrinciplesFluidPress_eventGetParentBuilding_Parms
		{
			AFGSlugPrinciplesEnergyPoolMK2* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesFluidPress_eventGetParentBuilding_Parms, ReturnValue), Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Fluid Press" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesFluidPress, nullptr, "GetParentBuilding", nullptr, nullptr, sizeof(FGSlugPrinciplesFluidPress_eventGetParentBuilding_Parms), Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics
	{
		struct FGSlugPrinciplesFluidPress_eventPushOutput_Parms
		{
			UFGItemDescriptor* itemPushed;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_itemPushed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::NewProp_itemPushed = { "itemPushed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesFluidPress_eventPushOutput_Parms, itemPushed), Z_Construct_UClass_UFGItemDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::NewProp_itemPushed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Fluid Press" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesFluidPress, nullptr, "PushOutput", nullptr, nullptr, sizeof(FGSlugPrinciplesFluidPress_eventPushOutput_Parms), Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics
	{
		struct FGSlugPrinciplesFluidPress_eventSetOutputConnection_Parms
		{
			UFGFactoryConnectionComponent* connection;
			UFGFactoryConnectionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesFluidPress_eventSetOutputConnection_Parms, ReturnValue), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_connection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesFluidPress_eventSetOutputConnection_Parms, connection), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_connection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::NewProp_connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Fluid Press" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesFluidPress, nullptr, "SetOutputConnection", nullptr, nullptr, sizeof(FGSlugPrinciplesFluidPress_eventSetOutputConnection_Parms), Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics
	{
		struct FGSlugPrinciplesFluidPress_eventSetOutputInventory_Parms
		{
			UFGInventoryComponent* inventory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesFluidPress_eventSetOutputInventory_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::NewProp_inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Fluid Press" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesFluidPress, nullptr, "SetOutputInventory", nullptr, nullptr, sizeof(FGSlugPrinciplesFluidPress_eventSetOutputInventory_Parms), Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics
	{
		struct FGSlugPrinciplesFluidPress_eventSetOutputInventoryIndex_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesFluidPress_eventSetOutputInventoryIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Fluid Press" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesFluidPress, nullptr, "SetOutputInventoryIndex", nullptr, nullptr, sizeof(FGSlugPrinciplesFluidPress_eventSetOutputInventoryIndex_Parms), Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGSlugPrinciplesFluidPress_NoRegister()
	{
		return AFGSlugPrinciplesFluidPress::StaticClass();
	}
	struct Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectedConveyor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectedConveyor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOutputConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOutputConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mParentBuilding_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mParentBuilding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSlugPrinciplesBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_SlugPrinciples,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetConnectedConveyor, "GetConnectedConveyor" }, // 909969559
		{ &Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_GetParentBuilding, "GetParentBuilding" }, // 543501346
		{ &Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_PushOutput, "PushOutput" }, // 987015279
		{ &Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputConnection, "SetOutputConnection" }, // 1176256454
		{ &Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventory, "SetOutputInventory" }, // 3945165949
		{ &Z_Construct_UFunction_AFGSlugPrinciplesFluidPress_SetOutputInventoryIndex, "SetOutputInventoryIndex" }, // 1588078617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Buildings/FGSlugPrinciplesFluidPress.h" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mConnectedConveyor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mConnectedConveyor = { "mConnectedConveyor", nullptr, (EPropertyFlags)0x0010000001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesFluidPress, mConnectedConveyor), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mConnectedConveyor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mConnectedConveyor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mOutputConnection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mOutputConnection = { "mOutputConnection", nullptr, (EPropertyFlags)0x0010000001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesFluidPress, mOutputConnection), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mOutputConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mOutputConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mParentBuilding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesFluidPress.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mParentBuilding = { "mParentBuilding", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesFluidPress, mParentBuilding), Z_Construct_UClass_AFGSlugPrinciplesEnergyPoolMK2_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mParentBuilding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mParentBuilding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mConnectedConveyor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mOutputConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::NewProp_mParentBuilding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSlugPrinciplesFluidPress>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::ClassParams = {
		&AFGSlugPrinciplesFluidPress::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSlugPrinciplesFluidPress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSlugPrinciplesFluidPress_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSlugPrinciplesFluidPress, 3681812009);
	template<> SLUGPRINCIPLES_API UClass* StaticClass<AFGSlugPrinciplesFluidPress>()
	{
		return AFGSlugPrinciplesFluidPress::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSlugPrinciplesFluidPress(Z_Construct_UClass_AFGSlugPrinciplesFluidPress, &AFGSlugPrinciplesFluidPress::StaticClass, TEXT("/Script/SlugPrinciples"), TEXT("AFGSlugPrinciplesFluidPress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSlugPrinciplesFluidPress);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
