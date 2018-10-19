// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChooseNextWayPoint.generated.h"

/**
 * 
 */
UCLASS()
class SECTION05_FPSGROUNDS_API UChooseNextWayPoint : public UBTTaskNode
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
	struct FBlackboardKeySelector IndexKey;

	UPROPERTY(EditAnywhere, Category = Blackboard)
	struct FBlackboardKeySelector NextKey;

private:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& Owner, uint8* node) override;
	
	
};
