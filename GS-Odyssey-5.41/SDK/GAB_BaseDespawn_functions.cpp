#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_BaseDespawn

#include "Basic.hpp"

#include "GAB_BaseDespawn_classes.hpp"
#include "GAB_BaseDespawn_parameters.hpp"


namespace SDK
{

// Function GAB_BaseDespawn.GAB_BaseDespawn_C.ExecuteUbergraph_GAB_BaseDespawn
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_BaseDespawn_C::ExecuteUbergraph_GAB_BaseDespawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_BaseDespawn_C", "ExecuteUbergraph_GAB_BaseDespawn");

	Params::GAB_BaseDespawn_C_ExecuteUbergraph_GAB_BaseDespawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_BaseDespawn.GAB_BaseDespawn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_BaseDespawn_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_BaseDespawn_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_BaseDespawn_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
