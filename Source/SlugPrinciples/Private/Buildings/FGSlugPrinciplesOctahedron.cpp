#pragma once

#include "Buildings/FGSlugPrinciplesOctahedron.h"



AFGSlugPrinciplesOctahedron::AFGSlugPrinciplesOctahedron() : Super() {

}

bool AFGSlugPrinciplesOctahedron::CanDismantle_Implementation() const {

	return false;
}



void AFGSlugPrinciplesOctahedron::Dismantle_Implementation() {

}

void AFGSlugPrinciplesOctahedron::StartIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {

}
void AFGSlugPrinciplesOctahedron::StopIsLookedAtForDismantle_Implementation(class AFGCharacterPlayer* byCharacter) {

}