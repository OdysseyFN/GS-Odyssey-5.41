#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickbarSecondary

#include "Basic.hpp"

#include "AthenaQuickbarSecondary_classes.hpp"
#include "AthenaQuickbarSecondary_parameters.hpp"


namespace SDK
{

// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.ExecuteUbergraph_AthenaQuickbarSecondary
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickbarSecondary_C::ExecuteUbergraph_AthenaQuickbarSecondary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "ExecuteUbergraph_AthenaQuickbarSecondary");

	Params::AthenaQuickbarSecondary_C_ExecuteUbergraph_AthenaQuickbarSecondary Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.AnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::AnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "AnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickBarSlotFocusChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickbarSecondary_C::OnQuickBarSlotFocusChanged_Bind(EFortQuickBars QuickbarIndex, int32 Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "OnQuickBarSlotFocusChanged_Bind");

	Params::AthenaQuickbarSecondary_C_OnQuickBarSlotFocusChanged_Bind Parms{};

	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarSecondary_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleInputMethodChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::HandleInputMethodChanged_Bind(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleInputMethodChanged_Bind");

	Params::AthenaQuickbarSecondary_C_HandleInputMethodChanged_Bind Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Show Secondary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::Show_Secondary_Quickbar_Rail(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Show Secondary Quickbar Rail");

	Params::AthenaQuickbarSecondary_C_Show_Secondary_Quickbar_Rail Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeyBindsChange
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::HandleKeyBindsChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleKeyBindsChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleShowHideRail
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::HandleShowHideRail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleShowHideRail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.UpdateQuickBarCaching
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Desire_Caching                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarSecondary_C::UpdateQuickBarCaching(bool Desire_Caching)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "UpdateQuickBarCaching");

	Params::AthenaQuickbarSecondary_C_UpdateQuickBarCaching Parms{};

	Parms.Desire_Caching = Desire_Caching;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarSecondary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.OnQuickbarContentsChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           ChangedSlots                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaQuickbarSecondary_C::OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex, const TArray<int32>& ChangedSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "OnQuickbarContentsChanged");

	Params::AthenaQuickbarSecondary_C_OnQuickbarContentsChanged Parms{};

	Parms.QuickbarIndex = QuickbarIndex;
	Parms.ChangedSlots = std::move(ChangedSlots);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::HandleKeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "HandleKeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::Minimize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Minimize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarSecondary.AthenaQuickbarSecondary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSecondary_C::Maximize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarSecondary_C", "Maximize");

	UObject::ProcessEvent(Func, nullptr);
}

}
