#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AthenaDBNORevive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive
// 0x0520 (0x0520 - 0x0000)
struct GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A40[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0010(0x0020)()
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0030(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0068(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable2;                             // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable3;                             // 0x00A8(0x0020)()
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A41[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x00D8(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0110(0x00A8)(ConstParm)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A42[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x01C8(0x0080)()
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0248(0x0040)(ContainsInstancedReference)
	struct FFortAbilityTargetSelection            CallFunc_Array_Get_Item;                           // 0x0288(0x0100)()
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A43[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x039C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x03A8(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x03C0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize10                  K2Node_MakeStruct_Vector_NetQuantize10;            // 0x03CC(0x000C)(NoDestructor)
	float                                         CallFunc_BreakVector_X1;                           // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantizeNormal              K2Node_MakeStruct_Vector_NetQuantizeNormal;        // 0x03E4(0x000C)(NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData3;                    // 0x03F0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag3;                // 0x0410(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x0418(0x00B8)(ContainsInstancedReference)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A44[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate3;             // 0x04D8(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData4;                    // 0x04E8(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag4;                // 0x0508(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate4;             // 0x0510(0x0010)(ZeroConstructor, NoDestructor)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_AthenaDBNORevive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
