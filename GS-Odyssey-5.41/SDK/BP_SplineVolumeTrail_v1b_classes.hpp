#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineVolumeTrail_v1b

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "En_SplineForwardAxes_01_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C
// 0x0230 (0x0558 - 0x0328)
class ABP_SplineVolumeTrail_v1b_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class UArrowComponent*                        DebugArrow;                                        // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9; // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47AB[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DebugRotateTimeline;                               // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh;                                     // 0x0358(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Socket_Attach_Point;                               // 0x0360(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMeshTemplate;                                // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                     SplineMeshMaterialOverride;                        // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystem*                        Particles;                                         // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LifeTime;                                          // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lifetime_Buffer;                                   // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SplineSystemDuration;                              // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LifetimeAfterCompletion;                           // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          KeepTickEnabledWhenCompleting;                     // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_47AC[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfSplineMeshesToUpdate;                      // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Initial_Size;                                      // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_47AD[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USplineMeshComponent*>           SplineMeshes;                                      // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         SplineDistanceThreshold;                           // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SplineDistanceThresholdEmpty;                      // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>           SplineMeshesHidden;                                // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 SplineTimestamps;                                  // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         ArrayIndex;                                        // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineSystemActive;                                // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47AE[0x3];                                     // 0x03DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CompletionTimestamp;                               // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LifetimeAdjusted;                                  // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SizeOverLife;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       MIDs_0;                                            // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveLinearColor*                      ColorAndAlphaOverLife;                             // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticlesComponent;                                // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SplineID;                                          // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47AF[0x4];                                     // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   Current_Spline_Mesh;                               // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Initial_Rotation__Roll_;                           // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_47B0[0x4];                                     // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            RotationOverLife;                                  // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DebugMode;                                         // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_47B1[0x3];                                     // 0x0431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                DebugPositionOffset;                               // 0x0434(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               DebugRotationRate;                                 // 0x0440(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         DebugTickDelta;                                    // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugPreviousTickTimestamp;                        // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B2[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Spline_System_Duration_Event_Handle;               // 0x0458(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Tick_Interval_LODs;                            // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_47B3[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Tick_Interval_Event_Handle;                        // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Tick_Interval_LOD_Check_Rate;                      // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B4[0x4];                                     // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Tick_Interval_LOD_Distances;                       // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<float>                                 Tick_Actor_Intervals;                              // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	int32                                         LOD_Array_Index;                                   // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Recently_Rendered_LOD;                         // 0x049C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_47B5[0x3];                                     // 0x049D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Recently_Rendered_Check_Rate;                      // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_47B6[0x4];                                     // 0x04A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Recently_Rendered_Event_Handle;                    // 0x04A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          RecentlyRendered;                                  // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47B7[0x3];                                     // 0x04B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Recently_Rendered_Tolerance;                       // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                SplineDefaultUpVector;                             // 0x04B8(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SplineDefaultUpVectorInWorldSpace;                 // 0x04C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	En_SplineForwardAxes_01                       SplineMeshForwardAxis;                             // 0x04C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CeaseAndDetachSplineUponCompletion;                // 0x04C6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          CanNewSplinePointsBeCreated;                       // 0x04C7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LinearColorOverLengthOfSpline;                     // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_47B8[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 IndiciesToDelete;                                  // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          RedistributePointsAlongSplineWhenCreated;          // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_47B9[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CurveBakeMID;                                      // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              RenderTextureResolution;                           // 0x04F8(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UCurveLinearColor*>              LinearColorCurvesToBake;                           // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	bool                                          WriteBakedCurveDataToDisk;                         // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_47BA[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 File_Path;                                         // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 File_Name;                                         // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   LinearColorArray;                                  // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          UseCheapSplines;                                   // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_47BB[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               LinearColorTexture;                                // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int32 EntryPoint);
	void GenerateCurveTextures();
	void ClearRenderTarget();
	void Recently_Rendered_Check();
	void Tick_Interval_LOD_Check();
	void ManuallyStopSplineSystem();
	void DebugMode_Rotate();
	void SplineSystemDurationReached();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DebugRotateTimeline__UpdateFunc();
	void DebugRotateTimeline__FinishedFunc();
	void UserConstructionScript();
	void AddSplineMesh();
	void SetStartAndEndSplineMesh(bool Update_Spline_Mesh);
	void AddSplinePoint();
	void UpdateSplinePointPosition();
	void SplineTimestampManagement();
	void ScaleSplineMesh();
	void UpdateMID();
	void UpdateParticleSystemPosition();
	void RollSplineMesh();
	void SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh);
	void SetNewSplinePointsBool();
	bool AddSplineDistanceCheck();
	void SetWasRecentlyRendered();
	void TickIntervalLODCheck();
	void GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int32 Param_Index, struct FLinearColor* LinearColorOut);
	void RedistributePointsAlongSpline();
	void SplineUpdateOnTick();
	void ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int32 IndexToRemove);
	void BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int32 Pixel__X_, struct FLinearColor* LinearColorOut);
	void DestroyAllSplineMeshes();
	void SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes);
	void GetSocketLocationWS(class FName Socket_Name, struct FVector* Location_WS);
	void UpdateCheapSplinesWPOVectors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineVolumeTrail_v1b_C">();
	}
	static class ABP_SplineVolumeTrail_v1b_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineVolumeTrail_v1b_C>();
	}
};

}
