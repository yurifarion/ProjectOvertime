// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Components/CheckBox.h"
#include "SelectionBase.h"
#include "SettingsWidget.generated.h"

class UComboBoxString;
/**
 * 
 */
UCLASS()
class PROJECTOVERTIME_API USettingsWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;

protected:
	void InitializeResolutionComboBox();
	void InitializeVSync();
	void InitializeFramerate();

	UFUNCTION()
	void OnResolutionChanged(FString InSelectedItem, ESelectInfo::Type InSelectionType);

	UFUNCTION()
	void OnVSyncChanged(bool InIsChecked);

	UPROPERTY()
	TObjectPtr<UGameUserSettings> GameUserSettings;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		TObjectPtr<UComboBoxString> ResolutionComboBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UCheckBox> VSyncCheckBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<USelectionBase> FramerateSelection;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<USelectionBase> ShadingQualitySelection;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<USelectionBase> GlobalIlluminationQualitySelection;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<USelectionBase> PostProcessingQualitySelection;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<USelectionBase> VisualEffectsQualitySelection;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<USelectionBase> ShadowQualitySelection;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<USelectionBase> LanguageSelection;

	UPROPERTY()
	TArray<FIntPoint> Resolutions;
};
enum class EGameLanguage : uint8
{
	English UMETA(DisplayName = "English"),
	Japanese UMETA(DisplayName = "Japanese"),
	Portuguese UMETA(DisplayName = "Portuguese"),
};
static FString GetCultureCodeFromLanguage(EGameLanguage Language)
{
	switch (Language)
	{
	case EGameLanguage::English:
		return TEXT("en");
	case EGameLanguage::Japanese:
		return TEXT("ja");
	case EGameLanguage::Portuguese:
		return TEXT("pt-BR");
	default:
		return TEXT("en");
	}
}