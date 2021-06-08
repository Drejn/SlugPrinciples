#pragma once

#include "Buildings/FGSlugPrinciplesOctahedron.h"
#include "Utils/SlugPrinciplesLogging.h"


AFGSlugPrinciplesOctahedron::AFGSlugPrinciplesOctahedron() : Super() {

}

bool AFGSlugPrinciplesOctahedron::CanDismantle_Implementation() const {

	return false;
}

void AFGSlugPrinciplesOctahedron::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const  {

}

void AFGSlugPrinciplesOctahedron::Dismantle_Implementation() {

}

void AFGSlugPrinciplesOctahedron::StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {

}
void AFGSlugPrinciplesOctahedron::StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {

}