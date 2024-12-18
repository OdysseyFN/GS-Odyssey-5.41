#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Constructor_BASE

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "StructRecyclingResource_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C
// 0x0728 (0x1640 - 0x0F18)
class AB_Constructor_BASE_C final : public AFortConstructorBASE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F18(0x0008)(Transient, DuplicateTransient)
	class UAudioComponent*                        BaseEnergyComponentC;                              // 0x0F20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BaseEnergyComponentB;                              // 0x0F28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BaseEnergyComponentA;                              // 0x0F30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_FeeltheBase_Chargup;                             // 0x0F38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        FeelTheBaseTraceLocation;                          // 0x0F40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0F48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0F50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere_Collision_For_Anim;                         // 0x0F58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Base_Device;                                    // 0x0F60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  FortMiniMap1;                                      // 0x0F68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Workbench_Ticking;                                 // 0x0F70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0F78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_BigBrother;                                     // 0x0F80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         BigBrotherAdditionalNodes;                         // 0x0FA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3508[0x4];                                     // 0x0FA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             MiniMapIcon;                                       // 0x0FA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Minimap_View_Distance;                             // 0x0FB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3509[0x4];                                     // 0x0FB4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_ElectrifiedFloors;                              // 0x0FB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_Hyperthreading;                                 // 0x0FC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_SubroutineOptimization;                         // 0x0FE0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SubroutineOptimization;                         // 0x1000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_Recycling;                                      // 0x1008(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ConnectedWood;                                     // 0x1028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConnectedStone;                                    // 0x102C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConnectedMetal;                                    // 0x1030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_350A[0x4];                                     // 0x1034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWorldItemDefinition*               Wood;                                              // 0x1038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               Stone;                                             // 0x1040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               Metal;                                             // 0x1048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecyclingMultiplier;                               // 0x1050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnWood;                                         // 0x1054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SpawnStone;                                        // 0x1055(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SpawnMetal;                                        // 0x1056(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_350B[0x1];                                     // 0x1057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SpawnMax;                                          // 0x1058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperThreadingMultiplier;                          // 0x105C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_DefensiveIntegration;                           // 0x1060(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_DefensiveIntegration;                           // 0x1080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_AutomatedDefenses;                              // 0x1088(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         AutomatedDefenses_Additional_Nodes;                // 0x10A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_350C[0x4];                                     // 0x10AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_TotalIntegration;                               // 0x10B0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_PowerModulation;                                // 0x10D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_PowerModulation;                                // 0x10F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefensiveIntegrationLevel;                         // 0x10F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_350D[0x4];                                     // 0x10FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_LoftyArchitecture;                              // 0x1100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_LoftyArchitecture;                              // 0x1108(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_SafetyProtocols;                                // 0x1128(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SafetyProtocols;                                // 0x1148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BaseIsPlaced;                                      // 0x1150(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_350E[0x3];                                     // 0x1151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumPlayersNearBase;                                // 0x1154(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BasePowerLevel;                                    // 0x1158(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalResourcesSpawned;                             // 0x115C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ResourceLimit;                                     // 0x1160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_350F[0x4];                                     // 0x1164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_Overclocking;                                   // 0x1168(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_UpgradedPowerModulation;                        // 0x1188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ElectrifiedFloors;                              // 0x1190(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_SlowUnit;                                       // 0x11B0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SlowUnit;                                       // 0x11D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ContainmentUnit;                                // 0x11D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_Grant_TriggerReflectDamage_FromBASEWall;        // 0x11F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_StrongerExit;                                   // 0x1200(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_StrongerExit;                                   // 0x1220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_CardioFeedbackLoop;                             // 0x1228(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_ShieldCapacitor;                                // 0x1248(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_ShieldCapacitor;                                // 0x1268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructRecyclingResource               StoredWood;                                        // 0x1270(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStructRecyclingResource               StoredStone;                                       // 0x1280(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStructRecyclingResource               StoredMetal;                                       // 0x1290(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         HyperthreadingResourceLimit;                       // 0x12A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MegaBASEAdditionalNodes;                           // 0x12A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_NeuroFeedbackLoop;                              // 0x12A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                ConstructorAbilitySystemComponent;                 // 0x12B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_OutgoingHealAmp;                                // 0x12B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_FullyContained;                                 // 0x12C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Effect_Mesh_Comp;                                  // 0x12C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             Inner_MIDs_Friendly;                               // 0x12D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         Transition_Start_Delay;                            // 0x12E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3510[0x4];                                     // 0x12E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Outer_MIDs_Friendly;                               // 0x12E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MegaBASE;                                       // 0x12F8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_NeuroFeedbackLoop;                              // 0x1318(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_CardioFeedbackLoop;                             // 0x1338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_FullyContained;                                 // 0x1340(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InitialStaticMeshAnimationIsComplete;              // 0x1360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3511[0x7];                                     // 0x1361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundResourcesCreated;                             // 0x1368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundResourcesCollected;                           // 0x1370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           EffectMeshArray;                                   // 0x1378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>               BuildingActorArray;                                // 0x1388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         DelayBeforeShowingMeshes;                          // 0x1398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DelayDisabled;                                     // 0x139C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3512[0x3];                                     // 0x139D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           DelayedMeshedTimer;                                // 0x13A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_TrapDamage;                                     // 0x13A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_TrapDamage;                                     // 0x13B0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_TrapReloadRate;                                 // 0x13D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_TrapReloadRate;                                 // 0x13F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Constructor_BASEOutgoingDamageMod;              // 0x13F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         T1Amount;                                          // 0x1400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         T2Amount;                                          // 0x1404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         T3Amount;                                          // 0x1408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecyclingTimer;                                    // 0x140C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_FeelTheBase;                                    // 0x1410(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_FeelTheBase;                                    // 0x1430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Constructor_C*              ConstructorPawn;                                   // 0x1438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel1;                            // 0x1440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel2;                            // 0x1448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel3;                            // 0x1450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildASound;                                 // 0x1458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildBSound;                                 // 0x1460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildCSound;                                 // 0x1468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyStageTransitionSound;                        // 0x1470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlayingLoopA;                                   // 0x1478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3513[0x7];                                     // 0x1479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_Enduring_Machine;                               // 0x1480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_Enduring_Machine;                               // 0x1488(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MegaBASE_T01;                                   // 0x14A8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MegaBASE_T02;                                   // 0x14C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MegaBASE_AdditionalNodes_T01;                      // 0x14E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MegaBASE_AdditionalNodes_T02;                      // 0x1510(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_Recycling_T01;                                  // 0x1538(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_Recycling_T02;                                  // 0x1558(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         NewVar_0;                                          // 0x1578(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         NewVar_1;                                          // 0x15A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_BASEMD;                                         // 0x15C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_BASEMD;                                         // 0x15E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ElectrifiedFloors_T01;                          // 0x15F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_ElectrifiedFloors_T01;                          // 0x1610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ElectrifiedFloors_T02;                          // 0x1618(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_ElectrifiedFloors_T02;                          // 0x1638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Constructor_BASE(int32 EntryPoint);
	void BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleCount);
	void ResetFeelTheBaseGlow();
	void FeelTheBaseGlow(bool Stack1, bool Stack2, bool Stack3);
	void SaveOwner(class APlayerPawn_Constructor_C* Param_ConstructorPawn);
	void ApplyTrapEffects();
	void ShowHiddenMeshes();
	void BaseIsReadyToAnimate();
	void ResourcesCollected();
	void ResourcesCreated();
	void GetDamageAmp();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn);
	void StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void AnimateLegs(bool LegsUp);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Recycling();
	void OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent);
	void UserConstructionScript();
	void SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int32* Param_NodesToAffect);
	void Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects);
	void SetupBuildingEffects(class UAbilitySystemComponent* Param_AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* BuildingEffects);
	void SetupFriendlyEffects(class UAbilitySystemComponent* Param_AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* FriendlyEffects);
	void SetupHostileEffects(class UAbilitySystemComponent* Param_AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* HostileEffects);
	void RecycleResources();
	void OnRep_BaseIsPlaced();
	void SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, EFortResourceType Param_ResourceType);
	void AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, class UFortWorldItemDefinition* Stored_Resource, int32 AmountToSpawn, struct FStructRecyclingResource* SetValue);
	void OnRep_CollectResources();
	void SetDamageMultiplier();
	void SetBaseVisualGlow(class UAbilitySystemComponent* Param_AbilitySystemComponent);
	void BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec);
	void OnRep_InitialStaticMeshAnimationIsComplete();
	void GetTrapGEFromTag(const struct FGameplayTagContainer& InTag, class UClass** OutGE);
	void SetupTrapEffects(class UAbilitySystemComponent* AbilityComponent);
	void SetHealingMultiplier();
	void SpawnResourceWithAmount(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, EFortResourceType Param_ResourceType);
	void GetFeelTheBaseTraceLocation(struct FTransform* TraceLocation);
	void UpdateAudioCrossfade(class USoundBase* Sound);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Constructor_BASE_C">();
	}
	static class AB_Constructor_BASE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Constructor_BASE_C>();
	}
};

}

