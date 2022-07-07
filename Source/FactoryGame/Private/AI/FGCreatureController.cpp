// This file has been automatically generated by the Unreal Header Implementation tool

#include "AI/FGCreatureController.h"
#include "AI/FGAIPerceptionComponent.h"

#if !UE_BUILD_SHIPPING
void AFGCreatureController::DisplayDebugInformation(){ }
#endif 
AFGCreatureController::AFGCreatureController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mCurrentAction = nullptr;
	this->mNoiseAlertDistance = 1000.0;
	this->mCurrentTarget = nullptr;
	this->mRecentDamageMaxAge = 5.0;
	this->mStressLevel = 0.0;
	this->mRunningInterrupt.StateInterrupt = 0;
	this->mRunningInterrupt.ActionName = TEXT("ActionName");
	this->mRunningInterrupt.Action = nullptr;
	this->mControlledCreature = nullptr;
	this->mCurrentBehaviorState = ECreatureState::CS_Default;
	this->PerceptionComponent = CreateDefaultSubobject<UFGAIPerceptionComponent>(TEXT("PerceptionComponent"));
}
void AFGCreatureController::OnPossess(APawn* InPawn){ }
void AFGCreatureController::OnUnPossess(){ }
FPathFollowingRequestResult AFGCreatureController::MoveTo(const FAIMoveRequest& MoveRequest, FNavPathSharedPtr* OutPath){ return FPathFollowingRequestResult(); }
void AFGCreatureController::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGCreatureController::Tick(float DeltaSeconds){ }
void AFGCreatureController::SetEnabled(bool enabled){ }
bool AFGCreatureController::IsReadyToDespawn() const{ return bool(); }
void AFGCreatureController::CreatureDied(){ }
bool AFGCreatureController::CheckCurrentState(int32 stateMask) const{ return bool(); }
ECreatureState AFGCreatureController::GetDesiredCreatureState() const{ return ECreatureState(); }
bool AFGCreatureController::CanBeHostileTowards(const AActor* actor) const{ return bool(); }
bool AFGCreatureController::IsActorConsideredThreat_Implementation(const AActor* actor) const{ return bool(); }
bool AFGCreatureController::IsValidTarget(const AActor* actor) const{ return bool(); }
void AFGCreatureController::SetCurrentTarget(AActor* newTarget){ }
TArray< FVector > AFGCreatureController::GetKnownThreatLocations() const{ return TArray<FVector>(); }
TArray< AActor* > AFGCreatureController::GetAllTargets(ETargetVisibilityRequirement visibilityRequirement, float minimumAggro) const{ return TArray<AActor*>(); }
AActor* AFGCreatureController::GetHighestAggroTarget(ETargetVisibilityRequirement visibilityRequirement, float minimumAggro) const{ return nullptr; }
AActor* AFGCreatureController::GetClosestTarget(ETargetVisibilityRequirement visibilityRequirement, float minimumAggro) const{ return nullptr; }
AActor* AFGCreatureController::GetRandomWeightedTarget(ETargetVisibilityRequirement visibilityRequirement, float minimumAggro) const{ return nullptr; }
AActor* AFGCreatureController::GetRandomTarget(ETargetVisibilityRequirement visibilityRequirement, float minimumAggro) const{ return nullptr; }
AActor* AFGCreatureController::GetNearestAlertTarget() const{ return nullptr; }
bool AFGCreatureController::GetNearestAlertLocation(FVector& out_location) const{ return bool(); }
UNavigationPath* AFGCreatureController::GetCachedPathToTarget(AActor* target, float cacheLifetime){ return nullptr; }
float AFGCreatureController::GetAggroForTarget(const AActor* target) const{ return float(); }
float AFGCreatureController::GetVisibilityLevelForTarget(const AActor* target) const{ return float(); }
bool AFGCreatureController::IsTargetFullyVisible(const AActor* target) const{ return bool(); }
void AFGCreatureController::TriggerStateUpdate(bool bImmediate){ }
void AFGCreatureController::SetAggroForTarget(AActor* target, float newAggro, bool bImmediateStateUpdate){ }
void AFGCreatureController::ModifyAggroForTarget(AActor* target, float aggroModification, bool bImmediateStateUpdate){ }
void AFGCreatureController::NullifyAllAggro(bool bImmediateStateUpdate){ }
void AFGCreatureController::SetStressLevel(float newStress, bool bImmediateStateUpdate){ }
void AFGCreatureController::SetStressLevelToMax(bool bImmediateStateUpdate){ }
void AFGCreatureController::ModifyStressLevel(float stressModification, bool bImmediateStateUpdate){ }
bool AFGCreatureController::GetStimulusLocationToInvestigate(FVector& outLocation) const{ return bool(); }
bool AFGCreatureController::TryUnstuckCreature(){ return bool(); }
void AFGCreatureController::OnInterruptActionFinished_Implementation(bool success){ }
void AFGCreatureController::OnHostilityModeUpdated(ECreatureHostility hostility){ }
void AFGCreatureController::SetCurrentAction( UFGCreatureAction* action){ }
void AFGCreatureController::OnActionSelectionComplete( UFGAction* selectedAction){ }
void AFGCreatureController::OnCreatureMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode){ }
void AFGCreatureController::UpdateCreatureState(){ }
void AFGCreatureController::OnCreatureStateChanged_Implementation(ECreatureState previousState, ECreatureState newState){ }
void AFGCreatureController::UpdateFleeingState(float DeltaSeconds){ }
void AFGCreatureController::SubscribeToPawnDamage(){ }
void AFGCreatureController::UnSubscribeToPawnDamage(){ }
bool AFGCreatureController::SetCurrentCreatureState(ECreatureState NewState){ return bool(); }
bool AFGCreatureController::InitializeBlackboard(UBlackboardComponent& BlackboardComp, UBlackboardData& BlackboardAsset){ return bool(); }
float AFGCreatureController::GetStressAccumulationFromStimulus(AActor* inActor, const FAIStimulus& Stimulus) const{ return float(); }
float AFGCreatureController::GetStressAccumulationFromDamage(AActor* inActor, float damageAmount, const UFGDamageType* damageType) const{ return float(); }
bool AFGCreatureController::ShouldInvestigateStimulus(AActor* stimulusActor, const FAIStimulus& stimulus) const{ return bool(); }
bool AFGCreatureController::ShouldInvestigateNoise(AActor* stimulusActor, const FAIStimulus& stimulus) const{ return bool(); }
void AFGCreatureController::OnTargetPerceptionUpdated(AActor* inActor,  FAIStimulus Stimulus){ }
void AFGCreatureController::OnPawnTakeDamage(AActor* damagedActor, float damageAmount, const  UDamageType* damageType,  AController* instigatedBy, AActor* damageCauser){ }
void AFGCreatureController::OnTargetVisibilityChanged_Implementation(AActor* target, bool isVisible){ }
bool AFGCreatureController::CanBeAlertedByTarget_Implementation(const AActor* target) const{ return bool(); }
bool AFGCreatureController::IsAggroTargetVisible(const FFGCreatureAggroData& AggroData, ETargetVisibilityRequirement VisibilityRequirement) const{ return bool(); }
void AFGCreatureController::TryCreatureActionInterrupt(){ }
void AFGCreatureController::TickCreatureHealthRegen(){ }
FFGCreatureAggroData* AFGCreatureController::GetOrRegisterAggroTarget(AActor* target){ return nullptr; }
void AFGCreatureController::SetVisibilityPerceivedForTarget(AActor* target, bool isPerceived){ }
void AFGCreatureController::UpdateVisibilityData(float DeltaSeconds){ }
void AFGCreatureController::UpdateAggroData(float DeltaSeconds){ }
bool AFGCreatureController::FilterAggroTarget(const FFGCreatureAggroData& target) const{ return bool(); }
void AFGCreatureController::SetCreatureFleeState(bool shouldFlee){ }
void AFGCreatureController::OnStunDamageCooldownFinished(){ }
void AFGCreatureController::OnCreatureStunChanged(bool isStunned){ }
void AFGCreatureController::ClearOutdatedRecentDamageTaken(){ }
void AFGCreatureController::SenseActor(AActor* perceivedActor, const FAIStimulus& stimulus){ }
AActor* AFGCreatureController::GetActualPerceivedActor(AActor* inActor) const{ return nullptr; }
