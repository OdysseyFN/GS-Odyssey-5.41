#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericMessageReceived

#include "Basic.hpp"

#include "GenericMessageReceived_classes.hpp"
#include "GenericMessageReceived_parameters.hpp"


namespace SDK
{

// Function GenericMessageReceived.GenericMessageReceived_C.ExecuteUbergraph_GenericMessageReceived
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericMessageReceived_C::ExecuteUbergraph_GenericMessageReceived(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericMessageReceived_C", "ExecuteUbergraph_GenericMessageReceived");

	Params::GenericMessageReceived_C_ExecuteUbergraph_GenericMessageReceived Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericMessageReceived.GenericMessageReceived_C.BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericMessageReceived_C::BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericMessageReceived_C", "BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::GenericMessageReceived_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericMessageReceived.GenericMessageReceived_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGenericMessageReceived_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericMessageReceived_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
