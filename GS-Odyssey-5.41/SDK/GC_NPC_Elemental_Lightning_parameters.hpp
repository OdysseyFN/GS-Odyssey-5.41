#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_NPC_Elemental_Lightning

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.OnRemove
// 0x00E8 (0x00E8 - 0x0000)
struct GC_NPC_Elemental_Lightning_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33F8[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33F9[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UParticleSystemComponent*         Temp_object_Variable;                              // 0x00D8(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue1;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.Death FX Setup
// 0x0010 (0x0010 - 0x0000)
struct GC_NPC_Elemental_Lightning_C_Death_FX_Setup final
{
public:
	bool                                          Remove;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33FA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnemyPawn_Parent_C*                    Pawn;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.WhileActive
// 0x03A0 (0x03A0 - 0x0000)
struct GC_NPC_Elemental_Lightning_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33FB[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33FC[0xE];                                     // 0x00D2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x00E0(0x0080)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam1;               // 0x0160(0x0080)(IsPlainOldData, NoDestructor)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Array_Get_Item;                           // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33FD[0x8];                                     // 0x01F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam2;               // 0x0200(0x0080)(IsPlainOldData, NoDestructor)
	class UMeshComponent*                         K2Node_DynamicCast_AsMesh_Component;               // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33FE[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x0290(0x0010)(ZeroConstructor, ReferenceParm)
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x02A0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x02AC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x02C0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33FF[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x02D0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x02DC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3400[0x8];                                     // 0x02E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam3;               // 0x02F0(0x0080)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array1;                           // 0x0370(0x0010)(ZeroConstructor, ReferenceParm)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0380(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3401[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue1;             // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue1;        // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
