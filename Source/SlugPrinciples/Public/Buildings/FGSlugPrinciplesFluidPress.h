// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "FGFactoryConnectionComponent.h"
#include "FGSlugPrinciplesFluidPress.generated.h"


/**
 * 
 */
UCLASS()
class SLUGPRINCIPLES_API AFGSlugPrinciplesFluidPress : public AFGSlugPrinciplesBuilding
{
	GENERATED_BODY()
public:

		UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Fluid Press")
		AFGSlugPrinciplesGEM_MK2* GetParentBuilding() { return mParentBuilding; };
		
		UPROPERTY(SaveGame)
		AFGSlugPrinciplesGEM_MK2* mParentBuilding;

		UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Fluid Press")
		UFGFactoryConnectionComponent* SetOutputConnection(UFGFactoryConnectionComponent* connection);

		UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Fluid Press")
		UFGFactoryConnectionComponent* GetConnectedConveyor();

		UPROPERTY(SaveGame)
		UFGFactoryConnectionComponent* mOutputConnection;
		
		UPROPERTY(SaveGame)
		UFGFactoryConnectionComponent* mConnectedConveyor;

		UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Fluid Press")
		void PushOutput(UFGItemDescriptor* itemPushed);

		UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Fluid Press")
		void SetOutputInventory(UFGInventoryComponent* inventory);

		UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Fluid Press")
		void SetOutputInventoryIndex(int32 index);

};
