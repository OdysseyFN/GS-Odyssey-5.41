#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityDecoTool_Athena_IntelPack

#include "Basic.hpp"

#include "AbilityDecoTool_Athena_IntelPack_classes.hpp"
#include "AbilityDecoTool_Athena_IntelPack_parameters.hpp"


namespace SDK
{

// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*                  FortDecoHelper                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_IntelPack_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "BPPressTrigger");

	Params::AbilityDecoTool_Athena_IntelPack_C_BPPressTrigger Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_IntelPack_C::ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack");

	Params::AbilityDecoTool_Athena_IntelPack_C_ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_Athena_IntelPack_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
