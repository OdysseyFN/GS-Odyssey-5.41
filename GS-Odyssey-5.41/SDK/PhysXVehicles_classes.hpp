#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysXVehicles

#include "Basic.hpp"

#include "PhysXVehicles_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0158 (0x02D0 - 0x0178)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                         Pad_1149[0x8];                                     // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bDeprecatedSpringOffsetMode : 1;                   // 0x0180(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bReverseAsBrake : 1;                               // 0x0180(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseRVOAvoidance : 1;                              // 0x0180(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRawHandbrakeInput : 1;                            // 0x0180(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bRawGearUpInput : 1;                               // 0x0180(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bRawGearDownInput : 1;                             // 0x0180(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         BitPad_31 : 2;                                     // 0x0080(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         Pad_114A[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bWasAvoidanceUpdated : 1;                          // 0x0184(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_114B[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Mass;                                              // 0x0188(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_114C[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWheelSetup>                    WheelSetups;                                       // 0x0190(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         DragCoefficient;                                   // 0x01A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChassisWidth;                                      // 0x01A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChassisHeight;                                     // 0x01A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DragArea;                                          // 0x01AC(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EstimatedMaxEngineSpeed;                           // 0x01B0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxEngineRPM;                                      // 0x01B4(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugDragMagnitude;                                // 0x01B8(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InertiaTensorScale;                                // 0x01BC(0x000C)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinNormalizedTireLoad;                             // 0x01C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinNormalizedTireLoadFiltered;                     // 0x01CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxNormalizedTireLoad;                             // 0x01D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxNormalizedTireLoadFiltered;                     // 0x01D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ThresholdLongitudinalSpeed;                        // 0x01D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LowForwardSpeedSubStepCount;                       // 0x01DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HighForwardSpeedSubStepCount;                      // 0x01E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_114D[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVehicleWheel*>                  Wheels;                                            // 0x01E8(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                         Pad_114E[0x18];                                    // 0x01F8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RVOAvoidanceRadius;                                // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RVOAvoidanceHeight;                                // 0x0214(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AvoidanceConsiderationRadius;                      // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RVOSteeringStep;                                   // 0x021C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RVOThrottleStep;                                   // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AvoidanceUID;                                      // 0x0224(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                      AvoidanceGroup;                                    // 0x0228(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                      GroupsToAvoid;                                     // 0x022C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                      GroupsToIgnore;                                    // 0x0230(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                         AvoidanceWeight;                                   // 0x0234(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PendingLaunchVelocity;                             // 0x0238(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedVehicleState                ReplicatedState;                                   // 0x0244(0x0014)(Net, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_114F[0x4];                                     // 0x0258(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RawSteeringInput;                                  // 0x025C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawThrottleInput;                                  // 0x0260(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawBrakeInput;                                     // 0x0264(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         SteeringInput;                                     // 0x0268(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ThrottleInput;                                     // 0x026C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BrakeInput;                                        // 0x0270(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HandbrakeInput;                                    // 0x0274(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         IdleBrakeInput;                                    // 0x0278(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         StopThreshold;                                     // 0x027C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         WrongDirectionThreshold;                           // 0x0280(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                      ThrottleInputRate;                                 // 0x0284(0x0008)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                      BrakeInputRate;                                    // 0x028C(0x0008)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                      HandbrakeInputRate;                                // 0x0294(0x0008)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                      SteeringInputRate;                                 // 0x029C(0x0008)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1150[0x24];                                    // 0x02A4(0x0024)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            OverrideController;                                // 0x02C8(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
	void SetAvoidanceEnabled(bool bEnable);
	void SetAvoidanceGroup(int32 GroupFlags);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetBrakeInput(float Brake);
	void SetGearDown(bool bNewGearDown);
	void SetGearUp(bool bNewGearUp);
	void SetGroupsToAvoid(int32 GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int32 GroupFlags);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetSteeringInput(float Steering);
	void SetTargetGear(int32 GearNum, bool bImmediate);
	void SetThrottleInput(float Throttle);
	void SetUseAutoGears(bool bUseAuto);

	int32 GetCurrentGear() const;
	float GetEngineMaxRotationSpeed() const;
	float GetEngineRotationSpeed() const;
	float GetForwardSpeed() const;
	int32 GetTargetGear() const;
	bool GetUseAutoGears() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WheeledVehicleMovementComponent">();
	}
	static class UWheeledVehicleMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWheeledVehicleMovementComponent>();
	}
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (0x02D0 - 0x02D0)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:
	void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
	void SetDriveTorque(float DriveTorque, int32 WheelIndex);
	void SetSteerAngle(float SteerAngle, int32 WheelIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleWheeledVehicleMovementComponent">();
	}
	static class USimpleWheeledVehicleMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleWheeledVehicleMovementComponent>();
	}
};

