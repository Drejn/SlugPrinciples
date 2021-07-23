// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlugPrinciples/Public/Buildings/FGSlugPrinciplesModularStorage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSlugPrinciplesModularStorage() {}
// Cross Module References
	SLUGPRINCIPLES_API UScriptStruct* Z_Construct_UScriptStruct_FModularConnection();
	UPackage* Z_Construct_UPackage__Script_SlugPrinciples();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPipeConnectionComponentBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPipeConnectionFactory_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesModularStorage_NoRegister();
	SLUGPRINCIPLES_API UClass* Z_Construct_UClass_AFGSlugPrinciplesModularStorage();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableStorage();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FModularConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLUGPRINCIPLES_API uint32 Get_Z_Construct_UScriptStruct_FModularConnection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularConnection, Z_Construct_UPackage__Script_SlugPrinciples(), TEXT("ModularConnection"), sizeof(FModularConnection), Get_Z_Construct_UScriptStruct_FModularConnection_Hash());
	}
	return Singleton;
}
template<> SLUGPRINCIPLES_API UScriptStruct* StaticStruct<FModularConnection>()
{
	return FModularConnection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModularConnection(FModularConnection::StaticStruct, TEXT("/Script/SlugPrinciples"), TEXT("ModularConnection"), false, nullptr, nullptr);
static struct FScriptStruct_SlugPrinciples_StaticRegisterNativesFModularConnection
{
	FScriptStruct_SlugPrinciples_StaticRegisterNativesFModularConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModularConnection")),new UScriptStruct::TCppStructOps<FModularConnection>);
	}
} ScriptStruct_SlugPrinciples_StaticRegisterNativesFModularConnection;
	struct Z_Construct_UScriptStruct_FModularConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConnectionDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConnectionDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConnectionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConnectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedPipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedPipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipeConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipeConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactoryConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FactoryConnection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularConnection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModularConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionDirection_MetaData[] = {
		{ "Category", "ModularConnection" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionDirection = { "ConnectionDirection", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularConnection, ConnectionDirection), Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionType_MetaData[] = {
		{ "Category", "ModularConnection" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionType = { "ConnectionType", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularConnection, ConnectionType), Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectedPipe_MetaData[] = {
		{ "Category", "ModularConnection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectedPipe = { "ConnectedPipe", nullptr, (EPropertyFlags)0x001000000108000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularConnection, ConnectedPipe), Z_Construct_UClass_UFGPipeConnectionComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectedPipe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectedPipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_PipeConnection_MetaData[] = {
		{ "Category", "ModularConnection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_PipeConnection = { "PipeConnection", nullptr, (EPropertyFlags)0x001000000108000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularConnection, PipeConnection), Z_Construct_UClass_UFGPipeConnectionFactory_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_PipeConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_PipeConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_FactoryConnection_MetaData[] = {
		{ "Category", "ModularConnection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_FactoryConnection = { "FactoryConnection", nullptr, (EPropertyFlags)0x001000000108000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModularConnection, FactoryConnection), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_FactoryConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_FactoryConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_ConnectedPipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_PipeConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularConnection_Statics::NewProp_FactoryConnection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlugPrinciples,
		nullptr,
		&NewStructOps,
		"ModularConnection",
		sizeof(FModularConnection),
		alignof(FModularConnection),
		Z_Construct_UScriptStruct_FModularConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModularConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModularConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModularConnection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlugPrinciples();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModularConnection"), sizeof(FModularConnection), Get_Z_Construct_UScriptStruct_FModularConnection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModularConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModularConnection_Hash() { return 1150910712U; }
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execCleanConnection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanConnection(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execClearPipeConnection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPipeConnection(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execSetPipeConnection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPipeConnection(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execPushFluidOutput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
		P_GET_OBJECT(UFGPipeConnectionFactory,Z_Param_PipeInputConnection);
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PushFluidOutput(Z_Param_dt,Z_Param_PipeInputConnection,Z_Param_inventory,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execGrabFluidInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
		P_GET_OBJECT(UFGPipeConnectionFactory,Z_Param_PipeInputConnection);
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GrabFluidInput(Z_Param_dt,Z_Param_PipeInputConnection,Z_Param_inventory,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execGetFluidInventoryStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFluidInventoryStorage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execInitializeFluidStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeFluidStorage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execGetConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FModularConnection>*)Z_Param__Result=P_THIS->GetConnections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execCheckConnection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModularConnection*)Z_Param__Result=P_THIS->CheckConnection(Z_Param_InputIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execSetupModularConnection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputIndex);
		P_GET_STRUCT(FModularConnection,Z_Param_NewConnection);
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupModularConnection(Z_Param_InputIndex,Z_Param_NewConnection,Z_Param_inventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGSlugPrinciplesModularStorage::execInitializeModularConnection)
	{
		P_GET_OBJECT(UFGInventoryComponent,Z_Param_inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeModularConnection(Z_Param_inventory,Z_Param_index);
		P_NATIVE_END;
	}
	void AFGSlugPrinciplesModularStorage::StaticRegisterNativesAFGSlugPrinciplesModularStorage()
	{
		UClass* Class = AFGSlugPrinciplesModularStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckConnection", &AFGSlugPrinciplesModularStorage::execCheckConnection },
			{ "CleanConnection", &AFGSlugPrinciplesModularStorage::execCleanConnection },
			{ "ClearPipeConnection", &AFGSlugPrinciplesModularStorage::execClearPipeConnection },
			{ "GetConnections", &AFGSlugPrinciplesModularStorage::execGetConnections },
			{ "GetFluidInventoryStorage", &AFGSlugPrinciplesModularStorage::execGetFluidInventoryStorage },
			{ "GrabFluidInput", &AFGSlugPrinciplesModularStorage::execGrabFluidInput },
			{ "InitializeFluidStorage", &AFGSlugPrinciplesModularStorage::execInitializeFluidStorage },
			{ "InitializeModularConnection", &AFGSlugPrinciplesModularStorage::execInitializeModularConnection },
			{ "PushFluidOutput", &AFGSlugPrinciplesModularStorage::execPushFluidOutput },
			{ "SetPipeConnection", &AFGSlugPrinciplesModularStorage::execSetPipeConnection },
			{ "SetupModularConnection", &AFGSlugPrinciplesModularStorage::execSetupModularConnection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventCheckConnection_Parms
		{
			int32 InputIndex;
			FModularConnection ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventCheckConnection_Parms, ReturnValue), Z_Construct_UScriptStruct_FModularConnection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::NewProp_InputIndex = { "InputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventCheckConnection_Parms, InputIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::NewProp_InputIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "CheckConnection", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventCheckConnection_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventCleanConnection_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventCleanConnection_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "CleanConnection", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventCleanConnection_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventClearPipeConnection_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventClearPipeConnection_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "ClearPipeConnection", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventClearPipeConnection_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventGetConnections_Parms
		{
			TArray<FModularConnection> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventGetConnections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModularConnection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "GetConnections", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventGetConnections_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventGetFluidInventoryStorage_Parms
		{
			UFGInventoryComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventGetFluidInventoryStorage_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "GetFluidInventoryStorage", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventGetFluidInventoryStorage_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventGrabFluidInput_Parms
		{
			float dt;
			UFGPipeConnectionFactory* PipeInputConnection;
			UFGInventoryComponent* inventory;
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipeInputConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipeInputConnection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSlugPrinciplesModularStorage_eventGrabFluidInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSlugPrinciplesModularStorage_eventGrabFluidInput_Parms), &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventGrabFluidInput_Parms, index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventGrabFluidInput_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_PipeInputConnection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_PipeInputConnection = { "PipeInputConnection", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventGrabFluidInput_Parms, PipeInputConnection), Z_Construct_UClass_UFGPipeConnectionFactory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_PipeInputConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_PipeInputConnection_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventGrabFluidInput_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_PipeInputConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "GrabFluidInput", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventGrabFluidInput_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeFluidStorage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeFluidStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeFluidStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "InitializeFluidStorage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeFluidStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeFluidStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeFluidStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeFluidStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventInitializeModularConnection_Parms
		{
			UFGInventoryComponent* inventory;
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventInitializeModularConnection_Parms, index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventInitializeModularConnection_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::NewProp_inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "InitializeModularConnection", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventInitializeModularConnection_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventPushFluidOutput_Parms
		{
			float dt;
			UFGPipeConnectionFactory* PipeInputConnection;
			UFGInventoryComponent* inventory;
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipeInputConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipeInputConnection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSlugPrinciplesModularStorage_eventPushFluidOutput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSlugPrinciplesModularStorage_eventPushFluidOutput_Parms), &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventPushFluidOutput_Parms, index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventPushFluidOutput_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_PipeInputConnection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_PipeInputConnection = { "PipeInputConnection", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventPushFluidOutput_Parms, PipeInputConnection), Z_Construct_UClass_UFGPipeConnectionFactory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_PipeInputConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_PipeInputConnection_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventPushFluidOutput_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_PipeInputConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "PushFluidOutput", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventPushFluidOutput_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventSetPipeConnection_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventSetPipeConnection_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "SetPipeConnection", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventSetPipeConnection_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics
	{
		struct FGSlugPrinciplesModularStorage_eventSetupModularConnection_Parms
		{
			int32 InputIndex;
			FModularConnection NewConnection;
			UFGInventoryComponent* inventory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewConnection;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventSetupModularConnection_Parms, inventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_inventory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_NewConnection = { "NewConnection", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventSetupModularConnection_Parms, NewConnection), Z_Construct_UScriptStruct_FModularConnection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_InputIndex = { "InputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSlugPrinciplesModularStorage_eventSetupModularConnection_Parms, InputIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_NewConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::NewProp_InputIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Slug Principles Building|Modular Storage" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSlugPrinciplesModularStorage, nullptr, "SetupModularConnection", nullptr, nullptr, sizeof(FGSlugPrinciplesModularStorage_eventSetupModularConnection_Parms), Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGSlugPrinciplesModularStorage_NoRegister()
	{
		return AFGSlugPrinciplesModularStorage::StaticClass();
	}
	struct Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFluidStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFluidStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshPipeConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshPipeConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshFactoryConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshFactoryConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularStorageMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModularStorageMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stackHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stackHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mConnectionSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mConnectionSlot_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableStorage,
		(UObject* (*)())Z_Construct_UPackage__Script_SlugPrinciples,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CheckConnection, "CheckConnection" }, // 2363713723
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_CleanConnection, "CleanConnection" }, // 3293756261
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_ClearPipeConnection, "ClearPipeConnection" }, // 2129243685
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetConnections, "GetConnections" }, // 1022692922
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GetFluidInventoryStorage, "GetFluidInventoryStorage" }, // 1538530044
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_GrabFluidInput, "GrabFluidInput" }, // 3285198405
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeFluidStorage, "InitializeFluidStorage" }, // 2589008403
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_InitializeModularConnection, "InitializeModularConnection" }, // 281627141
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_PushFluidOutput, "PushFluidOutput" }, // 1419877171
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetPipeConnection, "SetPipeConnection" }, // 2474706190
		{ &Z_Construct_UFunction_AFGSlugPrinciplesModularStorage_SetupModularConnection, "SetupModularConnection" }, // 2519351123
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Buildings/FGSlugPrinciplesModularStorage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mFluidStorage_MetaData[] = {
		{ "Category", "FGSlugPrinciplesModularStorage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mFluidStorage = { "mFluidStorage", nullptr, (EPropertyFlags)0x001000000108000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesModularStorage, mFluidStorage), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mFluidStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mFluidStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshPipeConnection_MetaData[] = {
		{ "Category", "Buildable|Mesh" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshPipeConnection = { "MeshPipeConnection", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesModularStorage, MeshPipeConnection), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshPipeConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshPipeConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshFactoryConnection_MetaData[] = {
		{ "Category", "Buildable|Mesh" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshFactoryConnection = { "MeshFactoryConnection", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesModularStorage, MeshFactoryConnection), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshFactoryConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshFactoryConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_ModularStorageMesh_MetaData[] = {
		{ "Category", "Buildable|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_ModularStorageMesh = { "ModularStorageMesh", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesModularStorage, ModularStorageMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_ModularStorageMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_ModularStorageMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_stackHeight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_stackHeight = { "stackHeight", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesModularStorage, stackHeight), METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_stackHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_stackHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mConnectionSlot_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Buildings/FGSlugPrinciplesModularStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mConnectionSlot = { "mConnectionSlot", nullptr, (EPropertyFlags)0x0010008001010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSlugPrinciplesModularStorage, mConnectionSlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mConnectionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mConnectionSlot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mConnectionSlot_Inner = { "mConnectionSlot", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModularConnection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mFluidStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshPipeConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_MeshFactoryConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_ModularStorageMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_stackHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mConnectionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::NewProp_mConnectionSlot_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSlugPrinciplesModularStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::ClassParams = {
		&AFGSlugPrinciplesModularStorage::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSlugPrinciplesModularStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSlugPrinciplesModularStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSlugPrinciplesModularStorage, 49338714);
	template<> SLUGPRINCIPLES_API UClass* StaticClass<AFGSlugPrinciplesModularStorage>()
	{
		return AFGSlugPrinciplesModularStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSlugPrinciplesModularStorage(Z_Construct_UClass_AFGSlugPrinciplesModularStorage, &AFGSlugPrinciplesModularStorage::StaticClass, TEXT("/Script/SlugPrinciples"), TEXT("AFGSlugPrinciplesModularStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSlugPrinciplesModularStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
