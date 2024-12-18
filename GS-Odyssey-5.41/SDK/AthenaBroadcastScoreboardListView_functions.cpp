#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastScoreboardListView

#include "Basic.hpp"

#include "AthenaBroadcastScoreboardListView_classes.hpp"
#include "AthenaBroadcastScoreboardListView_parameters.hpp"


namespace SDK
{

// Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ExecuteUbergraph_AthenaBroadcastScoreboardListView
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboardListView_C::ExecuteUbergraph_AthenaBroadcastScoreboardListView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboardListView_C", "ExecuteUbergraph_AthenaBroadcastScoreboardListView");

	Params::AthenaBroadcastScoreboardListView_C_ExecuteUbergraph_AthenaBroadcastScoreboardListView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboardListView_C::BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboardListView_C", "BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	Params::AthenaBroadcastScoreboardListView_C_BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaSpectatorScoreboardRowData*RowToSelect                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboardListView_C::ResetFocus(class UAthenaSpectatorScoreboardRowData* RowToSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboardListView_C", "ResetFocus");

	Params::AthenaBroadcastScoreboardListView_C_ResetFocus Parms{};

	Parms.RowToSelect = RowToSelect;

	UObject::ProcessEvent(Func, &Parms);
}

}

