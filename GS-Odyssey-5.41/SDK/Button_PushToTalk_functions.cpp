#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Button_PushToTalk

#include "Basic.hpp"

#include "Button_PushToTalk_classes.hpp"
#include "Button_PushToTalk_parameters.hpp"


namespace SDK
{

// Function Button_PushToTalk.Button_PushToTalk_C.ExecuteUbergraph_Button_PushToTalk
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_PushToTalk_C::ExecuteUbergraph_Button_PushToTalk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_PushToTalk_C", "ExecuteUbergraph_Button_PushToTalk");

	Params::Button_PushToTalk_C_ExecuteUbergraph_Button_PushToTalk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Button_PushToTalk.Button_PushToTalk_C.On Can PTT
// (BlueprintCallable, BlueprintEvent)

void UButton_PushToTalk_C::On_Can_PTT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_PushToTalk_C", "On Can PTT");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Button_PushToTalk.Button_PushToTalk_C.OnHUDStateUpdate
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDState                    NewState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UButton_PushToTalk_C::OnHUDStateUpdate(const struct FFortHUDState& NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_PushToTalk_C", "OnHUDStateUpdate");

	Params::Button_PushToTalk_C_OnHUDStateUpdate Parms{};

	Parms.NewState = std::move(NewState);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Button_PushToTalk.Button_PushToTalk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_PushToTalk_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_PushToTalk_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Button_PushToTalk.Button_PushToTalk_C.OnClicked
// (Event, Public, BlueprintEvent)

void UButton_PushToTalk_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_PushToTalk_C", "OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Button_PushToTalk.Button_PushToTalk_C.Update Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPTTState                               PTT_State                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_PushToTalk_C::Update_Visibility(EPTTState PTT_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_PushToTalk_C", "Update Visibility");

	Params::Button_PushToTalk_C_Update_Visibility Parms{};

	Parms.PTT_State = PTT_State;

	UObject::ProcessEvent(Func, &Parms);
}

}
