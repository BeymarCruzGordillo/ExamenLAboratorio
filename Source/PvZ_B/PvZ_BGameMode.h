// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PvZ_BGameMode.generated.h"

UCLASS(MinimalAPI)
class APvZ_BGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

public:
	APvZ_BGameMode();
};



