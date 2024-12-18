#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tiered_Chest_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tiered_Chest_Athena.Tiered_Chest_Athena_C
// 0x00A8 (0x0D60 - 0x0CB8)
class ATiered_Chest_Athena_C final : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0CB8(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   S_Chest_SmokeSheet;                                // 0x0CC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   TrasureLight;                                      // 0x0CC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Chest_Ambient_Sound;                               // 0x0CD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MobileSelectedTL_LerpInteactoIcon_EEB30EBE433E8977EDA63DB381EAF0C8; // 0x0CD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MobileSelectedTL_LerpObject_EEB30EBE433E8977EDA63DB381EAF0C8; // 0x0CDC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MobileSelectedTL__Direction_EEB30EBE433E8977EDA63DB381EAF0C8; // 0x0CE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464C[0x7];                                     // 0x0CE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MobileSelectedTL;                                  // 0x0CE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MobileOnInteractTL_LERP_9BD788A146DACD005BAF94BEBEDAB584; // 0x0CF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MobileOnInteractTL__Direction_9BD788A146DACD005BAF94BEBEDAB584; // 0x0CF4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464D[0x3];                                     // 0x0CF5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MobileOnInteractTL;                                // 0x0CF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Loot_Effect;                                       // 0x0D00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpecialChestOpenSound;                             // 0x0D08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       MIDs;                                              // 0x0D10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         MobileWiggleAmount;                                // 0x0D20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464E[0x4];                                     // 0x0D24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ChimeTimer;                                        // 0x0D28(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ChestChimeVisualUpdate;                            // 0x0D30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464F[0x4];                                     // 0x0D34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MobileInteractionMaterial;                         // 0x0D38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MobileInteractIcon;                                // 0x0D40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MobileInteractIconLocation;                        // 0x0D48(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MobileInteractIconScale;                           // 0x0D54(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Tiered_Chest_Athena(int32 EntryPoint);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnBeginSearch();
	void DisableBacchusHighlight();
	void EnableBacchusHighlight();
	void Chime_Visual();
	void Mobile_OnDisconnect();
	void Mobile_OnInteract();
	void Mobile_Outline_Off();
	void Mobile_Outline_On();
	void OnSetSearched();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnLoot();
	void MobileSelectedTL__UpdateFunc();
	void MobileSelectedTL__FinishedFunc();
	void MobileOnInteractTL__UpdateFunc();
	void MobileOnInteractTL__FinishedFunc();
	void UserConstructionScript();
	void SetLightVisibility(bool Visible);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void CreateMobileMIDs();
	void CleanupWiggleMIDs();
	void GetMaxAudibleDistance(float* Max_Distance);
	void SetVisibleMobileInteractIcon(bool Visible);
	void OnSetCustomDepthStencilValue(const TArray<class UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32 StencilValue, bool* bOutConsume);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tiered_Chest_Athena_C">();
	}
	static class ATiered_Chest_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATiered_Chest_Athena_C>();
	}
};

}

