// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "RTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RTS_API ARTSPlayerController : public APlayerController
{
	GENERATED_UCLASS_BODY()
    
    void SetupInputComponent() override;
    void PrintShit();
};

