// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "Buildings/FGSlugPrinciplesFluidPress.h"
#include "FGSlugPrinciplesGEM_MK2.generated.h"

/**
 * 
 */
UCLASS()
class SLUGPRINCIPLES_API AFGSlugPrinciplesGEM_MK2 : public AFGSlugPrinciplesBuilding
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|GEM MK2")
		bool HasFluidPress();

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|GEM MK2")
	void DisconnectFluidPress();

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|SlugPrinciplesBuilding|GEM MK2")
		AFGSlugPrinciplesFluidPress* GetFluidPress() { return mFluidPress; };

	AFGSlugPrinciplesFluidPress* mFluidPress;

};
