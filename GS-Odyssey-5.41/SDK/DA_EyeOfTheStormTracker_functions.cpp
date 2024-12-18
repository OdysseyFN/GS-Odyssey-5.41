#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_EyeOfTheStormTracker

#include "Basic.hpp"

#include "DA_EyeOfTheStormTracker_classes.hpp"
#include "DA_EyeOfTheStormTracker_parameters.hpp"


namespace SDK
{

// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.ExecuteUbergraph_DA_EyeOfTheStormTracker
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_EyeOfTheStormTracker_C::ExecuteUbergraph_DA_EyeOfTheStormTracker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_EyeOfTheStormTracker_C", "ExecuteUbergraph_DA_EyeOfTheStormTracker");

	Params::DA_EyeOfTheStormTracker_C_ExecuteUbergraph_DA_EyeOfTheStormTracker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*                  FortDecoHelper                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_EyeOfTheStormTracker_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_EyeOfTheStormTracker_C", "BPPressTrigger");

	Params::DA_EyeOfTheStormTracker_C_BPPressTrigger Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADA_EyeOfTheStormTracker_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_EyeOfTheStormTracker_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.RaiseUsageError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            FailedReason                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ADA_EyeOfTheStormTracker_C::RaiseUsageError(const struct FGameplayTagContainer& FailedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_EyeOfTheStormTracker_C", "RaiseUsageError");

	Params::DA_EyeOfTheStormTracker_C_RaiseUsageError Parms{};

	Parms.FailedReason = std::move(FailedReason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_EyeOfTheStormTracker.DA_EyeOfTheStormTracker_C.IsOnGround
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bOnGround                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADA_EyeOfTheStormTracker_C::IsOnGround(bool* bOnGround)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_EyeOfTheStormTracker_C", "IsOnGround");

	Params::DA_EyeOfTheStormTracker_C_IsOnGround Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOnGround != nullptr)
		*bOnGround = Parms.bOnGround;
}

}

