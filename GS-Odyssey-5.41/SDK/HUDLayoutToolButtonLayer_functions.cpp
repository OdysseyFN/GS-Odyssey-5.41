#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDLayoutToolButtonLayer

#include "Basic.hpp"

#include "HUDLayoutToolButtonLayer_classes.hpp"
#include "HUDLayoutToolButtonLayer_parameters.hpp"


namespace SDK
{

// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.ExecuteUbergraph_HUDLayoutToolButtonLayer
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolButtonLayer_C::ExecuteUbergraph_HUDLayoutToolButtonLayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "ExecuteUbergraph_HUDLayoutToolButtonLayer");

	Params::HUDLayoutToolButtonLayer_C_ExecuteUbergraph_HUDLayoutToolButtonLayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.End Peek
// (BlueprintCallable, BlueprintEvent)

void UHUDLayoutToolButtonLayer_C::End_Peek()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "End Peek");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Start Peek
// (BlueprintCallable, BlueprintEvent)

void UHUDLayoutToolButtonLayer_C::Start_Peek()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Start Peek");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.BndEvt__Extra Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UHUDLayoutToolButtonLayer_C::BndEvt__Extra_Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "BndEvt__Extra Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Opened Tool
// (BlueprintCallable, BlueprintEvent)

void UHUDLayoutToolButtonLayer_C::Opened_Tool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Opened Tool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.OnBuildMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bBuildMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolButtonLayer_C::OnBuildMode(bool bBuildMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "OnBuildMode");

	Params::HUDLayoutToolButtonLayer_C_OnBuildMode Parms{};

	Parms.bBuildMode = bBuildMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDLayoutToolButtonLayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
