// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "Buildings/FGSlugPrinciplesFluidPress.h"
#include "FGSlugPrinciplesEnergyPoolMK2.generated.h"

/**
 * 
 */
UCLASS()
class SLUGPRINCIPLES_API AFGSlugPrinciplesEnergyPoolMK2 : public AFGSlugPrinciplesBuilding
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Energy Pool MK2")
	bool HasFluidPress();
	UFUNCTION(BlueprintCallable, Category = "FactoryGame|SlugPrinciplesBuilding|EnergyPoolMK2")
	AFGSlugPrinciplesFluidPress* GetFluidPress() { return mFluidPress; };

	AFGSlugPrinciplesFluidPress* mFluidPress;

};
