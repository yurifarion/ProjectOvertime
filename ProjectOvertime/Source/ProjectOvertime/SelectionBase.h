// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Components/TextBlock.h"
#include "CommonButtonBase.h"
#include "CommonUserWidget.h"
#include "SelectionBase.generated.h"


/**
 * 
 */
USTRUCT(BlueprintType)
struct FSelectionOption
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Option")
	FText Label;
};
UCLASS()
class PROJECTOVERTIME_API USelectionBase : public UCommonUserWidget
{
	GENERATED_BODY()

public:
	USelectionBase();
	virtual void NativeConstruct() override;

	void Clear();
	void AddOption(const FSelectionOption& InOption);
	void SetCurrentSelection(int InIndex);

	UFUNCTION(BlueprintCallable)
	void SelectPrevious();

	UFUNCTION(BlueprintCallable)
	void SelectNext();

	DECLARE_DELEGATE_OneParam(FOnSelectionChange, int);
	FOnSelectionChange OnSelectionChange;

protected:
	UFUNCTION()
	UWidget* OnNavigation(EUINavigation InNavigation);

	void UpdateCurrentSelection();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FSelectionOption> Options;

	UPROPERTY(BlueprintType, meta = (BindWidget))
	TObjectPtr<UTextBlock> Label;

	int CurrentSelection;

};
