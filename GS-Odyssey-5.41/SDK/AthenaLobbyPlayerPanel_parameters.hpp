#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobbyPlayerPanel

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_300B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.SetTeamMemberInfo
// 0x01F8 (0x01F8 - 0x0000)
struct AthenaLobbyPlayerPanel_C_SetTeamMemberInfo final
{
public:
	struct FFortTeamMemberInfo                    Param_TeamMemberInfo;                              // 0x0000(0x01F8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus
// 0x0010 (0x0010 - 0x0000)
struct AthenaLobbyPlayerPanel_C_Focus final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasValidActions_bHasValidActions;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.InitializeContextEvents
// 0x0020 (0x0020 - 0x0000)
struct AthenaLobbyPlayerPanel_C_InitializeContextEvents final
{
public:
	TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnTeamMemberStateChanged
// 0x0200 (0x0200 - 0x0000)
struct AthenaLobbyPlayerPanel_C_OnTeamMemberStateChanged final
{
public:
	struct FFortTeamMemberInfo                    Param_TeamMemberInfo;                              // 0x0000(0x01F8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_AreUniqueIDsIdentical_ReturnValue;        // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
