// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class AActor;
enum class EOutlineColor : uint8;
#ifdef SLUGPRINCIPLES_FGSlugPrinciplesLib_generated_h
#error "FGSlugPrinciplesLib.generated.h already included, missing '#pragma once' in FGSlugPrinciplesLib.h"
#endif
#define SLUGPRINCIPLES_FGSlugPrinciplesLib_generated_h

#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_6_DELEGATE \
struct _Script_SlugPrinciples_eventOnWidgetConstruct_Parms \
{ \
	UUserWidget* Widget; \
}; \
static inline void FOnWidgetConstruct_DelegateWrapper(const FScriptDelegate& OnWidgetConstruct, UUserWidget* Widget) \
{ \
	_Script_SlugPrinciples_eventOnWidgetConstruct_Parms Parms; \
	Parms.Widget=Widget; \
	OnWidgetConstruct.ProcessDelegate<UObject>(&Parms); \
}


#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_SPARSE_DATA
#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOutlineMultipleActors); \
	DECLARE_FUNCTION(execBindOnWidgetConstruct);


#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOutlineMultipleActors); \
	DECLARE_FUNCTION(execBindOnWidgetConstruct);


#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSlugPrinciplesLib(); \
	friend struct Z_Construct_UClass_UFGSlugPrinciplesLib_Statics; \
public: \
	DECLARE_CLASS(UFGSlugPrinciplesLib, UFGBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlugPrinciples"), NO_API) \
	DECLARE_SERIALIZER(UFGSlugPrinciplesLib)


#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUFGSlugPrinciplesLib(); \
	friend struct Z_Construct_UClass_UFGSlugPrinciplesLib_Statics; \
public: \
	DECLARE_CLASS(UFGSlugPrinciplesLib, UFGBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlugPrinciples"), NO_API) \
	DECLARE_SERIALIZER(UFGSlugPrinciplesLib)


#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSlugPrinciplesLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSlugPrinciplesLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSlugPrinciplesLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSlugPrinciplesLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSlugPrinciplesLib(UFGSlugPrinciplesLib&&); \
	NO_API UFGSlugPrinciplesLib(const UFGSlugPrinciplesLib&); \
public:


#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSlugPrinciplesLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSlugPrinciplesLib(UFGSlugPrinciplesLib&&); \
	NO_API UFGSlugPrinciplesLib(const UFGSlugPrinciplesLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSlugPrinciplesLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSlugPrinciplesLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSlugPrinciplesLib)


#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_PRIVATE_PROPERTY_OFFSET
#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_8_PROLOG
#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_PRIVATE_PROPERTY_OFFSET \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_SPARSE_DATA \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_RPC_WRAPPERS \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_INCLASS \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_PRIVATE_PROPERTY_OFFSET \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_SPARSE_DATA \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_INCLASS_NO_PURE_DECLS \
	SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUGPRINCIPLES_API UClass* StaticClass<class UFGSlugPrinciplesLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SatisfactoryModLoader_Plugins_SlugPrinciples_Source_SlugPrinciples_Public_Lib_FGSlugPrinciplesLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
