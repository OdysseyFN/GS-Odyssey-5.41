#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEventMatchScoreboardScreen

#include "Basic.hpp"

#include "AthenaEventMatchScoreboardScreen_classes.hpp"
#include "AthenaEventMatchScoreboardScreen_parameters.hpp"


namespace SDK
{

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.ExecuteUbergraph_AthenaEventMatchScoreboardScreen
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardScreen_C::ExecuteUbergraph_AthenaEventMatchScoreboardScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "ExecuteUbergraph_AthenaEventMatchScoreboardScreen");

	Params::AthenaEventMatchScoreboardScreen_C_ExecuteUbergraph_AthenaEventMatchScoreboardScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetEventScoreVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardScreen_C::SetEventScoreVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "SetEventScoreVisible");

	Params::AthenaEventMatchScoreboardScreen_C_SetEventScoreVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetTeamNumbersVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardScreen_C::SetTeamNumbersVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "SetTeamNumbersVisible");

	Params::AthenaEventMatchScoreboardScreen_C_SetTeamNumbersVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.UpdateListUI
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UAthenaRemotePlayerViewData*>InPlayerDataArray                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaEventMatchScoreboardScreen_C::UpdateListUI(const TArray<class UAthenaRemotePlayerViewData*>& InPlayerDataArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "UpdateListUI");

	Params::AthenaEventMatchScoreboardScreen_C_UpdateListUI Parms{};

	Parms.InPlayerDataArray = std::move(InPlayerDataArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.GetScoreboardListView
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonListView*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonListView* UAthenaEventMatchScoreboardScreen_C::GetScoreboardListView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "GetScoreboardListView");

	Params::AthenaEventMatchScoreboardScreen_C_GetScoreboardListView Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

