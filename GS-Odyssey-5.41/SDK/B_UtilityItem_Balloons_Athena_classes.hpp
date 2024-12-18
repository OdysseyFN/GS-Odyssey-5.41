#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_UtilityItem_Balloons_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_UtilityItem_Generic_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_UtilityItem_Balloons_Athena.B_UtilityItem_Balloons_Athena_C
// 0x0078 (0x0BA0 - 0x0B28)
class AB_UtilityItem_Balloons_Athena_C final : public AB_UtilityItem_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(Transient, DuplicateTransient)
	TArray<class ABuildingGameplayActor*>         Balloons;                                          // 0x0B30(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortWorldItemDefinition*               Balloons_WID;                                      // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Ballon_Inflate_Sound;                              // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Ballon_StartToRise_Sound;                          // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Ballon_ReleaseSingle_Sound;                        // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BalloonsNeededForFlight;                           // 0x0B60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD2[0x4];                                     // 0x0B64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Ballon_ReleaseMultiple_Sound;                      // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Ballon_FloatingLoop_Sound;                         // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BalloonFloatingLoop_Sound;                         // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Ballon_Shot_Sound;                                 // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBalloonsInUse;                              // 0x0B88(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	EFortCustomMovement                           FortCustomMovementMode;                            // 0x0B8C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD3[0x3];                                     // 0x0B8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RotationOffset;                                    // 0x0B90(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRep_CurrentBalloonsInUse();
	void UserConstructionScript();
	void SpawnBalloon();
	void ReleaseBalloon(bool ReleaseAll);
	void K2_OnUnEquip();
	void ReceiveBeginPlay();
	void ReleaseOnDBNO(bool bIsDBNO);
	void ReleaseAllBalloons();
	void EnteredVehicle(int32 SeatIndex);
	void RemoveItemFromPlayer();
	void MovementModeChangeFloat(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void BalloonShot(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_B_UtilityItem_Balloons_Athena(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_UtilityItem_Balloons_Athena_C">();
	}
	static class AB_UtilityItem_Balloons_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_UtilityItem_Balloons_Athena_C>();
	}
};

}

