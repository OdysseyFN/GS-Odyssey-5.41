#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Ranged_Rocket

#include "Basic.hpp"

#include "B_Prj_Ranged_Rocket_classes.hpp"
#include "B_Prj_Ranged_Rocket_parameters.hpp"


namespace SDK
{

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ExecuteUbergraph_B_Prj_Ranged_Rocket
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Ranged_Rocket_C::ExecuteUbergraph_B_Prj_Ranged_Rocket(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "ExecuteUbergraph_B_Prj_Ranged_Rocket");

	Params::B_Prj_Ranged_Rocket_C_ExecuteUbergraph_B_Prj_Ranged_Rocket Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ParticleCollide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EmitterTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ParticleTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*                PhysMat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Ranged_Rocket_C::ParticleCollide(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "ParticleCollide");

	Params::B_Prj_Ranged_Rocket_C_ParticleCollide Parms{};

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = std::move(Location);
	Parms.Velocity = std::move(Velocity);
	Parms.Direction = std::move(Direction);
	Parms.Normal = std::move(Normal);
	Parms.BoneName = BoneName;
	Parms.PhysMat = PhysMat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Ranged_Rocket_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Ranged_Rocket_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "ReceiveTick");

	Params::B_Prj_Ranged_Rocket_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>               HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Ranged_Rocket_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "OnExploded");

	Params::B_Prj_Ranged_Rocket_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.FuseTimerMax
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_Rocket_C::FuseTimerMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "FuseTimerMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Ranged_Rocket_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Ranged_Rocket_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "OnStop");

	Params::B_Prj_Ranged_Rocket_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.OnBounce
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Ranged_Rocket_C::OnBounce(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "OnBounce");

	Params::B_Prj_Ranged_Rocket_C_OnBounce Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.PPFader__UpdateFunc
// (BlueprintEvent)

void AB_Prj_Ranged_Rocket_C::PPFader__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "PPFader__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.PPFader__FinishedFunc
// (BlueprintEvent)

void AB_Prj_Ranged_Rocket_C::PPFader__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "PPFader__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_Rocket_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Rocket_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
