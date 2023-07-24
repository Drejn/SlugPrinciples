#pragma once

#include "Buildables/FGBuildable.h"
#include "FGSlugPrinciplesOctahedron.generated.h"

UCLASS(Blueprintable)
class SLUGPRINCIPLES_API AFGSlugPrinciplesOctahedron : public AFGBuildable
{
	GENERATED_BODY()
public:
	AFGSlugPrinciplesOctahedron();

	virtual bool CanDismantle_Implementation() const override;
	virtual void Dismantle_Implementation() override;
	virtual void StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
	virtual void StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) override;
};
