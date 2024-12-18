#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_MissileBattery

#include "Basic.hpp"

#include "B_Prj_MissileBattery_classes.hpp"
#include "B_Prj_MissileBattery_parameters.hpp"


namespace SDK
{

// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ExecuteUbergraph_B_Prj_MissileBattery
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_MissileBattery_C::ExecuteUbergraph_B_Prj_MissileBattery(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "ExecuteUbergraph_B_Prj_MissileBattery");

	Params::B_Prj_MissileBattery_C_ExecuteUbergraph_B_Prj_MissileBattery Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_MissileBattery_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_MissileBattery_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "ReceiveTick");

	Params::B_Prj_MissileBattery_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnBounce
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_MissileBattery_C::OnBounce(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "OnBounce");

	Params::B_Prj_MissileBattery_C_OnBounce Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>               HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_MissileBattery_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "OnExploded");

	Params::B_Prj_MissileBattery_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.FuseTimerMax
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_MissileBattery_C::FuseTimerMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "FuseTimerMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_MissileBattery_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_MissileBattery_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "OnStop");

	Params::B_Prj_MissileBattery_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.PPFader__UpdateFunc
// (BlueprintEvent)

void AB_Prj_MissileBattery_C::PPFader__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "PPFader__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.PPFader__FinishedFunc
// (BlueprintEvent)

void AB_Prj_MissileBattery_C::PPFader__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "PPFader__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_MissileBattery_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_MissileBattery_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

