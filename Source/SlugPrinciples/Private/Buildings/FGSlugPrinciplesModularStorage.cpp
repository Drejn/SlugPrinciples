// ILikeBanas


#include "Buildings/FGSlugPrinciplesModularStorage.h"


AFGSlugPrinciplesModularStorage::AFGSlugPrinciplesModularStorage() : Super() {

	ModularStorageMesh = Cast<UStaticMeshComponent>(this->GetComponentByClass(UStaticMesh::StaticClass()));

	FModularConnection buffer;
	buffer.ConnectionDirection = EFactoryConnectionDirection::FCD_INPUT;
	buffer.ConnectionType = EFactoryConnectionConnector::FCC_CONVEYOR;
	buffer.FactoryConnection = nullptr;
	buffer.PipeConnection = nullptr;
	buffer.ConnectedPipe = nullptr;
	mConnectionSlot.Add(buffer);
	mConnectionSlot.Add(buffer);
	mConnectionSlot.Add(buffer);
	mConnectionSlot.Add(buffer);
}

void AFGSlugPrinciplesModularStorage::InitializeModularConnection(UFGInventoryComponent* inventory, int index) {

	ModularStorageMesh = Cast<UStaticMeshComponent>(this->GetComponentByClass(UStaticMeshComponent::StaticClass()));

	switch (mConnectionSlot[index].ConnectionType)
	{
	case EFactoryConnectionConnector::FCC_CONVEYOR:
	{
		//	IF CONVEYOR IS SELECTED

		UFGFactoryConnectionComponent* Con = mConnectionSlot[index].FactoryConnection;

		//Con->SetVisibility(true, false);


		UStaticMeshComponent* ConMesh = NewObject<UStaticMeshComponent>(this);
		ConMesh->SetStaticMesh(MeshFactoryConnection);
		ConMesh->SetVisibility(true, false);
		const UStaticMeshSocket* socket;
		FVector socketLocation = FVector(0, 0, 0);
		FRotator socketRotation = FRotator(0, 0, 0);


		switch (mConnectionSlot[index].ConnectionDirection)
		{

			//	IF CONVEYOR IS INPUT

		case EFactoryConnectionDirection::FCD_INPUT:
		{


			//Con->SetDirection(EFactoryConnectionDirection::FCD_INPUT);

			if (index == 0) {
				socket = ModularStorageMesh->GetSocketByName("Input2");
				socketLocation = socket->RelativeLocation;
				socketRotation = socket->RelativeRotation;

			}
			else if (index == 2) {
				socket = ModularStorageMesh->GetSocketByName("Input3");
				socketLocation = socket->RelativeLocation;
				socketRotation = socket->RelativeRotation;

			}
		}
		break;


		//	IF CONVEYOR IS OUTPUT

		case EFactoryConnectionDirection::FCD_OUTPUT:
		{
			//Con->SetDirection(EFactoryConnectionDirection::FCD_OUTPUT);
			if (index == 1)
			{
				socket = ModularStorageMesh->GetSocketByName("Output2");
				socketLocation = socket->RelativeLocation;
				socketRotation = socket->RelativeRotation;

			}
			else if (index == 3)
			{
				socket = ModularStorageMesh->GetSocketByName("Output3");
				socketLocation = socket->RelativeLocation;
				socketRotation = socket->RelativeRotation;

			}
		}
		break;
		}

		ConMesh->AttachToComponent(ModularStorageMesh, FAttachmentTransformRules::KeepRelativeTransform);

		ConMesh->SetRelativeLocation(socketLocation);
		ConMesh->SetRelativeRotation(socketRotation);
		//Con->AttachToComponent(ConMesh, FAttachmentTransformRules::KeepRelativeTransform, "Connection");
		mConnectionSlot[index].FactoryConnection->AttachToComponent(ConMesh, FAttachmentTransformRules::KeepRelativeTransform, "Connection");

		ConMesh->RegisterComponent();
		mConnectionSlot[index].FactoryConnection->RegisterComponent();

		//Con->RegisterComponent();
		
		//mConnectionSlot[index].FactoryConnection = Con;

		/*
		mConnectionSlot[index].ConnectionType = EFactoryConnectionConnector::FCC_CONVEYOR;

		if (index == 0 || index == 2)
			mConnectionSlot[index].ConnectionDirection = EFactoryConnectionDirection::FCD_INPUT;
		else
			mConnectionSlot[index].ConnectionDirection = EFactoryConnectionDirection::FCD_OUTPUT;
		*/
		//Con->SetInventory(GetStorageInventory());
		mConnectionSlot[index].FactoryConnection->SetInventory(GetStorageInventory());

	}
	break;

	//	IF PIPE IS SELECTED

	case EFactoryConnectionConnector::FCC_PIPE:
	{

		UFGPipeConnectionFactory* PipeCon = mConnectionSlot[index].PipeConnection;

		PipeCon->SetVisibility(true, false);

		UStaticMeshComponent* PipeConMesh = NewObject<UStaticMeshComponent>(this);
		PipeConMesh->SetStaticMesh(MeshPipeConnection);
		PipeConMesh->SetVisibility(true, false);
		
		
		const UStaticMeshSocket* Pipesocket;
		FVector PipesocketLocation = FVector(0, 0, 0);
		FRotator PipesocketRotation = FRotator(0, 0, 0);
		
		switch (mConnectionSlot[index].ConnectionDirection)
		{

			//	IF PIPE IS INPUT

		case EFactoryConnectionDirection::FCD_INPUT:
			//PipeCon->SetPipeConnectionType(EPipeConnectionType::PCT_CONSUMER);

			if (index == 0)
			{
				Pipesocket = ModularStorageMesh->GetSocketByName("PipeInput2");
				PipesocketLocation = Pipesocket->RelativeLocation;
				PipesocketRotation = Pipesocket->RelativeRotation;
			}
			else if (index == 2)
			{
				Pipesocket = ModularStorageMesh->GetSocketByName("PipeInput3");
				PipesocketLocation = Pipesocket->RelativeLocation;
				PipesocketRotation = Pipesocket->RelativeRotation;
			}
			break;

			//	IF PIPE IS OUTPUT

		case EFactoryConnectionDirection::FCD_OUTPUT:
			//PipeCon->SetPipeConnectionType(EPipeConnectionType::PCT_PRODUCER);

			if (index == 1)
			{
				Pipesocket = ModularStorageMesh->GetSocketByName("PipeOutput2");
				PipesocketLocation = Pipesocket->RelativeLocation;
				PipesocketRotation = Pipesocket->RelativeRotation;
			}
			else if (index == 3)
			{
				Pipesocket = ModularStorageMesh->GetSocketByName("PipeOutput3");
				PipesocketLocation = Pipesocket->RelativeLocation;
				PipesocketRotation = Pipesocket->RelativeRotation;
			}
			break;
		}

		PipeConMesh->AttachToComponent(ModularStorageMesh, FAttachmentTransformRules::KeepRelativeTransform);

		PipeConMesh->SetRelativeLocation(PipesocketLocation);
		PipeConMesh->SetRelativeRotation(PipesocketRotation);

		//PipeCon->AttachToComponent(PipeConMesh, FAttachmentTransformRules::KeepRelativeTransform, "Connection");
		mConnectionSlot[index].PipeConnection->AttachToComponent(PipeConMesh, FAttachmentTransformRules::KeepRelativeTransform, "Connection");

		PipeConMesh->RegisterComponent();
		
		mConnectionSlot[index].PipeConnection->RegisterComponent();
		mConnectionSlot[index].PipeConnection->SetInventory(inventory);

		//mConnectionSlot[index].PipeConnection = PipeCon;
		/*
		mConnectionSlot[index].ConnectionType = EFactoryConnectionConnector::FCC_CONVEYOR;

		if (index == 0 || index == 2)
			mConnectionSlot[index].ConnectionDirection = EFactoryConnectionDirection::FCD_INPUT;
		else
			mConnectionSlot[index].ConnectionDirection = EFactoryConnectionDirection::FCD_OUTPUT;
		*/


		if (!mConnectionSlot[index].PipeConnection->GetConnection()) {
			if (mConnectionSlot[index].ConnectedPipe) {
				if (mConnectionSlot[index].ConnectedPipe->IsConnected()) {
					UE_LOG(SlugPrinciplesLog, Warning, TEXT("Pipe still connected"));
					mConnectionSlot[index].ConnectedPipe->ClearConnection();
					if (mConnectionSlot[index].ConnectedPipe->IsConnected()) {
						UE_LOG(SlugPrinciplesLog, Warning, TEXT("Pipe still connected after clearing"));
					}
				}
				//PipeCon->FindCompatibleOverlappingConnection(PipeCon, PipeCon->GetRelativeLocation(), 100.0f);
				mConnectionSlot[index].PipeConnection->SetConnection(mConnectionSlot[index].ConnectedPipe);


				if (mConnectionSlot[index].PipeConnection->IsConnected()) {

					if (mConnectionSlot[index].ConnectedPipe->IsConnected()) {
						UE_LOG(SlugPrinciplesLog, Warning, TEXT("Pipe Connected"));
					}

				}
				mConnectionSlot[index].PipeConnection->SetConnectorClearance(100.0f);
			}
		}
		


	}
	break;

	}

}


