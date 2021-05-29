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
			
			

			FString str = AFGSlugPrinciplesEnergyPoolMK2::StaticClass()->GetName();
			UE_LOG(SlugPrinciplesLog, Warning, TEXT("Target recipe: %s"), *str);
			FName RecipeName = "Recipe_EnergyPoolMK2_C";
			UE_LOG(SlugPrinciplesLog, Warning, TEXT("Target recipe: %s"), *RecipeName.ToString());
			
			if (mRecipe->GetFName() == RecipeName){
				if (target->IsA(AFGSlugPrinciplesEnergyPoolMK1::StaticClass())) {
					return true;
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
	//ReplacedActor->Destroy();
	//CastedActor->Execute_Upgrade(CastedActor, inBuildable);

}

/*
AActor* AFGSlugPrinciplesHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID constructionID) {
	UE_LOG(SlugPrinciplesLog, Warning, TEXT("Construct"));
	
	//if (Super::Construct(out_children, constructionID)) {
	//	UE_LOG(SlugPrinciplesLog, Warning, TEXT("Returned something"));
	//}
	
	ReplacedBuilding->Upgrade()
	

	//newactor is null
	if (newactor) {
		UE_LOG(SlugPrinciplesLog, Warning, TEXT("Is Not Null"));
		
	}
	return newactor;
}
*/

/*
bool AFGSlugPrinciplesHologram::DoMultiStepPlacement(bool isInputFromARelease) {
	UE_LOG(SlugPrinciplesLog, Warning, TEXT("Do Multistep Placement"));

	
	FName cls = mRecipe->GetFName();
	FName bld = mBuildClass->GetFName();

	UE_LOG(SlugPrinciplesLog, Warning, TEXT("Class Name %s"), *cls.ToString());
	UE_LOG(SlugPrinciplesLog, Warning, TEXT("Build Name %s"), *bld.ToString());
	return true;
}
*/
/*
AActor* AFGSlugPrinciplesHologram::GetUpgradedActor() const {
	UE_LOG(SlugPrinciplesLog, Warning, TEXT("Get Upgraded Actor"));
	//AFGSlugPrinciplesBuilding* newactor = Cast< AFGSlugPrinciplesBuilding>(Super::GetUpgradedActor());
	if (ReplacedBuilding) {
		UE_LOG(SlugPrinciplesLog, Warning, TEXT("Upgraded Actor Found"));
	}
	
	return ReplacedBuilding;
}
*/