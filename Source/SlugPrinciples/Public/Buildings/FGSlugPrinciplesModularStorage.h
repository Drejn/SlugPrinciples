// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Buildings/FGSlugPrinciplesBuilding.h"
#include "Buildables/FGBuildableStorage.h"
#include "FGFactoryConnectionComponent.h"
#include "FGConnectionComponent.h"
#include "FGPipeConnectionFactory.h"
#include "FGSlugPrinciplesModularStorage.generated.h"


USTRUCT(BlueprintType)
struct FModularConnection {

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	UFGFactoryConnectionComponent* FactoryConnection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	UFGPipeConnectionFactory* PipeConnection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	UFGPipeConnectionComponentBase* ConnectedPipe;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	EFactoryConnectionConnector ConnectionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	EFactoryConnectionDirection ConnectionDirection;


};


UCLASS(Blueprintable)
class SLUGPRINCIPLES_API AFGSlugPrinciplesModularStorage : public AFGBuildableStorage
{
	GENERATED_BODY()
	
public:

	AFGSlugPrinciplesModularStorage();



	FText GetLookAtDecription_Implementation(class AFGCharacterPlayer* byCharacter, const FUseState& state) const override;
	
	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	void InitializeModularConnection(UFGInventoryComponent* inventory,int index);


	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	void SetupModularConnection(int InputIndex, FModularConnection NewConnection, UFGInventoryComponent* inventory);

	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Defaults")
	TArray<FModularConnection> mConnectionSlot;

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	FModularConnection CheckConnection(int InputIndex);

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	TArray<FModularConnection> GetConnections();

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	void InitializeFluidStorage();

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	UFGInventoryComponent* GetFluidInventoryStorage();

	
	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	bool GrabFluidInput(float dt,UFGPipeConnectionFactory* PipeInputConnection, UFGInventoryComponent* inventory, int index);

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	bool PushFluidOutput(float dt, UFGPipeConnectionFactory* PipeInputConnection, UFGInventoryComponent* inventory, int index);

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	void SetPipeConnection(int index);

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	void ClearPipeConnection(int index);

	UFUNCTION(BlueprintCallable, Category = "FactoryGame|Slug Principles Building|Modular Storage")
	void CleanConnection(int index);


	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Defaults")
	float stackHeight;

	UPROPERTY(EditDefaultsOnly, Category = "Buildable|Mesh")
	UStaticMeshComponent* ModularStorageMesh;
	UPROPERTY(EditDefaultsOnly, Category = "Buildable|Mesh")
	UStaticMesh* MeshFactoryConnection;
	UPROPERTY(EditDefaultsOnly, Category = "Buildable|Mesh")
	UStaticMesh* MeshPipeConnection;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	UFGInventoryComponent* mFluidStorage;


};
