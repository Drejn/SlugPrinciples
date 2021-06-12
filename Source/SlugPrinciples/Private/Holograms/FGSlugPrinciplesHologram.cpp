#include "Holograms/FGSlugPrinciplesHologram.h"
#include "Utils/SlugPrinciplesLogging.h"
#include "Buildings/FGSlugPrinciplesEnergyPoolMK1.h"
#include "Buildings/FGSlugPrinciplesEnergyPoolMK2.h"

AFGSlugPrinciplesHologram::AFGSlugPrinciplesHologram() : Super(){
	this->mValidHitClasses.Add(AFGSlugPrinciplesBuilding::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
	this->mScrollMode = EHologramScrollMode::HSM_ROTATE;
}

bool AFGSlugPrinciplesHologram::TryUpgrade(const FHitResult& hitResult) {
	//UE_LOG(SlugPrinciplesLog, Warning, TEXT("TryUpgrade"));
	AActor* target = hitResult.GetActor();

	if (target) {
		if (target->IsA(AFGSlugPrinciplesBuilding::StaticClass())) {
			//UE_LOG(SlugPrinciplesLog, Warning, TEXT("Target is AFGSlugPrinciplesBuilding"));
			//UE_LOG(SlugPrinciplesLog, Warning, TEXT("isa SlugPrinciplesBuilding"));
			ReplacedBuilding = Cast<AFGSlugPrinciplesBuilding>(target);
			rot = target->GetActorRotation();
			loc = target->GetActorLocation();
			if (target->IsA(AFGSlugPrinciplesEnergyPoolMK2::StaticClass())) {
				ParentBuilding = Cast<AFGSlugPrinciplesEnergyPoolMK2>(target);
			}
			
			hololocation = target->GetTransform();
			this->SetActorTransform(hololocation);	
			return true;
		}
	}
	return false;

}


bool AFGSlugPrinciplesHologram::IsValidHitResult(const FHitResult& hit) const {
	//UE_LOG(SlugPrinciplesLog, Warning, TEXT("IsValidHitResult"));
	AActor* target = hit.GetActor();
	
	if (target) {
		if (target->IsA(AFGSlugPrinciplesBuilding::StaticClass())) {
			
			//UE_LOG(SlugPrinciplesLog, Warning, TEXT("Target recipe: %s"), *str);
			FName RecipeName = "Recipe_EnergyPoolMK2_C";
			//UE_LOG(SlugPrinciplesLog, Warning, TEXT("Target recipe: %s"), *RecipeName.ToString());
			FName RecipeName2 = "Recipe_FluidPress_C";
			if (mRecipe->GetFName() == RecipeName){
				if (target->IsA(AFGSlugPrinciplesEnergyPoolMK1::StaticClass())) {
					return true;
				}
			}
			else if (mRecipe->GetFName() == RecipeName2) {
				if (target->IsA(AFGSlugPrinciplesEnergyPoolMK2::StaticClass())) {
					//ParentBuilding = Cast<AFGSlugPrinciplesBuilding>(target);
					AFGSlugPrinciplesEnergyPoolMK2* AttachmentCheck = Cast<AFGSlugPrinciplesEnergyPoolMK2>(target);
					if(!AttachmentCheck->HasFluidPress()){
						return true;
					}
				}
			}

		}
	}
	return false;
}



void AFGSlugPrinciplesHologram::ConfigureActor(class AFGBuildable* inBuildable) const {

	//AActor* ReplacedActor = GetUpgradedActor();
	//AFGSlugPrinciplesBuilding* CastedActor = Cast< AFGSlugPrinciplesBuilding>(ReplacedActor);
	if (ReplacedBuilding) {
		UE_LOG(SlugPrinciplesLog, Warning, TEXT("Replaced Actor found"));

		//UE_LOG(SlugPrinciplesLog, Warning, TEXT(ReplacedBuilding->GetClass()));
		//UE_LOG(SlugPrinciplesLog, Warning, TEXT());

		ReplacedBuilding->Execute_Upgrade(ReplacedBuilding,inBuildable);

	}
	if (inBuildable->IsA(AFGSlugPrinciplesFluidPress::StaticClass())) {
		UE_LOG(SlugPrinciplesLog, Warning, TEXT("configuring Fluid Press"));
		if (ParentBuilding->IsA(AFGSlugPrinciplesEnergyPoolMK2::StaticClass())) {
			AFGSlugPrinciplesEnergyPoolMK2* EnergyPool = Cast<AFGSlugPrinciplesEnergyPoolMK2>(ParentBuilding);
			EnergyPool->mFluidPress = Cast<AFGSlugPrinciplesFluidPress>(inBuildable);
			EnergyPool->mFluidPress->mParentBuilding = EnergyPool;
		}
	}
	//ReplacedActor->Destroy();
	//CastedActor->Execute_Upgrade(CastedActor, inBuildable);

}
