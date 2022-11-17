// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableConveyorBelt.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Hologram/FGConveyorBeltHologram.h"

AFGBuildableConveyorBelt::AFGBuildableConveyorBelt() : Super() {
	this->mMesh = nullptr;
	this->mCollisionProxyMesh = nullptr;
	this->mMeshLength = 0.0;
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	this->mSoundSplineComponent = nullptr;
	this->mSplineAudioEvent = nullptr;
	this->mHologramClass = AFGConveyorBeltHologram::StaticClass();
	this->mSplineComponent->SetupAttachment(RootComponent);
}
void AFGBuildableConveyorBelt::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableConveyorBelt, mSplineData);
}
void AFGBuildableConveyorBelt::BeginPlay(){ }
void AFGBuildableConveyorBelt::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
bool AFGBuildableConveyorBelt::IsComponentRelevantForNavigation(UActorComponent* component) const{ return bool(); }
void AFGBuildableConveyorBelt::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGBuildableConveyorBelt::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableConveyorBelt::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGBuildableConveyorBelt::IsUseable_Implementation() const{ return bool(); }
void AFGBuildableConveyorBelt::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableConveyorBelt::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGBuildableConveyorBelt::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGBuildableConveyorBelt::GainedSignificance_Implementation(){ }
void AFGBuildableConveyorBelt::LostSignificance_Implementation(){ }
void AFGBuildableConveyorBelt::SetupForSignificance(){ }
void AFGBuildableConveyorBelt::UpdateMeshLodLevels(int32 newLodLevel){ }
int32 AFGBuildableConveyorBelt::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildableConveyorBelt::OnBuildEffectFinished(){ }
float AFGBuildableConveyorBelt::FindOffsetClosestToLocation(const FVector& location) const{ return float(); }
void AFGBuildableConveyorBelt::GetLocationAndDirectionAtOffset(float offset, FVector& out_location, FVector& out_direction) const{ }
FVector AFGBuildableConveyorBelt::GetVelocityForBase( AActor* basedActor,  UPrimitiveComponent* baseComponent) const{ return FVector(); }
FVector AFGBuildableConveyorBelt::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const{ return FVector(); }
void AFGBuildableConveyorBelt::Upgrade_Implementation(AActor* newActor){ }
TArray< AFGBuildableConveyorBelt* > AFGBuildableConveyorBelt::Split(AFGBuildableConveyorBelt* conveyor, float offset, bool connectNewConveyors){ return TArray<AFGBuildableConveyorBelt*>(); }
AFGBuildableConveyorBelt* AFGBuildableConveyorBelt::Merge(TArray< AFGBuildableConveyorBelt* > conveyors){ return nullptr; }
AFGBuildableConveyorBelt* AFGBuildableConveyorBelt::Respline(AFGBuildableConveyorBelt* conveyor, const TArray< FSplinePointData >& newSplineData){ return nullptr; }
void AFGBuildableConveyorBelt::OnUseServerRepInput( AFGCharacterPlayer* byCharacter, uint32 itemRepID, float itemOffset){ }
void AFGBuildableConveyorBelt::SetShadowCasting(bool inStateBelt, bool inStateItems){ }
void AFGBuildableConveyorBelt::DestroyVisualItems(){ }
bool AFGBuildableConveyorBelt::VerifyDefaults(FString& out_message){ return bool(); }
void AFGBuildableConveyorBelt::TickItemTransforms(float dt){ }
void AFGBuildableConveyorBelt::TickRadioactivity(){ }
void AFGBuildableConveyorBelt::Factory_UpdateRadioactivity( AFGRadioactivitySubsystem* subsystem){ }
void AFGBuildableConveyorBelt::TickSingleItemTransform(const FConveyorBeltItem& item, TMap< FName, int32 >& instanceCounts,  AFGRadioactivitySubsystem* radioactiveSubsystem){ }
void AFGBuildableConveyorBelt::GetConveyorMaterials(TArray<UMaterialInterface*, TInlineAllocator<4>>& out_materials){ }
