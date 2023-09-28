// Copyright Epic Games, Inc. All Rights Reserved.

#include "PvZ_BGameMode.h"
#include "PvZ_BPawn.h"
#include "Zombie.h"

APvZ_BGameMode::APvZ_BGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APvZ_BPawn::StaticClass();
}

void APvZ_BGameMode::BeginPlay() {
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Los zombies estan en camino PREPARATE\n spawnwando actor"));//Muestra un mensaje rojo en la pantalla durante 10 segundos.
	FTransform SpawnLocation;//declaracion de variable de tipo FTransform para la ubicacion del spawn del zombie
	GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(),SpawnLocation);//llamado a la funcion SpawnActor para que aparezca el zombie en la ubicacion del spawn


}
