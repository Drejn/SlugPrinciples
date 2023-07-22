// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "FGOutlineComponent.h"
#include "FGSlugPrinciplesEnergyPoolMK1_Base.generated.h"

/**
 * 
 */
UCLASS()
class SLUGPRINCIPLES_API AFGSlugPrinciplesEnergyPoolMK1_Base : public AFGSlugPrinciplesBuilding
{
	GENERATED_BODY()
public:
	
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	class AFGSlugPrinciplesEnergyPoolMK1* EnergyPool;
	
	virtual void StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
	virtual void StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
};
