#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhoneInfo

#include "Basic.hpp"

#include "PhoneInfo_classes.hpp"
#include "PhoneInfo_parameters.hpp"


namespace SDK
{

// Function PhoneInfo.PhoneInfo_C.ExecuteUbergraph_PhoneInfo
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhoneInfo_C::ExecuteUbergraph_PhoneInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhoneInfo_C", "ExecuteUbergraph_PhoneInfo");

	Params::PhoneInfo_C_ExecuteUbergraph_PhoneInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhoneInfo.PhoneInfo_C.On Low Perf Mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInLowPerformanceMode                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhoneInfo_C::On_Low_Perf_Mode(bool bInLowPerformanceMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhoneInfo_C", "On Low Perf Mode");

	Params::PhoneInfo_C_On_Low_Perf_Mode Parms{};

	Parms.bInLowPerformanceMode = bInLowPerformanceMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhoneInfo.PhoneInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPhoneInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhoneInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhoneInfo.PhoneInfo_C.BatteryTimerUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UPhoneInfo_C::BatteryTimerUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhoneInfo_C", "BatteryTimerUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhoneInfo.PhoneInfo_C.ClockTimerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPhoneInfo_C::ClockTimerUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhoneInfo_C", "ClockTimerUpdate");

	UObject::ProcessEvent(Func, nullptr);
}

}
