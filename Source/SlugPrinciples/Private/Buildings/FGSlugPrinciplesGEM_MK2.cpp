// ILikeBanas


#include "Buildings/FGSlugPrinciplesGEM_MK2.h"

bool AFGSlugPrinciplesGEM_MK2::HasFluidPress() {
	if (mFluidPress) {
		return true;
	}
	return false;
}

void AFGSlugPrinciplesGEM_MK2::DisconnectFluidPress() {

	mFluidPress = nullptr;
}