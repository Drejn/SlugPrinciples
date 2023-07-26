// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "FGOutlineComponent.h"
#include "FGSlugPrinciplesGEM_MK1_Base.generated.h"

/**
 * 
 */
UCLASS()
class SLUGPRINCIPLES_API AFGSlugPrinciplesGEM_MK1_Base : public AFGSlugPrinciplesBuilding
{
	GENERATED_BODY()
public:
	
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	class AFGSlugPrinciplesGEM_MK1* GEM;
	
	virtual void StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
	virtual void StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
};
