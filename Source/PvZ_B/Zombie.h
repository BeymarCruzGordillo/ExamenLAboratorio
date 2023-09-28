// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.generated.h"

UCLASS()
class PVZ_B_API AZombie : public AActor
{
	GENERATED_BODY()
	
public:
	float DamageGenerates = 10.0f;
	float Health = 500.0f;
	float SpawnAfter = 0.0f;
	float MovementSpeed = 6.1f;
	bool bCanMove = false;
	//debuelve el daño que recibe el zombie
	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	//
	void MoveToTarget(FVector TargetLocation);
public:	
	// Sets default values for this actor's properties
	AZombie();
public:
	UPROPERTY(EditAnywhere)//macro se utiliza para declarar variables que se pueden editar desde el editor
	class UStaticMeshComponent* ZombieMeshComponent;//declaracion de variable de tipo UStaticMeshComponent para el mesh del zombie. ZombieMeshComponentque es un puntero a un objeto de tipo UStaticMeshComponenten 
	UFUNCTION()//macro para declarar funciones
		//controlador de eventos para responder a eventos de colision sin  causar un impacto fisico notorio
		void OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		//controlador de eventos para responder a eventos de colision con un impacto fisico notorio como el impacto de una bala
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// la funcion Tick se llama automaticamente en cada fotograma en UE4 reliaza actualizaciones continuas del actor	
	virtual void Tick(float DeltaTime) override;

};
