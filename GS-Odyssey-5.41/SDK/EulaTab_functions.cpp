#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EulaTab

#include "Basic.hpp"

#include "EulaTab_classes.hpp"
#include "EulaTab_parameters.hpp"


namespace SDK
{

// Function EulaTab.EulaTab_C.ExecuteUbergraph_EulaTab
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEulaTab_C::ExecuteUbergraph_EulaTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EulaTab_C", "ExecuteUbergraph_EulaTab");

	Params::EulaTab_C_ExecuteUbergraph_EulaTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EulaTab.EulaTab_C.OnEulaDownloadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccessful                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             EULAText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UEulaTab_C::OnEulaDownloadComplete(bool bSuccessful, const class FText& EULAText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EulaTab_C", "OnEulaDownloadComplete");

	Params::EulaTab_C_OnEulaDownloadComplete Parms{};

	Parms.bSuccessful = bSuccessful;
	Parms.EULAText = std::move(EULAText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EulaTab.EulaTab_C.Activate Scroll Box
// (Public, BlueprintCallable, BlueprintEvent)

void UEulaTab_C::Activate_Scroll_Box()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EulaTab_C", "Activate Scroll Box");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EulaTab.EulaTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEulaTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EulaTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