void AFGSlugPrinciplesModularStorage::CleanConnection(int index) {

	/*
	SOCKETS

	InputIndex = 0  ==>	Input2
	InputIndex = 1  ==>	Output2
	InputIndex = 2  ==>	Input3
	InputIndex = 3  ==>	Output3

*/


	switch (mConnectionSlot[index].ConnectionType) {
	case EFactoryConnectionConnector::FCC_CONVEYOR:
	{

		mConnectionSlot[index].FactoryConnection->ClearConnection();
		mConnectionSlot[index].FactoryConnection->GetAttachParent()->DestroyComponent(true);



		/*

		TArray< UActorComponent*> component = this->GetComponentsByClass(UFGFactoryConnectionComponent::StaticClass());
		FString componentName = "";
		if (index == 0) {
			componentName = "Input2";
		}
		else if (index == 1) {
			componentName = "Output2";
		}
		else if (index == 2) {
			componentName = "Input3";
		}
		else if (index == 3) {
			componentName = "Output3";
		}
		for (int i = 0; i < component.Num(); i++) {
			if (component[i]->GetName() == componentName) {
				component[i]->DestroyComponent(true);
			}
		}
		*/
	}
	break;
	case EFactoryConnectionConnector::FCC_PIPE:
	{

		mConnectionSlot[index].PipeConnection->ClearConnection();
		mConnectionSlot[index].PipeConnection->GetAttachParent()->DestroyComponent(true);
		mConnectionSlot[index].ConnectedPipe = nullptr;
			   
		/*
		auto component = this->GetComponentsByClass(UFGPipeConnectionFactory::StaticClass());
		FString componentName = "";
		if (index == 0) {
			componentName = "PipeInput2";
		}
		else if (index == 1) {
			componentName = "PipeOutput2";
		}
		else if (index == 2) {
			componentName = "PipeInput3";
		}
		else if (index == 3) {
			componentName = "PipeOutput3";
		}
		for (int i = 0; i < component.Num(); i++) {
			if (component[i]->GetName() == componentName) {
				component[i]->DestroyComponent(true);
			}
		}
		*/
	}
	break;
	}
	


	switch (mConnectionSlot[index].ConnectionType) {

		case EFactoryConnectionConnector::FCC_CONVEYOR:
		{
			if (mConnectionSlot[index].FactoryConnection) {
				mConnectionSlot[index].FactoryConnection->ClearConnection();
				mConnectionSlot[index].FactoryConnection->DestroyComponent();
			}
		}
		break;

		case EFactoryConnectionConnector::FCC_PIPE:
		{
			if (mConnectionSlot[index].PipeConnection) {
				mConnectionSlot[index].PipeConnection->ClearConnection();
				if (mConnectionSlot[index].ConnectedPipe) {
					mConnectionSlot[index].ConnectedPipe = nullptr;
				}

				mConnectionSlot[index].PipeConnection->DestroyComponent();
			}
		}
		break;
	}
}


