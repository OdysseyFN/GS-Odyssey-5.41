#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrapplingHookGun_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C
// 0x0248 (0x05A0 - 0x0358)
class UGrapplingHookGun_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_50E9[0x8];                                     // 0x0358(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_7F4939FF463BFA7ADBE0D0BC3CE8B2CF; // 0x0368(0x0040)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_32473B4946F7224F26381CAE8FAF7655; // 0x03A8(0x0038)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118; // 0x03E0(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_FACD2E7D44A066EA8B462DB8C1391182; // 0x0518(0x0040)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_54A8C16E43BFCF837D3972B21E76142E; // 0x0558(0x0040)()
	bool                                          IsFired;                                           // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GrapplingHookGun_AnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GrapplingHookGun_AnimBP_AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GrapplingHookGun_AnimBP_C">();
	}
	static class UGrapplingHookGun_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGrapplingHookGun_AnimBP_C>();
	}
};

}
