#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardRowWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
// 0x0020 (0x0020 - 0x0000)
struct LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5409[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortLeaderboardRowProxyInstance*       K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct LeaderboardRowWidget_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
// 0x0050 (0x0050 - 0x0000)
struct LeaderboardRowWidget_C_Refresh final
{
public:
	class UFortLeaderboardRowProxyInstance*       RowObject;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0038(0x0018)()
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
// 0x0008 (0x0008 - 0x0000)
struct LeaderboardRowWidget_C_SetDataDirect final
{
public:
	class UFortLeaderboardRowProxyInstance*       NewData;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
