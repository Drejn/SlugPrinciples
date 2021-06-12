#pragma once

#include "Hologram/FGFactoryHologram.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "FGSlugPrinciplesHologram.generated.h"


UCLASS(Blueprintable)
class SLUGPRINCIPLES_API AFGSlugPrinciplesHologram : public AFGBuildableHologram
{
	GENERATED_BODY()
public:
	AFGSlugPrinciplesHologram();

	bool TryUpgrade(const FHitResult& hitResult) override;
	
	//virtual AActor* Construct(TArray< AActor* >& out_children, FNetConstructionID constructionID) override;
	
	virtual bool IsValidHitResult(const FHitResult& hit) const override;
	//virtual bool DoMultiStepPlacement(bool isInputFromARelease) override;
	//virtual AActor* GetUpgradedActor() const override;
	virtual void ConfigureActor(class AFGBuildable* inBuildable) const override;
	FTransform hololocation;

	//Used for upgrades
	AFGSlugPrinciplesBuilding* ReplacedBuilding;
	//Used for attachments
	AFGSlugPrinciplesBuilding* ParentBuilding;
	FVector loc;
	FRotator rot;
};
