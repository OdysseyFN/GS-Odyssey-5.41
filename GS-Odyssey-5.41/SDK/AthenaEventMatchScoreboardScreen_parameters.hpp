#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEventMatchScoreboardScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.ExecuteUbergraph_AthenaEventMatchScoreboardScreen
// 0x0028 (0x0028 - 0x0000)
struct AthenaEventMatchScoreboardScreen_C_ExecuteUbergraph_AthenaEventMatchScoreboardScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D7B[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAthenaRemotePlayerViewData*>    K2Node_Event_InPlayerDataArray;                    // 0x0010(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                          K2Node_Event_InVisible1;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InVisible;                            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetEventScoreVisible
// 0x0001 (0x0001 - 0x0000)
struct AthenaEventMatchScoreboardScreen_C_SetEventScoreVisible final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetTeamNumbersVisible
// 0x0001 (0x0001 - 0x0000)
struct AthenaEventMatchScoreboardScreen_C_SetTeamNumbersVisible final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.UpdateListUI
// 0x0010 (0x0010 - 0x0000)
struct AthenaEventMatchScoreboardScreen_C_UpdateListUI final
{
public:
	TArray<class UAthenaRemotePlayerViewData*>    InPlayerDataArray;                                 // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.GetScoreboardListView
// 0x0008 (0x0008 - 0x0000)
struct AthenaEventMatchScoreboardScreen_C_GetScoreboardListView final
{
public:
	class UCommonListView*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
