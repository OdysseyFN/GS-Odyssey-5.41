#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gen_Interact_UnregisterFocus

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C
// 0x0008 (0x0030 - 0x0028)
class UGen_Interact_UnregisterFocus_C final : public UFortMissionEventParams
{
public:
	class AActor*                                 ActorToUnregister;                                 // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetParams(class AActor* Param_ActorToUnregister, class UGen_Interact_UnregisterFocus_C** ThisObject);
	void BreakParams(class AActor** ActorToUnregisterRegister);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Gen_Interact_UnregisterFocus_C">();
	}
	static class UGen_Interact_UnregisterFocus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGen_Interact_UnregisterFocus_C>();
	}
};

}

