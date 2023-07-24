#include "Holograms/FGSlugPrinciplesStackableHologram.h"
#include "Buildings/FGSlugPrinciplesModularStorage.h"

AFGSlugPrinciplesStackableHologram::AFGSlugPrinciplesStackableHologram() : Super(){
	
	this->mValidHitClasses.Add(AFGSlugPrinciplesModularStorage::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
//	this->mScrollMode = EHologramScrollMode::HSM_ROTATE;
}

bool AFGSlugPrinciplesStackableHologram::TrySnapToActor(const FHitResult& hitResult) {
	
	return false;
	/*
	
	AActor* target = hitResult.GetActor();
	

	if (target->IsA(AFGSlugPrinciplesModularStorage::StaticClass())) {

		AFGSlugPrinciplesModularStorage* StackCheck = Cast<AFGSlugPrinciplesModularStorage>(target);

		float Zpoint = StackCheck->GetActorLocation().Z;

		float Zstart = Zpoint + StackCheck->stackHeight;
		float Zend = Zpoint + 800;
		float Zhit = hitResult.ImpactPoint.Z;

		UE_LOG(SlugPrinciplesLog, Warning, TEXT("%f"), Zhit);

		if (Zhit >= Zstart && Zhit <= Zend) {

			UStaticMeshComponent* ModularStorageMesh = Cast< UStaticMeshComponent>(StackCheck->GetComponentByClass(UStaticMeshComponent::StaticClass()));

			FName socket = TEXT("Stack");
			FTransform StackLocation = ModularStorageMesh->GetSocketTransform(socket);

			this->SetActorTransform(StackLocation);
			return true;
		}
	}
	else {
		return Super::TrySnapToActor(hitResult);
	}
	return false;
	*/
}


bool AFGSlugPrinciplesStackableHologram::IsValidHitResult(const FHitResult& hit) const  {
	
	AActor* target = hit.GetActor();
	
	if (target) {

		if (target->IsA(AFGSlugPrinciplesModularStorage::StaticClass())) {

			
			AFGSlugPrinciplesModularStorage* StackCheck = Cast<AFGSlugPrinciplesModularStorage>(target);


			

			float Zpoint = StackCheck->GetActorLocation().Z;

			float Zstart = Zpoint + StackCheck->stackHeight;
			float Zend = Zpoint + 800;
			float Zhit = hit.ImpactPoint.Z;

			if (Zhit >= Zstart && Zhit <= Zend) {
				
				return true;
			}
		}
		else
		{
			return Super::IsValidHitResult(hit);
		}	
	}
	return false;
}


void AFGSlugPrinciplesStackableHologram::SetHologramLocationAndRotation(const FHitResult& hitResult) {
	
	AActor* target = hitResult.GetActor();


	if (target->IsA(AFGSlugPrinciplesModularStorage::StaticClass())) {

		AFGSlugPrinciplesModularStorage* StackCheck = Cast<AFGSlugPrinciplesModularStorage>(target);

		float Zpoint = StackCheck->GetActorLocation().Z;

		float Zstart = Zpoint + StackCheck->stackHeight;
		float Zend = Zpoint + 800;
		float Zhit = hitResult.ImpactPoint.Z;


		if (Zhit >= Zstart && Zhit <= Zend) {

			UStaticMeshComponent* ModularStorageMesh = Cast< UStaticMeshComponent>(StackCheck->GetComponentByClass(UStaticMeshComponent::StaticClass()));
			
			FName socket = TEXT("Stack");
			FTransform StackLocation = ModularStorageMesh->GetSocketTransform(socket);
			
			if (!CanStack) {
				holorotation = StackCheck->GetActorRotation();
			}

			this->SetActorTransform(StackLocation);
			this->SetActorRotation(holorotation);
			
			CanStack = true;
		}
		else {
			CanStack = false;
		}
	}
	else {
		CanStack = false;
		Super::SetHologramLocationAndRotation(hitResult);
	}

}

void AFGSlugPrinciplesStackableHologram::Scroll(int32 delta) {
	if (CanStack) {
		holorotation = this->GetActorRotation();
		holorotation.Add(0, 180, 0);
		if (!isRotated) {
			isRotated = true;
		}
		else {
			isRotated = false;
		}
	}
	else {
		Super::Scroll(delta);
	}


}


/*

void AFGSlugPrinciplesStackableHologram::ConfigureActor(class AFGBuildable* inBuildable) const {
	//Super::ConfigureActor(inBuildable);

}
*/