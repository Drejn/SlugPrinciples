// ILikeBanas


#include "Buildings/FGSlugPrinciplesFluidPress.h"

UFGFactoryConnectionComponent* AFGSlugPrinciplesFluidPress::SetOutputConnection(UFGFactoryConnectionComponent* connection) {
	
	mOutputConnection = connection;

	return mOutputConnection;
	
}

UFGFactoryConnectionComponent* AFGSlugPrinciplesFluidPress::GetConnectedConveyor(){

	if (mOutputConnection->IsConnected()) {
		mConnectedConveyor = mOutputConnection->GetConnection();
	}
	return mConnectedConveyor;
}

void AFGSlugPrinciplesFluidPress::PushOutput(UFGItemDescriptor* itemPushed){

	UFGInventoryComponent* inventory =  mOutputConnection->GetInventory();
	float offset = 0.0f;
	//mConnectedConveyor->Factory_GrabOutput(inventory, offset, itemPushed);
	

}

void AFGSlugPrinciplesFluidPress::SetOutputInventory(UFGInventoryComponent* inventory) {


	mOutputConnection->SetInventory(inventory);
}

void AFGSlugPrinciplesFluidPress::SetOutputInventoryIndex(int32 index) {

	mOutputConnection->SetInventoryAccessIndex(index);

}