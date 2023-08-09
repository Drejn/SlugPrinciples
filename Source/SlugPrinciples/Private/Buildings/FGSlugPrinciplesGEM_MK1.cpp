// ILikeBanas

#include "Buildings/FGSlugPrinciplesGEM_MK1.h"


void AFGSlugPrinciplesGEM_MK1::BeginPlay() {

	Super::BeginPlay();

}

void AFGSlugPrinciplesGEM_MK1::StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {

	TArray<AActor*> actors;

	actors.Add(this);
	actors.Add(SPGEMEntrance);

	UFGOutlineComponent::Get(GetWorld())->ShowMultiActorOutline(actors, EOutlineColor::OC_RED);


}
void AFGSlugPrinciplesGEM_MK1::StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {
	TArray<AActor*> actors;

	actors.Add(this);
	actors.Add(SPGEMEntrance);

	UFGOutlineComponent::Get(GetWorld())->ShowMultiActorOutline(actors, EOutlineColor::OC_NONE);
}
