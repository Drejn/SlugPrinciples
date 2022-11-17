// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameUserSettings.h"

UFGGameUserSettings* UFGGameUserSettings::GetFGGameUserSettings(){ return nullptr; }
void UFGGameUserSettings::LoadSettings(bool bForceReload){ }
void UFGGameUserSettings::ApplyNonResolutionSettings(){ }
void UFGGameUserSettings::ApplyResolutionSettings(bool bCheckForCommandLineOverrides){ }
void UFGGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides){ }
void UFGGameUserSettings::SaveSettings(){ }
float UFGGameUserSettings::GetEffectiveFrameRateLimit(){ return float(); }
void UFGGameUserSettings::ConfirmVideoMode(){ }
void UFGGameUserSettings::RunHardwareBenchmark(int32 WorkScale , float CPUMultiplier , float GPUMultiplier){ }
FString UFGGameUserSettings::RunAndApplyHardwareBenchmark(int32 WorkScale , float CPUMultiplier , float GPUMultiplier){ return FString(); }
void UFGGameUserSettings::TryAutoDetectSettings(){ }
void UFGGameUserSettings::ResetOption(FString cvar){ }
void UFGGameUserSettings::ResetOptionCategory(EOptionCategory optionCategory){ }
void UFGGameUserSettings::RevertUnsavedChanges(){ }
void UFGGameUserSettings::SetupBindings(){ }
bool UFGGameUserSettings::IsStableVideoModeDirty(){ return bool(); }
void UFGGameUserSettings::ResetVideoModeToLatestStable(){ }
void UFGGameUserSettings::ConfirmStableVideoMode(){ }
void UFGGameUserSettings::SanitizeResolution(){ }
void UFGGameUserSettings::ToggleFullscreenMode(){ }
void UFGGameUserSettings::OnVideoQualityUpdated(){ }
void UFGGameUserSettings::UpdateVideoQualityCvars(const FString& cvar){ }
void UFGGameUserSettings::HandleCmdLineVideoQuality(){ }
void UFGGameUserSettings::SetGroupQualityLevel(const TCHAR* InGroupName, int32 InQualityLevel, int32 InNumLevels){ }
UFGOptionInterface* UFGGameUserSettings::GetOptionInterface(){ return nullptr; }
void UFGGameUserSettings::UpdateAudioOption(FString updatedCvar){ }
void UFGGameUserSettings::OnArachnophobiaModeUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnFoliageQualityUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnMotionBlurEnabledUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnPoolLightQualityUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnCloudQualityUpdated(FString updatedCVar){ }
void UFGGameUserSettings::OnNetworkQualityUpdated(FString updatedCvar){ }
int32 UFGGameUserSettings::GetDefaultPostProcessQualitySetting(FString settingName){ return int32(); }
void UFGGameUserSettings::RefreshNetworkQualityValues(){ }
void UFGGameUserSettings::AddCustomActionMapping(FFGKeyMapping newMapping){ }
void UFGGameUserSettings::RemoveAllCustomActionMappings(){ }
FVariant UFGGameUserSettings::GetOptionValue(const FString& strId) const{ return FVariant(); }
void UFGGameUserSettings::ForceSetOptionValue(const FString& strId, const FVariant& variant, const UObject* instigator){ }
void UFGGameUserSettings::SubscribeToOptionUpdate(const FString& strId, const FOnOptionUpdated& onOptionUpdatedDelegate){ }
void UFGGameUserSettings::UnsubscribeToOptionUpdate(const FString& strId, const FOnOptionUpdated& onOptionUpdatedDelegate){ }
void UFGGameUserSettings::ApplyChanges(){ }
void UFGGameUserSettings::ResetAllSettingsToDefault(){ }
bool UFGGameUserSettings::GetBoolOptionValue(const FString& cvar) const{ return bool(); }
bool UFGGameUserSettings::GetBoolUIDisplayValue(const FString& cvar) const{ return bool(); }
void UFGGameUserSettings::SetBoolOptionValue(const FString& cvar, bool value){ }
int32 UFGGameUserSettings::GetIntOptionValue(const FString& cvar) const{ return int32(); }
int32 UFGGameUserSettings::GetIntUIDisplayValue(const FString& cvar) const{ return int32(); }
void UFGGameUserSettings::SetIntOptionValue(const FString& cvar, int32 newValue){ }
float UFGGameUserSettings::GetFloatOptionValue(const FString& cvar) const{ return float(); }
float UFGGameUserSettings::GetFloatUIDisplayValue(const FString& cvar) const{ return float(); }
void UFGGameUserSettings::SetFloatOptionValue(const FString& cvar, float newValue){ }
bool UFGGameUserSettings::HasAnyUnsavedOptionValueChanges() const{ return bool(); }
bool UFGGameUserSettings::HasPendingApplyOptionValue(const FString& cvar) const{ return bool(); }
bool UFGGameUserSettings::HasPendingAnyRestartOptionValue(const FString& cvar) const{ return bool(); }
bool UFGGameUserSettings::GetRequireSessionRestart() const{ return bool(); }
bool UFGGameUserSettings::GetRequireGameRestart() const{ return bool(); }
void UFGGameUserSettings::SubscribeToDynamicOptionUpdate(const FString& cvar, const FOptionUpdated& optionUpdatedDelegate){ }
void UFGGameUserSettings::UnsubscribeToDynamicOptionUpdate(const FString& cvar, const FOptionUpdated& optionUpdatedDelegate){ }
void UFGGameUserSettings::UnsubscribeToAllDynamicOptionUpdate(UObject* boundObject){ }
TArray<class UFGDynamicOptionsRow*> UFGGameUserSettings::GetOptionWidgetsInCategory(UUserWidget* owningWidget, EOptionCategory category){ return TArray<class UFGDynamicOptionsRow*>(); }
void UFGGameUserSettings::SetupDefaultOptionsValues(){ }
void UFGGameUserSettings::OnExitToMainMenu(){ }
void UFGGameUserSettings::OnExitToDesktop(){ }
TMap<FString, FText> UFGGameUserSettings::GetLanguageData(){ return TMap<FString,FText>(); }
void UFGGameUserSettings::SetLanguageData(TMap<FString, FText> languageData){ }
void UFGGameUserSettings::SetPrimaryLanguage(FString language){ }
void UFGGameUserSettings::SetSecondaryLanguage(FString language){ }
void UFGGameUserSettings::QuickSwitchLanguage(){ }
void UFGGameUserSettings::ResetLanguageToPrimary(){ }
EGraphicsAPI UFGGameUserSettings::GetCurrentActiveGraphicsAPI() const{ return EGraphicsAPI(); }
EGraphicsAPI UFGGameUserSettings::GetCurrentConfigGraphicsAPI() const{ return EGraphicsAPI(); }
bool UFGGameUserSettings::GetForcedGraphicsAPI(EGraphicsAPI& out_forcedGraphicsAPI) const{ return bool(); }
void UFGGameUserSettings::SetCurrentConfigGraphicsAPI(EGraphicsAPI newGraphicsAPI){ }
void UFGGameUserSettings::SetHologramColour(FVector inColour){ }
void UFGGameUserSettings::SetDismantleHologramColour(FVector inColour){ }
void UFGGameUserSettings::SetInvalidPlacementHologramColour(FVector inColour){ }
void UFGGameUserSettings::SetSoftClearanceHologramColour(FVector inColour){ }
void UFGGameUserSettings::ApplyHologramColoursToCollectionParameterInstance(UObject* World){ }
UMaterialParameterCollection* UFGGameUserSettings::GetHologramMaterialCollectionAsset() const{ return nullptr; }
void UFGGameUserSettings::DumpDynamicOptionsSettings(){ }
void UFGGameUserSettings::GetOptionsDebugData(TArray<FString>& out_debugData){ }
void UFGGameUserSettings::SetCvarValue(FString cvar, int32 value){ }
void UFGGameUserSettings::SetCvarValue(FString cvar, float value){ }
void UFGGameUserSettings::InitDefaultIntOptionValue(FString cvar, int32 value, FText tooltip, EOptionApplyType optionApplyType){ }
void UFGGameUserSettings::InitDefaultFloatOptionValue(FString cvar, float value, FText tooltip, EOptionApplyType optionApplyType){ }
void UFGGameUserSettings::SetupAudioOption( FOptionRowData data){ }
void UFGGameUserSettings::RegisterConsoleVariable(FString cvar, int32 value, FString tooltip){ }
void UFGGameUserSettings::RegisterConsoleVariable(FString cvar, float value, FString tooltip){ }
void UFGGameUserSettings::ApplyPendingChanges(){ }
void UFGGameUserSettings::CheckForCvarOverrides(){ }
void UFGGameUserSettings::CheckForVideoCvarOverrides(){ }
void UFGGameUserSettings::CVarSinkHandler(){ }
void UFGGameUserSettings::UpdateCvars(){ }
void UFGGameUserSettings::HandleFGGameUserSettingsVersionChanged(){ }
bool UFGGameUserSettings::ValidateCVar(const FString& cvar){ return bool(); }
void UFGGameUserSettings::BroadcastDynamicOptionUpdate(FString cvar){ }
void UFGGameUserSettings::CacheVideoQualitySettings(){ }
FAutoConsoleVariableSink UFGGameUserSettings::mCVarSink = FConsoleCommandDelegate::CreateStatic(&UFGGameUserSettings::CVarSinkHandler);
