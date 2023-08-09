#include "Holograms/FGSlugPrinciplesHologram.h"
#include "Utils/LogSlugPrinciples.h"

AFGSlugPrinciplesHologram::AFGSlugPrinciplesHologram() : Super(){
	this->mValidHitClasses.Add(AFGSlugPrinciplesBuilding::StaticClass());
	this->mRecipe = nullptr;
	this->SetHidden(true);
	this->bReplicates = true;

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

			ReplacedBuilding = Cast<AFGSlugPrinciplesBuilding>(target);
			rot = target->GetActorRotation();
			loc = target->GetActorLocation();
			if (target->IsA(AFGSlugPrinciplesGEM_MK2::StaticClass())) {
				ParentBuilding = Cast<AFGSlugPrinciplesGEM_MK2>(target);
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
			FName RecipeName = "Recipe_GEMMK2_C";
			//UE_LOG(SlugPrinciplesLog, Warning, TEXT("Target recipe: %s"), *RecipeName.ToString());
			FName RecipeName2 = "Recipe_FluidPress_C";


			if (this->GetRecipe()->GetFName() == RecipeName){
				if (target->IsA(AFGSlugPrinciplesGEM_MK1::StaticClass())) {
					
					return true;
				}
			}
			else if (this->GetRecipe()->GetFName() == RecipeName2) {
				if (target->IsA(AFGSlugPrinciplesGEM_MK2::StaticClass())) {
					
					AFGSlugPrinciplesGEM_MK2* AttachmentCheck = Cast<AFGSlugPrinciplesGEM_MK2>(target);
					if (!AttachmentCheck->HasFluidPress()) {
						return true;
					}
					return false;
				}
				else if (target->IsA(AFGSlugPrinciplesGEM_MK1::StaticClass())) {
					return false;
				}
			}			
		}
		else if (this->GetRecipe()->GetFName() != "Recipe_GEMMK2_C" && this->GetRecipe()->GetFName() != "Recipe_FluidPress_C") {
			if (SPGEMEntranceHologram) {
				SPGEMEntranceHologram->SetActorLocation(this->GetActorLocation());
				SPGEMEntranceHologram->SetActorRotation(this->GetActorRotation());
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
		
		if (ParentBuilding->IsA(AFGSlugPrinciplesGEM_MK2::StaticClass())) {
			AFGSlugPrinciplesGEM_MK2* SPGEM = Cast<AFGSlugPrinciplesGEM_MK2>(ParentBuilding);
			SPGEM->mFluidPress = Cast<AFGSlugPrinciplesFluidPress>(inBuildable);
			SPGEM->mFluidPress->mParentBuilding = SPGEM;
		}
	}
	

}


void AFGSlugPrinciplesHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator) {
	
		if (this->GetRecipe()->GetFName() == "Recipe_GEM_C") {
			FStringClassReference RecipeClassReference = FStringClassReference(TEXT("/SlugPrinciples/Recipes/Recipe_GEM_Base.Recipe_GEM_Base_C"));
			UClass* RecipeClass = RecipeClassReference.TryLoadClass<UFGRecipe>();
			if (RecipeClass) {
				SPGEMEntranceHologram = Cast< AFGHologram > (Super::SpawnChildHologramFromRecipe(this, RecipeClass, hologramOwner, this->GetActorLocation()));

				if (!GetHologramChildren().Contains(SPGEMEntranceHologram)) {
					AddChild(SPGEMEntranceHologram);
				}

			}
		}

	
}

AActor* AFGSlugPrinciplesHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID) {
	/*
	
	AActor* newActor = Super::Construct(out_children, netConstructionID);
	UE_LOG(LogSlugPrinciples, Warning, TEXT("Construct Actor: %s"), *newActor->GetFName().ToString());

	if (this->GetRecipe()->GetFName() == "Recipe_GEM_C") {
		
		UE_LOG(LogSlugPrinciples, Warning, TEXT("Construct Child: %d"), out_children.Num())
		for (int i = 0; i < out_children.Num(); i++) {
			UE_LOG(LogSlugPrinciples, Warning, TEXT("Construct Child: %d"), out_children.Num());
			if (out_children[i]) {
				if (out_children[i]->IsA(AFGBuildableFactory::StaticClass())) {

					AFGSlugPrinciplesGEM_MK1* PoolRef = Cast<AFGSlugPrinciplesGEM_MK1>(newActor);

					if (PoolRef) {
						SPGEMEntrance = Cast<AFGBuildableFactory>(out_children[i]);

						if (SPGEMEntrance) {

							PoolRef->SPGEMEntrance = SPGEMEntrance;

							//EnergyPoolEntrance->EnergyPool = PoolRef;
							
						}
					}
				}
			}
		}
		
		
		
	}
	else if (this->GetRecipe()->GetFName() == "Recipe_GEM_Base_C") {
		//SPGEMEntrance = Cast<AFGBuildableFactory>(newActor);
		UE_LOG(LogSlugPrinciples, Warning, TEXT("Construct Parent: %s"), *this->mParent->GetFName().ToString());
	}
	*/
	return Super::Construct(out_children, netConstructionID);;

}