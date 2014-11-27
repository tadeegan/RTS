// Fill out your copyright notice in the Description page of Project Settings.

#include "RTS.h"
#include "RTSPlayerController.h"


ARTSPlayerController::ARTSPlayerController(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
    UE_LOG(LogTemp, Warning, TEXT("construct"));
}


void ARTSPlayerController::SetupInputComponent() {
    Super::SetupInputComponent();
    UE_LOG(LogTemp, Warning, TEXT("time to bind"));
    InputComponent->BindAction(FName("print"), IE_Pressed, this, &ARTSPlayerController::PrintShit);
}

void ARTSPlayerController::PrintShit(){
    UE_LOG(LogTemp, Warning, TEXT("hello"));
}