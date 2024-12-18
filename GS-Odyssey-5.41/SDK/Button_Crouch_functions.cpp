#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Button_Crouch

#include "Basic.hpp"

#include "Button_Crouch_classes.hpp"
#include "Button_Crouch_parameters.hpp"


namespace SDK
{

// Function Button_Crouch.Button_Crouch_C.ExecuteUbergraph_Button_Crouch
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_Crouch_C::ExecuteUbergraph_Button_Crouch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_Crouch_C", "ExecuteUbergraph_Button_Crouch");

	Params::Button_Crouch_C_ExecuteUbergraph_Button_Crouch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Button_Crouch.Button_Crouch_C.OnHUDStateUpdate
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDState                    NewState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UButton_Crouch_C::OnHUDStateUpdate(const struct FFortHUDState& NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_Crouch_C", "OnHUDStateUpdate");

	Params::Button_Crouch_C_OnHUDStateUpdate Parms{};

	Parms.NewState = std::move(NewState);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Button_Crouch.Button_Crouch_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InTouchEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UButton_Crouch_C::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Button_Crouch_C", "OnTouchStarted");

	Params::Button_Crouch_C_OnTouchStarted Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