// Class PhysXVehicles.TireConfig
// 0x0020 (0x0050 - 0x0030)
class UTireConfig final : public UDataAsset
{
public:
	float                                         FrictionScale;                                     // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1152[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTireConfigMaterialFriction>    TireFrictionScales;                                // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1153[0x8];                                     // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TireConfig">();
	}
	static class UTireConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTireConfig>();
	}
};

// Class PhysXVehicles.VehicleAnimInstance
// 0x0618 (0x0970 - 0x0358)
class UVehicleAnimInstance final : public UAnimInstance
{
public:
	uint8                                         Pad_1154[0x608];                                   // 0x0358(0x0608)(Fixing Size After Last Property [ Dumper-7 ])
	class UWheeledVehicleMovementComponent*       WheeledVehicleMovementComponent;                   // 0x0960(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1155[0x8];                                     // 0x0968(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class AWheeledVehicle* GetVehicle();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VehicleAnimInstance">();
	}
	static class UVehicleAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehicleAnimInstance>();
	}
};

// Class PhysXVehicles.VehicleWheel
// 0x00C8 (0x00F0 - 0x0028)
class UVehicleWheel final : public UObject
{
public:
	class UStaticMesh*                            CollisionMesh;                                     // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDontCreateShape;                                  // 0x0030(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoAdjustCollisionSize;                          // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1156[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Offset;                                            // 0x0034(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ShapeRadius;                                       // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ShapeWidth;                                        // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass;                                              // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingRate;                                       // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SteerAngle;                                        // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectedByHandbrake;                              // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1157[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTireType*                              TireType;                                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTireConfig*                            TireConfig;                                        // 0x0060(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LatStiffMaxLoad;                                   // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LatStiffValue;                                     // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LongStiffValue;                                    // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SuspensionForceOffset;                             // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SuspensionMaxRaise;                                // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SuspensionMaxDrop;                                 // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SuspensionNaturalFrequency;                        // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SuspensionDampingRatio;                            // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWheelSweepType                               SweepType;                                         // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1158[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxBrakeTorque;                                    // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxHandBrakeTorque;                                // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1159[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWheeledVehicleMovementComponent*       VehicleSim;                                        // 0x0098(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WheelIndex;                                        // 0x00A0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugLongSlip;                                     // 0x00A4(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugLatSlip;                                      // 0x00A8(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugNormalizedTireLoad;                           // 0x00AC(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_115A[0x4];                                     // 0x00B0(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DebugWheelTorque;                                  // 0x00B4(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugLongForce;                                    // 0x00B8(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebugLatForce;                                     // 0x00BC(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x00C0(0x000C)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                OldLocation;                                       // 0x00CC(0x000C)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x00D8(0x000C)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_115B[0xC];                                     // 0x00E4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetRotationAngle() const;
	float GetSteerAngle() const;
	float GetSuspensionOffset() const;
	bool IsInAir() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VehicleWheel">();
	}
	static class UVehicleWheel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehicleWheel>();
	}
};

// Class PhysXVehicles.WheeledVehicle
// 0x0010 (0x0398 - 0x0388)
class AWheeledVehicle final : public APawn
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0388(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponent*       VehicleMovement;                                   // 0x0390(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WheeledVehicle">();
	}
	static class AWheeledVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWheeledVehicle>();
	}
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0158 (0x0428 - 0x02D0)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleEngineData                     EngineSetup;                                       // 0x02D0(0x0090)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleDifferential4WData             DifferentialSetup;                                 // 0x0360(0x001C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         AckermannAccuracy;                                 // 0x037C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVehicleTransmissionData               TransmissionSetup;                                 // 0x0380(0x0030)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     SteeringCurve;                                     // 0x03B0(0x0078)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WheeledVehicleMovementComponent4W">();
	}
	static class UWheeledVehicleMovementComponent4W* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWheeledVehicleMovementComponent4W>();
	}
};

}
