#pragma once

#include "FGBlueprintFunctionLibrary.h"
#include "FGSlugPrinciplesLib.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnWidgetConstruct, UUserWidget*, Widget);

UCLASS(Blueprintable)
class SLUGPRINCIPLES_API UFGSlugPrinciplesLib : public UFGBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
		static void BindOnWidgetConstruct(TSubclassOf<UUserWidget> WidgetClass, FOnWidgetConstruct Binding);
	static FOnWidgetConstruct OnWidgetConstruct;

};
