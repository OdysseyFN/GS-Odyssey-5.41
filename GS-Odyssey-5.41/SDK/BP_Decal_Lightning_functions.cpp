#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Decal_Lightning

#include "Basic.hpp"

#include "BP_Decal_Lightning_classes.hpp"
#include "BP_Decal_Lightning_parameters.hpp"


namespace SDK
{

// Function BP_Decal_Lightning.BP_Decal_Lightning_C.ExecuteUbergraph_BP_Decal_Lightning
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Decal_Lightning_C::ExecuteUbergraph_BP_Decal_Lightning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_Lightning_C", "ExecuteUbergraph_BP_Decal_Lightning");

	Params::BP_Decal_Lightning_C_ExecuteUbergraph_BP_Decal_Lightning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Decal_Lightning.BP_Decal_Lightning_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Decal_Lightning_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_Lightning_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Decal_Lightning.BP_Decal_Lightning_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Decal_Lightning_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_Lightning_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
