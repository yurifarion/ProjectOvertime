// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsWidget.h"
#include "Components/ComboBoxString.h"
#include "GameFramework/GameUserSettings.h"
#include "Kismet/KismetSystemLibrary.h"

namespace
{
	UENUM(BlueprintType)
		enum class EFramerate : uint8
	{
		FPS_30 UMETA(DisplayName = "30 FPS"),
		FPS_48 UMETA(DisplayName = "48 FPS"),
		FPS_60 UMETA(DisplayName = "60 FPS"),
		FPS_120 UMETA(DisplayName = "120 FPS"),
		FPS_Uncapped UMETA(DisplayName = "Uncapped"),
	};

	class FFramerateUtils
	{
	public:
		static int EnumToValue(const EFramerate& InFramerate)
		{

			switch (InFramerate)
			{
			case EFramerate::FPS_30: return 30;
			case EFramerate::FPS_48: return 48;
			case EFramerate::FPS_60: return 60;
			case EFramerate::FPS_120: return 120;
			default: return 0;
			}
		}

		static FString EnumToString(const EFramerate& InFramerate)
		{
			const auto Value = EnumToValue(InFramerate);
			return Value > 0
				? FString::Printf(TEXT("%d FPS"), Value)
				: FString::Printf(TEXT("Uncapped"));
		}
	};
	constexpr EFramerate FramerateOptions[] = {
		EFramerate::FPS_30,
		EFramerate::FPS_48,
		EFramerate::FPS_60,
		EFramerate::FPS_120,
		EFramerate::FPS_Uncapped,
	};

	typedef int32(UGameUserSettings::*GetFunc)() const;
	typedef void(UGameUserSettings::*SetFunc)(int);
	struct FSelectionElement
	{
		USelectionBase* Widget;
		GetFunc GetFunc;
		SetFunc SetFunc;
	};
}

void USettingsWidget::NativeConstruct()
{
	Super::Construct();
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Init Contruct"));
	GameUserSettings = UGameUserSettings::GetGameUserSettings();
	
	InitializeResolutionComboBox();
	InitializeVSync();
	InitializeFramerate();

	const FSelectionElement SelectionElements[] = {
		{ShadingQualitySelection, &UGameUserSettings::GetShadingQuality, &UGameUserSettings::SetShadingQuality},
		{GlobalIlluminationQualitySelection, &UGameUserSettings::GetGlobalIlluminationQuality, &UGameUserSettings::SetGlobalIlluminationQuality},
		{PostProcessingQualitySelection, &UGameUserSettings::GetPostProcessingQuality, &UGameUserSettings::SetPostProcessingQuality},
		{VisualEffectsQualitySelection, &UGameUserSettings::GetVisualEffectQuality, &UGameUserSettings::SetVisualEffectQuality},
		{ShadowQualitySelection, &UGameUserSettings::GetShadowQuality, &UGameUserSettings::SetShadowQuality},
	};

	for (const auto& [Widget, GetFunc, SetFunc] : SelectionElements)
	{
		const auto CurrentSelection = std::invoke(GetFunc, GameUserSettings);
		Widget->SetCurrentSelection(CurrentSelection);
		Widget->OnSelectionChange.BindLambda([this, SetFunc](int InSelection)
			{
				std::invoke(SetFunc, GameUserSettings, InSelection);
				GameUserSettings->ApplySettings(false);
			});
	}
}

UWidget* USettingsWidget::NativeGetDesiredFocusTarget() const
{
	return ResolutionComboBox;
}

void USettingsWidget::InitializeResolutionComboBox()
{
	Resolutions.Reset();
	UKismetSystemLibrary::GetSupportedFullscreenResolutions(Resolutions);
	//ResolutionComboBox->ClearOptions();

	auto debuug = FString::FromInt(Resolutions.Num());
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, debuug);

	// Set Resolution Options
	for (const auto& Resolution : Resolutions)
	{
		//1920x1080
		const auto ResolutionString = FString::Printf(TEXT("%dx%d"), Resolution.X, Resolution.Y);
		//ResolutionComboBox->AddOption(ResolutionString);
	}
	
	//find current resolution
	const auto CurrentResolution = GameUserSettings->GetScreenResolution();
	const auto SelectedIndex = Resolutions.IndexOfByPredicate([&CurrentResolution](const FIntPoint& InResolution)
		{
			return InResolution == CurrentResolution;
		});
	check(SelectedIndex >= 0);
	debuug = FString::FromInt(ResolutionComboBox->GetOptionCount());
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, debuug);
	ResolutionComboBox->SetSelectedIndex(SelectedIndex);

	//Listen to changes
	ResolutionComboBox->OnSelectionChanged.Clear();
	ResolutionComboBox->OnSelectionChanged.AddDynamic(this, &USettingsWidget::OnResolutionChanged);
}
void USettingsWidget::InitializeVSync()
{
	VSyncCheckBox->SetIsChecked(GameUserSettings->IsVSyncEnabled());
	VSyncCheckBox->OnCheckStateChanged.Clear();
	VSyncCheckBox->OnCheckStateChanged.AddDynamic(this, &USettingsWidget::OnVSyncChanged);
}

void USettingsWidget::InitializeFramerate()
{
	//FramerateSelection->Clear();

	int FramerateOptionIndex = 0;


	const auto CurrentFramerate = GameUserSettings->GetFrameRateLimit();
	for (const auto& Framerate : FramerateOptions)
	{
		/*FramerateSelection->AddOption({
			FText::FromString(FFramerateUtils::EnumToString(Framerate))
			});*/

		if (CurrentFramerate == FFramerateUtils::EnumToValue(Framerate))
		{
			FramerateSelection->SetCurrentSelection(FramerateOptionIndex);
		}

		FramerateOptionIndex++;
	}

	FramerateSelection->OnSelectionChange.BindLambda([this](const int InSelection)
		{
			GameUserSettings->SetFrameRateLimit(FFramerateUtils::EnumToValue(
				FramerateOptions[InSelection]
			));
			GameUserSettings->ApplySettings(false);
		});
}

void USettingsWidget::OnResolutionChanged(FString InSelectedItem, ESelectInfo::Type InSeletionType)
{
	const auto SelectedResolution = Resolutions[ResolutionComboBox->GetSelectedIndex()];
	GameUserSettings->SetScreenResolution(SelectedResolution);
	GameUserSettings->ApplySettings(false);
}

void USettingsWidget::OnVSyncChanged(bool InIsChecked)
{
	GameUserSettings->SetVSyncEnabled(InIsChecked);
	GameUserSettings->ApplySettings(false);
}
