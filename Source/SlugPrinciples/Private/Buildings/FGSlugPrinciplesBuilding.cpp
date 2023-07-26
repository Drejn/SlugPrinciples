#pragma once

#include "Buildings/FGSlugPrinciplesBuilding.h"


AFGSlugPrinciplesBuilding::AFGSlugPrinciplesBuilding() : Super() {
	
}


void AFGSlugPrinciplesBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFGSlugPrinciplesBuilding, bReserved);
}

bool AFGSlugPrinciplesBuilding::HasReservedCF() {
	return bReserved;
}

