#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FullPartyBarAthena

#include "Basic.hpp"

#include "FullPartyBarAthena_classes.hpp"
#include "FullPartyBarAthena_parameters.hpp"


namespace SDK
{

// Function FullPartyBarAthena.FullPartyBarAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyBarAthena_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyBarAthena_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::ExecuteUbergraph_FullPartyBarAthena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyBarAthena_C", "ExecuteUbergraph_FullPartyBarAthena");

	Params::FullPartyBarAthena_C_ExecuteUbergraph_FullPartyBarAthena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyBarAthena_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyBarAthena_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}

}
