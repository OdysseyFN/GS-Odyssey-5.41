#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBroadcastScoreboard

#include "Basic.hpp"

#include "AthenaBroadcastScoreboard_classes.hpp"
#include "AthenaBroadcastScoreboard_parameters.hpp"


namespace SDK
{

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::ExecuteUbergraph_AthenaBroadcastScoreboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "ExecuteUbergraph_AthenaBroadcastScoreboard");

	Params::AthenaBroadcastScoreboard_C_ExecuteUbergraph_AthenaBroadcastScoreboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::ResetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "ResetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetSortMethod
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EScoreboardSortMethod                   InSortMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::SetSortMethod(EScoreboardSortMethod InSortMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SetSortMethod");

	Params::AthenaBroadcastScoreboard_C_SetSortMethod Parms{};

	Parms.InSortMethod = InSortMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::AthenaBroadcastScoreboard_C_BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::AthenaBroadcastScoreboard_C_BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::AthenaBroadcastScoreboard_C_BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::AthenaBroadcastScoreboard_C_BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::SetButtonStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SetButtonStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetArrowStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::SetArrowStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SetArrowStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByKills
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SortByKills(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SortByKills");

	Params::AthenaBroadcastScoreboard_C_SortByKills Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SortByTeam(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SortByTeam");

	Params::AthenaBroadcastScoreboard_C_SortByTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SortByName(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SortByName");

	Params::AthenaBroadcastScoreboard_C_SortByName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SortByState(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SortByState");

	Params::AthenaBroadcastScoreboard_C_SortByState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAthenaBroadcastScoreboard_C::UpdateListUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "UpdateListUI");

	Params::AthenaBroadcastScoreboard_C_UpdateListUI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D                        MapWidgetLocation                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAthenaBroadcastScoreboard_C::IsMapWidgetLocationVisible(const struct FVector2D& MapWidgetLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "IsMapWidgetLocationVisible");

	Params::AthenaBroadcastScoreboard_C_IsMapWidgetLocationVisible Parms{};

	Parms.MapWidgetLocation = std::move(MapWidgetLocation);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
