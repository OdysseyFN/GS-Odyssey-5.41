#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostCounts

#include "Basic.hpp"

#include "XpBoostCounts_classes.hpp"
#include "XpBoostCounts_parameters.hpp"


namespace SDK
{

// Function XpBoostCounts.XpBoostCounts_C.ExecuteUbergraph_XpBoostCounts
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostCounts_C::ExecuteUbergraph_XpBoostCounts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostCounts_C", "ExecuteUbergraph_XpBoostCounts");

	Params::XpBoostCounts_C_ExecuteUbergraph_XpBoostCounts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostCounts.XpBoostCounts_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BoostAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostCounts_C::Xp_Boost_Changed(int32 BoostAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostCounts_C", "Xp Boost Changed");

	Params::XpBoostCounts_C_Xp_Boost_Changed Parms{};

	Parms.BoostAmount = BoostAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostCounts.XpBoostCounts_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo           NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UXpBoostCounts_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostCounts_C", "HandleAccountUpdate");

	Params::XpBoostCounts_C_HandleAccountUpdate Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostCounts.XpBoostCounts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBoostCounts_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostCounts_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpBoostCounts.XpBoostCounts_C.Update Available Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoostCounts_C::Update_Available_Boosts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostCounts_C", "Update Available Boosts");

	UObject::ProcessEvent(Func, nullptr);
}

}
