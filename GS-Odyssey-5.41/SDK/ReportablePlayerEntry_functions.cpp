#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportablePlayerEntry

#include "Basic.hpp"

#include "ReportablePlayerEntry_classes.hpp"
#include "ReportablePlayerEntry_parameters.hpp"


namespace SDK
{

// Function ReportablePlayerEntry.ReportablePlayerEntry_C.ExecuteUbergraph_ReportablePlayerEntry
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportablePlayerEntry_C::ExecuteUbergraph_ReportablePlayerEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportablePlayerEntry_C", "ExecuteUbergraph_ReportablePlayerEntry");

	Params::ReportablePlayerEntry_C_ExecuteUbergraph_ReportablePlayerEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportablePlayerEntry.ReportablePlayerEntry_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAnimateOnSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportablePlayerEntry_C::SetSelectionState(bool bIsSelected, bool bAnimateOnSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportablePlayerEntry_C", "SetSelectionState");

	Params::ReportablePlayerEntry_C_SetSelectionState Parms{};

	Parms.bIsSelected = bIsSelected;
	Parms.bAnimateOnSelect = bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);
}

}
