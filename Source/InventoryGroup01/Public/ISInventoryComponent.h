// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ISInventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYGROUP01_API UISInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UISInventoryComponent();

	// Functions for inventory system

	// Add a new item to the inventory array
	UFUNCTION(BlueprintCallable)
	bool AddItemToInventory(FName NewItem);

	// Check if the inventory array contains an item
	UFUNCTION(BlueprintPure)
	bool QueryInventory();

	// Remove an item from the inventory array
	UFUNCTION(BlueprintCallable)
	bool RemoveItemFromInventory();

	UFUNCTION(BlueprintPure)
	TArray<FName> GetInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


private:
	TArray<FName> Inventory;
};
