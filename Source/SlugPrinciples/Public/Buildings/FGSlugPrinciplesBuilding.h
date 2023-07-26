#pragma once

#include "Buildables/FGBuildableManufacturer.h"
#include "FGSlugPrinciplesBuilding.generated.h"

UCLASS(Blueprintable)
class SLUGPRINCIPLES_API AFGSlugPrinciplesBuilding : public AFGBuildableManufacturer
{
	GENERATED_BODY()
public:
	AFGSlugPrinciplesBuilding();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


	//Stores the quantity of Crystal Flux Reserved by the building
	UPROPERTY(BlueprintReadWrite, SaveGame)
	int CF_Reservation;

	//Stores the number of crafts required before a Flux Surge
	UPROPERTY(BlueprintReadWrite, SaveGame)
	int FluxSurgeThreshold;

	//Stores the duration a Flux Surge
	UPROPERTY(BlueprintReadWrite, SaveGame)
	float FluxSurgeDuration;

	//Indicates if the building is currently in a Flux Surge
	UPROPERTY(BlueprintReadWrite, SaveGame)
	bool isFluxSurging;

	//Returns true if the building has reserved Crystal Flux
	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|General")
	bool HasReservedCF();

	//Stores the state of the building, if it has enough Crystal Flux it becomes true and Crystal Flux is reserved
	UPROPERTY(BlueprintReadWrite, SaveGame, Replicated)
	bool bReserved;


};
