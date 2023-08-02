#include "Holograms/FGSlugPrinciplesHologram.h"
#include "Utils/LogSlugPrinciples.h"

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
			if (GEMEntranceHologram) {
				GEMEntranceHologram->SetActorLocation(this->GetActorLocation());
				GEMEntranceHologram->SetActorRotation(this->GetActorRotation());
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
			AFGSlugPrinciplesGEM_MK2* GEM = Cast<AFGSlugPrinciplesGEM_MK2>(ParentBuilding);
			GEM->mFluidPress = Cast<AFGSlugPrinciplesFluidPress>(inBuildable);
			GEM->mFluidPress->mParentBuilding = GEM;
		}
	}
	

}


void AFGSlugPrinciplesHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator) {
	
		UE_LOG(LogSlugPrinciples, Warning, TEXT("%s"),*this->GetRecipe()->GetFName().ToString());
		if (this->GetRecipe()->GetFName() == "Recipe_GEM_C") {
			FStringClassReference RecipeClassReference = FStringClassReference(TEXT("/SlugPrinciples/Recipes/Recipe_GEM_Base.Recipe_GEM_Base_C"));
			UClass* RecipeClass = RecipeClassReference.TryLoadClass<UFGRecipe>();
			if (RecipeClass) {
				UE_LOG(LogSlugPrinciples, Warning, TEXT("Recipe found: %s"), *RecipeClass->GetFName().ToString());
				GEMEntranceHologram = Super::SpawnChildHologramFromRecipe(this, RecipeClass, GetOwner(), this->GetActorLocation());


			}
		}

	
}

AActor* AFGSlugPrinciplesHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID) {
	
	
	AActor* newActor = Super::Construct(out_children, netConstructionID);
	UE_LOG(LogSlugPrinciples, Warning, TEXT("Construct: %s"), *this->GetRecipe()->GetFName().ToString());
	if (this->GetRecipe()->GetFName() == "Recipe_GEM_C") {

		for (int i = 0; i < out_children.Num(); i++) {
			UE_LOG(LogSlugPrinciples, Warning, TEXT("Construct: %s"), *out_children[i]->GetFName().ToString());
			if (out_children[i]->IsA(AFGBuildableFactory::StaticClass())) {
				
				AFGSlugPrinciplesGEM_MK1* PoolRef = Cast<AFGSlugPrinciplesGEM_MK1>(out_children[i]);

				if (PoolRef) {
					GEMEntrance = Cast<AFGBuildableFactory>(newActor);

					if (GEMEntrance) {

						PoolRef->GEMEntrance = GEMEntrance;

						//EnergyPoolEntrance->EnergyPool = PoolRef;
					}
				}
			}
		}
	}
	
	return nullptr;

}