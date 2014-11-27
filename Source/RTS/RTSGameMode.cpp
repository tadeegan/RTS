// Fill out your copyright notice in the Description page of Project Settings.

#include "RTS.h"
#include "RTSGameMode.h"
#include "RTSPlayerController.h"

ARTSGameMode::ARTSGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
    UE_LOG(LogTemp, Warning, TEXT("got into game mode constructor"));
    PlayerControllerClass = ARTSPlayerController::StaticClass();
}


