#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZoneDayCompletion_ScoreBlock

#include "Basic.hpp"


namespace SDK::Params
{

// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.ExecuteUbergraph_ZoneDayCompletion_ScoreBlock
// 0x0010 (0x0010 - 0x0000)
struct ZoneDayCompletion_ScoreBlock_C_ExecuteUbergraph_ZoneDayCompletion_ScoreBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35F5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortNumericTextBlock*                  K2Node_ComponentBoundEvent_NumericTextBlock;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ZoneDayCompletion_ScoreBlock_C_BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature final
{
public:
	class UFortNumericTextBlock*                  NumericTextBlock;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.Increment
// 0x0020 (0x0020 - 0x0000)
struct ZoneDayCompletion_ScoreBlock_C_Increment final
{
public:
	int32                                         New_Score;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Interpolation_Length;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35F6[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue1;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C.SetScore
// 0x0008 (0x0008 - 0x0000)
struct ZoneDayCompletion_ScoreBlock_C_SetScore final
{
public:
	int32                                         New_Score;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