void AFGSlugPrinciplesModularStorage::SetupModularConnection(int InputIndex, FModularConnection NewConnection,UFGInventoryComponent* inventory) {

	/*
		SOCKETS

		InputIndex = 0  ==>	Input2
		InputIndex = 1  ==>	Output2
		InputIndex = 2  ==>	Input3
		InputIndex = 3  ==>	Output3
	
	*/

	CleanConnection(InputIndex);
	
	ModularStorageMesh = Cast<UStaticMeshComponent>(this->GetComponentByClass(UStaticMeshComponent::StaticClass()));

	switch (NewConnection.ConnectionType)
	{
		case EFactoryConnectionConnector::FCC_CONVEYOR:
		{
			//	IF CONVEYOR IS SELECTED
		
			UFGFactoryConnectionComponent* Con = NewObject<UFGFactoryConnectionComponent>(this);

			Con->SetVisibility(true, false);


			UStaticMeshComponent* ConMesh = NewObject<UStaticMeshComponent>(this);
			ConMesh->SetStaticMesh(MeshFactoryConnection);
			ConMesh->SetVisibility(true, false);
			const UStaticMeshSocket* socket;
			FVector socketLocation = FVector(0, 0, 0);
			FRotator socketRotation = FRotator(0, 0, 0);


			switch (NewConnection.ConnectionDirection)
			{
	
				//	IF CONVEYOR IS INPUT
		
				case EFactoryConnectionDirection::FCD_INPUT: 
				{

				
						Con->SetDirection(EFactoryConnectionDirection::FCD_INPUT);

						if(InputIndex == 0){
							socket = ModularStorageMesh->GetSocketByName("Input2");
							socketLocation = socket->RelativeLocation;
							socketRotation = socket->RelativeRotation;
							
						}
						else if (InputIndex == 2){
							socket = ModularStorageMesh->GetSocketByName("Input3");
							socketLocation = socket->RelativeLocation;
							socketRotation = socket->RelativeRotation;
							
						}
				}
				break;
		
	
				//	IF CONVEYOR IS OUTPUT
	
				case EFactoryConnectionDirection::FCD_OUTPUT:
				{
					Con->SetDirection(EFactoryConnectionDirection::FCD_OUTPUT);
					if (InputIndex == 1)
					{
						socket = ModularStorageMesh->GetSocketByName("Output2");
						socketLocation = socket->RelativeLocation;
						socketRotation = socket->RelativeRotation;
						
					}
					else if (InputIndex == 3)
					{
						socket = ModularStorageMesh->GetSocketByName("Output3");
						socketLocation = socket->RelativeLocation;
						socketRotation = socket->RelativeRotation;
						
					}
				}
				break;
			}

			ConMesh->AttachToComponent(ModularStorageMesh, FAttachmentTransformRules::KeepRelativeTransform);
			
			ConMesh->SetRelativeLocation(socketLocation);
			ConMesh->SetRelativeRotation(socketRotation);
			Con->AttachToComponent(ConMesh,FAttachmentTransformRules::KeepRelativeTransform, "Connection");


			ConMesh->RegisterComponent();
			
			
			Con->RegisterComponent();
			mConnectionSlot[InputIndex].FactoryConnection = Con;
			mConnectionSlot[InputIndex].ConnectionType = EFactoryConnectionConnector::FCC_CONVEYOR;

			if (InputIndex == 0 || InputIndex == 2)
				mConnectionSlot[InputIndex].ConnectionDirection = EFactoryConnectionDirection::FCD_INPUT;
			else
				mConnectionSlot[InputIndex].ConnectionDirection = EFactoryConnectionDirection::FCD_OUTPUT;

			Con->SetInventory(GetStorageInventory());

		}
		break;
	
	//	IF PIPE IS SELECTED
	
		case EFactoryConnectionConnector::FCC_PIPE:	
		{

			UFGPipeConnectionFactory* PipeCon = NewObject<UFGPipeConnectionFactory>(this);
		
			PipeCon->SetVisibility(true, false);

			UStaticMeshComponent* PipeConMesh = NewObject<UStaticMeshComponent>(this);
			PipeConMesh->SetStaticMesh(MeshPipeConnection);
			PipeConMesh->SetVisibility(true, false);
			const UStaticMeshSocket* Pipesocket;
			FVector PipesocketLocation = FVector(0,0,0);
			FRotator PipesocketRotation = FRotator(0, 0, 0);
			switch (NewConnection.ConnectionDirection)
			{
		
			//	IF PIPE IS INPUT
		
				case EFactoryConnectionDirection::FCD_INPUT:
					PipeCon->SetPipeConnectionType(EPipeConnectionType::PCT_CONSUMER);
				
					if (InputIndex == 0)
					{
						Pipesocket = ModularStorageMesh->GetSocketByName("PipeInput2");
						PipesocketLocation = Pipesocket->RelativeLocation;
						PipesocketRotation = Pipesocket->RelativeRotation;
					}
					else if (InputIndex == 2)
					{
						Pipesocket = ModularStorageMesh->GetSocketByName("PipeInput3");
						PipesocketLocation = Pipesocket->RelativeLocation;
						PipesocketRotation = Pipesocket->RelativeRotation;
					}
				break;
		
			//	IF PIPE IS OUTPUT
		
				case EFactoryConnectionDirection::FCD_OUTPUT:
					PipeCon->SetPipeConnectionType(EPipeConnectionType::PCT_PRODUCER);
				
					if (InputIndex == 1)
					{
						Pipesocket = ModularStorageMesh->GetSocketByName("PipeOutput2");
						PipesocketLocation = Pipesocket->RelativeLocation;
						PipesocketRotation = Pipesocket->RelativeRotation;
					}
					else if (InputIndex == 3)
					{
						Pipesocket = ModularStorageMesh->GetSocketByName("PipeOutput3");
						PipesocketLocation = Pipesocket->RelativeLocation;
						PipesocketRotation = Pipesocket->RelativeRotation;
					}
				break;
			}
		
			PipeConMesh->AttachToComponent(ModularStorageMesh, FAttachmentTransformRules::KeepRelativeTransform);
			
			PipeConMesh->SetRelativeLocation(PipesocketLocation);
			PipeConMesh->SetRelativeRotation(PipesocketRotation);

			PipeCon->AttachToComponent(PipeConMesh, FAttachmentTransformRules::KeepRelativeTransform, "Connection");

		
			PipeConMesh->RegisterComponent();
			PipeCon->RegisterComponent();
			PipeCon->SetInventory(inventory);
			
			
			
			mConnectionSlot[InputIndex].PipeConnection = PipeCon;
			mConnectionSlot[InputIndex].ConnectionType = EFactoryConnectionConnector::FCC_PIPE;
			
			if (InputIndex == 0 || InputIndex == 2)
				mConnectionSlot[InputIndex].ConnectionDirection = EFactoryConnectionDirection::FCD_INPUT;
			else
				mConnectionSlot[InputIndex].ConnectionDirection = EFactoryConnectionDirection::FCD_OUTPUT;
			mConnectionSlot[InputIndex].ConnectedPipe = nullptr;
			
		}
		break;

	}

}

