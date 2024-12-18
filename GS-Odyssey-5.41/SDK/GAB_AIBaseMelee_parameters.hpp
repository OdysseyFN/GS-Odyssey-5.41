#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AIBaseMelee

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.ExecuteUbergraph_GAB_AIBaseMelee
// 0x0108 (0x0108 - 0x0000)
struct GAB_AIBaseMelee_C_ExecuteUbergraph_GAB_AIBaseMelee final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0018(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0040(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0078(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x00B8(0x0020)()
	bool                                          CallFunc_TargetDataHasActor_ReturnValue;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37FF[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x00E0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3800[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_C_Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Completed_8CCC8A6B41B7B728038BDE887BD23BCC
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_C_Completed_8CCC8A6B41B7B728038BDE887BD23BCC final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Triggered_8CCC8A6B41B7B728038BDE887BD23BCC
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIBaseMelee_C_Triggered_8CCC8A6B41B7B728038BDE887BD23BCC final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}

