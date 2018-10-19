// Fill out your copyright notice in the Description page of Project Settings.

#include "ChooseNextWayPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PatrolComponent.h"
#include "AIController.h"
#include "PatrolComponent.h"

EBTNodeResult::Type UChooseNextWayPoint::ExecuteTask(UBehaviorTreeComponent& Owner, uint8* node) {



	//GetPatrolPoints
	auto AIcontrol = Owner.GetAIOwner();			//Get our AI owner
	auto Pawn = AIcontrol->GetPawn();				//Get its pawn
	auto Patrol = Pawn->FindComponentByClass<UPatrolComponent>();	//cast pawn to guard
	if (!ensure(Patrol)) { return EBTNodeResult::Failed; }

	auto PatrolPoints = Patrol->GetPatrolPoints();		//get guard's patrol points

	//SetNextWaypoint
	auto BlackboardComponent = Owner.GetBlackboardComponent();								//Get blackboard
	auto Index = BlackboardComponent->GetValueAsInt(IndexKey.SelectedKeyName);				//Get the index we are going to
	BlackboardComponent->SetValueAsObject(NextKey.SelectedKeyName, PatrolPoints[Index]);	//set the next waypoint as the index we are at's object

	//CycleUpIndex
	int nextIndex = (Index + 1) % PatrolPoints.Num();										//calculate our next index
	BlackboardComponent->SetValueAsInt(IndexKey.SelectedKeyName, nextIndex);				//set the index we are going to

	//UE_LOG(LogTemp, Warning, TEXT("Index: %i"), Index);
	return EBTNodeResult::Succeeded;
}



