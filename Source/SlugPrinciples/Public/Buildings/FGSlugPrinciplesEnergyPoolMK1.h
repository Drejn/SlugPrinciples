// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "FGSlugPrinciplesEnergyPoolMK1.generated.h"

/**
 * 
 */
UCLASS()
class SLUGPRINCIPLES_API AFGSlugPrinciplesEnergyPoolMK1 : public AFGSlugPrinciplesBuilding
{
	GENERATED_BODY()
public:

	virtual void BeginPlay() override;

		UPROPERTY(BlueprintReadWrite, SaveGame)
		AFGBuildableFactory* EnergyPoolEntrance;
	
};
