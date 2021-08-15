#pragma once

#include "Hologram/FGFactoryHologram.h"
#include "Buildables/FGBuildableFactory.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "FGSlugPrinciplesHologram.generated.h"


UCLASS(Blueprintable)
class SLUGPRINCIPLES_API AFGSlugPrinciplesHologram : public AFGBuildableHologram
{
	GENERATED_BODY()
public:
	AFGSlugPrinciplesHologram();

	virtual void BeginPlay() override;

	bool TryUpgrade(const FHitResult& hitResult) override;
		
	virtual bool IsValidHitResult(const FHitResult& hit) const override;
	
	virtual void ConfigureActor(class AFGBuildable* inBuildable) const override;
	FTransform hololocation;

	virtual void SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator) override;
	virtual AActor* Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID) override;


	//Used for upgrades
	AFGSlugPrinciplesBuilding* ReplacedBuilding;

	//Used for attachments
	AFGSlugPrinciplesBuilding* ParentBuilding;
	
	AFGBuildableFactory* EnergyPoolEntrance;
		
	class AFGHologram* EnergyPoolEntranceHologram;
		

	FVector loc;
	FRotator rot;
};
