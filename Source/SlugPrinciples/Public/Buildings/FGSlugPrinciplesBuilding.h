#pragma once

#include "Buildables/FGBuildableFactory.h"
#include "FGSlugPrinciplesBuilding.generated.h"

UCLASS(Blueprintable)
class SLUGPRINCIPLES_API AFGSlugPrinciplesBuilding : public AFGBuildableFactory
{
	GENERATED_BODY()
public:
	AFGSlugPrinciplesBuilding();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//Indicates if the building is able to Flux Surge
	UPROPERTY(EditAnywhere, SaveGame)
	bool FluxSurgeEnabled;

	//Used at begin play for structures that require to spawn a child Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Replicated)
	bool isAlreadyBuilt;

	//Stores the quantity of Crystal Flux Reserved by the building
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int CF_Reservation;

	//Stores the number of crafts required before a Flux Surge
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int FluxSurgeThreshold;

	//Stores the duration a Flux Surge
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
		float FluxSurgeDuration;

	//Indicates if the building is currently in a Flux Surge
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Replicated)
		bool isFluxSurging;

	//Indicates what's the bonus production increment for this building
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
		float SurgeProductionBonus;

	//Returns true if the building has reserved Crystal Flux
	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|General")
		bool HasReservedCF();

	//Stores the state of the building, if it has enough Crystal Flux it becomes true and Crystal Flux is reserved
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Replicated)
		bool bReserved;


};