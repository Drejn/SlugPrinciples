// ILikeBanas


#include "Buildings/FGSlugPrinciplesEnergyPoolMK2.h"

bool AFGSlugPrinciplesEnergyPoolMK2::HasFluidPress() {
	if (mFluidPress) {
		return true;
	}
	return false;
}

void AFGSlugPrinciplesEnergyPoolMK2::DisconnectFluidPress() {

	mFluidPress = nullptr;
}