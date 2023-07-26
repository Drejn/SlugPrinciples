// ILikeBanas

#include "Buildings/FGSlugPrinciplesGEM_MK1_Base.h"

void AFGSlugPrinciplesGEM_MK1_Base::BeginPlay() {

	Super::BeginPlay();

}


void AFGSlugPrinciplesGEM_MK1_Base::StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {

	TArray<AActor*> actors;

	actors.Add(this);
	actors.Add(GEM);

	UFGOutlineComponent::Get(GetWorld())->ShowMultiActorOutline(actors, EOutlineColor::OC_RED);


}
void AFGSlugPrinciplesGEM_MK1_Base::StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {
	TArray<AActor*> actors;

	actors.Add(this);
	actors.Add(GEM);

	UFGOutlineComponent::Get(GetWorld())->ShowMultiActorOutline(actors, EOutlineColor::OC_NONE);
}