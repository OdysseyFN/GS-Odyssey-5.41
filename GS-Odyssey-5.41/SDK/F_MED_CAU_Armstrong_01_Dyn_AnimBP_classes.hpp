#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_CAU_Armstrong_01_Dyn_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_CAU_Armstrong_01_Dyn_AnimBP.F_MED_CAU_Armstrong_01_Dyn_AnimBP_C
// 0x16A0 (0x1AD0 - 0x0430)
class UF_MED_CAU_Armstrong_01_Dyn_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_A2CC76D9456B3C6338716ABCC98B8472; // 0x0438(0x0068)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_D7FD181942F8C611EEE7E68A346B2908; // 0x04A0(0x0390)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_E457C75048FB335B669076B6F5B604B3; // 0x0830(0x0040)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_EF504EF24DB5E087878C2C99318CA53F; // 0x0870(0x0040)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_423AD53A45AE6DD10B901B8A1682252C; // 0x08B0(0x0390)()
	struct FAnimNode_Root                         AnimGraphNode_Root_84728B4840F5FF524CE2EC9BE12234A0; // 0x0C40(0x0040)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_96170AC64E979155248CB9B68547148B; // 0x0C80(0x0390)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_82F5EF79467299C1DC1FA7BEFCE08AB0; // 0x1010(0x0390)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_56D12D5D44AD651F03F21A9395B36C68; // 0x13A0(0x0390)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_CB9FB9364B2D76AFB8B97EA2C881C101; // 0x1730(0x0390)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x1AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_CAU_Armstrong_01_Dyn_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_CAU_Armstrong_01_Dyn_AnimBP_C">();
	}
	static class UF_MED_CAU_Armstrong_01_Dyn_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_CAU_Armstrong_01_Dyn_AnimBP_C>();
	}
};

}
