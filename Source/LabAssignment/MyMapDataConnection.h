// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyMapDataConnection.generated.h"

/**
 * 
 */
UCLASS()
class LABASSIGNMENT_API UMyMapDataConnection : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "SunShine")
	int testFunction(); 

	UFUNCTION(BlueprintCallable, Category = "SunShine")
	int testFunctionWithPAram(int param); 
	
	
};
