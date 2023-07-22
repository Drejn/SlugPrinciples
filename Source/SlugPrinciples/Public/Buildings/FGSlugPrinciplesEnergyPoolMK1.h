// ILikeBanas

#pragma once

#include "Buildings/FGSlugPrinciplesEnergyPoolMK1_Base.h"
#include "FGSlugPrinciplesEnergyPoolMK1.generated.h"

/**
 * 
 */
UCLASS()
class SLUGPRINCIPLES_API AFGSlugPrinciplesEnergyPoolMK1 : public AFGSlugPrinciplesBuilding
{
	GENERATED_BODY()
public:


	UPROPERTY(BlueprintReadWrite, SaveGame)
	AFGBuildableFactory* EnergyPoolEntrance;
	
	virtual void BeginPlay() override;

	virtual void StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
	virtual void StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
};
