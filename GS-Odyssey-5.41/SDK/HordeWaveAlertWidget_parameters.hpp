#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeWaveAlertWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.ExecuteUbergraph_HordeWaveAlertWidget
// 0x0280 (0x0280 - 0x0000)
struct HordeWaveAlertWidget_C_ExecuteUbergraph_HordeWaveAlertWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_357B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FText& LevelText, int32 Level, class FText& WaveText, int32 WaveNum)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   K2Node_CustomEvent_LevelText;                      // 0x0018(0x0018)(ConstParm)
	int32                                         K2Node_CustomEvent_Level;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_357C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_WaveText;                       // 0x0038(0x0018)(ConstParm)
	int32                                         K2Node_CustomEvent_WaveNum;                        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_357D[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0058(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0070(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0088(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x00C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x0118(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0128(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0140(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0168(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_Wave;                           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_357E[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortItemInstanceQuantityPair>  K2Node_CustomEvent_Rewards;                        // 0x0180(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TDelegate<void(int32 Wave, TArray<struct FFortItemInstanceQuantityPair>& Rewards)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x01A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair>  K2Node_CustomEvent_Items;                          // 0x01E0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x01F0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x0200(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0218(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<struct FFortItemInstanceQuantityPair>& Items)> K2Node_CreateDelegate_OutputDelegate5;             // 0x0228(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class UFortGameplayModifierItemDefinition*> K2Node_CustomEvent_Modifiers;                      // 0x0238(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TDelegate<void(TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers)> K2Node_CreateDelegate_OutputDelegate6;             // 0x0248(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate7;             // 0x0258(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate8;             // 0x0268(0x0010)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveModifiersAdded
// 0x0010 (0x0010 - 0x0000)
struct HordeWaveAlertWidget_C_OnWaveModifiersAdded final
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnHordeTierInitialized_Event_0
// 0x0010 (0x0010 - 0x0000)
struct HordeWaveAlertWidget_C_OnHordeTierInitialized_Event_0 final
{
public:
	TArray<struct FFortItemInstanceQuantityPair>  Items;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveCompleted
// 0x0018 (0x0018 - 0x0000)
struct HordeWaveAlertWidget_C_OnWaveCompleted final
{
public:
	int32                                         Wave;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_357F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortItemInstanceQuantityPair>  Rewards;                                           // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveStarted
// 0x0040 (0x0040 - 0x0000)
struct HordeWaveAlertWidget_C_OnWaveStarted final
{
public:
	class FText                                   LevelText;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Level;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3580[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Param_WaveText;                                    // 0x0020(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         WaveNum;                                           // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
