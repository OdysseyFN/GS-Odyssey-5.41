#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_FloorHoverboardSpeed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_TrapGeneric_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Trap_FloorHoverboardSpeed.GA_Trap_FloorHoverboardSpeed_C
// 0x0018 (0x0940 - 0x0928)
class UGA_Trap_FloorHoverboardSpeed_C final : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Trap_FloorHoverboardSpeed_C;     // 0x0928(0x0008)(Transient, DuplicateTransient)
	float                                         HoverboardBoostVelocityShift;                      // 0x0930(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C77[0x4];                                     // 0x0934(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATrap_Floor_Hoverboard_Speed_C*         HoverboardSpeedTrap;                               // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Trap_FloorHoverboardSpeed(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Trap_FloorHoverboardSpeed_C">();
	}
	static class UGA_Trap_FloorHoverboardSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Trap_FloorHoverboardSpeed_C>();
	}
};

}
