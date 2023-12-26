// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/ShootingHUD.h"
#include "Blueprint/UserWidget.h"

AShootingHUD::AShootingHUD()
{
}

void AShootingHUD::BeginPlay()
{
	Super::BeginPlay();

	check(HudWidgetClass);

	HudWidget = CreateWidget<UUserWidget>(GetWorld(), HudWidgetClass);
	HudWidget->AddToViewport();
}
