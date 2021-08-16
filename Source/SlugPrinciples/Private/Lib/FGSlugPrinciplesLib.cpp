
#include "Lib/FGSlugPrinciplesLib.h"
#include "Patching/BlueprintHookManager.h"
#include "Patching/BlueprintHookHelper.h"
#include "FGOutlineComponent.h"

void UFGSlugPrinciplesLib::BindOnWidgetConstruct(const TSubclassOf<UUserWidget> WidgetClass, FOnWidgetConstruct Binding) {
	if (!WidgetClass)
		return;
	UFunction* ConstructFunction = WidgetClass->FindFunctionByName(TEXT("Construct"));
	if (!ConstructFunction || ConstructFunction->IsNative())
	{
		return;
	}
	UBlueprintHookManager* HookManager = GEngine->GetEngineSubsystem<UBlueprintHookManager>();
	HookManager->HookBlueprintFunction(ConstructFunction, [Binding](FBlueprintHookHelper& HookHelper) {
		Binding.ExecuteIfBound(Cast<UUserWidget>(HookHelper.GetContext()));
		}, EPredefinedHookOffset::Return);
}


void UFGSlugPrinciplesLib::OutlineMultipleActors(TArray<AActor*> Actors, EOutlineColor color) {

	if (Actors.Num() > 0) {
		
			UWorld* world = Actors[0]->GetWorld();

			UFGOutlineComponent::Get(world)->ShowMultiActorOutline(Actors, color);
	}
}
