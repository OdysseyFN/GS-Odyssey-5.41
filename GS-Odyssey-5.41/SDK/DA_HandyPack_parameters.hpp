#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_HandyPack

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function DA_HandyPack.DA_HandyPack_C.ExecuteUbergraph_DA_HandyPack
// 0x0198 (0x0198 - 0x0000)
struct DA_HandyPack_C_ExecuteUbergraph_DA_HandyPack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D72[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                        K2Node_Event_FortDecoHelper1;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0018(0x00A8)()
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D73[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue1;               // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                        K2Node_Event_FortDecoHelper;                       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData1;              // 0x00E0(0x00A8)()
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn1;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DA_HandyPack.DA_HandyPack_C.BPPressTrigger
// 0x0008 (0x0008 - 0x0000)
struct DA_HandyPack_C_BPPressTrigger final
{
public:
	class AFortDecoHelper*                        FortDecoHelper;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DA_HandyPack.DA_HandyPack_C.BPReleaseTrigger
// 0x0008 (0x0008 - 0x0000)
struct DA_HandyPack_C_BPReleaseTrigger final
{
public:
	class AFortDecoHelper*                        FortDecoHelper;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
