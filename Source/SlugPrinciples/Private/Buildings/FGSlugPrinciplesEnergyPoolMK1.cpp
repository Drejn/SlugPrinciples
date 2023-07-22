// ILikeBanas

#include "Buildings/FGSlugPrinciplesEnergyPoolMK1.h"


void AFGSlugPrinciplesEnergyPoolMK1::BeginPlay() {

	Super::BeginPlay();

}

void AFGSlugPrinciplesEnergyPoolMK1::StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {

	TArray<AActor*> actors;

	actors.Add(this);
	actors.Add(EnergyPoolEntrance);

	UFGOutlineComponent::Get(GetWorld())->ShowMultiActorOutline(actors, EOutlineColor::OC_RED);


}
void AFGSlugPrinciplesEnergyPoolMK1::StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {
	TArray<AActor*> actors;

	actors.Add(this);
	actors.Add(EnergyPoolEntrance);

	UFGOutlineComponent::Get(GetWorld())->ShowMultiActorOutline(actors, EOutlineColor::OC_NONE);
}
