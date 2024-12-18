#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_SmokeGrenade_FXVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C
// 0x0080 (0x03A8 - 0x0328)
class AB_Prj_Athena_SmokeGrenade_FXVolume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SmokeScreen_Sphere;                                // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Athena_SmokeGrenade_OuterSmoke_01;               // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PostProcessParentShape;                            // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_ReleaseSmoke;                                // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SmokeVolumeMesh;                                   // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeSmokeTL_Float_A3928DBE485CA9BEA3B031B9AC851F3F; // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeSmokeTL__Direction_A3928DBE485CA9BEA3B031B9AC851F3F; // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F5F[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeSmokeTL;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  SmokePP;                                           // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokebombLifespan;                                 // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SmokebombRadius;                                   // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AFortPawn*                              Pawn;                                              // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SmokeVolumeMeshMID;                                // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeFadeValue;                                    // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeFadeInTime;                                   // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeFadeOutTime;                                  // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmokeDelayBeforeFadeIn;                            // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SmokeScreen_MID;                                   // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume(int32 EntryPoint);
	void FadeOut();
	void FadeIn();
	void ReceiveBeginPlay();
	void FadeSmokeTL__UpdateFunc();
	void FadeSmokeTL__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_SmokeGrenade_FXVolume_C">();
	}
	static class AB_Prj_Athena_SmokeGrenade_FXVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_SmokeGrenade_FXVolume_C>();
	}
};

}

