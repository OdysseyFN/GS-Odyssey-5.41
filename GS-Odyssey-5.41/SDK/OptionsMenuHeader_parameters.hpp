#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuHeader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function OptionsMenuHeader.OptionsMenuHeader_C.ExecuteUbergraph_OptionsMenuHeader
// 0x0148 (0x0148 - 0x0000)
struct OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CF2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF3[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent1;                          // 0x0018(0x0070)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0088(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C0(0x0070)(ConstParm)
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSettingInfo*                       K2Node_DynamicCast_AsFort_Setting_Info;            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuHeader_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct OptionsMenuHeader_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct OptionsMenuHeader_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct OptionsMenuHeader_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct OptionsMenuHeader_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.UpdateSize
// 0x0040 (0x0040 - 0x0000)
struct OptionsMenuHeader_C_UpdateSize final
{
public:
	struct FVector2D                              LargeSize;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SmallSize;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF5[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0020(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable1;                             // 0x0028(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBROnly_ReturnValue1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF6[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select1_Default;                            // 0x0038(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.HandlePawnSet
// 0x0028 (0x0028 - 0x0000)
struct OptionsMenuHeader_C_HandlePawnSet final
{
public:
	bool                                          bRCPawn;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF7[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortRemoteControlledPawnAthena*        K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionsMenuHeader.OptionsMenuHeader_C.GetListItemObject
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuHeader_C_GetListItemObject final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
