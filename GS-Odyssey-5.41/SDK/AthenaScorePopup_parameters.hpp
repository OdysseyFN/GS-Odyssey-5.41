#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaScorePopup

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaScorePopup.AthenaScorePopup_C.ExecuteUbergraph_AthenaScorePopup
// 0x00C0 (0x00C0 - 0x0000)
struct AthenaScorePopup_C_ExecuteUbergraph_AthenaScorePopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44B7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0058(0x0018)()
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44B8[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NewScoreValue;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_NewScoreTypeText;                     // 0x0078(0x0018)(ConstParm)
	int32                                         K2Node_Event_BigScoreThreshold;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44B9[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44BA[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44BB[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select_Default;                             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaScorePopup.AthenaScorePopup_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaScorePopup_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaScorePopup.AthenaScorePopup_C.OnNewScoreEarned
// 0x0028 (0x0028 - 0x0000)
struct AthenaScorePopup_C_OnNewScoreEarned final
{
public:
	int32                                         NewScoreValue;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44BC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   NewScoreTypeText;                                  // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         BigScoreThreshold;                                 // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaScorePopup.AthenaScorePopup_C.IncrementSoundPitch
// 0x0014 (0x0014 - 0x0000)
struct AthenaScorePopup_C_IncrementSoundPitch final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44BD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44BE[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
