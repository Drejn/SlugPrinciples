// ILikeBanas

#pragma once

#include "Buildings/FGSlugPrinciplesGEM_MK1_Base.h"
#include "FGSlugPrinciplesGEM_MK1.generated.h"

/**
 * 
 */
UCLASS()
class SLUGPRINCIPLES_API AFGSlugPrinciplesGEM_MK1 : public AFGSlugPrinciplesBuilding
{
	GENERATED_BODY()
public:


	UPROPERTY(BlueprintReadWrite, SaveGame)
	AFGBuildableFactory* SPGEMEntrance;
	
	virtual void BeginPlay() override;

	virtual void StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
	virtual void StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
};
