#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Placement_Pack_MissileBattery

#include "Basic.hpp"

#include "B_Placement_Pack_MissileBattery_classes.hpp"
#include "B_Placement_Pack_MissileBattery_parameters.hpp"


namespace SDK
{

// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ExecuteUbergraph_B_Placement_Pack_MissileBattery
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Placement_Pack_MissileBattery_C::ExecuteUbergraph_B_Placement_Pack_MissileBattery(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "ExecuteUbergraph_B_Placement_Pack_MissileBattery");

	Params::B_Placement_Pack_MissileBattery_C_ExecuteUbergraph_B_Placement_Pack_MissileBattery Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Placement_Pack_MissileBattery_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Placement_Pack_MissileBattery_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
