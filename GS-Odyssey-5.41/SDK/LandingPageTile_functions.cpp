#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LandingPageTile

#include "Basic.hpp"

#include "LandingPageTile_classes.hpp"
#include "LandingPageTile_parameters.hpp"


namespace SDK
{

// Function LandingPageTile.LandingPageTile_C.ExecuteUbergraph_LandingPageTile
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULandingPageTile_C::ExecuteUbergraph_LandingPageTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandingPageTile_C", "ExecuteUbergraph_LandingPageTile");

	Params::LandingPageTile_C_ExecuteUbergraph_LandingPageTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LandingPageTile.LandingPageTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULandingPageTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandingPageTile_C", "PreConstruct");

	Params::LandingPageTile_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LandingPageTile.LandingPageTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULandingPageTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandingPageTile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LandingPageTile.LandingPageTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULandingPageTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandingPageTile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LandingPageTile.LandingPageTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULandingPageTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandingPageTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LandingPageTile.LandingPageTile_C.UpdateTileAvailability
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Available                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULandingPageTile_C::UpdateTileAvailability(bool Available)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandingPageTile_C", "UpdateTileAvailability");

	Params::LandingPageTile_C_UpdateTileAvailability Parms{};

	Parms.Available = Available;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LandingPageTile.LandingPageTile_C.PlayIntroOrOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayIntro                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULandingPageTile_C::PlayIntroOrOutro(bool PlayIntro)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandingPageTile_C", "PlayIntroOrOutro");

	Params::LandingPageTile_C_PlayIntroOrOutro Parms{};

	Parms.PlayIntro = PlayIntro;

	UObject::ProcessEvent(Func, &Parms);
}

}
