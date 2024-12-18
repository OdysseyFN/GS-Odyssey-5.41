#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Ranged_Generic

#include "Basic.hpp"

#include "En_ShellTypes_01_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// 0x01D8 (0x0F70 - 0x0D98)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D98(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               Reload_Empty_;                                     // 0x0DA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Shells_empty_;                                     // 0x0DA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ScopeMesh1P;                                       // 0x0DB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Muzzle_Empty_;                                     // 0x0DB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x0DC0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x0DC4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33A9[0x3];                                     // 0x0DC5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AnimateScopePostProcess;                           // 0x0DC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem;                              // 0x0DD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0DD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0DE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_Reload_Particles;                              // 0x0DE9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33AA[0x6];                                     // 0x0DEA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Reload_ParticleSystem;                             // 0x0DF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastPlayFXTime;                                    // 0x0DF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinPlayFXTime;                                     // 0x0DFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseShellsOnFire_;                                  // 0x0E00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnReload_;                                // 0x0E01(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnPump_;                                  // 0x0E02(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33AB[0x5];                                     // 0x0E03(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        ShellsParticleSystemTemplate;                      // 0x0E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ReloadSocketName;                                  // 0x0E10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                    Array_Of_Active_Enemy_AI;                          // 0x0E18(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FWeightedBlendable>             ScopePostProcessMaterial;                          // 0x0E28(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer; // 0x0E38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_33AC[0x7];                                     // 0x0E39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Shells_Socket_Name;                                // 0x0E40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	En_ShellTypes_01                              ShellTypeSelect;                                   // 0x0E48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33AD[0x3];                                     // 0x0E49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Shells_Spawn_Rate_Scale;                           // 0x0E4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShellsRotationRate;                                // 0x0E50(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Velocity;                                   // 0x0E5C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Gravity;                                    // 0x0E68(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Lifetime;                                   // 0x0E74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Size;                                       // 0x0E78(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Time_Dilation;                              // 0x0E84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Target_Scope_Vignette_Blur_Screen_Percentage;      // 0x0E88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scope_Camera_Offset_Amount;                        // 0x0E8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SmallShells;                                       // 0x0E90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MediumShells;                                      // 0x0E91(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LargeShells;                                       // 0x0E92(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShotgunShells;                                     // 0x0E93(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnergyShells;                                      // 0x0E94(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33AE[0x3];                                     // 0x0E95(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Inherit_Parent_Velocity;                           // 0x0E98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Radius;                                // 0x0E9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Height;                                // 0x0EA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugShellsSocket_;                                // 0x0EA4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_2_Post_Processes_For_the_Scope;                // 0x0EA5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_33AF[0x2];                                     // 0x0EA6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_ScopeZoomIn;                                 // 0x0EA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ScopeZoomOut;                                // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ReticleHUDElementTags;                             // 0x0EC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_Wind_Enabled;                                   // 0x0EE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33B0[0x7];                                     // 0x0EE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MuzzleWindParticleSystem;                          // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem1P;                            // 0x0EF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldHideReticleAfterDelay;                       // 0x0EF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33B1[0x7];                                     // 0x0EF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPostProcessComponent*                  DownScopePostProcessSpawned;                       // 0x0F00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  DownScopePostProcessSpawned2;                      // 0x0F08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MuzzleWindParticleSpawned;                         // 0x0F10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StencilBufferValue;                                // 0x0F18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33B2[0x4];                                     // 0x0F1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            Curve_PitchOffset;                                 // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ScopedInLoop;                                // 0x0F28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopeZoomInComp;                                   // 0x0F30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopedInLoopComp;                                  // 0x0F38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopeZoomOutComp;                                  // 0x0F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alteration_Ambient_PS_Max_Draw_Distance;           // 0x0F48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Muzzle_PS_Max_Draw_Distance;                       // 0x0F4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Beam_PS_Max_Draw_Distance;                         // 0x0F50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reload_PS_Max_Draw_Distance;                       // 0x0F54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_PS_Max_Draw_Distance;                       // 0x0F58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33B3[0x4];                                     // 0x0F5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnAimDownSightsChanged;                            // 0x0F60(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAimDownSightsChanged__DelegateSignature(bool AimDownsights);
	void ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint);
	void ForceScopeBackImmediatly();
	void ShellEjectionOff();
	void Bind_on_Effects_Quality();
	void ShellEjectionFixOn();
	void PitchUpOnRateOfFireChange(float NewRateOfFire);
	void BindFireRateChange();
	void SetupScopePostProcess();
	void ForceScopeFX();
	void UnhideFirstPersonStuffPart1();
	void UnhideFirstPersonStuffPart2(int32 Which_Call);
	void HideThirdPersonStuff();
	void AbortScopeFX();
	void HideFirstPersonStuff();
	void PlayScopePP();
	void UnhideThirdPersonStuff();
	void ResetDoonceScopeSound();
	void ReverseScopePP();
	void ShowWeapon();
	void HideWeapon();
	void ShowWeaponMesh();
	void HideWeaponMesh();
	void OnWeaponVisibilityChanged(bool bVisible);
	void ReceiveBeginPlay();
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void OnEquippedWeaponDestory();
	void ShellsON__onPump_();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnWeaponAttached();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 Param_StencilBufferValue);
	void InitializeScopeVariables();
	void K2_OnUnEquip();
	void OnSetTargeting(bool bNewIsTargeting);
	void OnPlayReloadFX(EFortReloadFXState ReloadStage);
	void OnStopWeaponFireFX();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void AnimateScopePostProcess__UpdateFunc();
	void AnimateScopePostProcess__FinishedFunc();
	void UserConstructionScript();
	void AddRandomScale();
	void SetWpnRarity();
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void Muzzle_Play_Reload_FX(EFortReloadFXState Selection);
	void UpdateShellEmittersFX();
	void SetupShellFX();
	void DeactivateShellsFX();
	void ActivateShellsFX(bool Bool);
	void ActivateReloadSmokeFX();
	void DeactivateReloadSmokeFX();
	void DeactivateMuzzleFX();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void HideReticle();
	void ShowReticle();
	void SetActiveAlterationIdleParticles(bool Active);
	void SetPostProcessParams(float InputPin);
	void StartScopedAudio();
	void StopScopedAudio();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Ranged_Generic_C">();
	}
	static class AB_Ranged_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Ranged_Generic_C>();
	}
};

}

