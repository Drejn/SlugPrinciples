// ILikeBanas

#include "Buildings/FGSlugPrinciplesEnergyPoolMK1_Base.h"

void AFGSlugPrinciplesEnergyPoolMK1_Base::BeginPlay() {

	Super::BeginPlay();

}


void AFGSlugPrinciplesEnergyPoolMK1_Base::StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {

	TArray<AActor*> actors;

	actors.Add(this);
	actors.Add(EnergyPool);

	UFGOutlineComponent::Get(GetWorld())->ShowMultiActorOutline(actors, EOutlineColor::OC_RED);


}
void AFGSlugPrinciplesEnergyPoolMK1_Base::StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {
	TArray<AActor*> actors;

	actors.Add(this);
	actors.Add(EnergyPool);

	UFGOutlineComponent::Get(GetWorld())->ShowMultiActorOutline(actors, EOutlineColor::OC_NONE);
}