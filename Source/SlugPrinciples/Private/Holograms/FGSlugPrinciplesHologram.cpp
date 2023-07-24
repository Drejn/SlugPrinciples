#include "Holograms/FGSlugPrinciplesHologram.h"


AFGSlugPrinciplesHologram::AFGSlugPrinciplesHologram() : Super(){
	this->mValidHitClasses.Add(AFGSlugPrinciplesBuilding::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
//	this->mScrollMode = EHologramScrollMode::HSM_ROTATE;

}


void AFGSlugPrinciplesHologram::BeginPlay() {
	
	Super::BeginPlay();

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


bool AFGSlugPrinciplesHologram::IsValidHitResult(const FHitResult& hit) const  {
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
					
					AFGSlugPrinciplesEnergyPoolMK2* AttachmentCheck = Cast<AFGSlugPrinciplesEnergyPoolMK2>(target);
					if (!AttachmentCheck->HasFluidPress()) {
						return true;
					}
					return false;
				}
				else if (target->IsA(AFGSlugPrinciplesEnergyPoolMK1::StaticClass())) {
					return false;
				}
			}			
		}
		else if (mRecipe->GetFName() != "Recipe_EnergyPoolMK2_C" && mRecipe->GetFName() != "Recipe_FluidPress_C") {
			if (EnergyPoolEntranceHologram) {
				EnergyPoolEntranceHologram->SetActorLocation(this->GetActorLocation());
				EnergyPoolEntranceHologram->SetActorRotation(this->GetActorRotation());
			}
			return Super::IsValidHitResult(hit);
		}		
	}
	return false;
}



void AFGSlugPrinciplesHologram::ConfigureActor(class AFGBuildable* inBuildable) const {


	if (ReplacedBuilding) {

		ReplacedBuilding->Execute_Upgrade(ReplacedBuilding,inBuildable);

	}
	if (inBuildable->IsA(AFGSlugPrinciplesFluidPress::StaticClass())) {
		
		if (ParentBuilding->IsA(AFGSlugPrinciplesEnergyPoolMK2::StaticClass())) {
			AFGSlugPrinciplesEnergyPoolMK2* EnergyPool = Cast<AFGSlugPrinciplesEnergyPoolMK2>(ParentBuilding);
			EnergyPool->mFluidPress = Cast<AFGSlugPrinciplesFluidPress>(inBuildable);
			EnergyPool->mFluidPress->mParentBuilding = EnergyPool;
		}
	}

}


void AFGSlugPrinciplesHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator) {
	
	
	if (this->GetRecipe()->GetFName() == "Recipe_EnergyPool_C") {
		FStringClassReference RecipeClassReference = FStringClassReference(TEXT("/SlugPrinciples/Recipes/Recipe_EnergyPool_Center.Recipe_EnergyPool_Center_C"));
		if (UClass* RecipeClass = RecipeClassReference.TryLoadClass<UFGRecipe>()) {

			EnergyPoolEntranceHologram = Super::SpawnChildHologramFromRecipe(this, RecipeClass, GetOwner(), this->GetActorLocation());
			

		}
	}
	
}

AActor* AFGSlugPrinciplesHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID) {
	
//	UE_LOG(SlugPrinciplesLog, Warning, TEXT("Construct"));


	AActor* newActor = Super::Construct(out_children, netConstructionID);
	
	if (this->GetRecipe()->GetFName() == "Recipe_EnergyPool_C") {

		for (int i = 0; i < out_children.Num(); i++) {
			if (out_children[i]->IsA(AFGBuildableFactory::StaticClass())) {
				
				AFGSlugPrinciplesEnergyPoolMK1* PoolRef = Cast<AFGSlugPrinciplesEnergyPoolMK1>(out_children[i]);

				if (PoolRef) {
					EnergyPoolEntrance = Cast<AFGBuildableFactory>(newActor);

					if (EnergyPoolEntrance) {

						PoolRef->EnergyPoolEntrance = EnergyPoolEntrance;

						//EnergyPoolEntrance->EnergyPool = PoolRef;
					}
				}
			}
		}
	}
	return nullptr;

}