void AFGSlugPrinciplesModularStorage::SetPipeConnection(int index) {

	mConnectionSlot[index].ConnectedPipe = mConnectionSlot[index].PipeConnection->GetConnection();

}

void AFGSlugPrinciplesModularStorage::ClearPipeConnection(int index) {
	if (mConnectionSlot[index].ConnectedPipe) {
		mConnectionSlot[index].ConnectedPipe->ClearConnection();
	}	
}



void AFGSlugPrinciplesModularStorage::InitializeFluidStorage() {
	

	mFluidStorage = Cast<UFGInventoryComponent>(this->GetComponentByClass(UFGInventoryComponent::StaticClass()));

	//mFluidStorage = NewObject< UFGInventoryComponent>(this);

	//mFluidStorage->SetDefaultSize(10);
	//mFluidStorage->AddArbitrarySlotSize(0, 500000);
	
	//mFluidStorage->RegisterComponent();
	
}


UFGInventoryComponent* AFGSlugPrinciplesModularStorage::GetFluidInventoryStorage() {
	return mFluidStorage;
}



bool AFGSlugPrinciplesModularStorage::GrabFluidInput(float dt,UFGPipeConnectionFactory* PipeInputConnection, UFGInventoryComponent* inventory, int index) {

	bool chk = false;
	
	
	
	FInventoryStack out_stack;


	

	if (PipeInputConnection->IsConnected()) {
		UFGPipeConnectionComponent* attachment = Cast<UFGPipeConnectionComponent>(PipeInputConnection->GetConnection());
		
		if (attachment)
		{
			
			if (attachment->HasFluidIntegrant() && attachment->GetFluidIntegrant()->GetFluidBox()) {
				TSubclassOf<UFGItemDescriptor> desc = attachment->GetFluidDescriptor();
				if (desc) {
					chk = PipeInputConnection->Factory_PullPipeInput(dt, out_stack, desc, 1000);

					if (chk) {
						if (inventory) {
							if (inventory->HasEnoughSpaceForStack(out_stack)){
								
							
									inventory-> AddStack(out_stack,true);
									
							
							}
							else {
								return false;
						}
						
						}
					}
				}
				
			}
		}
		
	}
	
	
	return chk;
}



