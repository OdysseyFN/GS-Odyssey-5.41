#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RejoinWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function RejoinWindow.RejoinWindow_C.ExecuteUbergraph_RejoinWindow
// 0x0048 (0x0048 - 0x0000)
struct RejoinWindow_C_ExecuteUbergraph_RejoinWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42A3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMcpBanInfo                            CallFunc_GetBanInfo_ReturnValue;                   // 0x0010(0x0030)(ConstParm)
	bool                                          CallFunc_IsUserCurrentlyBanned_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RejoinWindow.RejoinWindow_C.ShowRetryScreen
// 0x0050 (0x0050 - 0x0000)
struct RejoinWindow_C_ShowRetryScreen final
{
public:
	class FText                                   Failure;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         TimeoutSeconds;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowRetry;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalAllowRetry;                                   // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42A4[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0020(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42A5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle1;             // 0x0038(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue1;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RejoinWindow.RejoinWindow_C.ShowInitalScreen
// 0x0038 (0x0038 - 0x0000)
struct RejoinWindow_C_ShowInitalScreen final
{
public:
	float                                         TimeoutSeconds;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalTimeoutSeconds;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0008(0x0010)(NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle1;             // 0x0018(0x0010)(NoDestructor)
	TArray<struct FDataTableRowHandle>            K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
};

// Function RejoinWindow.RejoinWindow_C.InitializeRejoinWindow
// 0x0068 (0x0068 - 0x0000)
struct RejoinWindow_C_InitializeRejoinWindow final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42A6[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)(ConstParm)
	class UIconTextButton_C*                      CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CallFunc_Array_Get_Item;                           // 0x0050(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RejoinWindow.RejoinWindow_C.CenterFirstButton
// 0x0018 (0x0018 - 0x0000)
struct RejoinWindow_C_CenterFirstButton final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42A7[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RejoinWindow.RejoinWindow_C.OnButtonClicked
// 0x0020 (0x0020 - 0x0000)
struct RejoinWindow_C_OnButtonClicked final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CallFunc_GetInputAction_InputActionRow;            // 0x0008(0x0010)(NoDestructor)
	bool                                          CallFunc_GetInputAction_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
