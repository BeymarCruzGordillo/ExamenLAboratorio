// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"

// Sets default values
AZombie::AZombie()
{
	PrimaryActorTick.bCanEverTick = true;//se establece que el actor puede ser actualizado en cada fotograma

	//la variable ZombieMeshComponent que es de tipo UStaticMeshComponent se inicializa con un objeto de tipo UStaticMeshComponent.. Se usa para agegar componentes a un actor en el editor
	ZombieMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	
	RootComponent = ZombieMeshComponent;//se establece como el componente raiz o principal del actor zombie
	ZombieMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);//se establece o habilita que el componente tenga solo colision o colision fisica


	//se declara una variable llamada ZombieMesh que será de tipo ConstructorHelpers::FObjectFinder<UStaticMesh> esta variable se utilizará para buscar y almacenar un objeto de tipo UStaticMesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));

	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);//se establece el mesh del componente

	ZombieMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);//se establece el perfil de colision del componente
	ZombieMeshComponent->SetSimulatePhysics(true);//se establece que el componente simule fisica
	ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombie::OnOverlapBeginFunction);//configura el controlador de eventos para responder a eventos de colision sin  causar un impacto fisico notorio

}

void AZombie::OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	if ((OverlappedComponent != nullptr) && (OtherActor != this))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Plant"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
	}
}

void AZombie::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));
		if (OtherActor->ActorHasTag("Plant"))
		{
			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
		}
	}
}

void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//bCANMove  es una variable booleana que indica si el actor "Zombie" puede moverse. Si esta variable es true
	if (bCanMove && !this->IsHidden())
	{

		MoveToTarget(FVector(-800.0f, -600.0f, 160.0f));
	}
}

float AZombie::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{

	Health -= Damage;
	return Health;
}

void AZombie::MoveToTarget(FVector TargetLocation)
{
	FVector Direction = TargetLocation - FVector(-800.0f, 400.0f, 160.0f);
	float DistanceToTarget = FVector::Dist(TargetLocation, FVector(-800.0f, 400.0f, 160.0f));

	// Calcula el desplazamiento en este frame
	float DeltaMove = MovementSpeed * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanceToTarget)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(TargetLocation);
	}
	else
	{
		// Mueve el objeto en la direcci�n calculada
		this->AddActorWorldOffset(Direction * DeltaMove);
	}

}