bool AFGSlugPrinciplesModularStorage::PushFluidOutput(float dt, UFGPipeConnectionFactory* PipeInputConnection, UFGInventoryComponent* inventory, int index) {
	
	bool chk = false;

	if (PipeInputConnection->IsConnected()) 
	{
		UFGPipeConnectionComponent* attachment = Cast<UFGPipeConnectionComponent>(PipeInputConnection->GetConnection());
		


		if (attachment)
		{
			
			FInventoryStack out_stack;
			bool isEmpty = false;

			if (inventory) {
				isEmpty = inventory->IsIndexEmpty(0);
				
				//TSubclassOf<UFGItemDescriptor> desc = out_stack.Item.ItemClass;
				if (!isEmpty) {
					inventory->GetStackFromIndex(0, out_stack);
					int32 toRemove = PipeInputConnection->Factory_PushPipeOutput(dt, out_stack);
					
					inventory->RemoveFromIndex(0, toRemove);
					chk = true;
					
				}
			}
		}
	}
	
	
	

	return chk;
}




FText AFGSlugPrinciplesModularStorage::GetLookAtDecription_Implementation(class AFGCharacterPlayer* byCharacter, const FUseState& state) const {

	return FText::FromString("This is a test Useable Description");
}

FModularConnection AFGSlugPrinciplesModularStorage::CheckConnection(int InputIndex) {

	return mConnectionSlot[InputIndex];
}

TArray<FModularConnection> AFGSlugPrinciplesModularStorage::GetConnections() {

	return mConnectionSlot;
}