#pragma once

#include "Hologram/FGFactoryHologram.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "Buildings/FGSlugPrinciplesModularStorage.h"
#include "FGSlugPrinciplesStackableHologram.generated.h"


UCLASS(Blueprintable)
class SLUGPRINCIPLES_API AFGSlugPrinciplesStackableHologram : public AFGBuildableHologram
{
	GENERATED_BODY()
public:
	AFGSlugPrinciplesStackableHologram();
		
	virtual bool IsValidHitResult(const FHitResult& hit) const override;
	//virtual void ConfigureActor(class AFGBuildable* inBuildable) const override;
	virtual void SetHologramLocationAndRotation(const FHitResult& hitResult) override;

	virtual bool TrySnapToActor(const FHitResult& hitResult) override;

	virtual void Scroll(int32 delta) override;

	FTransform hololocation;
	FRotator holorotation;
	bool CanStack;
	bool isRotated;
	AFGSlugPrinciplesModularStorage* holostack;



};
