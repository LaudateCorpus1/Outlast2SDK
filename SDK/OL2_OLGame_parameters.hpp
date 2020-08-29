#pragma once

// Outlast2 (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OLGame.OLAITrigger.Touch
struct AOLAITrigger_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLAITrigger.NativeOnTouch
struct AOLAITrigger_NativeOnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function OLGame.OLAITrigger.PostBeginPlay
struct AOLAITrigger_PostBeginPlay_Params
{
};

// Function OLGame.OLBasementWindow.OnToggle
struct AOLBasementWindow_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLBashableObject.OnToggle
struct AOLBashableObject_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLBlockingObject.OnToggle
struct AOLBlockingObject_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLBlockingObject.OnDisable
struct AOLBlockingObject_OnDisable_Params
{
};

// Function OLGame.OLBlockingObject.OnEnable
struct AOLBlockingObject_OnEnable_Params
{
};

// Function OLGame.OLCamcorderFilesHud.SetPCInputLabel
struct UOLCamcorderFilesHud_SetPCInputLabel_Params
{
	struct FString                                     navigationLabelUp;                                        // (Parm, NeedCtorLink)
	struct FString                                     navigationLabelLeft;                                      // (Parm, NeedCtorLink)
	struct FString                                     navigationLabelDown;                                      // (Parm, NeedCtorLink)
	struct FString                                     navigationLabelRight;                                     // (Parm, NeedCtorLink)
	struct FString                                     nextLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     previousLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     backLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     displayLabel;                                             // (Parm, NeedCtorLink)
	struct FString                                     playLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     selectLabelText;                                          // (Parm, NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.SetPCInputLabelFunction
struct UOLCamcorderFilesHud_SetPCInputLabelFunction_Params
{
	struct FString                                     navigationLabelUp;                                        // (Parm, NeedCtorLink)
	struct FString                                     navigationLabelLeft;                                      // (Parm, NeedCtorLink)
	struct FString                                     navigationLabelDown;                                      // (Parm, NeedCtorLink)
	struct FString                                     navigationLabelRight;                                     // (Parm, NeedCtorLink)
	struct FString                                     nextLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     previousLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     backLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     displayLabel;                                             // (Parm, NeedCtorLink)
	struct FString                                     playLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     selectLabelText;                                          // (Parm, NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.selectConsole
struct UOLCamcorderFilesHud_selectConsole_Params
{
	struct FString                                     Console;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.UsingPC
struct UOLCamcorderFilesHud_UsingPC_Params
{
};

// Function OLGame.OLCamcorderFilesHud.UsingXboxOne
struct UOLCamcorderFilesHud_UsingXboxOne_Params
{
};

// Function OLGame.OLCamcorderFilesHud.UsingPS4
struct UOLCamcorderFilesHud_UsingPS4_Params
{
};

// Function OLGame.OLCamcorderFilesHud.SetSouthPaw
struct UOLCamcorderFilesHud_SetSouthPaw_Params
{
	bool                                               bSouthPaw;                                                // (Parm)
};

// Function OLGame.OLCamcorderFilesHud.SetLocalizedText
struct UOLCamcorderFilesHud_SetLocalizedText_Params
{
	struct FString                                     zoomLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     navigationLabel;                                          // (Parm, NeedCtorLink)
	struct FString                                     cleanTextLabel;                                           // (Parm, NeedCtorLink)
	struct FString                                     selectLabel;                                              // (Parm, NeedCtorLink)
	struct FString                                     backLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     previousLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     nextLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     playLabel;                                                // (Parm, NeedCtorLink)
	struct FString                                     pauseLabel;                                               // (Parm, NeedCtorLink)
	struct FString                                     moveImage;                                                // (Parm, NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.PopulateFolderList
struct UOLCamcorderFilesHud_PopulateFolderList_Params
{
	bool                                               bRefreshOnly;                                             // (OptionalParm, Parm)
};

// Function OLGame.OLCamcorderFilesHud.WidgetInitialized
struct UOLCamcorderFilesHud_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.HideImageNavigateLabel
struct UOLCamcorderFilesHud_HideImageNavigateLabel_Params
{
};

// Function OLGame.OLCamcorderFilesHud.ShowImageNavigateLabel
struct UOLCamcorderFilesHud_ShowImageNavigateLabel_Params
{
};

// Function OLGame.OLCamcorderFilesHud.Pause
struct UOLCamcorderFilesHud_Pause_Params
{
};

// Function OLGame.OLCamcorderFilesHud.TogglePlayPause
struct UOLCamcorderFilesHud_TogglePlayPause_Params
{
};

// Function OLGame.OLCamcorderFilesHud.InputTypeChanged
struct UOLCamcorderFilesHud_InputTypeChanged_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeInputTypeChanged
struct UOLCamcorderFilesHud_NativeInputTypeChanged_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativePlaySound
struct UOLCamcorderFilesHud_NativePlaySound_Params
{
	class UAkEvent*                                    SndEvent;                                                 // (Parm)
};

// Function OLGame.OLCamcorderFilesHud.OnStop
struct UOLCamcorderFilesHud_OnStop_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeOnStop
struct UOLCamcorderFilesHud_NativeOnStop_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeFullStop
struct UOLCamcorderFilesHud_NativeFullStop_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnPlay
struct UOLCamcorderFilesHud_OnPlay_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeOnPlay
struct UOLCamcorderFilesHud_NativeOnPlay_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnDisplayChange
struct UOLCamcorderFilesHud_OnDisplayChange_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeOnDisplayChange
struct UOLCamcorderFilesHud_NativeOnDisplayChange_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnMove
struct UOLCamcorderFilesHud_OnMove_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnSelect
struct UOLCamcorderFilesHud_OnSelect_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnBack
struct UOLCamcorderFilesHud_OnBack_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnBackOnRootMenu
struct UOLCamcorderFilesHud_OnBackOnRootMenu_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeOnBackOnRootMenu
struct UOLCamcorderFilesHud_NativeOnBackOnRootMenu_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnScrollToIndexChange
struct UOLCamcorderFilesHud_OnScrollToIndexChange_Params
{
	int                                                ListIndex;                                                // (Parm)
	int                                                StartIndex;                                               // (Parm)
	int                                                endIndex;                                                 // (Parm)
};

// Function OLGame.OLCamcorderFilesHud.NativeOnScrollToIndexChange
struct UOLCamcorderFilesHud_NativeOnScrollToIndexChange_Params
{
	int                                                ListIndex;                                                // (Parm)
	int                                                StartIndex;                                               // (Parm)
	int                                                endIndex;                                                 // (Parm)
	bool                                               bForce;                                                   // (OptionalParm, Parm)
};

// Function OLGame.OLCamcorderFilesHud.OnFullScaleImageChanged
struct UOLCamcorderFilesHud_OnFullScaleImageChanged_Params
{
	bool                                               bInView;                                                  // (Parm)
	struct FString                                     photoName;                                                // (Parm, NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.NativeOnFullScaleImageChanged
struct UOLCamcorderFilesHud_NativeOnFullScaleImageChanged_Params
{
	bool                                               bInView;                                                  // (Parm)
	struct FString                                     photoName;                                                // (Parm, NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.NativeQuickOpen
struct UOLCamcorderFilesHud_NativeQuickOpen_Params
{
};

// Function OLGame.OLCamcorderFilesHud.SetLargePhotoURL
struct UOLCamcorderFilesHud_SetLargePhotoURL_Params
{
	int                                                folderIndex;                                              // (Parm)
	int                                                imageIndex;                                               // (Parm)
	struct FString                                     largePhotoURL;                                            // (Parm, NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.SelectRecording
struct UOLCamcorderFilesHud_SelectRecording_Params
{
	int                                                folderIndex;                                              // (Parm)
	int                                                imageIndex;                                               // (Parm)
};

// Function OLGame.OLCamcorderFilesHud.SetAllowSingleFolder
struct UOLCamcorderFilesHud_SetAllowSingleFolder_Params
{
	bool                                               bAllowSingleFolder;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.SetDisplayLabel
struct UOLCamcorderFilesHud_SetDisplayLabel_Params
{
	struct FString                                     Label;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.SetVisible
struct UOLCamcorderFilesHud_SetVisible_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function OLGame.OLCamcorderFilesHud.FlagRecordingAsRead
struct UOLCamcorderFilesHud_FlagRecordingAsRead_Params
{
	int                                                folderIndex;                                              // (Parm)
	int                                                recordingIndex;                                           // (Parm)
};

// Function OLGame.OLCamcorderFilesHud.DisplayChange
struct UOLCamcorderFilesHud_DisplayChange_Params
{
};

// Function OLGame.OLCamcorderFilesHud.RefreshData
struct UOLCamcorderFilesHud_RefreshData_Params
{
};

// Function OLGame.OLCamcorderFilesHud.SetListFocusIndex
struct UOLCamcorderFilesHud_SetListFocusIndex_Params
{
	int                                                indexA;                                                   // (Parm)
	int                                                indexB;                                                   // (Parm)
	int                                                indexC;                                                   // (Parm)
	int                                                indexD;                                                   // (Parm)
	int                                                indexE;                                                   // (Parm)
	int                                                indexF;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.SetLargeImageSize
struct UOLCamcorderFilesHud_SetLargeImageSize_Params
{
	float                                              SizeX;                                                    // (Parm)
	float                                              SizeY;                                                    // (Parm)
	float                                              PosX;                                                     // (Parm)
	float                                              PosY;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.DisallowInputChangeFocus
struct UOLCamcorderFilesHud_DisallowInputChangeFocus_Params
{
};

// Function OLGame.OLCamcorderFilesHud.AllowInputChangeFocus
struct UOLCamcorderFilesHud_AllowInputChangeFocus_Params
{
};

// Function OLGame.OLCamcorderFilesHud.PauseVideo
struct UOLCamcorderFilesHud_PauseVideo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.ConfigUI
struct UOLCamcorderFilesHud_ConfigUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.back
struct UOLCamcorderFilesHud_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.BackToMainMenu
struct UOLCamcorderFilesHud_BackToMainMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.Next
struct UOLCamcorderFilesHud_Next_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.Previous
struct UOLCamcorderFilesHud_Previous_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.RefreshLargeImage
struct UOLCamcorderFilesHud_RefreshLargeImage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.FilterButtonInput
struct UOLCamcorderFilesHud_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderHud.UpdateRecordingTime
struct UOLCamcorderHud_UpdateRecordingTime_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLCamcorderHud.WidgetInitialized
struct UOLCamcorderHud_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderHud.HandleUnpaused
struct UOLCamcorderHud_HandleUnpaused_Params
{
};

// Function OLGame.OLCamcorderHud.HandlePaused
struct UOLCamcorderHud_HandlePaused_Params
{
};

// Function OLGame.OLCamcorderHud.SetVisible
struct UOLCamcorderHud_SetVisible_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function OLGame.OLCameraActor.GetCameraView
struct AOLCameraActor_GetCameraView_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
};

// Function OLGame.OLCameraActor.NativeGetCameraView
struct AOLCameraActor_NativeGetCameraView_Params
{
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
};

// Function OLGame.OLTutorialManager.SetTutorialsEnabled
struct UOLTutorialManager_SetTutorialsEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function OLGame.OLTutorialManager.Clear
struct UOLTutorialManager_Clear_Params
{
};

// Function OLGame.OLPawn.DisplayDebug
struct AOLPawn_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLPawn.IsFirstPerson
struct AOLPawn_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.PlayLanded
struct AOLPawn_PlayLanded_Params
{
	struct FVector                                     landingLocation;                                          // (Parm)
	float                                              ImpactVel;                                                // (Parm)
};

// Function OLGame.OLPawn.Landed
struct AOLPawn_Landed_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function OLGame.OLPawn.Destroyed
struct AOLPawn_Destroyed_Params
{
};

// Function OLGame.OLPawn.MAT_BeginAIGroup
struct AOLPawn_MAT_BeginAIGroup_Params
{
	struct FVector                                     StartLoc;                                                 // (Parm)
	struct FRotator                                    StartRot;                                                 // (Parm)
	float                                              BlendTime;                                                // (Parm)
	bool                                               bDiscardSideAdjustments;                                  // (Parm)
};

// Function OLGame.OLPawn.AdjustToMatineeStageMark
struct AOLPawn_AdjustToMatineeStageMark_Params
{
	struct FVector                                     StartLoc;                                                 // (Parm)
	struct FRotator                                    StartRot;                                                 // (Parm)
	float                                              BlendTime;                                                // (Parm)
	bool                                               bDiscardSideAdjustments;                                  // (Parm)
};

// Function OLGame.OLPawn.PostInitAnimTree
struct AOLPawn_PostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function OLGame.OLPawn.PlayVOLine
struct AOLPawn_PlayVOLine_Params
{
	class UAkEvent*                                    LineToPlay;                                               // (Parm)
	struct FName                                       BoneName;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLPawn.GetMaterialBelowFeet
struct AOLPawn_GetMaterialBelowFeet_Params
{
	int                                                footIndex;                                                // (Parm)
	bool                                               bForceUpdate;                                             // (OptionalParm, Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.ClientRestart
struct AOLPawn_ClientRestart_Params
{
};

// Function OLGame.OLPawn.PlayFootStepSound
struct AOLPawn_PlayFootStepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
	class UAnimNotify_Footstep*                        footstepNotify;                                           // (Parm)
};

// Function OLGame.OLPawn.OnFootstep
struct AOLPawn_OnFootstep_Params
{
	int                                                FootDown;                                                 // (Parm)
	class UAnimNotify_Footstep*                        footstepNotify;                                           // (Parm)
};

// Function OLGame.OLPawn.SpawnFootstepDecal
struct AOLPawn_SpawnFootstepDecal_Params
{
	TEnumAsByte<EFootstepDecalType>                    DecalType;                                                // (Parm)
	bool                                               bLeftFoot;                                                // (Parm)
	float                                              Alpha;                                                    // (Parm)
};

// Function OLGame.OLPawn.ProcessNewFootstepDecal
struct AOLPawn_ProcessNewFootstepDecal_Params
{
	class UDecalComponent*                             NewDecalComp;                                             // (Parm, EditInline)
	TEnumAsByte<EFootstepDecalType>                    DecalType;                                                // (Parm)
	struct FVector                                     DecalLocation;                                            // (Parm, OutParm)
	float                                              DecalThickness;                                           // (Parm)
	bool                                               bLeftFoot;                                                // (Parm)
};

// Function OLGame.OLPawn.GetFootstepDecalTransform
struct AOLPawn_GetFootstepDecalTransform_Params
{
	bool                                               bLeftFoot;                                                // (Parm)
	struct FVector                                     DecalLocation;                                            // (Parm, OutParm)
	struct FRotator                                    DecalRotation;                                            // (Parm, OutParm)
};

// Function OLGame.OLPawn.FaceRotation
struct AOLPawn_FaceRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLPawn.GetEyeHeight
struct AOLPawn_GetEyeHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.GetPawnAmbientSound
struct AOLPawn_GetPawnAmbientSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.SetPawnAmbientSound
struct AOLPawn_SetPawnAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                          // (Parm)
};

// Function OLGame.OLPawn.Died
struct AOLPawn_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.EncroachedBy
struct AOLPawn_EncroachedBy_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function OLGame.OLPawn.SetPawnRBChannels
struct AOLPawn_SetPawnRBChannels_Params
{
	bool                                               bRagdollMode;                                             // (Parm)
};

// Function OLGame.OLPawn.OnAnimEnd
struct AOLPawn_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLPawn.ReattachMesh
struct AOLPawn_ReattachMesh_Params
{
};

// Function OLGame.OLPawn.UpdateShadowSettings
struct AOLPawn_UpdateShadowSettings_Params
{
	bool                                               bWantShadow;                                              // (Parm)
};

// Function OLGame.OLPawn.PostBeginPlay
struct AOLPawn_PostBeginPlay_Params
{
};

// Function OLGame.OLPawn.ProceduralAdjustNotify
struct AOLPawn_ProceduralAdjustNotify_Params
{
	float                                              Duration;                                                 // (Parm)
};

// Function OLGame.OLPawn.EnableCollisionNotify
struct AOLPawn_EnableCollisionNotify_Params
{
};

// Function OLGame.OLPawn.RestoreCollisionSizeNotify
struct AOLPawn_RestoreCollisionSizeNotify_Params
{
};

// Function OLGame.OLPawn.ChangeCollisionSizeNotify
struct AOLPawn_ChangeCollisionSizeNotify_Params
{
};

// Function OLGame.OLPawn.MoveInterruptibleNotify
struct AOLPawn_MoveInterruptibleNotify_Params
{
};

// Function OLGame.OLPawn.NativePostBeginPlay
struct AOLPawn_NativePostBeginPlay_Params
{
};

// Function OLGame.OLPawn.NativeOnAnimEnd
struct AOLPawn_NativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLPawn.StartSpecialMove
struct AOLPawn_StartSpecialMove_Params
{
	TEnumAsByte<ESpecialMoveType>                      moveType;                                                 // (Parm)
	struct FVector                                     targetPosition;                                           // (OptionalParm, Parm)
	struct FVector                                     TargetDirection;                                          // (OptionalParm, Parm)
	TEnumAsByte<EAdjustPositionTargetType>             TargetType;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLPawn.IsSpecialMoveCompleted
struct AOLPawn_IsSpecialMoveCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.NativeDestroyed
struct AOLPawn_NativeDestroyed_Params
{
};

// Function OLGame.OLHero.UnTouch
struct AOLHero_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function OLGame.OLHero.Touch
struct AOLHero_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLHero.NativeUnTouch
struct AOLHero_NativeUnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function OLGame.OLHero.NativeTouch
struct AOLHero_NativeTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLHero.IsInMainMenu
struct AOLHero_IsInMainMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.UpdateDifficultyBasedValues
struct AOLHero_UpdateDifficultyBasedValues_Params
{
};

// Function OLGame.OLHero.HandleTeleport
struct AOLHero_HandleTeleport_Params
{
	TArray<class UObject*>                             DestList;                                                 // (Parm, NeedCtorLink)
	bool                                               bUpdateRotation;                                          // (Parm)
	bool                                               bCheckOverlap;                                            // (Parm)
	float                                              TeleportDistance;                                         // (OptionalParm, Parm)
	TArray<class AVolume*>                             TeleportVolumes;                                          // (OptionalParm, Parm, NeedCtorLink)
	int                                                PreferredDestIndex;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.OutsideWorldBounds
struct AOLHero_OutsideWorldBounds_Params
{
};

// Function OLGame.OLHero.FellOutOfWorld
struct AOLHero_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function OLGame.OLHero.MakeFootstepNoise
struct AOLHero_MakeFootstepNoise_Params
{
	int                                                footIndex;                                                // (Parm)
};

// Function OLGame.OLHero.SetMeshVisibility
struct AOLHero_SetMeshVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm)
};

// Function OLGame.OLHero.EndViewTarget
struct AOLHero_EndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function OLGame.OLHero.BecomeViewTarget
struct AOLHero_BecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function OLGame.OLHero.PlayLanded
struct AOLHero_PlayLanded_Params
{
	struct FVector                                     landingLocation;                                          // (Parm)
	float                                              ImpactVel;                                                // (Parm)
};

// Function OLGame.OLHero.NativePlayLanded
struct AOLHero_NativePlayLanded_Params
{
	struct FVector                                     landingLocation;                                          // (Parm)
	float                                              ImpactVel;                                                // (Parm)
};

// Function OLGame.OLHero.TakeFallingDamage
struct AOLHero_TakeFallingDamage_Params
{
	struct FVector                                     fallLocation;                                             // (Parm)
};

// Function OLGame.OLHero.HealDamage
struct AOLHero_HealDamage_Params
{
	int                                                Amount;                                                   // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TakeDamage
struct AOLHero_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function OLGame.OLHero.DisplayDebug
struct AOLHero_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLHero.PostInitAnimTree
struct AOLHero_PostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function OLGame.OLHero.NativeInitAnimTree
struct AOLHero_NativeInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function OLGame.OLHero.PossessedBy
struct AOLHero_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function OLGame.OLHero.RefreshInventory
struct AOLHero_RefreshInventory_Params
{
};

// Function OLGame.OLHero.SetHeroWalkableFloor
struct AOLHero_SetHeroWalkableFloor_Params
{
	float                                              Angle;                                                    // (Parm)
};

// Function OLGame.OLHero.TryForceEnterRaft
struct AOLHero_TryForceEnterRaft_Params
{
	bool                                               ignoreAssertIfUnsucessful;                                // (OptionalParm, Parm)
};

// Function OLGame.OLHero.OverrideRaftAttachmentMode
struct AOLHero_OverrideRaftAttachmentMode_Params
{
	bool                                               bManuallyControlled;                                      // (Parm)
};

// Function OLGame.OLHero.AllowRiverMovement
struct AOLHero_AllowRiverMovement_Params
{
};

// Function OLGame.OLHero.DisallowRiverMovement
struct AOLHero_DisallowRiverMovement_Params
{
	bool                                               bClearVelocity;                                           // (Parm)
};

// Function OLGame.OLHero.QuickHeroTest
struct AOLHero_QuickHeroTest_Params
{
};

// Function OLGame.OLHero.CanBeGrabbedUnder
struct AOLHero_CanBeGrabbedUnder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.CanBeFatalitized
struct AOLHero_CanBeFatalitized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.CanBeAttacked
struct AOLHero_CanBeAttacked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.BarrelEntryNotify
struct AOLHero_BarrelEntryNotify_Params
{
};

// Function OLGame.OLHero.LandingMaybeStayCrouched
struct AOLHero_LandingMaybeStayCrouched_Params
{
};

// Function OLGame.OLHero.EndOfHandWatchingNotify
struct AOLHero_EndOfHandWatchingNotify_Params
{
};

// Function OLGame.OLHero.HandContactNotify
struct AOLHero_HandContactNotify_Params
{
};

// Function OLGame.OLHero.InventoryToggleNotify
struct AOLHero_InventoryToggleNotify_Params
{
};

// Function OLGame.OLHero.BodyBandageHideAllIfNotVisibleNotify
struct AOLHero_BodyBandageHideAllIfNotVisibleNotify_Params
{
};

// Function OLGame.OLHero.BodyBandageHideAllNotify
struct AOLHero_BodyBandageHideAllNotify_Params
{
};

// Function OLGame.OLHero.BodyBandageStepNotify
struct AOLHero_BodyBandageStepNotify_Params
{
};

// Function OLGame.OLHero.ShowPickupNotify
struct AOLHero_ShowPickupNotify_Params
{
};

// Function OLGame.OLHero.HidePickupNotify
struct AOLHero_HidePickupNotify_Params
{
};

// Function OLGame.OLHero.BandageDetachNotify
struct AOLHero_BandageDetachNotify_Params
{
};

// Function OLGame.OLHero.BandageAttachNotify
struct AOLHero_BandageAttachNotify_Params
{
};

// Function OLGame.OLHero.CSAActivationNotify
struct AOLHero_CSAActivationNotify_Params
{
};

// Function OLGame.OLHero.BarrelCoverDetachNotify
struct AOLHero_BarrelCoverDetachNotify_Params
{
};

// Function OLGame.OLHero.BarrelCoverAttachNotify
struct AOLHero_BarrelCoverAttachNotify_Params
{
};

// Function OLGame.OLHero.GlassesPickedUpNotify
struct AOLHero_GlassesPickedUpNotify_Params
{
};

// Function OLGame.OLHero.PutBackGlassesNotify
struct AOLHero_PutBackGlassesNotify_Params
{
};

// Function OLGame.OLHero.LoseGlassesNotify
struct AOLHero_LoseGlassesNotify_Params
{
};

// Function OLGame.OLHero.PostRaftBrokenNotify
struct AOLHero_PostRaftBrokenNotify_Params
{
};

// Function OLGame.OLHero.RaftDetachNotify
struct AOLHero_RaftDetachNotify_Params
{
};

// Function OLGame.OLHero.RaftAttachNotify
struct AOLHero_RaftAttachNotify_Params
{
};

// Function OLGame.OLHero.ExitingWaterNotify
struct AOLHero_ExitingWaterNotify_Params
{
};

// Function OLGame.OLHero.EnteringWaterNotify
struct AOLHero_EnteringWaterNotify_Params
{
};

// Function OLGame.OLHero.SlideUnderCommitStanceNotify
struct AOLHero_SlideUnderCommitStanceNotify_Params
{
};

// Function OLGame.OLHero.HideCamcorderNotify
struct AOLHero_HideCamcorderNotify_Params
{
};

// Function OLGame.OLHero.SetCamcorderVisibleNotify
struct AOLHero_SetCamcorderVisibleNotify_Params
{
};

// Function OLGame.OLHero.ResetNeckOffsetNotify
struct AOLHero_ResetNeckOffsetNotify_Params
{
};

// Function OLGame.OLHero.DecapitatedNotify
struct AOLHero_DecapitatedNotify_Params
{
};

// Function OLGame.OLHero.GroinInjuryNotify
struct AOLHero_GroinInjuryNotify_Params
{
};

// Function OLGame.OLHero.DieNotify
struct AOLHero_DieNotify_Params
{
};

// Function OLGame.OLHero.OverrideCameraSettingsNotify
struct AOLHero_OverrideCameraSettingsNotify_Params
{
	class UOLAnimNotify_OverrideCameraParams*          camParamsNotify;                                          // (Parm)
};

// Function OLGame.OLHero.BandageUsedNotify
struct AOLHero_BandageUsedNotify_Params
{
};

// Function OLGame.OLHero.BatteriesReloadedNotify
struct AOLHero_BatteriesReloadedNotify_Params
{
};

// Function OLGame.OLHero.CamcorderLoweredNotify
struct AOLHero_CamcorderLoweredNotify_Params
{
};

// Function OLGame.OLHero.CamcorderRaisedNotify
struct AOLHero_CamcorderRaisedNotify_Params
{
};

// Function OLGame.OLHero.CamcorderAvailableNotify
struct AOLHero_CamcorderAvailableNotify_Params
{
};

// Function OLGame.OLHero.WardrobeDoorEndNotify
struct AOLHero_WardrobeDoorEndNotify_Params
{
};

// Function OLGame.OLHero.WardrobeDoorNotify
struct AOLHero_WardrobeDoorNotify_Params
{
};

// Function OLGame.OLHero.BarrelInteractionEndNotify
struct AOLHero_BarrelInteractionEndNotify_Params
{
};

// Function OLGame.OLHero.BarrelInteractionNotify
struct AOLHero_BarrelInteractionNotify_Params
{
};

// Function OLGame.OLHero.BasementWindowEndNotify
struct AOLHero_BasementWindowEndNotify_Params
{
};

// Function OLGame.OLHero.BasementWindowNotify
struct AOLHero_BasementWindowNotify_Params
{
};

// Function OLGame.OLHero.WindowAnimEndNotify
struct AOLHero_WindowAnimEndNotify_Params
{
};

// Function OLGame.OLHero.WindowAnimStartNotify
struct AOLHero_WindowAnimStartNotify_Params
{
};

// Function OLGame.OLHero.TryInteractDoorOpen
struct AOLHero_TryInteractDoorOpen_Params
{
};

// Function OLGame.OLHero.DoorAnimNotify
struct AOLHero_DoorAnimNotify_Params
{
};

// Function OLGame.OLHero.DropNotify
struct AOLHero_DropNotify_Params
{
};

// Function OLGame.OLHero.PickupNotify
struct AOLHero_PickupNotify_Params
{
};

// Function OLGame.OLHero.TryGrabFromUnder
struct AOLHero_TryGrabFromUnder_Params
{
	class AOLEnemyPawn*                                Attacker;                                                 // (Parm)
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     AttackStartLocation;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromBed
struct AOLHero_TryGrabFromBed_Params
{
	class AOLEnemyPawn*                                Attacker;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromLocker
struct AOLHero_TryGrabFromLocker_Params
{
	class AOLEnemyPawn*                                Attacker;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.ExitCinematicMode
struct AOLHero_ExitCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 seqAction;                                                // (Parm)
};

// Function OLGame.OLHero.EnterCinematicMode
struct AOLHero_EnterCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 seqAction;                                                // (Parm)
};

// Function OLGame.OLHero.StartSpecialMove
struct AOLHero_StartSpecialMove_Params
{
	TEnumAsByte<ESpecialMoveType>                      moveType;                                                 // (Parm)
	struct FVector                                     targetPosition;                                           // (OptionalParm, Parm)
	struct FVector                                     TargetDirection;                                          // (OptionalParm, Parm)
	TEnumAsByte<EAdjustPositionTargetType>             TargetType;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLHero.RespawnHero
struct AOLHero_RespawnHero_Params
{
};

// Function OLGame.OLHero.OnPossess
struct AOLHero_OnPossess_Params
{
};

// Function OLGame.OLHero.ConditionalMakeDoorChimesNoise
struct AOLHero_ConditionalMakeDoorChimesNoise_Params
{
	class AOLDoorChimes*                               DoorChimes;                                               // (Parm)
};

// Function OLGame.OLHero.TakeKnockbackDamage
struct AOLHero_TakeKnockbackDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AActor*                                      InstigatedBy;                                             // (Parm)
	float                                              Knockback;                                                // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLHero.TakeElectricDamage
struct AOLHero_TakeElectricDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	float                                              Knockback;                                                // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	class UAkEvent*                                    ElectricSoundEvent;                                       // (Parm)
};

// Function OLGame.OLHero.NativeTakeFallingDamage
struct AOLHero_NativeTakeFallingDamage_Params
{
	struct FVector                                     fallLocation;                                             // (Parm)
};

// Function OLGame.OLHero.NativeTakeDamage
struct AOLHero_NativeTakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AActor*                                      InstigatedBy;                                             // (Parm)
	TEnumAsByte<EDamageType>                           DamageType;                                               // (Parm)
	struct FVector                                     OverrideDamageDirection;                                  // (OptionalParm, Parm)
	bool                                               bNonFatal;                                                // (OptionalParm, Parm)
};

// Function OLGame.OLHero.NativeDisplayDebug
struct AOLHero_NativeDisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLHero.GetCamera
struct AOLHero_GetCamera_Params
{
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
};

// Function OLGame.OLHero.NativeOnAnimEnd
struct AOLHero_NativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLHero.NativePostBeginPlay
struct AOLHero_NativePostBeginPlay_Params
{
};

// Function OLGame.OLHero.NativeDestroyed
struct AOLHero_NativeDestroyed_Params
{
};

// Function OLGame.OLHero.HandleSeamlessTeleport
struct AOLHero_HandleSeamlessTeleport_Params
{
};

// Function OLGame.OLHero.ResetAfterTeleport
struct AOLHero_ResetAfterTeleport_Params
{
};

// Function OLGame.OLHero.IsSprinting
struct AOLHero_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.IsRunning
struct AOLHero_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryRun
struct AOLHero_TryRun_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.Walk
struct AOLHero_Walk_Params
{
};

// Function OLGame.OLHero.GetViewRotation
struct AOLHero_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.GetPawnViewLocation
struct AOLHero_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.UnlockAchievement
struct AOLPlayerController_UnlockAchievement_Params
{
	TEnumAsByte<EOutlastAchievement>                   achievement;                                              // (Parm)
};

// Function OLGame.OLPlayerController.NotifyDifficultyChanged
struct AOLPlayerController_NotifyDifficultyChanged_Params
{
};

// Function OLGame.OLPlayerController.UpdateDifficultyBasedValues
struct AOLPlayerController_UpdateDifficultyBasedValues_Params
{
};

// Function OLGame.OLPlayerController.CheckForProfileUpdate
struct AOLPlayerController_CheckForProfileUpdate_Params
{
};

// Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings
struct AOLPlayerController_UpdateLocalCacheOfProfileSettings_Params
{
	class UOLProfileSettings*                          EffectiveProfileSettings;                                 // (Parm)
};

// Function OLGame.OLPlayerController.ClientSaveAllPlayerData
struct AOLPlayerController_ClientSaveAllPlayerData_Params
{
	bool                                               bShouldForce;                                             // (OptionalParm, Parm)
	bool                                               bSkipCacheUpdate;                                         // (OptionalParm, Parm)
};

// Function OLGame.OLPlayerController.OnProfileWriteComplete
struct AOLPlayerController_OnProfileWriteComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OLGame.OLPlayerController.ClearSaveProfileDelegate
struct AOLPlayerController_ClearSaveProfileDelegate_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.ResetProfile
struct AOLPlayerController_ResetProfile_Params
{
};

// Function OLGame.OLPlayerController.SaveProfile
struct AOLPlayerController_SaveProfile_Params
{
};

// Function OLGame.OLPlayerController.OnControllerChanged
struct AOLPlayerController_OnControllerChanged_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
};

// Function OLGame.OLPlayerController.NativeOnControllerChanged
struct AOLPlayerController_NativeOnControllerChanged_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
};

// Function OLGame.OLPlayerController.UnregisterPlayerDataStores
struct AOLPlayerController_UnregisterPlayerDataStores_Params
{
};

// Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores
struct AOLPlayerController_RegisterCustomPlayerDataStores_Params
{
};

// Function OLGame.OLPlayerController.CheatGiveAllCollectibles
struct AOLPlayerController_CheatGiveAllCollectibles_Params
{
};

// Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints
struct AOLPlayerController_ShippingCheat_GiveAllCheckpoints_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.QueueClearWorldState
struct AOLPlayerController_QueueClearWorldState_Params
{
};

// Function OLGame.OLPlayerController.ClearSavedStates
struct AOLPlayerController_ClearSavedStates_Params
{
};

// Function OLGame.OLPlayerController.ClearAllProgress
struct AOLPlayerController_ClearAllProgress_Params
{
};

// Function OLGame.OLPlayerController.SaveBeforeQuitting
struct AOLPlayerController_SaveBeforeQuitting_Params
{
};

// Function OLGame.OLPlayerController.ClientCommitMapChangeNoOverlay
struct AOLPlayerController_ClientCommitMapChangeNoOverlay_Params
{
};

// Function OLGame.OLPlayerController.ClientCommitMapChange
struct AOLPlayerController_ClientCommitMapChange_Params
{
};

// Function OLGame.OLPlayerController.StartNewGameAtCheckpoint
struct AOLPlayerController_StartNewGameAtCheckpoint_Params
{
	struct FString                                     CheckpointStr;                                            // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               bSaveToDisk;                                              // (Parm)
};

// Function OLGame.OLPlayerController.ApplyCheckpointRecord
struct AOLPlayerController_ApplyCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.GetSaveGameNameFromRecord
struct AOLPlayerController_GetSaveGameNameFromRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     SaveGameName;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.CreateCheckpointRecord
struct AOLPlayerController_CreateCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.SetSaveGameName
struct AOLPlayerController_SetSaveGameName_Params
{
	struct FString                                     SaveGameName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.GetSaveGameName
struct AOLPlayerController_GetSaveGameName_Params
{
	struct FString                                     SaveGameName;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeGetSaveGameNameFromRecord
struct AOLPlayerController_NativeGetSaveGameNameFromRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     SaveGameName;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeApplyCheckpointRecord
struct AOLPlayerController_NativeApplyCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeGetCurrentCheckpointRecord
struct AOLPlayerController_NativeGetCurrentCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.StopAllSounds
struct AOLPlayerController_StopAllSounds_Params
{
};

// Function OLGame.OLPlayerController.DrawHUD
struct AOLPlayerController_DrawHUD_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function OLGame.OLPlayerController.FullScreenOverlayChanged
struct AOLPlayerController_FullScreenOverlayChanged_Params
{
};

// Function OLGame.OLPlayerController.ForcePause
struct AOLPlayerController_ForcePause_Params
{
	bool                                               bPause;                                                   // (Parm)
};

// Function OLGame.OLPlayerController.ClientSetHUD
struct AOLPlayerController_ClientSetHUD_Params
{
	class UClass*                                      newHUDType;                                               // (Parm)
};

// Function OLGame.OLPlayerController.OnSetMesh
struct AOLPlayerController_OnSetMesh_Params
{
	class USeqAct_SetMesh*                             Action;                                                   // (Parm)
};

// Function OLGame.OLPlayerController.ClientSetCameraFade
struct AOLPlayerController_ClientSetCameraFade_Params
{
	bool                                               _enableFading;                                            // (Parm)
	struct FColor                                      _FadeColor;                                               // (OptionalParm, Parm)
	struct FVector2D                                   _FadeAlpha;                                               // (OptionalParm, Parm)
	float                                              _FadeTime;                                                // (OptionalParm, Parm)
	bool                                               _fadeAudio;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLPlayerController.SetCinematicMode
struct AOLPlayerController_SetCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 Action;                                                   // (Parm)
	bool                                               bInCinematicMode;                                         // (Parm)
	bool                                               bHidePlayer;                                              // (Parm)
	bool                                               bAffectsHUD;                                              // (Parm)
	bool                                               bAffectsMovement;                                         // (Parm)
	bool                                               bAffectsTurning;                                          // (Parm)
	bool                                               bAffectsButtons;                                          // (Parm)
};

// Function OLGame.OLPlayerController.GetPlayerViewPoint
struct AOLPlayerController_GetPlayerViewPoint_Params
{
	struct FVector                                     POVLocation;                                              // (Parm, OutParm)
	struct FRotator                                    POVRotation;                                              // (Parm, OutParm)
};

// Function OLGame.OLPlayerController.GetFOVAngle
struct AOLPlayerController_GetFOVAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.SpawnCamera
struct AOLPlayerController_SpawnCamera_Params
{
};

// Function OLGame.OLPlayerController.SetCameraMode
struct AOLPlayerController_SetCameraMode_Params
{
	struct FName                                       NewCamMode;                                               // (Parm)
};

// Function OLGame.OLPlayerController.UsingFirstPersonCamera
struct AOLPlayerController_UsingFirstPersonCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.SetBehindView
struct AOLPlayerController_SetBehindView_Params
{
	bool                                               bNewBehindView;                                           // (Parm)
};

// Function OLGame.OLPlayerController.BehindView
struct AOLPlayerController_BehindView_Params
{
};

// Function OLGame.OLPlayerController.NotifyProfileChanged
struct AOLPlayerController_NotifyProfileChanged_Params
{
};

// Function OLGame.OLPlayerController.CleanTextFilterButtonInput
struct AOLPlayerController_CleanTextFilterButtonInput_Params
{
	struct FName                                       ButtonName;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.IsLookInputIgnored
struct AOLPlayerController_IsLookInputIgnored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.ToggleCrawl
struct AOLPlayerController_ToggleCrawl_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionE
struct AOLPlayerController_PrototypeActionE_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionD
struct AOLPlayerController_PrototypeActionD_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionC
struct AOLPlayerController_PrototypeActionC_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionB
struct AOLPlayerController_PrototypeActionB_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionA
struct AOLPlayerController_PrototypeActionA_Params
{
};

// Function OLGame.OLPlayerController.GammaCalibration
struct AOLPlayerController_GammaCalibration_Params
{
};

// Function OLGame.OLPlayerController.ToggleInventory
struct AOLPlayerController_ToggleInventory_Params
{
};

// Function OLGame.OLPlayerController.ToggleMicrophone
struct AOLPlayerController_ToggleMicrophone_Params
{
};

// Function OLGame.OLPlayerController.ToggleRun
struct AOLPlayerController_ToggleRun_Params
{
};

// Function OLGame.OLPlayerController.PressedJump
struct AOLPlayerController_PressedJump_Params
{
};

// Function OLGame.OLPlayerController.PressedUseBandage
struct AOLPlayerController_PressedUseBandage_Params
{
};

// Function OLGame.OLPlayerController.ReleasedReloadBatteries
struct AOLPlayerController_ReleasedReloadBatteries_Params
{
};

// Function OLGame.OLPlayerController.PressedReloadBatteries
struct AOLPlayerController_PressedReloadBatteries_Params
{
};

// Function OLGame.OLPlayerController.StopZoom
struct AOLPlayerController_StopZoom_Params
{
};

// Function OLGame.OLPlayerController.StartZoomOut
struct AOLPlayerController_StartZoomOut_Params
{
};

// Function OLGame.OLPlayerController.StartZoomIn
struct AOLPlayerController_StartZoomIn_Params
{
};

// Function OLGame.OLPlayerController.ZoomOut
struct AOLPlayerController_ZoomOut_Params
{
};

// Function OLGame.OLPlayerController.ZoomIn
struct AOLPlayerController_ZoomIn_Params
{
};

// Function OLGame.OLPlayerController.ToggleCamcorder
struct AOLPlayerController_ToggleCamcorder_Params
{
};

// Function OLGame.OLPlayerController.ToggleNightVision
struct AOLPlayerController_ToggleNightVision_Params
{
};

// Function OLGame.OLPlayerController.ReleasedUseButton
struct AOLPlayerController_ReleasedUseButton_Params
{
};

// Function OLGame.OLPlayerController.PressedUseButton
struct AOLPlayerController_PressedUseButton_Params
{
};

// Function OLGame.OLPlayerController.PerformedUseAction
struct AOLPlayerController_PerformedUseAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.ResetWorldNoCheckpoint
struct AOLPlayerController_ResetWorldNoCheckpoint_Params
{
};

// Function OLGame.OLPlayerController.Destroyed
struct AOLPlayerController_Destroyed_Params
{
};

// Function OLGame.OLPlayerController.ClientRestart
struct AOLPlayerController_ClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm)
};

// Function OLGame.OLPlayerController.Reset
struct AOLPlayerController_Reset_Params
{
};

// Function OLGame.OLPlayerController.UnPossess
struct AOLPlayerController_UnPossess_Params
{
};

// Function OLGame.OLPlayerController.Possess
struct AOLPlayerController_Possess_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function OLGame.OLPlayerController.PostBeginPlay
struct AOLPlayerController_PostBeginPlay_Params
{
};

// Function OLGame.OLPlayerController.ShowRecordingTime
struct AOLPlayerController_ShowRecordingTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.GetGraphicAPIString
struct AOLPlayerController_GetGraphicAPIString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.ShowGraphicAPIString
struct AOLPlayerController_ShowGraphicAPIString_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.HideLoadingOverlay
struct AOLPlayerController_HideLoadingOverlay_Params
{
};

// Function OLGame.OLPlayerController.ShowLoadingOverlay
struct AOLPlayerController_ShowLoadingOverlay_Params
{
};

// Function OLGame.OLPlayerController.SetVolume
struct AOLPlayerController_SetVolume_Params
{
	float                                              VolumeLevel;                                              // (Parm)
};

// Function OLGame.OLPlayerController.ApplyKeyBindings
struct AOLPlayerController_ApplyKeyBindings_Params
{
	class UOLProfileSettings*                          UserConfiguredSettings;                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.SetGamma
struct AOLPlayerController_SetGamma_Params
{
	float                                              GammaValue;                                               // (Parm)
};

// Function OLGame.OLPlayerController.GetGamma
struct AOLPlayerController_GetGamma_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.NativePlayerMove
struct AOLPlayerController_NativePlayerMove_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLCheatManager.ToggleFakeLongSubtitles
struct UOLCheatManager_ToggleFakeLongSubtitles_Params
{
};

// Function OLGame.OLCheatManager.ToggleFakeRecordingReadFailure
struct UOLCheatManager_ToggleFakeRecordingReadFailure_Params
{
};

// Function OLGame.OLCheatManager.ToggleFakeRecordingWriteFailure
struct UOLCheatManager_ToggleFakeRecordingWriteFailure_Params
{
};

// Function OLGame.OLCheatManager.ClearAllDingoRecordings
struct UOLCheatManager_ClearAllDingoRecordings_Params
{
};

// Function OLGame.OLCheatManager.FakeDingoRecordingRight
struct UOLCheatManager_FakeDingoRecordingRight_Params
{
};

// Function OLGame.OLCheatManager.DingoTest
struct UOLCheatManager_DingoTest_Params
{
};

// Function OLGame.OLCheatManager.ResetTutorialReminderTimers
struct UOLCheatManager_ResetTutorialReminderTimers_Params
{
};

// Function OLGame.OLCheatManager.IsFakeNotFullyDownloaded
struct UOLCheatManager_IsFakeNotFullyDownloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCheatManager.ToggleGameFullyDownloaded
struct UOLCheatManager_ToggleGameFullyDownloaded_Params
{
};

// Function OLGame.OLCheatManager.TriggerNotDownloadScreen
struct UOLCheatManager_TriggerNotDownloadScreen_Params
{
};

// Function OLGame.OLCheatManager.FakeControllerDisconnected
struct UOLCheatManager_FakeControllerDisconnected_Params
{
	bool                                               bDelayedPause;                                            // (Parm)
};

// Function OLGame.OLCheatManager.ForceHandsCrucifixion
struct UOLCheatManager_ForceHandsCrucifixion_Params
{
};

// Function OLGame.OLCheatManager.DecrementDifficultyModeModifier
struct UOLCheatManager_DecrementDifficultyModeModifier_Params
{
};

// Function OLGame.OLCheatManager.IncrementDifficultyModeModifier
struct UOLCheatManager_IncrementDifficultyModeModifier_Params
{
};

// Function OLGame.OLCheatManager.DecrementDifficultyMode
struct UOLCheatManager_DecrementDifficultyMode_Params
{
};

// Function OLGame.OLCheatManager.IncrementDifficultyMode
struct UOLCheatManager_IncrementDifficultyMode_Params
{
};

// Function OLGame.OLCheatManager.ToggleCharacterPhysicDebug
struct UOLCheatManager_ToggleCharacterPhysicDebug_Params
{
};

// Function OLGame.OLCheatManager.TryGeneratePath
struct UOLCheatManager_TryGeneratePath_Params
{
	float                                              PosX;                                                     // (Parm)
	float                                              PosY;                                                     // (Parm)
	float                                              PosZ;                                                     // (Parm)
	bool                                               bTight;                                                   // (OptionalParm, Parm)
	float                                              BufferDist;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.SetAIVerbosity
struct UOLCheatManager_SetAIVerbosity_Params
{
	int                                                NewVerbosity;                                             // (Parm)
};

// Function OLGame.OLCheatManager.KillSelectedEnemy
struct UOLCheatManager_KillSelectedEnemy_Params
{
};

// Function OLGame.OLCheatManager.KillAllEnemiesButSelected
struct UOLCheatManager_KillAllEnemiesButSelected_Params
{
};

// Function OLGame.OLCheatManager.KillAllEnemies
struct UOLCheatManager_KillAllEnemies_Params
{
};

// Function OLGame.OLCheatManager.CleanupAfterKillAll
struct UOLCheatManager_CleanupAfterKillAll_Params
{
};

// Function OLGame.OLCheatManager.SetLanguage
struct UOLCheatManager_SetLanguage_Params
{
	struct FString                                     LanguageCode;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.ReloadSoundBanks
struct UOLCheatManager_ReloadSoundBanks_Params
{
	bool                                               bFrenchVO;                                                // (Parm)
};

// Function OLGame.OLCheatManager.ProcessCheatInput
struct UOLCheatManager_ProcessCheatInput_Params
{
	struct FName                                       Key;                                                      // (Parm)
	bool                                               bPressed;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCheatManager.StartGamepadCheckpoint
struct UOLCheatManager_StartGamepadCheckpoint_Params
{
};

// Function OLGame.OLCheatManager.ScrollGamepadCPIdx
struct UOLCheatManager_ScrollGamepadCPIdx_Params
{
	bool                                               bForward;                                                 // (Parm)
};

// Function OLGame.OLCheatManager.IsViewModeUnlit
struct UOLCheatManager_IsViewModeUnlit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCheatManager.ResetProfileProgression
struct UOLCheatManager_ResetProfileProgression_Params
{
};

// Function OLGame.OLCheatManager.SetLastCheckpointName
struct UOLCheatManager_SetLastCheckpointName_Params
{
	struct FString                                     CPName;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.SetLastCheckpointId
struct UOLCheatManager_SetLastCheckpointId_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function OLGame.OLCheatManager.SetFinishedGame
struct UOLCheatManager_SetFinishedGame_Params
{
	bool                                               hasFinishedGame;                                          // (Parm)
	bool                                               hasFinishedDLC;                                           // (Parm)
};

// Function OLGame.OLCheatManager.OutlastPause
struct UOLCheatManager_OutlastPause_Params
{
};

// Function OLGame.OLCheatManager.DebugClosestAI
struct UOLCheatManager_DebugClosestAI_Params
{
};

// Function OLGame.OLCheatManager.ResetGS
struct UOLCheatManager_ResetGS_Params
{
};

// Function OLGame.OLCheatManager.DeactivateGS
struct UOLCheatManager_DeactivateGS_Params
{
	struct FName                                       gsName;                                                   // (Parm)
};

// Function OLGame.OLCheatManager.ActivateGS
struct UOLCheatManager_ActivateGS_Params
{
	struct FName                                       gsName;                                                   // (Parm)
};

// Function OLGame.OLCheatManager.DumpGS
struct UOLCheatManager_DumpGS_Params
{
};

// Function OLGame.OLCheatManager.DebugPhysMaterials
struct UOLCheatManager_DebugPhysMaterials_Params
{
};

// Function OLGame.OLCheatManager.DebugPerception
struct UOLCheatManager_DebugPerception_Params
{
};

// Function OLGame.OLCheatManager.OldBotPhysics
struct UOLCheatManager_OldBotPhysics_Params
{
};

// Function OLGame.OLCheatManager.NewBotPhysics
struct UOLCheatManager_NewBotPhysics_Params
{
};

// Function OLGame.OLCheatManager.OldHeroPhysics
struct UOLCheatManager_OldHeroPhysics_Params
{
};

// Function OLGame.OLCheatManager.NewHeroPhysics
struct UOLCheatManager_NewHeroPhysics_Params
{
};

// Function OLGame.OLCheatManager.OldPhysics
struct UOLCheatManager_OldPhysics_Params
{
};

// Function OLGame.OLCheatManager.newPhysics
struct UOLCheatManager_newPhysics_Params
{
};

// Function OLGame.OLCheatManager.ToggleHeroInclusionForSimplifiedPhysics
struct UOLCheatManager_ToggleHeroInclusionForSimplifiedPhysics_Params
{
};

// Function OLGame.OLCheatManager.TogglePhysicsMode
struct UOLCheatManager_TogglePhysicsMode_Params
{
};

// Function OLGame.OLCheatManager.SetSimplifiedPhysics
struct UOLCheatManager_SetSimplifiedPhysics_Params
{
	bool                                               bHero;                                                    // (Parm)
	bool                                               bBots;                                                    // (Parm)
	bool                                               bSimplified;                                              // (Parm)
};

// Function OLGame.OLCheatManager.SetNewPhysics
struct UOLCheatManager_SetNewPhysics_Params
{
	bool                                               bHero;                                                    // (Parm)
	bool                                               bBots;                                                    // (Parm)
};

// Function OLGame.OLCheatManager.SuppressAllMessages
struct UOLCheatManager_SuppressAllMessages_Params
{
};

// Function OLGame.OLCheatManager.AIEvents
struct UOLCheatManager_AIEvents_Params
{
	int                                                NumLines;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.AILogs
struct UOLCheatManager_AILogs_Params
{
	int                                                NumLines;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.DrawDebug
struct UOLCheatManager_DrawDebug_Params
{
};

// Function OLGame.OLCheatManager.ToggleMute
struct UOLCheatManager_ToggleMute_Params
{
};

// Function OLGame.OLCheatManager.SetVolumeThreshold
struct UOLCheatManager_SetVolumeThreshold_Params
{
	float                                              NewThreshold;                                             // (Parm)
};

// Function OLGame.OLCheatManager.MakeNoise
struct UOLCheatManager_MakeNoise_Params
{
	float                                              NoiseAmount;                                              // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.InflictDamage
struct UOLCheatManager_InflictDamage_Params
{
	float                                              Amount;                                                   // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.ResetTutorials
struct UOLCheatManager_ResetTutorials_Params
{
};

// Function OLGame.OLCheatManager.ResetWorldToSavedState
struct UOLCheatManager_ResetWorldToSavedState_Params
{
};

// Function OLGame.OLCheatManager.ResetWorldState
struct UOLCheatManager_ResetWorldState_Params
{
};

// Function OLGame.OLCheatManager.ResetPushables
struct UOLCheatManager_ResetPushables_Params
{
};

// Function OLGame.OLCheatManager.ResetDoors
struct UOLCheatManager_ResetDoors_Params
{
};

// Function OLGame.OLCheatManager.GammaDown
struct UOLCheatManager_GammaDown_Params
{
};

// Function OLGame.OLCheatManager.GammaUp
struct UOLCheatManager_GammaUp_Params
{
};

// Function OLGame.OLCheatManager.SetGamma
struct UOLCheatManager_SetGamma_Params
{
	float                                              newGamma;                                                 // (Parm)
};

// Function OLGame.OLCheatManager.LoadGame
struct UOLCheatManager_LoadGame_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.SaveGame
struct UOLCheatManager_SaveGame_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.LoseBandages
struct UOLCheatManager_LoseBandages_Params
{
};

// Function OLGame.OLCheatManager.GiveItem
struct UOLCheatManager_GiveItem_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.ApplyCP
struct UOLCheatManager_ApplyCP_Params
{
	struct FString                                     CPName;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.cplist
struct UOLCheatManager_cplist_Params
{
};

// Function OLGame.OLCheatManager.cp
struct UOLCheatManager_cp_Params
{
	struct FString                                     CPName;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.Checkpoint
struct UOLCheatManager_Checkpoint_Params
{
	struct FString                                     CPName;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.KillFade
struct UOLCheatManager_KillFade_Params
{
};

// Function OLGame.OLCheatManager.ToggleUnlimitedBatteries
struct UOLCheatManager_ToggleUnlimitedBatteries_Params
{
};

// Function OLGame.OLCheatManager.LoseAllProfileRecordingMoment
struct UOLCheatManager_LoseAllProfileRecordingMoment_Params
{
};

// Function OLGame.OLCheatManager.LoseRecordingMoment
struct UOLCheatManager_LoseRecordingMoment_Params
{
	struct FString                                     moment;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.GetRecordingMoment
struct UOLCheatManager_GetRecordingMoment_Params
{
	struct FString                                     moment;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.GetAllRecordingMoments
struct UOLCheatManager_GetAllRecordingMoments_Params
{
};

// Function OLGame.OLCheatManager.ResetBandageTime
struct UOLCheatManager_ResetBandageTime_Params
{
};

// Function OLGame.OLCheatManager.ForceHeroSkin
struct UOLCheatManager_ForceHeroSkin_Params
{
	int                                                Type;                                                     // (Parm)
	int                                                SubType;                                                  // (Parm)
};

// Function OLGame.OLCheatManager.AddBandage
struct UOLCheatManager_AddBandage_Params
{
};

// Function OLGame.OLCheatManager.RechargeNightVision
struct UOLCheatManager_RechargeNightVision_Params
{
};

// Function OLGame.OLCheatManager.Ghost
struct UOLCheatManager_Ghost_Params
{
};

// Function OLGame.OLCheatManager.GhostPawn
struct UOLCheatManager_GhostPawn_Params
{
	bool                                               ghosting;                                                 // (Parm)
};

// Function OLGame.OLCheatManager.FasterGameSpeed
struct UOLCheatManager_FasterGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.SlowerGameSpeed
struct UOLCheatManager_SlowerGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.NormalGameSpeed
struct UOLCheatManager_NormalGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.UpdateGameSpeed
struct UOLCheatManager_UpdateGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.SingleFrame
struct UOLCheatManager_SingleFrame_Params
{
};

// Function OLGame.OLCheatManager.TeleportToFreeCam
struct UOLCheatManager_TeleportToFreeCam_Params
{
};

// Function OLGame.OLCheatManager.ToggleFixedCam
struct UOLCheatManager_ToggleFixedCam_Params
{
};

// Function OLGame.OLCheatManager.ToggleFreeCamNoPause
struct UOLCheatManager_ToggleFreeCamNoPause_Params
{
};

// Function OLGame.OLCheatManager.ToggleFreeCam
struct UOLCheatManager_ToggleFreeCam_Params
{
};

// Function OLGame.OLCheatManager.AutoSpike
struct UOLCheatManager_AutoSpike_Params
{
	float                                              Spike;                                                    // (OptionalParm, Parm)
	float                                              Delay;                                                    // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.Spike
struct UOLCheatManager_Spike_Params
{
	float                                              Spike;                                                    // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.BadFPS
struct UOLCheatManager_BadFPS_Params
{
	float                                              slowdown;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.DebugAI
struct UOLCheatManager_DebugAI_Params
{
};

// Function OLGame.OLCheatManager.ShowHeroDebug
struct UOLCheatManager_ShowHeroDebug_Params
{
};

// Function OLGame.OLCheatManager.ShowOLProfiler
struct UOLCheatManager_ShowOLProfiler_Params
{
};

// Function OLGame.OLCheatManager.ShowPerformance
struct UOLCheatManager_ShowPerformance_Params
{
};

// Function OLGame.OLCheatManager.ShowCollisions
struct UOLCheatManager_ShowCollisions_Params
{
};

// Function OLGame.OLCheatManager.ShowPaths
struct UOLCheatManager_ShowPaths_Params
{
};

// Function OLGame.OLCheatManager.ShowStatLevels
struct UOLCheatManager_ShowStatLevels_Params
{
};

// Function OLGame.OLCheatManager.DebugSubtitles
struct UOLCheatManager_DebugSubtitles_Params
{
};

// Function OLGame.OLCheatManager.LogSoundEvents
struct UOLCheatManager_LogSoundEvents_Params
{
};

// Function OLGame.OLCheatManager.DebugVO
struct UOLCheatManager_DebugVO_Params
{
};

// Function OLGame.OLCheatManager.DebugGameState
struct UOLCheatManager_DebugGameState_Params
{
};

// Function OLGame.OLCheatManager.DebugAIConfig
struct UOLCheatManager_DebugAIConfig_Params
{
};

// Function OLGame.OLCheatManager.SlowStreaming
struct UOLCheatManager_SlowStreaming_Params
{
};

// Function OLGame.OLCheatManager.DebugAIAnims
struct UOLCheatManager_DebugAIAnims_Params
{
};

// Function OLGame.OLCheatManager.DebugInvestigation
struct UOLCheatManager_DebugInvestigation_Params
{
};

// Function OLGame.OLCheatManager.DebugClearance
struct UOLCheatManager_DebugClearance_Params
{
};

// Function OLGame.OLCheatManager.DebugSoundMeter
struct UOLCheatManager_DebugSoundMeter_Params
{
};

// Function OLGame.OLCheatManager.ShowPrecomputedLightVolumes
struct UOLCheatManager_ShowPrecomputedLightVolumes_Params
{
};

// Function OLGame.OLCheatManager.DebugTrajectory
struct UOLCheatManager_DebugTrajectory_Params
{
};

// Function OLGame.OLCheatManager.DebugKismet
struct UOLCheatManager_DebugKismet_Params
{
	struct FString                                     Filter;                                                   // (OptionalParm, Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.DebugCamera
struct UOLCheatManager_DebugCamera_Params
{
};

// Function OLGame.OLCheatManager.DebugLineChecks
struct UOLCheatManager_DebugLineChecks_Params
{
};

// Function OLGame.OLCheatManager.DumpKismetLog
struct UOLCheatManager_DumpKismetLog_Params
{
	struct FString                                     Filter;                                                   // (OptionalParm, Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.DebugSoundEnvironment
struct UOLCheatManager_DebugSoundEnvironment_Params
{
	struct FString                                     Filter;                                                   // (OptionalParm, Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.DebugGameplay
struct UOLCheatManager_DebugGameplay_Params
{
};

// Function OLGame.OLCheatManager.SaveAllCheckpoints
struct UOLCheatManager_SaveAllCheckpoints_Params
{
};

// Function OLGame.OLCheatManager.DeleteAllSaves
struct UOLCheatManager_DeleteAllSaves_Params
{
};

// Function OLGame.OLCheatManager.KillAll
struct UOLCheatManager_KillAll_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
};

// Function OLGame.OLCheatManager.God
struct UOLCheatManager_God_Params
{
};

// Function OLGame.OLCheatManager.TakeScreenshot
struct UOLCheatManager_TakeScreenshot_Params
{
};

// Function OLGame.OLCheatManager.CycleCollisionView
struct UOLCheatManager_CycleCollisionView_Params
{
};

// Function OLGame.OLCheatManager.ViewShaderComplexity
struct UOLCheatManager_ViewShaderComplexity_Params
{
};

// Function OLGame.OLCheatManager.ViewDetailLighting
struct UOLCheatManager_ViewDetailLighting_Params
{
};

// Function OLGame.OLCheatManager.ViewLit
struct UOLCheatManager_ViewLit_Params
{
};

// Function OLGame.OLCheatManager.ViewUnlit
struct UOLCheatManager_ViewUnlit_Params
{
};

// Function OLGame.OLCheatManager.ViewWireframe
struct UOLCheatManager_ViewWireframe_Params
{
};

// Function OLGame.OLCheatManager.ToggleGamepadCheats
struct UOLCheatManager_ToggleGamepadCheats_Params
{
};

// Function OLGame.OLCheatManager.ToggleCheats
struct UOLCheatManager_ToggleCheats_Params
{
};

// Function OLGame.OLCheatManager.CheatMessage
struct UOLCheatManager_CheatMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.GetCheatManager
struct UOLCheatManager_GetCheatManager_Params
{
	class UOLCheatManager*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCheckpoint.OnPlayerSpawn
struct AOLCheckpoint_OnPlayerSpawn_Params
{
};

// Function OLGame.OLCheckpointList.Script_IsUnreached
struct AOLCheckpointList_Script_IsUnreached_Params
{
	struct FName                                       TestCheckpoint;                                           // (Const, Parm, OutParm)
	struct FName                                       CurrentCheckpoint;                                        // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLConsole.InputKey
struct UOLConsole_InputKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	float                                              AmountDepressed;                                          // (OptionalParm, Parm)
	bool                                               bGamepad;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLConsole.AddCustomCommandsToAutoComplete
struct UOLConsole_AddCustomCommandsToAutoComplete_Params
{
};

// Function OLGame.OLDamageActor.OnToggle
struct AOLDamageActor_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLDLCManager.FindAndInstallDLC
struct UOLDLCManager_FindAndInstallDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.BreakDoor
struct AOLDoor_BreakDoor_Params
{
	class AOLPawn*                                     Breaker;                                                  // (Parm)
	bool                                               bReversed;                                                // (Parm)
	bool                                               bNoSound;                                                 // (Parm)
};

// Function OLGame.OLDoor.BashDoor
struct AOLDoor_BashDoor_Params
{
	bool                                               bReversed;                                                // (Parm)
};

// Function OLGame.OLDoor.ShouldBreak
struct AOLDoor_ShouldBreak_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.InterpolationFinished
struct AOLDoor_InterpolationFinished_Params
{
	class USeqAct_Interp*                              InterpAction;                                             // (Parm)
};

// Function OLGame.OLDoor.InterpolationStarted
struct AOLDoor_InterpolationStarted_Params
{
	class USeqAct_Interp*                              InterpAction;                                             // (Parm)
	class UInterpGroupInst*                            GroupInst;                                                // (Parm)
};

// Function OLGame.OLDoor.StopMatineeAnim
struct AOLDoor_StopMatineeAnim_Params
{
	bool                                               bHeroTriggered;                                           // (Parm)
};

// Function OLGame.OLDoor.StartMatineeAnim
struct AOLDoor_StartMatineeAnim_Params
{
	bool                                               bLooping;                                                 // (Parm)
};

// Function OLGame.OLDoor.OnDestroy
struct AOLDoor_OnDestroy_Params
{
	class USeqAct_Destroy*                             Action;                                                   // (Parm)
};

// Function OLGame.OLDoor.SoftDestroy
struct AOLDoor_SoftDestroy_Params
{
};

// Function OLGame.OLDoor.NotifyHandlesToWait
struct AOLDoor_NotifyHandlesToWait_Params
{
};

// Function OLGame.OLDoor.NotifyHandlesToRepath
struct AOLDoor_NotifyHandlesToRepath_Params
{
};

// Function OLGame.OLDoor.ForcePushBlockingHero
struct AOLDoor_ForcePushBlockingHero_Params
{
};

// Function OLGame.OLDoor.FastOpen
struct AOLDoor_FastOpen_Params
{
	class AOLPawn*                                     OpeningPawn;                                              // (Parm)
};

// Function OLGame.OLDoor.IsOnPullSide
struct AOLDoor_IsOnPullSide_Params
{
	struct FVector                                     TestLocation;                                             // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.GetOpenAngle
struct AOLDoor_GetOpenAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.OnStateChanged
struct AOLDoor_OnStateChanged_Params
{
};

// Function OLGame.OLDoor.TriggerEvent
struct AOLDoor_TriggerEvent_Params
{
	TEnumAsByte<EDoorEventType>                        EventType;                                                // (Parm)
	class AOLPawn*                                     Triggerer;                                                // (Parm)
};

// Function OLGame.OLDoor.TriggerBreakDoorCameraShake
struct AOLDoor_TriggerBreakDoorCameraShake_Params
{
};

// Function OLGame.OLDoor.StopShaking
struct AOLDoor_StopShaking_Params
{
};

// Function OLGame.OLDoor.StartShaking
struct AOLDoor_StartShaking_Params
{
	struct FDoorShakeData                              ShakeParams;                                              // (Parm)
	bool                                               bSwitchToBreakingMesh;                                    // (OptionalParm, Parm)
	bool                                               bReversed;                                                // (OptionalParm, Parm)
	bool                                               bFromAI;                                                  // (OptionalParm, Parm)
};

// Function OLGame.OLDoor.IsBroken
struct AOLDoor_IsBroken_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.UnregisterNavmeshObstacle
struct AOLDoor_UnregisterNavmeshObstacle_Params
{
};

// Function OLGame.OLDoor.RegisterNavMeshObstacle
struct AOLDoor_RegisterNavMeshObstacle_Params
{
};

// Function OLGame.OLDoor.ScriptGetCenterLocation
struct AOLDoor_ScriptGetCenterLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoorChimes.UnTouch
struct AOLDoorChimes_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function OLGame.OLDoorChimes.Touch
struct AOLDoorChimes_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLDoorChimes.PlayChimes
struct AOLDoorChimes_PlayChimes_Params
{
};

// Function OLGame.OLEngine.UsingFixedSaveLocation
struct UOLEngine_UsingFixedSaveLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.SaveGameImmediate
struct UOLEngine_SaveGameImmediate_Params
{
	bool                                               bSaveToDisk;                                              // (Parm)
	struct FString                                     ForceSaveGameName;                                        // (Parm, NeedCtorLink)
	bool                                               bNewSave;                                                 // (OptionalParm, Parm)
	struct FString                                     OverrideSaveCheckpointName;                               // (OptionalParm, Parm, NeedCtorLink)
};

// Function OLGame.OLEngine.InitiateSaveGame
struct UOLEngine_InitiateSaveGame_Params
{
	bool                                               bSaveToDisk;                                              // (Parm)
};

// Function OLGame.OLEngine.HasAnyValidSaveGame
struct UOLEngine_HasAnyValidSaveGame_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.HasValidSaveGame
struct UOLEngine_HasValidSaveGame_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.RefreshSaveFiles
struct UOLEngine_RefreshSaveFiles_Params
{
};

// Function OLGame.OLEngine.IsGameFullyDownloaded
struct UOLEngine_IsGameFullyDownloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.TryStartDLCGame
struct UOLEngine_TryStartDLCGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.ShouldShowNewDLCGame
struct UOLEngine_ShouldShowNewDLCGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.RefreshDLC
struct UOLEngine_RefreshDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.CheckReloadForDLC
struct UOLEngine_CheckReloadForDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_OnPressedContinue
struct UOLDingoEngine_Dingo_OnPressedContinue_Params
{
	int                                                ControllerId;                                             // (Parm)
};

// Function OLGame.OLDingoEngine.ReturnToPressStartScreen
struct UOLDingoEngine_ReturnToPressStartScreen_Params
{
};

// Function OLGame.OLDingoEngine.ShouldOpenPressStartScreen
struct UOLDingoEngine_ShouldOpenPressStartScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_ShowLoginUIAndInitializeUser
struct UOLDingoEngine_Dingo_ShowLoginUIAndInitializeUser_Params
{
	struct FScriptDelegate                             Callback;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.DingoNative_ShowLoginUIAndInitializeUser
struct UOLDingoEngine_DingoNative_ShowLoginUIAndInitializeUser_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_ShouldShowLoginUI
struct UOLDingoEngine_Dingo_ShouldShowLoginUI_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_OnInitialPressStart
struct UOLDingoEngine_Dingo_OnInitialPressStart_Params
{
	int                                                ControllerId;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_AllowAllControllersInput
struct UOLDingoEngine_Dingo_AllowAllControllersInput_Params
{
};

// Function OLGame.OLDingoEngine.OnDingoUserInitialized
struct UOLDingoEngine_OnDingoUserInitialized_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLDingoEngine.Dingo_InitializeUser
struct UOLDingoEngine_Dingo_InitializeUser_Params
{
	struct FScriptDelegate                             Callback;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLDingoEngine.DingoNative_StartInitializeUser
struct UOLDingoEngine_DingoNative_StartInitializeUser_Params
{
};

// Function OLGame.OLDingoEngine.DingoUserInitializedCallback
struct UOLDingoEngine_DingoUserInitializedCallback_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLDingoEngine.GiveRightForRecording
struct UOLDingoEngine_GiveRightForRecording_Params
{
};

// Function OLGame.OLDingoEngine.ClearRecordings
struct UOLDingoEngine_ClearRecordings_Params
{
};

// Function OLGame.OLDingoEngine.HasEnoughRightsLeftForRecording
struct UOLDingoEngine_HasEnoughRightsLeftForRecording_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.HasRightsForRecording
struct UOLDingoEngine_HasRightsForRecording_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_GetActiveGamertag
struct UOLDingoEngine_Dingo_GetActiveGamertag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLDingoEngine.Dingo_GetSaveFileIdStr
struct UOLDingoEngine_Dingo_GetSaveFileIdStr_Params
{
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLDingoEngine.Dingo_GetSaveFileIconName
struct UOLDingoEngine_Dingo_GetSaveFileIconName_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLDingoEngine.Dingo_ShowHelpUI
struct UOLDingoEngine_Dingo_ShowHelpUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_DeleteSaveGame
struct UOLDingoEngine_Dingo_DeleteSaveGame_Params
{
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_SaveGameImmediateToNewSave
struct UOLDingoEngine_Dingo_SaveGameImmediateToNewSave_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_SaveGameImmediate
struct UOLDingoEngine_Dingo_SaveGameImmediate_Params
{
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_StartNewGameWithNewSave
struct UOLDingoEngine_Dingo_StartNewGameWithNewSave_Params
{
	struct FString                                     startCP;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_StartNewGameWithSave
struct UOLDingoEngine_Dingo_StartNewGameWithSave_Params
{
	struct FString                                     startCP;                                                  // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_LoadMostRecentSaveFile
struct UOLDingoEngine_Dingo_LoadMostRecentSaveFile_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_LoadSaveGame
struct UOLDingoEngine_Dingo_LoadSaveGame_Params
{
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.IsGameFullyDownloaded
struct UOLDingoEngine_IsGameFullyDownloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.HasAnyValidSaveGame
struct UOLDingoEngine_HasAnyValidSaveGame_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.HasValidSaveGame
struct UOLDingoEngine_HasValidSaveGame_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDingoEngine.RefreshSaveFiles
struct UOLDingoEngine_RefreshSaveFiles_Params
{
};

// Function OLGame.OLOrbisEngine.SetMaxCheckpointId
struct UOLOrbisEngine_SetMaxCheckpointId_Params
{
	int                                                MaxCheckpoint;                                            // (Parm)
};

// Function OLGame.OLOrbisEngine.IsGameFullyDownloaded
struct UOLOrbisEngine_IsGameFullyDownloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.PS4_LoadMostRecentSaveFile
struct UOLOrbisEngine_PS4_LoadMostRecentSaveFile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.PS4_LoadCurrentSaveFile
struct UOLOrbisEngine_PS4_LoadCurrentSaveFile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.HasAnyValidSaveGame
struct UOLOrbisEngine_HasAnyValidSaveGame_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.HasValidSaveGame
struct UOLOrbisEngine_HasValidSaveGame_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.GetNumberOfSaveGames
struct UOLOrbisEngine_GetNumberOfSaveGames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.SelectAndLoadGame
struct UOLOrbisEngine_SelectAndLoadGame_Params
{
	struct FScriptDelegate                             Callback;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.NativeSelectAndLoadGame
struct UOLOrbisEngine_NativeSelectAndLoadGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.NewSaveLocation
struct UOLOrbisEngine_NewSaveLocation_Params
{
	struct FString                                     startCP;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLOrbisEngine.NativeNewSaveLocation
struct UOLOrbisEngine_NativeNewSaveLocation_Params
{
	struct FString                                     startCP;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLOrbisEngine.SelectSaveLocation
struct UOLOrbisEngine_SelectSaveLocation_Params
{
	struct FString                                     startCP;                                                  // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.NativeSelectSaveLocation
struct UOLOrbisEngine_NativeSelectSaveLocation_Params
{
	struct FString                                     startCP;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLOrbisEngine.FinishedSaveDataDialog
struct UOLOrbisEngine_FinishedSaveDataDialog_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLOrbisEngine.SaveDataDialogDoneCallback
struct UOLOrbisEngine_SaveDataDialogDoneCallback_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLOrbisEngine.UsingFixedSaveLocation
struct UOLOrbisEngine_UsingFixedSaveLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWinEngine.UpdateProfileKeyBindingsFromSystem
struct UOLWinEngine_UpdateProfileKeyBindingsFromSystem_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWinEngine.UpdateProfileFromSystemSettings
struct UOLWinEngine_UpdateProfileFromSystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWinEngine.UpdateFullscreenFromSystemSettings
struct UOLWinEngine_UpdateFullscreenFromSystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWinEngine.ApplySystemSettings
struct UOLWinEngine_ApplySystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWinEngine.DebugLoadGame
struct UOLWinEngine_DebugLoadGame_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLWinEngine.DebugSaveGame
struct UOLWinEngine_DebugSaveGame_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLWinEngine.SaveAllCheckpoints
struct UOLWinEngine_SaveAllCheckpoints_Params
{
};

// Function OLGame.OLWinEngine.RefreshSaveFiles
struct UOLWinEngine_RefreshSaveFiles_Params
{
};

// Function OLGame.OLWinEngine.DeleteSaveFile
struct UOLWinEngine_DeleteSaveFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLWinEngine.LoadSaveFile
struct UOLWinEngine_LoadSaveFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWinEngine.HasAnyValidSaveGame
struct UOLWinEngine_HasAnyValidSaveGame_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWinEngine.HasValidSaveGame
struct UOLWinEngine_HasValidSaveGame_Params
{
	TEnumAsByte<ELoadGameResult>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLFlashLight.OnToggle
struct AOLFlashLight_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLFlashLight.TurnOff
struct AOLFlashLight_TurnOff_Params
{
	bool                                               bHideMesh;                                                // (Parm)
};

// Function OLGame.OLFlashLight.TurnOn
struct AOLFlashLight_TurnOn_Params
{
};

// Function OLGame.OLLantern.TurnOff
struct AOLLantern_TurnOff_Params
{
	bool                                               bHideMesh;                                                // (Parm)
};

// Function OLGame.OLLantern.TurnOn
struct AOLLantern_TurnOn_Params
{
};

// Function OLGame.OLTorch.TurnOff
struct AOLTorch_TurnOff_Params
{
	bool                                               bHideMesh;                                                // (Parm)
};

// Function OLGame.OLTorch.TurnOn
struct AOLTorch_TurnOn_Params
{
};

// Function OLGame.OLFloatingObjectBase.OnToggle
struct AOLFloatingObjectBase_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLFloorMaterialVolume.OnToggle
struct AOLFloorMaterialVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLFXManager.SetFXForEnemyPawn
struct UOLFXManager_SetFXForEnemyPawn_Params
{
	class AOLEnemyPawn*                                EnemyPawn;                                                // (Parm)
};

// Function OLGame.OLFXManager.DeactivateNightVisionEffect
struct UOLFXManager_DeactivateNightVisionEffect_Params
{
};

// Function OLGame.OLFXManager.ActivateCamcorderEffect
struct UOLFXManager_ActivateCamcorderEffect_Params
{
};

// Function OLGame.OLFXManager.ActivateNightVisionEffect
struct UOLFXManager_ActivateNightVisionEffect_Params
{
	bool                                               bPowered;                                                 // (Parm)
};

// Function OLGame.OLFXManager.SetPPSFromScript
struct UOLFXManager_SetPPSFromScript_Params
{
	TEnumAsByte<EPPSMode>                              newPPS;                                                   // (Parm)
};

// Function OLGame.OLFXManager.GetFXManager
struct UOLFXManager_GetFXManager_Params
{
	class UOLFXManager*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.CloseHint
struct AOLGame_CloseHint_Params
{
};

// Function OLGame.OLGame.HideHint
struct AOLGame_HideHint_Params
{
};

// Function OLGame.OLGame.ShowHint
struct AOLGame_ShowHint_Params
{
	struct FString                                     MessageText;                                              // (Parm, NeedCtorLink)
};

// Function OLGame.OLGame.ClearPause
struct AOLGame_ClearPause_Params
{
};

// Function OLGame.OLGame.SetPause
struct AOLGame_SetPause_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	struct FScriptDelegate                             CanUnpauseDelegate;                                       // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.HandleUnpaused
struct AOLGame_HandleUnpaused_Params
{
};

// Function OLGame.OLGame.HandlePaused
struct AOLGame_HandlePaused_Params
{
};

// Function OLGame.OLGame.SetGameSpeed
struct AOLGame_SetGameSpeed_Params
{
	float                                              T;                                                        // (Parm)
};

// Function OLGame.OLGame.TravelToStartupMap
struct AOLGame_TravelToStartupMap_Params
{
};

// Function OLGame.OLGame.OnTravelToStartupMap
struct AOLGame_OnTravelToStartupMap_Params
{
};

// Function OLGame.OLGame.RestartPlayer
struct AOLGame_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
};

// Function OLGame.OLGame.EvtRestartPlayer
struct AOLGame_EvtRestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
};

// Function OLGame.OLGame.UpdateGameType
struct AOLGame_UpdateGameType_Params
{
};

// Function OLGame.OLGame.OnPlayerSpawned
struct AOLGame_OnPlayerSpawned_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
	class ANavigationPoint*                            StartPoint;                                               // (Parm)
};

// Function OLGame.OLGame.FindPlayerStart
struct AOLGame_FindPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm)
	unsigned char                                      InTeam;                                                   // (OptionalParm, Parm)
	struct FString                                     IncomingName;                                             // (OptionalParm, Parm, NeedCtorLink)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.NewPolish
struct AOLGame_NewPolish_Params
{
};

// Function OLGame.OLGame.NewOptim
struct AOLGame_NewOptim_Params
{
};

// Function OLGame.OLGame.NewTask
struct AOLGame_NewTask_Params
{
};

// Function OLGame.OLGame.NewBug
struct AOLGame_NewBug_Params
{
};

// Function OLGame.OLGame.GetDifficultyMode
struct AOLGame_GetDifficultyMode_Params
{
	TEnumAsByte<EDifficultyMode>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.GetFirstCheckpoint
struct AOLGame_GetFirstCheckpoint_Params
{
	TEnumAsByte<EOutlastGameType>                      GameType;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLGame.MatchCheckpoint
struct AOLGame_MatchCheckpoint_Params
{
	struct FString                                     PortalName;                                               // (Parm, NeedCtorLink)
	class AOLCheckpoint*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.SetCurrentCheckpoint
struct AOLGame_SetCurrentCheckpoint_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
};

// Function OLGame.OLGame.CheckpointReached
struct AOLGame_CheckpointReached_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
};

// Function OLGame.OLGame.AllowCheats
struct AOLGame_AllowCheats_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.GenerateNewHint
struct AOLGame_GenerateNewHint_Params
{
};

// Function OLGame.OLGame.IsDLCInstalled
struct AOLGame_IsDLCInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.IsPlayingDLC
struct AOLGame_IsPlayingDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.IsCensored
struct AOLGame_IsCensored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.IsPlaytest
struct AOLGame_IsPlaytest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.IsDemo
struct AOLGame_IsDemo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.SetGameType
struct AOLGame_SetGameType_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGameplayMarker.OnToggle
struct AOLGameplayMarker_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLGameplayMarker.PostBeginPlay
struct AOLGameplayMarker_PostBeginPlay_Params
{
};

// Function OLGame.OLCSA.OnToggle
struct AOLCSA_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLCSA.SetEnabled
struct AOLCSA_SetEnabled_Params
{
	bool                                               bNewEnabled;                                              // (Parm)
};

// Function OLGame.OLRecordingMarker.OnToggle
struct AOLRecordingMarker_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLRTPCDistanceModifier.OnToggle
struct AOLRTPCDistanceModifier_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLRTPCDistanceModifier.StopSound
struct AOLRTPCDistanceModifier_StopSound_Params
{
};

// Function OLGame.OLRTPCDistanceModifier.StartSound
struct AOLRTPCDistanceModifier_StartSound_Params
{
};

// Function OLGame.OLRTPCPlayerLookModifier.OnToggle
struct AOLRTPCPlayerLookModifier_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLRTPCPlayerLookModifier.StopSound
struct AOLRTPCPlayerLookModifier_StopSound_Params
{
};

// Function OLGame.OLRTPCPlayerLookModifier.StartSound
struct AOLRTPCPlayerLookModifier_StartSound_Params
{
};

// Function OLGame.OLGameplayStaticMeshActor.OnToggle
struct AOLGameplayStaticMeshActor_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLGameplayVolume.OnToggle
struct AOLGameplayVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLDamageBlockingVolume.Touch
struct AOLDamageBlockingVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLDarknessVolume.OnToggle
struct AOLDarknessVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLElectrifiedVolume.Touch
struct AOLElectrifiedVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLPhysicsVolume.OnToggle
struct AOLPhysicsVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLPhysicsVolume.UpdateCollisionState
struct AOLPhysicsVolume_UpdateCollisionState_Params
{
};

// Function OLGame.OLGameStateList.ResetAllGameState
struct AOLGameStateList_ResetAllGameState_Params
{
};

// Function OLGame.OLGameStateList.DumpGameState
struct AOLGameStateList_DumpGameState_Params
{
};

// Function OLGame.OLGameViewportClient.DrawTransition
struct UOLGameViewportClient_DrawTransition_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function OLGame.OLHidingBarrel.OnToggle
struct AOLHidingBarrel_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLHidingBarrel.TriggerEvent
struct AOLHidingBarrel_TriggerEvent_Params
{
	TEnumAsByte<EBarrelEventType>                      EventType;                                                // (Parm)
	class AOLPawn*                                     Triggerer;                                                // (Parm)
};

// Function OLGame.OLHUD.SetLargeImageSize
struct AOLHUD_SetLargeImageSize_Params
{
	int                                                imageWidth;                                               // (Parm)
	int                                                imageHeight;                                              // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function OLGame.OLHUD.Tick
struct AOLHUD_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function OLGame.OLHUD.NotifyAltEnter
struct AOLHUD_NotifyAltEnter_Params
{
};

// Function OLGame.OLHUD.GamepadConfigChanged
struct AOLHUD_GamepadConfigChanged_Params
{
};

// Function OLGame.OLHUD.OnLostFocusPause
struct AOLHUD_OnLostFocusPause_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLHUD.ShowHUDMessages
struct AOLHUD_ShowHUDMessages_Params
{
};

// Function OLGame.OLHUD.HideHUDMessages
struct AOLHUD_HideHUDMessages_Params
{
};

// Function OLGame.OLHUD.ShowingSubtitle
struct AOLHUD_ShowingSubtitle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.HideSubtitle
struct AOLHUD_HideSubtitle_Params
{
};

// Function OLGame.OLHUD.SetSubtitleHeight
struct AOLHUD_SetSubtitleHeight_Params
{
	bool                                               High;                                                     // (Parm)
};

// Function OLGame.OLHUD.ShowSubtitle
struct AOLHUD_ShowSubtitle_Params
{
	struct FString                                     MessageText;                                              // (Parm, NeedCtorLink)
};

// Function OLGame.OLHUD.HideObjective
struct AOLHUD_HideObjective_Params
{
};

// Function OLGame.OLHUD.ShowObjective
struct AOLHUD_ShowObjective_Params
{
	struct FString                                     ObjectiveText;                                            // (Parm, NeedCtorLink)
};

// Function OLGame.OLHUD.HideMessage
struct AOLHUD_HideMessage_Params
{
};

// Function OLGame.OLHUD.ShowMessage
struct AOLHUD_ShowMessage_Params
{
	TEnumAsByte<EHUDMessageType>                       MessageType;                                              // (Parm)
	TEnumAsByte<EHUDMessagePriority>                   MessagePriority;                                          // (Parm)
	struct FString                                     MessageText;                                              // (Parm, NeedCtorLink)
};

// Function OLGame.OLHUD.ResetMessageScreenForResize
struct AOLHUD_ResetMessageScreenForResize_Params
{
};

// Function OLGame.OLHUD.SetCleanTextData
struct AOLHUD_SetCleanTextData_Params
{
	struct FString                                     TextName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function OLGame.OLHUD.SetPausedPromptMessage
struct AOLHUD_SetPausedPromptMessage_Params
{
	struct FString                                     Messsage;                                                 // (Parm, NeedCtorLink)
	bool                                               bBackToMainMenu;                                          // (Parm)
};

// Function OLGame.OLHUD.ShowMenuType
struct AOLHUD_ShowMenuType_Params
{
	TEnumAsByte<EMenuType>                             MenuType;                                                 // (Parm)
};

// Function OLGame.OLHUD.ShowPausedPromptMenu
struct AOLHUD_ShowPausedPromptMenu_Params
{
};

// Function OLGame.OLHUD.PostSoundEventEnter
struct AOLHUD_PostSoundEventEnter_Params
{
};

// Function OLGame.OLHUD.PostSoundEventSelect
struct AOLHUD_PostSoundEventSelect_Params
{
};

// Function OLGame.OLHUD.MuteSelectSound
struct AOLHUD_MuteSelectSound_Params
{
	float                                              MuteTime;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLHUD.CanShowSubMenu
struct AOLHUD_CanShowSubMenu_Params
{
	TEnumAsByte<EMenuType>                             MenuType;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.HideMenu
struct AOLHUD_HideMenu_Params
{
};

// Function OLGame.OLHUD.ShowMenu
struct AOLHUD_ShowMenu_Params
{
};

// Function OLGame.OLHUD.ShowMainMenu
struct AOLHUD_ShowMainMenu_Params
{
};

// Function OLGame.OLHUD.ReturnToPressStartMenu
struct AOLHUD_ReturnToPressStartMenu_Params
{
};

// Function OLGame.OLHUD.ClosePauseMenu
struct AOLHUD_ClosePauseMenu_Params
{
};

// Function OLGame.OLHUD.SimulateBackInput
struct AOLHUD_SimulateBackInput_Params
{
};

// Function OLGame.OLHUD.ReloadMenu
struct AOLHUD_ReloadMenu_Params
{
};

// Function OLGame.OLHUD.InputTypeChanged
struct AOLHUD_InputTypeChanged_Params
{
};

// Function OLGame.OLHUD.SetPCQTELabels
struct AOLHUD_SetPCQTELabels_Params
{
	struct FString                                     upStr;                                                    // (Parm, NeedCtorLink)
	struct FString                                     leftStr;                                                  // (Parm, NeedCtorLink)
	struct FString                                     downStr;                                                  // (Parm, NeedCtorLink)
	struct FString                                     rightStr;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLHUD.CleanReadPreviousPage
struct AOLHUD_CleanReadPreviousPage_Params
{
};

// Function OLGame.OLHUD.CleanReadNextPage
struct AOLHUD_CleanReadNextPage_Params
{
};

// Function OLGame.OLHUD.CloseCleanTextMenu
struct AOLHUD_CloseCleanTextMenu_Params
{
};

// Function OLGame.OLHUD.IsAMenuOpen
struct AOLHUD_IsAMenuOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsInCleanTextMenu
struct AOLHUD_IsInCleanTextMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsInCreditsMenu
struct AOLHUD_IsInCreditsMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsOnMainMenuScreen
struct AOLHUD_IsOnMainMenuScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsMainMenuOpen
struct AOLHUD_IsMainMenuOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsInPausedPromptMenu
struct AOLHUD_IsInPausedPromptMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsInPauseMenu
struct AOLHUD_IsInPauseMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.CanUnpauseInPauseMenu
struct AOLHUD_CanUnpauseInPauseMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.ShowDebugInfo
struct AOLHUD_ShowDebugInfo_Params
{
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLHUD.ShouldDisplayDebugMessages
struct AOLHUD_ShouldDisplayDebugMessages_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.DebugNextAI
struct AOLHUD_DebugNextAI_Params
{
};

// Function OLGame.OLHUD.DebugPrevAI
struct AOLHUD_DebugPrevAI_Params
{
};

// Function OLGame.OLHUD.NotifyGameSaved
struct AOLHUD_NotifyGameSaved_Params
{
};

// Function OLGame.OLHUD.SetGammaCalibrationActive
struct AOLHUD_SetGammaCalibrationActive_Params
{
	bool                                               bActive;                                                  // (Parm)
};

// Function OLGame.OLHUD.ShowingFullScreenOverlay
struct AOLHUD_ShowingFullScreenOverlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.Draw
struct AOLHUD_Draw_Params
{
};

// Function OLGame.OLInteractiveSkeletalFoliageActor.Touch
struct AOLInteractiveSkeletalFoliageActor_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLMainHud.WidgetInitialized
struct UOLMainHud_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPickableDocument.RefreshUI
struct UOLPickableDocument_RefreshUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPickableDocument.WidgetInitialized
struct UOLPickableDocument_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPickableObject.OnToggle
struct AOLPickableObject_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLCollectiblePickup.PostBeginPlay
struct AOLCollectiblePickup_PostBeginPlay_Params
{
};

// Function OLGame.OLCollectiblePickup.ShouldShowCollectible
struct AOLCollectiblePickup_ShouldShowCollectible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerInput.IsKeyPressed
struct UOLPlayerInput_IsKeyPressed_Params
{
	struct FName                                       Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerInput.UnBindNoSave
struct UOLPlayerInput_UnBindNoSave_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLPlayerInput.PreProcessInput
struct UOLPlayerInput_PreProcessInput_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLPlayerInput.StopLeanRight
struct UOLPlayerInput_StopLeanRight_Params
{
};

// Function OLGame.OLPlayerInput.StopLeanLeft
struct UOLPlayerInput_StopLeanLeft_Params
{
};

// Function OLGame.OLPlayerInput.StartLeanRight
struct UOLPlayerInput_StartLeanRight_Params
{
};

// Function OLGame.OLPlayerInput.StartLeanLeft
struct UOLPlayerInput_StartLeanLeft_Params
{
};

// Function OLGame.OLPlayerInput.StopRun
struct UOLPlayerInput_StopRun_Params
{
};

// Function OLGame.OLPlayerInput.ChangeCamCorderHudDisplay
struct UOLPlayerInput_ChangeCamCorderHudDisplay_Params
{
};

// Function OLGame.OLPlayerInput.NativeChangeCamCorderHudDisplay
struct UOLPlayerInput_NativeChangeCamCorderHudDisplay_Params
{
};

// Function OLGame.OLPlayerInput.StartRun
struct UOLPlayerInput_StartRun_Params
{
};

// Function OLGame.OLPlayerInput.StartRunNative
struct UOLPlayerInput_StartRunNative_Params
{
};

// Function OLGame.OLPlayerInput.ToggleDuck
struct UOLPlayerInput_ToggleDuck_Params
{
};

// Function OLGame.OLPlayerInput.UnDuck
struct UOLPlayerInput_UnDuck_Params
{
};

// Function OLGame.OLPlayerInput.Duck
struct UOLPlayerInput_Duck_Params
{
};

// Function OLGame.OLPlayerInput.ResetInput
struct UOLPlayerInput_ResetInput_Params
{
};

// Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings
struct UOLProfileSettings_AutoDetectPerformanceSettings_Params
{
};

// Function OLGame.OLProfileSettings.MatchMonitorResolution
struct UOLProfileSettings_MatchMonitorResolution_Params
{
	bool                                               bLimitForPerformance;                                     // (Parm)
};

// Function OLGame.OLProfileSettings.SetLanguageFromSteam
struct UOLProfileSettings_SetLanguageFromSteam_Params
{
};

// Function OLGame.OLProfileSettings.SetToDefaults
struct UOLProfileSettings_SetToDefaults_Params
{
};

// Function OLGame.OLProfileSettings.GetProfileSettingResolutions
struct UOLProfileSettings_GetProfileSettingResolutions_Params
{
	int                                                ProfileSettingId;                                         // (Parm)
	TArray<struct FName>                               ResolutionNames;                                          // (Parm, OutParm, NeedCtorLink)
	TArray<struct FIntPoint>                           Resolutions;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLProfileSettings.GetProfileSettingValues
struct UOLProfileSettings_GetProfileSettingValues_Params
{
	int                                                ProfileSettingId;                                         // (Parm)
	TArray<struct FName>                               Values;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLProfileSettings.GetGammaSetting
struct UOLProfileSettings_GetGammaSetting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPushableObject.OnToggle
struct AOLPushableObject_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLPushableObject.OnTeleport
struct AOLPushableObject_OnTeleport_Params
{
	class USeqAct_Teleport*                            Action;                                                   // (Parm)
};

// Function OLGame.OLPushableObject.PostOnTeleport
struct AOLPushableObject_PostOnTeleport_Params
{
};

// Function OLGame.OLPushableObject.PreOnTeleport
struct AOLPushableObject_PreOnTeleport_Params
{
};

// Function OLGame.OLRecordingUtils.ShowCleanText
struct UOLRecordingUtils_ShowCleanText_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
};

// Function OLGame.OLRecordingUtils.CleanMemory
struct UOLRecordingUtils_CleanMemory_Params
{
};

// Function OLGame.OLRecordingUtils.ConditionalResetMovieOverrideDuration
struct UOLRecordingUtils_ConditionalResetMovieOverrideDuration_Params
{
	TArray<class UTexture*>                            Textures;                                                 // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
};

// Function OLGame.OLRecordingUtils.HasMovieEnded
struct UOLRecordingUtils_HasMovieEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLRecordingUtils.StopMovieTexture
struct UOLRecordingUtils_StopMovieTexture_Params
{
	TArray<class UTexture*>                            Textures;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               bPause;                                                   // (Parm)
	class UAkEvent*                                    loopStop;                                                 // (Parm)
};

// Function OLGame.OLRecordingUtils.PlayMovieTexture
struct UOLRecordingUtils_PlayMovieTexture_Params
{
	TArray<class UTexture*>                            Textures;                                                 // (Parm, OutParm, NeedCtorLink)
	class UAkEvent*                                    LoopStart;                                                // (Parm)
};

// Function OLGame.OLRecordingUtils.ResizeFullSizeImage
struct UOLRecordingUtils_ResizeFullSizeImage_Params
{
	class UGFxMoviePlayer*                             menu;                                                     // (Parm)
	TArray<class UTexture*>                            Textures;                                                 // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
};

// Function OLGame.OLRecordingUtils.PlayMovieVO
struct UOLRecordingUtils_PlayMovieVO_Params
{
	class UAkEvent*                                    VO;                                                       // (Parm)
};

// Function OLGame.OLRecordingUtils.StopMovieVO
struct UOLRecordingUtils_StopMovieVO_Params
{
	class UAkEvent*                                    VO;                                                       // (Parm)
};

// Function OLGame.OLRecordingUtils.LoadMovieLoopStop
struct UOLRecordingUtils_LoadMovieLoopStop_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
	class UAkEvent*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLRecordingUtils.LoadMovieLoopStart
struct UOLRecordingUtils_LoadMovieLoopStart_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
	class UAkEvent*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLRecordingUtils.LoadMovieVO
struct UOLRecordingUtils_LoadMovieVO_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
	class UAkEvent*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLRecordingUtils.GetFullSizeRecordingTexture
struct UOLRecordingUtils_GetFullSizeRecordingTexture_Params
{
	TArray<class UTexture*>                            Textures;                                                 // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLRecordingUtils.GetRecordingTexture
struct UOLRecordingUtils_GetRecordingTexture_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLRecordingUtils.GetCategoryTexture
struct UOLRecordingUtils_GetCategoryTexture_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                SortingType;                                              // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLRecordingUtils.GetRecordings
struct UOLRecordingUtils_GetRecordings_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Section;                                                  // (Parm)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLRecordingUtils.GetRecordingSections
struct UOLRecordingUtils_GetRecordingSections_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLRecordingUtils.GetPathName
struct UOLRecordingUtils_GetPathName_Params
{
	class UObject*                                     Obj;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLRecordingUtils.HasRecordings
struct UOLRecordingUtils_HasRecordings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLRecordingUtils.IsVideoRecording
struct UOLRecordingUtils_IsVideoRecording_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                SortingType;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_Checkpoint.Activated
struct UOLSeqAct_Checkpoint_Activated_Params
{
};

// Function OLGame.OLSoundConnector.OnToggle
struct AOLSoundConnector_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager
struct UOLSoundEnvironmentManager_GetSoundEnvManager_Params
{
	class UOLSoundEnvironmentManager*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSoundEnvironmentManager.Cleanup
struct UOLSoundEnvironmentManager_Cleanup_Params
{
};

// Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay
struct AOLSoundEnvironmentVolume_PostBeginPlay_Params
{
};

// Function OLGame.OLUtils.TriggerSoundEvent
struct UOLUtils_TriggerSoundEvent_Params
{
	class UAkEvent*                                    SoundEvent;                                               // (Parm)
};

// Function OLGame.OLUtils.ShouldSubtitlesBeHigh
struct UOLUtils_ShouldSubtitlesBeHigh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsKeyBoundToCommand
struct UOLUtils_IsKeyBoundToCommand_Params
{
	struct FName                                       Key;                                                      // (Parm)
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.HasValidMovie
struct UOLUtils_HasValidMovie_Params
{
	class UGFxObject*                                  GFxObject;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.ElapsedRealTime
struct UOLUtils_ElapsedRealTime_Params
{
	float                                              Time;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.ElapsedTime
struct UOLUtils_ElapsedTime_Params
{
	float                                              Time;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetRealTimeSeconds
struct UOLUtils_GetRealTimeSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetWorldTimeSeconds
struct UOLUtils_GetWorldTimeSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.LoadTexture
struct UOLUtils_LoadTexture_Params
{
	struct FString                                     Path;                                                     // (Parm, NeedCtorLink)
	class UObject*                                     Owner;                                                    // (Parm)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetChapterIndex
struct UOLUtils_GetChapterIndex_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetChapterName
struct UOLUtils_GetChapterName_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUtils.GetCheckpointName
struct UOLUtils_GetCheckpointName_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUtils.GetCheckpointIndexFromString
struct UOLUtils_GetCheckpointIndexFromString_Params
{
	struct FString                                     CheckpointName;                                           // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetCheckpointIndex
struct UOLUtils_GetCheckpointIndex_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetOrbisEngine
struct UOLUtils_GetOrbisEngine_Params
{
	class UOLOrbisEngine*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetDingoEngine
struct UOLUtils_GetDingoEngine_Params
{
	class UOLDingoEngine*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetWinEngine
struct UOLUtils_GetWinEngine_Params
{
	class UOLWinEngine*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetOLEngine
struct UOLUtils_GetOLEngine_Params
{
	class UOLEngine*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetOLGame
struct UOLUtils_GetOLGame_Params
{
	class AOLGame*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetOLWorld
struct UOLUtils_GetOLWorld_Params
{
	class UOLWorld*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetDifficultyConfig
struct UOLUtils_GetDifficultyConfig_Params
{
	class UOLDifficultyConfig*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetAICoordinator
struct UOLUtils_GetAICoordinator_Params
{
	class UOLAICoordinator*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetHero
struct UOLUtils_GetHero_Params
{
	class AOLHero*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.GetOLPC
struct UOLUtils_GetOLPC_Params
{
	class AOLPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsBindableKey
struct UOLUtils_IsBindableKey_Params
{
	struct FName                                       ButtonName;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsInMainMenu
struct UOLUtils_IsInMainMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsPlayingDLC
struct UOLUtils_IsPlayingDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsDLCInstalled
struct UOLUtils_IsDLCInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsDingoController
struct UOLUtils_IsDingoController_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsPS4Controller
struct UOLUtils_IsPS4Controller_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsUsingGamepad
struct UOLUtils_IsUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsConsole
struct UOLUtils_IsConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsDingo
struct UOLUtils_IsDingo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsPS4
struct UOLUtils_IsPS4_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWardrobe.TriggerEvent
struct AOLWardrobe_TriggerEvent_Params
{
	TEnumAsByte<EWardrobeDoorEventType>                EventType;                                                // (Parm)
	class AOLPawn*                                     Triggerer;                                                // (Parm)
};

// Function OLGame.OLWindow.OnDestroy
struct AOLWindow_OnDestroy_Params
{
	class USeqAct_Destroy*                             Action;                                                   // (Parm)
};

// Function OLGame.OLWindow.SoftDestroy
struct AOLWindow_SoftDestroy_Params
{
};

// Function OLGame.OLWindow.ScriptOpenWindow
struct AOLWindow_ScriptOpenWindow_Params
{
	class AOLPawn*                                     Triggerer;                                                // (Parm)
};

// Function OLGame.OLWindow.ScriptBreakWindow
struct AOLWindow_ScriptBreakWindow_Params
{
	class AOLPawn*                                     Triggerer;                                                // (Parm)
};

// Function OLGame.OLEnemyPawn.FinishAIGroup
struct AOLEnemyPawn_FinishAIGroup_Params
{
};

// Function OLGame.OLEnemyPawn.BeginAIGroup
struct AOLEnemyPawn_BeginAIGroup_Params
{
};

// Function OLGame.OLEnemyPawn.OnAnimEnd
struct AOLEnemyPawn_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLEnemyPawn.NativeOnAnimEnd
struct AOLEnemyPawn_NativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLEnemyPawn.StartNormalAttack
struct AOLEnemyPawn_StartNormalAttack_Params
{
};

// Function OLGame.OLEnemyPawn.StartDoorKnockback
struct AOLEnemyPawn_StartDoorKnockback_Params
{
	struct FVector                                     Direction;                                                // (Parm)
	bool                                               bLocker;                                                  // (Parm)
};

// Function OLGame.OLEnemyPawn.StartKnockback
struct AOLEnemyPawn_StartKnockback_Params
{
	class AOLHero*                                     Hero;                                                     // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLEnemyPawn.StartAvoid
struct AOLEnemyPawn_StartAvoid_Params
{
	class AOLEnemyPawn*                                OtherPawn;                                                // (Parm)
};

// Function OLGame.OLEnemyPawn.StopMoving
struct AOLEnemyPawn_StopMoving_Params
{
};

// Function OLGame.OLEnemyPawn.StartMoving
struct AOLEnemyPawn_StartMoving_Params
{
};

// Function OLGame.OLEnemyPawn.PlayFullBodyAnim
struct AOLEnemyPawn_PlayFullBodyAnim_Params
{
	struct FName                                       AnimName;                                                 // (Parm)
	float                                              Rate;                                                     // (Parm)
	float                                              BlendInTime;                                              // (OptionalParm, Parm)
	float                                              BlendOutTime;                                             // (OptionalParm, Parm)
	bool                                               bLooping;                                                 // (OptionalParm, Parm)
	float                                              StartTime;                                                // (OptionalParm, Parm)
	float                                              EndTime;                                                  // (OptionalParm, Parm)
};

// Function OLGame.OLEnemyPawn.PlayParticleEffect
struct AOLEnemyPawn_PlayParticleEffect_Params
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                           // (Const, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEnemyPawn.NativePlayParticleEffect
struct AOLEnemyPawn_NativePlayParticleEffect_Params
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                           // (Const, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEnemyPawn.HideWeaponMatinee
struct AOLEnemyPawn_HideWeaponMatinee_Params
{
};

// Function OLGame.OLEnemyPawn.ShowWeaponMatinee
struct AOLEnemyPawn_ShowWeaponMatinee_Params
{
};

// Function OLGame.OLEnemyPawn.PushNotify
struct AOLEnemyPawn_PushNotify_Params
{
};

// Function OLGame.OLEnemyPawn.KnockbackTickNotify
struct AOLEnemyPawn_KnockbackTickNotify_Params
{
};

// Function OLGame.OLEnemyPawn.KnockbackStartNotify
struct AOLEnemyPawn_KnockbackStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.BreakDoorNotify
struct AOLEnemyPawn_BreakDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.BashDoorNotify
struct AOLEnemyPawn_BashDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify
struct AOLEnemyPawn_DamageTargetRangeTickNotify_Params
{
};

// Function OLGame.OLEnemyPawn.HeadButtRangeStartNotify
struct AOLEnemyPawn_HeadButtRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.PunchLHRangeStartNotify
struct AOLEnemyPawn_PunchLHRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.PunchRHRangeStartNotify
struct AOLEnemyPawn_PunchRHRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify
struct AOLEnemyPawn_DamageTargetRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetNonFatal
struct AOLEnemyPawn_DamageTargetNonFatal_Params
{
};

// Function OLGame.OLEnemyPawn.KickPlayerRightFoot
struct AOLEnemyPawn_KickPlayerRightFoot_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTarget
struct AOLEnemyPawn_DamageTarget_Params
{
};

// Function OLGame.OLEnemyPawn.WindowBreakNotify
struct AOLEnemyPawn_WindowBreakNotify_Params
{
};

// Function OLGame.OLEnemyPawn.RestoreHiddenWeapon
struct AOLEnemyPawn_RestoreHiddenWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.TemporaryHideWeapon
struct AOLEnemyPawn_TemporaryHideWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.HideWeapon
struct AOLEnemyPawn_HideWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.ShowWeapon
struct AOLEnemyPawn_ShowWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.ExitStairsStartBlendOutNotify
struct AOLEnemyPawn_ExitStairsStartBlendOutNotify_Params
{
};

// Function OLGame.OLEnemyPawn.EnterStairsStartBlendInNotify
struct AOLEnemyPawn_EnterStairsStartBlendInNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DoorUnlockNotify
struct AOLEnemyPawn_DoorUnlockNotify_Params
{
};

// Function OLGame.OLEnemyPawn.WardrobeDoorEndNotify
struct AOLEnemyPawn_WardrobeDoorEndNotify_Params
{
};

// Function OLGame.OLEnemyPawn.WardrobeDoorNotify
struct AOLEnemyPawn_WardrobeDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.WindowAnimEndNotify
struct AOLEnemyPawn_WindowAnimEndNotify_Params
{
};

// Function OLGame.OLEnemyPawn.WindowAnimStartNotify
struct AOLEnemyPawn_WindowAnimStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.NativeDestroyed
struct AOLEnemyPawn_NativeDestroyed_Params
{
};

// Function OLGame.OLEnemyPawn.PostInitAnimTree
struct AOLEnemyPawn_PostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function OLGame.OLEnemyPawn.PossessedBy
struct AOLEnemyPawn_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function OLGame.OLEnemyPawn.ZeroMovementVariables
struct AOLEnemyPawn_ZeroMovementVariables_Params
{
};

// Function OLGame.OLEnemyPawn.PostBeginPlay
struct AOLEnemyPawn_PostBeginPlay_Params
{
};

// Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently
struct AOLEnemyPawn_HasRegisteredNavMeshRecently_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle
struct AOLEnemyPawn_UpdateNavMeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle
struct AOLEnemyPawn_UnregisterNavmeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle
struct AOLEnemyPawn_RegisterNavMeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues
struct AOLEnemyPawn_UpdateDifficultyBasedValues_Params
{
};

// Function OLGame.OLEnemyPawn.OnMoveAbilityCompleted
struct AOLEnemyPawn_OnMoveAbilityCompleted_Params
{
};

// Function OLGame.OLEnemyPawn.EnterCrawl
struct AOLEnemyPawn_EnterCrawl_Params
{
	class AOLCrawlMarker*                              CrawlMarker;                                              // (Parm)
	bool                                               bThroughPathfinding;                                      // (Parm)
};

// Function OLGame.OLEnemyPawn.ExitBeam
struct AOLEnemyPawn_ExitBeam_Params
{
};

// Function OLGame.OLEnemyPawn.EnterBeam
struct AOLEnemyPawn_EnterBeam_Params
{
	class AOLBeamMarker*                               BeamMarker;                                               // (Parm)
	class UOLSeqAct_AIBeam*                            BeamSeqAct;                                               // (Parm)
};

// Function OLGame.OLEnemyPawn.StartJump
struct AOLEnemyPawn_StartJump_Params
{
	class AOLJumpMarker*                               JumpMarker;                                               // (Parm)
	class UOLSeqAct_AIJump*                            JumpSeqAct;                                               // (Parm)
};

// Function OLGame.OLEnemyPawn.StartDoorSpecialMove
struct AOLEnemyPawn_StartDoorSpecialMove_Params
{
	TEnumAsByte<ESpecialMoveType>                      moveType;                                                 // (Parm)
};

// Function OLGame.OLEnemyPawn.BashThroughWindow
struct AOLEnemyPawn_BashThroughWindow_Params
{
};

// Function OLGame.OLEnemyPawn.OpenActiveWindow
struct AOLEnemyPawn_OpenActiveWindow_Params
{
};

// Function OLGame.OLEnemyPawn.CancelSpecialMove
struct AOLEnemyPawn_CancelSpecialMove_Params
{
};

// Function OLGame.OLEnemyPawn.StartSpecialMove
struct AOLEnemyPawn_StartSpecialMove_Params
{
	TEnumAsByte<ESpecialMoveType>                      moveType;                                                 // (Parm)
	struct FVector                                     targetPosition;                                           // (OptionalParm, Parm)
	struct FVector                                     TargetDirection;                                          // (OptionalParm, Parm)
	TEnumAsByte<EAdjustPositionTargetType>             TargetType;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLBot.DisplayDebug
struct AOLBot_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLBot.NativeDisplayDebug
struct AOLBot_NativeDisplayDebug_Params
{
	class UCanvas*                                     aCanvas;                                                  // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLBot.ShouldLogToConsole
struct AOLBot_ShouldLogToConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.AILog_Internal
struct AOLBot_AILog_Internal_Params
{
	struct FString                                     LogText;                                                  // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       LogCategory;                                              // (OptionalParm, Parm)
	bool                                               bForce;                                                   // (OptionalParm, Parm)
};

// Function OLGame.OLBot.DebugMessagePlayer
struct AOLBot_DebugMessagePlayer_Params
{
	struct FString                                     msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
};

// Function OLGame.OLBot.ToggleAIAlwaysSeePlayer
struct AOLBot_ToggleAIAlwaysSeePlayer_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer
struct AOLBot_OnToggleAIAlwaysSeePlayer_Params
{
	class UOLSeqAct_ToggleAIAlwaysSeePlayer*           Action;                                                   // (Parm)
};

// Function OLGame.OLBot.IgnoreTarget
struct AOLBot_IgnoreTarget_Params
{
	float                                              Time;                                                     // (Parm)
};

// Function OLGame.OLBot.ToggleAIIgnorePlayer
struct AOLBot_ToggleAIIgnorePlayer_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLBot.OnToggleAIIgnorePlayer
struct AOLBot_OnToggleAIIgnorePlayer_Params
{
	class UOLSeqAct_ToggleAIIgnorePlayer*              Action;                                                   // (Parm)
};

// Function OLGame.OLBot.StartWaitForDoor
struct AOLBot_StartWaitForDoor_Params
{
};

// Function OLGame.OLBot.TargetReachable
struct AOLBot_TargetReachable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.StartDynamicMove
struct AOLBot_StartDynamicMove_Params
{
	struct FMovementData                               aData;                                                    // (Parm)
};

// Function OLGame.OLBot.StartMove
struct AOLBot_StartMove_Params
{
	struct FMovementData                               aData;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.NotifyBump
struct AOLBot_NotifyBump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.NotifyPathChanged
struct AOLBot_NotifyPathChanged_Params
{
};

// Function OLGame.OLBot.GeneratePathWithMaxDist
struct AOLBot_GeneratePathWithMaxDist_Params
{
	struct FVector                                     Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (Parm)
	float                                              MaxPathDistance;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GeneratePathToLocation
struct AOLBot_GeneratePathToLocation_Params
{
	struct FVector                                     Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	bool                                               bAllowPartialPath;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GeneratePathToActor
struct AOLBot_GeneratePathToActor_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	bool                                               bAllowPartialPath;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.AddBasePathContraints
struct AOLBot_AddBasePathContraints_Params
{
};

// Function OLGame.OLBot.KnockbackTickNotify
struct AOLBot_KnockbackTickNotify_Params
{
};

// Function OLGame.OLBot.KnockbackStartNotify
struct AOLBot_KnockbackStartNotify_Params
{
};

// Function OLGame.OLBot.BreakDoorNotify
struct AOLBot_BreakDoorNotify_Params
{
};

// Function OLGame.OLBot.BashDoorNotify
struct AOLBot_BashDoorNotify_Params
{
};

// Function OLGame.OLBot.AttackCycleEnd
struct AOLBot_AttackCycleEnd_Params
{
};

// Function OLGame.OLBot.ClearAnimation
struct AOLBot_ClearAnimation_Params
{
};

// Function OLGame.OLBot.PlayFullBodyAnim
struct AOLBot_PlayFullBodyAnim_Params
{
	struct FName                                       AnimName;                                                 // (Parm)
	float                                              Rate;                                                     // (Parm)
	float                                              BlendInTime;                                              // (OptionalParm, Parm)
	float                                              BlendOutTime;                                             // (OptionalParm, Parm)
	bool                                               bLooping;                                                 // (OptionalParm, Parm)
	float                                              StartTime;                                                // (OptionalParm, Parm)
	float                                              EndTime;                                                  // (OptionalParm, Parm)
};

// Function OLGame.OLBot.PushQueuedCommand
struct AOLBot_PushQueuedCommand_Params
{
};

// Function OLGame.OLBot.QueueAICommand
struct AOLBot_QueueAICommand_Params
{
	class UGameAICommand*                              Cmd;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.UnPossess
struct AOLBot_UnPossess_Params
{
};

// Function OLGame.OLBot.Possess
struct AOLBot_Possess_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function OLGame.OLBot.Destroyed
struct AOLBot_Destroyed_Params
{
};

// Function OLGame.OLBot.InitNavigationHandle
struct AOLBot_InitNavigationHandle_Params
{
};

// Function OLGame.OLBot.PostBeginPlay
struct AOLBot_PostBeginPlay_Params
{
};

// Function OLGame.OLBot.LogErrorNotOnNavmesh
struct AOLBot_LogErrorNotOnNavmesh_Params
{
};

// Function OLGame.OLBot.LogErrorFailedMove
struct AOLBot_LogErrorFailedMove_Params
{
};

// Function OLGame.OLBot.TestLogAIToConsole
struct AOLBot_TestLogAIToConsole_Params
{
	int                                                Verbosity;                                                // (Parm)
};

// Function OLGame.OLBot.UpdateClosingDoorsState
struct AOLBot_UpdateClosingDoorsState_Params
{
};

// Function OLGame.OLBot.CanUnlockDoor
struct AOLBot_CanUnlockDoor_Params
{
	class AOLDoor*                                     aDoor;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.ShouldCloseDoor
struct AOLBot_ShouldCloseDoor_Params
{
	class AOLDoor*                                     aDoor;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetDoorApproachPoint
struct AOLBot_GetDoorApproachPoint_Params
{
	class AOLDoor*                                     aDoor;                                                    // (Parm)
	struct FVector                                     ApproachPoint;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetClosestPointToActor
struct AOLBot_GetClosestPointToActor_Params
{
	struct FVector                                     NewPoint;                                                 // (Parm, OutParm)
	class AActor*                                      ActorToCheck;                                             // (Parm)
	float                                              NewBuffer;                                                // (Parm, OutParm)
	bool                                               bForceNudging;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetClosestPointOnNavMesh
struct AOLBot_GetClosestPointOnNavMesh_Params
{
	struct FVector                                     out_NewPoint;                                             // (Parm, OutParm)
	struct FVector                                     PointToCheck;                                             // (Parm)
	bool                                               bForceNudging;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetCurrentWaypoint
struct AOLBot_GetCurrentWaypoint_Params
{
	class AOLWaypoint*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetMoveCommand
struct AOLBot_GetMoveCommand_Params
{
	class UOLAICmd_MoveAbility*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsPerformingMoveAbility
struct AOLBot_IsPerformingMoveAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsPlayerOnVaultingPath
struct AOLBot_IsPlayerOnVaultingPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor
struct AOLBot_IsPlayerOnBrokenSideOfDoor_Params
{
	class AOLDoor*                                     door;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInDamageRange
struct AOLBot_IsInDamageRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInFinalAttackRange
struct AOLBot_IsInFinalAttackRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInApproachAttackRange
struct AOLBot_IsInApproachAttackRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInCrouchingAttackRange
struct AOLBot_IsInCrouchingAttackRange_Params
{
	float                                              ForwardRangeFactor;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInCrawlingAttackRange
struct AOLBot_IsInCrawlingAttackRange_Params
{
	float                                              ForwardRangeFactor;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInGrabUnderAttackRange
struct AOLBot_IsInGrabUnderAttackRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInAttackRange
struct AOLBot_IsInAttackRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.TargetInSpecialLocation
struct AOLBot_TargetInSpecialLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.CanSeePlayer
struct AOLBot_CanSeePlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.TryTurnAtDestination
struct AOLBot_TryTurnAtDestination_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.HasReachedDestination
struct AOLBot_HasReachedDestination_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.OnMoveSucceeded
struct AOLBot_OnMoveSucceeded_Params
{
};

// Function OLGame.OLBot.MoveDynamic
struct AOLBot_MoveDynamic_Params
{
};

// Function OLGame.OLBot.MoveToPoint
struct AOLBot_MoveToPoint_Params
{
	struct FVector                                     Dest;                                                     // (Const, Parm, OutParm)
	class AActor*                                      ViewFocus;                                                // (Parm)
	float                                              DesiredOffset;                                            // (Parm)
};

// Function OLGame.OLBot.MoveAlongPath
struct AOLBot_MoveAlongPath_Params
{
	TArray<struct FVector>                             PathPoints;                                               // (Parm, NeedCtorLink)
	class AActor*                                      FocusTarget;                                              // (OptionalParm, Parm)
};

// Function OLGame.OLBot.WaitForCrawlEngaged
struct AOLBot_WaitForCrawlEngaged_Params
{
};

// Function OLGame.OLBot.WaitForSpecialMove
struct AOLBot_WaitForSpecialMove_Params
{
	bool                                               bNoDelay;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLBot.WaitForFullBodyAnim
struct AOLBot_WaitForFullBodyAnim_Params
{
};

// Function OLGame.OLBot.TargetUnreacheable
struct AOLBot_TargetUnreacheable_Params
{
};

// Function OLGame.OLBot.PushPlayer
struct AOLBot_PushPlayer_Params
{
};

// Function OLGame.OLBot.TryKnockbackTarget
struct AOLBot_TryKnockbackTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.TryDamageTarget
struct AOLBot_TryDamageTarget_Params
{
	bool                                               bNonFatal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.FinishMatinee
struct AOLBot_FinishMatinee_Params
{
};

// Function OLGame.OLBot.BeginMatinee
struct AOLBot_BeginMatinee_Params
{
};

// Function OLGame.OLBot.PerformAttackCheck
struct AOLBot_PerformAttackCheck_Params
{
	bool                                               bForSynchedAnim;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.PerformGrabCheck
struct AOLBot_PerformGrabCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.EndDoorTraversal
struct AOLBot_EndDoorTraversal_Params
{
};

// Function OLGame.OLBot.StartDoorTraversal
struct AOLBot_StartDoorTraversal_Params
{
	bool                                               bReversed;                                                // (Parm)
};

// Function OLGame.OLBot.StopMoving
struct AOLBot_StopMoving_Params
{
	bool                                               bAborted;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLBot.RegeneratePath
struct AOLBot_RegeneratePath_Params
{
};

// Function OLGame.OLBot.SetNavmeshValidatedMovePoint
struct AOLBot_SetNavmeshValidatedMovePoint_Params
{
	bool                                               bForceNudging;                                            // (OptionalParm, Parm)
	bool                                               bQuiet;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GeneratePath
struct AOLBot_GeneratePath_Params
{
	bool                                               bQuiet;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.ClearAllActivities
struct AOLBot_ClearAllActivities_Params
{
};

// Function OLGame.OLBot.ClearDestination
struct AOLBot_ClearDestination_Params
{
};

// Function OLGame.OLBot.ClearInvestigation
struct AOLBot_ClearInvestigation_Params
{
};

// Function OLGame.OLBot.ClearNextMove
struct AOLBot_ClearNextMove_Params
{
};

// Function OLGame.OLBot.ClearCurrentMove
struct AOLBot_ClearCurrentMove_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.TurnBeforePerform
struct UOLAICmd_MoveAbility_TurnBeforePerform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.MustTurnBeforePerform
struct UOLAICmd_MoveAbility_MustTurnBeforePerform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ShouldWaitBeforeUsing
struct UOLAICmd_MoveAbility_ShouldWaitBeforeUsing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.IsObjectInUse
struct UOLAICmd_MoveAbility_IsObjectInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ModifyPath
struct UOLAICmd_MoveAbility_ModifyPath_Params
{
	struct FVector                                     NewDestination;                                           // (Parm)
	TArray<struct FVector>                             NewPath;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility.ModifyApproach
struct UOLAICmd_MoveAbility_ModifyApproach_Params
{
	struct FVector                                     NewDestination;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.Completed
struct UOLAICmd_MoveAbility_Completed_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.Popped
struct UOLAICmd_MoveAbility_Popped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.Pushed
struct UOLAICmd_MoveAbility_Pushed_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable
struct UOLAICmd_MoveAbility_Bash_MoveThruBashable_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLBashableObject*                           InBashable;                                               // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Bash*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.AutomaticDoorOpen
struct UOLAICmd_MoveAbility_Door_AutomaticDoorOpen_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.CancelPlayerInteraction
struct UOLAICmd_MoveAbility_Door_CancelPlayerInteraction_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.Cleanup
struct UOLAICmd_MoveAbility_Door_Cleanup_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetDoorBashCount
struct UOLAICmd_MoveAbility_Door_GetDoorBashCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.ShouldWaitBeforeUsing
struct UOLAICmd_MoveAbility_Door_ShouldWaitBeforeUsing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse
struct UOLAICmd_MoveAbility_Door_IsObjectInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.Cancel
struct UOLAICmd_MoveAbility_Door_Cancel_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.Popped
struct UOLAICmd_MoveAbility_Door_Popped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach
struct UOLAICmd_MoveAbility_Door_ModifyApproach_Params
{
	struct FVector                                     NewDestination;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen
struct UOLAICmd_MoveAbility_Door_IsDoorOpen_Params
{
	class AOLDoor*                                     TestDoor;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor
struct UOLAICmd_MoveAbility_Door_MoveThruDoor_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLDoor*                                     InDoor;                                                   // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Door*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_EnterBeam.MoveToBeam
struct UOLAICmd_MoveAbility_EnterBeam_MoveToBeam_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLBeamMarker*                               InMarker;                                                 // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	class UOLAICmd_MoveAbility_EnterBeam*              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_EnterCrawl.MoveToCrawl
struct UOLAICmd_MoveAbility_EnterCrawl_MoveToCrawl_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLCrawlMarker*                              InMarker;                                                 // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	class UOLAICmd_MoveAbility_EnterCrawl*             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_EnterCrawl.ShouldWaitBeforeUsing
struct UOLAICmd_MoveAbility_EnterCrawl_ShouldWaitBeforeUsing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Jump.MoveThruJump
struct UOLAICmd_MoveAbility_Jump_MoveThruJump_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLJumpMarker*                               InMarker;                                                 // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	class UOLAICmd_MoveAbility_Jump*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge
struct UOLAICmd_MoveAbility_Ledge_MoveThruLedge_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLLedgeMarker*                              InLedge;                                                  // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Ledge*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge
struct UOLAICmd_MoveAbility_Vault_MoveThruLedge_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLAIVaultMarker*                            InMarker;                                                 // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Vault*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Window.ShouldWaitBeforeUsing
struct UOLAICmd_MoveAbility_Window_ShouldWaitBeforeUsing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Window.IsObjectInUse
struct UOLAICmd_MoveAbility_Window_IsObjectInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Window.Cancel
struct UOLAICmd_MoveAbility_Window_Cancel_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Window.Popped
struct UOLAICmd_MoveAbility_Window_Popped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Window.MoveThruWindow
struct UOLAICmd_MoveAbility_Window_MoveThruWindow_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLWindow*                                   InWindow;                                                 // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Window*                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAIGroup.UseFallbackFormation
struct UOLAIGroup_UseFallbackFormation_Params
{
};

// Function OLGame.OLAIGroup.UseDesiredFormation
struct UOLAIGroup_UseDesiredFormation_Params
{
};

// Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume
struct AOLAIInvestigationVolume_ProcessActorSetVolume_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function OLGame.OLNavigationHandle.PointReachable
struct UOLNavigationHandle_PointReachable_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     OverrideStartPoint;                                       // (OptionalParm, Parm)
	bool                                               bAllowHitsInEndCollisionBox;                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.TrimPathByDistance
struct UOLNavigationHandle_TrimPathByDistance_Params
{
	float                                              DistanceToTrim;                                           // (Parm)
	struct FVector                                     out_NewDestination;                                       // (Parm, OutParm)
	bool                                               bStopAtMeshObject;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.TrimPathToLastClosedDoor
struct UOLNavigationHandle_TrimPathToLastClosedDoor_Params
{
	struct FVector                                     out_NewDestination;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.ClearPath
struct UOLNavigationHandle_ClearPath_Params
{
};

// Function OLGame.OLNavigationHandle.PopMoveLocation
struct UOLNavigationHandle_PopMoveLocation_Params
{
};

// Function OLGame.OLNavigationHandle.GetNextMovePath
struct UOLNavigationHandle_GetNextMovePath_Params
{
	TArray<struct FVector>                             out_MovePath;                                             // (Parm, OutParm, NeedCtorLink)
	float                                              ArrivalDistance;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.GetNextMoveLocation
struct UOLNavigationHandle_GetNextMoveLocation_Params
{
	struct FVector                                     out_MoveDest;                                             // (Parm, OutParm)
	float                                              ArrivalDistance;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.FindPath
struct UOLNavigationHandle_FindPath_Params
{
	class AActor*                                      out_DestActor;                                            // (OptionalParm, Parm, OutParm)
	int                                                out_DestItem;                                             // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle
struct UOLNavMeshPath_SimilarToLastPath_Recycle_Params
{
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath
struct UOLNavMeshPath_SimilarToLastPath_SimilarToLastPath_Params
{
	class UNavigationHandle*                           NavHandle;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEnemyMartha.PlayParticleEffect
struct AOLEnemyMartha_PlayParticleEffect_Params
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                           // (Const, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEnemyNickAndLaird.StopAnimatingArrow
struct AOLEnemyNickAndLaird_StopAnimatingArrow_Params
{
};

// Function OLGame.OLEnemyNickAndLaird.SpawnAndAnimateNewArrow
struct AOLEnemyNickAndLaird_SpawnAndAnimateNewArrow_Params
{
};

// Function OLGame.OLEnemyNickAndLaird.SpawnNewArrow
struct AOLEnemyNickAndLaird_SpawnNewArrow_Params
{
};

// Function OLGame.OLEnemyNickAndLaird.ArrowLaunch
struct AOLEnemyNickAndLaird_ArrowLaunch_Params
{
};

// Function OLGame.OLWaypoint.AnimStartedEvent
struct AOLWaypoint_AnimStartedEvent_Params
{
	class AActor*                                      InInstigator;                                             // (Parm)
};

// Function OLGame.OLWaypoint.WaypointReachedEvent
struct AOLWaypoint_WaypointReachedEvent_Params
{
	class AActor*                                      InInstigator;                                             // (Parm)
};

// Function OLGame.OLAnimMappedSequence.SetAnim
struct UOLAnimMappedSequence_SetAnim_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
};

// Function OLGame.OLSeqAct_AICondition.GetObjClassVersion
struct UOLSeqAct_AICondition_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_AIForceCrawl.GetObjClassVersion
struct UOLSeqAct_AIForceCrawl_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_AIGotoPoint.GetObjClassVersion
struct UOLSeqAct_AIGotoPoint_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_AIInvestigatePoint.GetObjClassVersion
struct UOLSeqAct_AIInvestigatePoint_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_AISetLeash.GetObjClassVersion
struct UOLSeqAct_AISetLeash_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion
struct UOLSeqAct_AIStartPatrol_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_AIUnspawnAtLocation.GetObjClassVersion
struct UOLSeqAct_AIUnspawnAtLocation_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_Arrow.GetObjClassVersion
struct UOLSeqAct_Arrow_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_Camcorder.GetObjClassVersion
struct UOLSeqAct_Camcorder_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_CameraParticleEffect.GetObjClassVersion
struct UOLSeqAct_CameraParticleEffect_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_CameraShake.GetObjClassVersion
struct UOLSeqAct_CameraShake_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_DelayByDifficulty.ResetDelayActive
struct UOLSeqAct_DelayByDifficulty_ResetDelayActive_Params
{
};

// Function OLGame.OLSeqAct_DelayByDifficulty.Reset
struct UOLSeqAct_DelayByDifficulty_Reset_Params
{
};

// Function OLGame.OLSeqAct_Door.GetObjClassVersion
struct UOLSeqAct_Door_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_GenericBlend.GetObjClassVersion
struct UOLSeqAct_GenericBlend_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_HeroControl.GetObjClassVersion
struct UOLSeqAct_HeroControl_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_HeroPlayAnim.GetObjClassVersion
struct UOLSeqAct_HeroPlayAnim_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_HideInSight.GetObjClassVersion
struct UOLSeqAct_HideInSight_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_InvisibleFootsteps.ShouldHandleDecal
struct UOLSeqAct_InvisibleFootsteps_ShouldHandleDecal_Params
{
	TEnumAsByte<EFootstepDecalType>                    DecalType;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_InvisibleFootsteps.SpawnFootstepDecal
struct UOLSeqAct_InvisibleFootsteps_SpawnFootstepDecal_Params
{
	bool                                               bLeftFoot;                                                // (Parm)
	struct FVector                                     DecalLocation;                                            // (Parm, OutParm)
	struct FRotator                                    DecalRotation;                                            // (Parm, OutParm)
};

// Function OLGame.OLSeqAct_LightEnvControl.GetObjClassVersion
struct UOLSeqAct_LightEnvControl_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_NightVisionStatus.GetObjClassVersion
struct UOLSeqAct_NightVisionStatus_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_PairedWalk.GetObjClassVersion
struct UOLSeqAct_PairedWalk_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_PrepareMapTransition.GetObjClassVersion
struct UOLSeqAct_PrepareMapTransition_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_Pushable.GetObjClassVersion
struct UOLSeqAct_Pushable_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_SetObjective.GetObjClassVersion
struct UOLSeqAct_SetObjective_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_Struggle.GetObjClassVersion
struct UOLSeqAct_Struggle_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_WaitAndReact.GetObjClassVersion
struct UOLSeqAct_WaitAndReact_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_WaitForPlayerInput.GetObjClassVersion
struct UOLSeqAct_WaitForPlayerInput_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_AIState.GetObjClassVersion
struct UOLSeqCond_AIState_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion
struct UOLSeqCond_Checkpoint_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_IsDemo.GetObjClassVersion
struct UOLSeqCond_IsDemo_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion
struct UOLSeqCond_IsTouching_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_PlayerHealth.GetObjClassVersion
struct UOLSeqCond_PlayerHealth_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion
struct UOLSeqEvent_ApplyCheckpointState_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqEvent_Bashable.GetObjClassVersion
struct UOLSeqEvent_Bashable_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqEvent_CSAActivated.Toggled
struct UOLSeqEvent_CSAActivated_Toggled_Params
{
};

// Function OLGame.OLSeqEvent_Door.GetObjClassVersion
struct UOLSeqEvent_Door_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete
struct UOLGFxMoviePlayer_OnProfileWriteComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OLGame.OLGFxMoviePlayer.SaveProfile
struct UOLGFxMoviePlayer_SaveProfile_Params
{
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (OptionalParm, Parm, NeedCtorLink)
	class AOLPlayerController*                         PlayerToSave;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface
struct UOLGFxMoviePlayer_GetOnlinePlayerInterface_Params
{
	TScriptInterface<class UOnlinePlayerInterface>     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGFxMoviePlayer.MuteSoundThemes
struct UOLGFxMoviePlayer_MuteSoundThemes_Params
{
	bool                                               bMute;                                                    // (Parm)
};

// Function OLGame.OLGFxMoviePlayer.GetGame
struct UOLGFxMoviePlayer_GetGame_Params
{
	class AOLGame*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGFxMoviePlayer.GetOLPC
struct UOLGFxMoviePlayer_GetOLPC_Params
{
	class AOLPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIMessage.SetPCQTELabels
struct UOLUIMessage_SetPCQTELabels_Params
{
	struct FString                                     upStr;                                                    // (Parm, NeedCtorLink)
	struct FString                                     leftStr;                                                  // (Parm, NeedCtorLink)
	struct FString                                     downStr;                                                  // (Parm, NeedCtorLink)
	struct FString                                     rightStr;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIMessage.SetSubtitleHeight
struct UOLUIMessage_SetSubtitleHeight_Params
{
	bool                                               hight;                                                    // (Parm)
};

// Function OLGame.OLUIMessage.TryClose
struct UOLUIMessage_TryClose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIMessage.TryCloseInternal
struct UOLUIMessage_TryCloseInternal_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIMessage.WidgetInitialized
struct UOLUIMessage_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIMessage.SetMessage
struct UOLUIMessage_SetMessage_Params
{
	TEnumAsByte<EHUDMessageType>                       MessageType;                                              // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIMessage.SetVisible
struct UOLUIMessage_SetVisible_Params
{
	bool                                               bVisible;                                                 // (Parm)
};

// Function OLGame.OLUIMessage.OnClose
struct UOLUIMessage_OnClose_Params
{
};

// Function OLGame.OLUIMessage.Start
struct UOLUIMessage_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.NotifyAltEnter
struct UOLUIFrontEnd_NotifyAltEnter_Params
{
};

// Function OLGame.OLUIFrontEnd.GetLocalizedString
struct UOLUIFrontEnd_GetLocalizedString_Params
{
	struct FString                                     Category;                                                 // (Parm, NeedCtorLink)
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     File;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey
struct UOLUIFrontEnd_GetGamepadActionBoundToKey_Params
{
	struct FString                                     KeyNameString;                                            // (Parm, NeedCtorLink)
	int                                                ConfigType;                                               // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.HasInitializedGamma
struct UOLUIFrontEnd_HasInitializedGamma_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName
struct UOLUIFrontEnd_GetFriendlyKeyBindingName_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.StartKeyBindingCapture
struct UOLUIFrontEnd_StartKeyBindingCapture_Params
{
};

// Function OLGame.OLUIFrontEnd.FilterButtonInput
struct UOLUIFrontEnd_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.WidgetInitialized
struct UOLUIFrontEnd_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.ConfigureTargetView
struct UOLUIFrontEnd_ConfigureTargetView_Params
{
	class UOLUIFrontEnd_View*                          targetView;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd.ConfigureView
struct UOLUIFrontEnd_ConfigureView_Params
{
	class UOLUIFrontEnd_View*                          InView;                                                   // (Parm)
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd.PopViewStub
struct UOLUIFrontEnd_PopViewStub_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.PopView
struct UOLUIFrontEnd_PopView_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.PushViewByName
struct UOLUIFrontEnd_PushViewByName_Params
{
	struct FName                                       TargetViewName;                                           // (Parm)
	class UOLUIFrontEnd_Screen*                        ParentView;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd.PushView
struct UOLUIFrontEnd_PushView_Params
{
	class UOLUIFrontEnd_View*                          targetView;                                               // (Parm, CoerceParm)
};

// Function OLGame.OLUIFrontEnd.LoadView
struct UOLUIFrontEnd_LoadView_Params
{
	struct FViewInfo                                   InViewInfo;                                               // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.LoadViews
struct UOLUIFrontEnd_LoadViews_Params
{
};

// Function OLGame.OLUIFrontEnd.CleanViews
struct UOLUIFrontEnd_CleanViews_Params
{
};

// Function OLGame.OLUIFrontEnd.ConfigFrontEnd
struct UOLUIFrontEnd_ConfigFrontEnd_Params
{
};

// Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged
struct UOLUIFrontEnd_OnKeyBindingsChanged_Params
{
};

// Function OLGame.OLUIFrontEnd.AddCaptureKeys
struct UOLUIFrontEnd_AddCaptureKeys_Params
{
};

// Function OLGame.OLUIFrontEnd.OnClose
struct UOLUIFrontEnd_OnClose_Params
{
};

// Function OLGame.OLUIFrontEnd.Start
struct UOLUIFrontEnd_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.InputTypeChanged
struct UOLUIFrontEnd_View_InputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_View.ASHideDialogs
struct UOLUIFrontEnd_View_ASHideDialogs_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCancelled
struct UOLUIFrontEnd_View_OnKeyBindingCancelled_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured
struct UOLUIFrontEnd_View_OnKeyBindingCaptured_Params
{
	struct FName                                       KeyName;                                                  // (Parm)
};

// Function OLGame.OLUIFrontEnd_View.FilterButtonInput
struct UOLUIFrontEnd_View_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.WidgetInitialized
struct UOLUIFrontEnd_View_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.back
struct UOLUIFrontEnd_View_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.NotifyAltEnter
struct UOLUIFrontEnd_View_NotifyAltEnter_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnViewDeactivated
struct UOLUIFrontEnd_View_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnViewActivated
struct UOLUIFrontEnd_View_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnTopMostView
struct UOLUIFrontEnd_View_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_View.OnViewLoaded
struct UOLUIFrontEnd_View_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized
struct UOLUIFrontEnd_Screen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Screen.LocalizeGeneric
struct UOLUIFrontEnd_Screen_LocalizeGeneric_Params
{
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative
struct UOLUIFrontEnd_Screen_LocalizeNarrative_Params
{
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled
struct UOLUIFrontEnd_Screen_IsDLCInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Screen.IsPlaytest
struct UOLUIFrontEnd_Screen_IsPlaytest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Screen.IsDemo
struct UOLUIFrontEnd_Screen_IsDemo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Screen.IsTopMostView
struct UOLUIFrontEnd_Screen_IsTopMostView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.TickGameDownload
struct UOLUIFrontEnd_MainMenu_TickGameDownload_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.Tick
struct UOLUIFrontEnd_MainMenu_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.ASInitButtonFocus
struct UOLUIFrontEnd_MainMenu_ASInitButtonFocus_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText
struct UOLUIFrontEnd_MainMenu_ASShowNewGameIntroText_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowDeleteRecordingsConfirmationDialog
struct UOLUIFrontEnd_MainMenu_ShowDeleteRecordingsConfirmationDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowMessageDialog
struct UOLUIFrontEnd_MainMenu_ShowMessageDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized
struct UOLUIFrontEnd_MainMenu_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.FilterButtonInput
struct UOLUIFrontEnd_MainMenu_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowPressStartScreen
struct UOLUIFrontEnd_MainMenu_ShowPressStartScreen_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.ForceShowLoginUI
struct UOLUIFrontEnd_MainMenu_ForceShowLoginUI_Params
{
	int                                                ControllerId;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnPressStart
struct UOLUIFrontEnd_MainMenu_OnPressStart_Params
{
	int                                                ControllerId;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnDingoUserInitialized
struct UOLUIFrontEnd_MainMenu_OnDingoUserInitialized_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick
struct UOLUIFrontEnd_MainMenu_OnButtonClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.SetMainMenuText
struct UOLUIFrontEnd_MainMenu_SetMainMenuText_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons
struct UOLUIFrontEnd_MainMenu_PopulateButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.back
struct UOLUIFrontEnd_MainMenu_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnRecordingsButtonPress
struct UOLUIFrontEnd_MainMenu_OnRecordingsButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress
struct UOLUIFrontEnd_MainMenu_OnExitButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress
struct UOLUIFrontEnd_MainMenu_OnCreditsButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress
struct UOLUIFrontEnd_MainMenu_OnOptionsButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.Select_Options
struct UOLUIFrontEnd_MainMenu_Select_Options_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnSaveListButtonPress
struct UOLUIFrontEnd_MainMenu_OnSaveListButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress
struct UOLUIFrontEnd_MainMenu_OnLoadButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOK
struct UOLUIFrontEnd_MainMenu_OnOK_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick
struct UOLUIFrontEnd_MainMenu_OnOKButtonClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.GoToNextIntroText
struct UOLUIFrontEnd_MainMenu_GoToNextIntroText_Params
{
	struct FString                                     NextText;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress
struct UOLUIFrontEnd_MainMenu_OnChaptersButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress
struct UOLUIFrontEnd_MainMenu_OnStartDLCButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress
struct UOLUIFrontEnd_MainMenu_OnStartButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback
struct UOLUIFrontEnd_MainMenu_GameLoadedCallback_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame
struct UOLUIFrontEnd_MainMenu_StartNewGame_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.DingoRecordingStorageDialogResult
struct UOLUIFrontEnd_MainMenu_DingoRecordingStorageDialogResult_Params
{
	int                                                Type;                                                     // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected
struct UOLUIFrontEnd_MainMenu_DifficultySelected_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.TrySkipSaveScreen
struct UOLUIFrontEnd_MainMenu_TrySkipSaveScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowGamertag
struct UOLUIFrontEnd_MainMenu_ShowGamertag_Params
{
	struct FString                                     Gamertag;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.HideGametag
struct UOLUIFrontEnd_MainMenu_HideGametag_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected
struct UOLUIFrontEnd_MainMenu_SaveLocationSelected_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnBadCheckpointMsgAcknowledged
struct UOLUIFrontEnd_MainMenu_OnBadCheckpointMsgAcknowledged_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowBadCheckpointMsg
struct UOLUIFrontEnd_MainMenu_ShowBadCheckpointMsg_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress
struct UOLUIFrontEnd_MainMenu_OnContinueButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView
struct UOLUIFrontEnd_MainMenu_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded
struct UOLUIFrontEnd_MainMenu_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized
struct UOLUIFrontEnd_Credits_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Credits.SetCreditsText
struct UOLUIFrontEnd_Credits_SetCreditsText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Credits.FilterButtonInput
struct UOLUIFrontEnd_Credits_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Credits.Press_Back
struct UOLUIFrontEnd_Credits_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated
struct UOLUIFrontEnd_Credits_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.StartCredits
struct UOLUIFrontEnd_Credits_StartCredits_Params
{
	bool                                               bQuickstart;                                              // (Parm)
};

// Function OLGame.OLUIFrontEnd_Credits.OnTopMostView
struct UOLUIFrontEnd_Credits_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFadeOut
struct UOLUIFrontEnd_Credits_OnCreditsFadeOut_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished
struct UOLUIFrontEnd_Credits_OnCreditsFinished_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.back
struct UOLUIFrontEnd_Credits_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_CleanText.FilterButtonInput
struct UOLUIFrontEnd_CleanText_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_CleanText.Tick
struct UOLUIFrontEnd_CleanText_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_CleanText.PreviousPage
struct UOLUIFrontEnd_CleanText_PreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.NextPage
struct UOLUIFrontEnd_CleanText_NextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.InitializeFocusControl
struct UOLUIFrontEnd_CleanText_InitializeFocusControl_Params
{
	bool                                               bIsController;                                            // (Parm)
};

// Function OLGame.OLUIFrontEnd_CleanText.InputTypeChanged
struct UOLUIFrontEnd_CleanText_InputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.InitializeText
struct UOLUIFrontEnd_CleanText_InitializeText_Params
{
	struct FString                                     In_Title;                                                 // (Parm, NeedCtorLink)
	struct FString                                     In_Text;                                                  // (Parm, NeedCtorLink)
	bool                                               In_bIsGospel;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_CleanText.back
struct UOLUIFrontEnd_CleanText_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_CleanText.Press_Back
struct UOLUIFrontEnd_CleanText_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_CleanText.WidgetInitialized
struct UOLUIFrontEnd_CleanText_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_CleanText.OnViewLoaded
struct UOLUIFrontEnd_CleanText_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.InitializeView
struct UOLUIFrontEnd_CleanText_InitializeView_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.OnTopMostView
struct UOLUIFrontEnd_CleanText_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_Console.WidgetInitialized
struct UOLUIFrontEnd_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Console.CleanViews
struct UOLUIFrontEnd_Console_CleanViews_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton
struct UOLUIFrontEnd_GammaScreen_Console_ASDisableBackButton_Params
{
	bool                                               bDisable;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting
struct UOLUIFrontEnd_GammaScreen_Console_GetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized
struct UOLUIFrontEnd_GammaScreen_Console_IsGammaInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized
struct UOLUIFrontEnd_GammaScreen_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Tick
struct UOLUIFrontEnd_GammaScreen_Console_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput
struct UOLUIFrontEnd_GammaScreen_Console_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider
struct UOLUIFrontEnd_GammaScreen_Console_Change_Slider_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop
struct UOLUIFrontEnd_GammaScreen_Console_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated
struct UOLUIFrontEnd_GammaScreen_Console_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.back
struct UOLUIFrontEnd_GammaScreen_Console_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back
struct UOLUIFrontEnd_GammaScreen_Console_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept
struct UOLUIFrontEnd_GammaScreen_Console_OnAccept_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept
struct UOLUIFrontEnd_GammaScreen_Console_Press_Accept_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView
struct UOLUIFrontEnd_GammaScreen_Console_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded
struct UOLUIFrontEnd_GammaScreen_Console_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.InputTypeChanged
struct UOLUIFrontEnd_RecordingMenu_InputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.selectConsole
struct UOLUIFrontEnd_RecordingMenu_selectConsole_Params
{
	struct FString                                     Console;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.InitializeFocusControl
struct UOLUIFrontEnd_RecordingMenu_InitializeFocusControl_Params
{
	bool                                               bIsController;                                            // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.FilterButtonInput
struct UOLUIFrontEnd_RecordingMenu_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.WidgetInitialized
struct UOLUIFrontEnd_RecordingMenu_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.LinkButtons
struct UOLUIFrontEnd_RecordingMenu_LinkButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetPlayButton
struct UOLUIFrontEnd_RecordingMenu_OnSetPlayButton_Params
{
	class UGFxClikWidget*                              Widget;                                                   // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetPreviousButton
struct UOLUIFrontEnd_RecordingMenu_OnSetPreviousButton_Params
{
	class UGFxClikWidget*                              Widget;                                                   // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetNextButton
struct UOLUIFrontEnd_RecordingMenu_OnSetNextButton_Params
{
	class UGFxClikWidget*                              Widget;                                                   // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetBackButton
struct UOLUIFrontEnd_RecordingMenu_OnSetBackButton_Params
{
	class UGFxClikWidget*                              Widget;                                                   // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.SetLargeImageSize
struct UOLUIFrontEnd_RecordingMenu_SetLargeImageSize_Params
{
	float                                              SizeX;                                                    // (Parm)
	float                                              SizeY;                                                    // (Parm)
	float                                              PosX;                                                     // (Parm)
	float                                              PosY;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.PlayEvent
struct UOLUIFrontEnd_RecordingMenu_PlayEvent_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Play
struct UOLUIFrontEnd_RecordingMenu_Press_Play_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.PauseVideo
struct UOLUIFrontEnd_RecordingMenu_PauseVideo_Params
{
	bool                                               bForce;                                                   // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.StopVideo
struct UOLUIFrontEnd_RecordingMenu_StopVideo_Params
{
	bool                                               bClearVO;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.PlayVideo
struct UOLUIFrontEnd_RecordingMenu_PlayVideo_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Previous
struct UOLUIFrontEnd_RecordingMenu_Press_Previous_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Previous
struct UOLUIFrontEnd_RecordingMenu_Previous_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Next
struct UOLUIFrontEnd_RecordingMenu_Press_Next_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Next
struct UOLUIFrontEnd_RecordingMenu_Next_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Back
struct UOLUIFrontEnd_RecordingMenu_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.back
struct UOLUIFrontEnd_RecordingMenu_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.ShowChangeConfirmationDialog
struct UOLUIFrontEnd_RecordingMenu_ShowChangeConfirmationDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     noButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.ResetFocus
struct UOLUIFrontEnd_RecordingMenu_ResetFocus_Params
{
	int                                                focusIndex;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Tick
struct UOLUIFrontEnd_RecordingMenu_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.ShowFullSizeImage
struct UOLUIFrontEnd_RecordingMenu_ShowFullSizeImage_Params
{
	struct FString                                     ImageURL;                                                 // (Parm, NeedCtorLink)
	bool                                               bIsVideo;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnRecordingClicked
struct UOLUIFrontEnd_RecordingMenu_OnRecordingClicked_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.GetFullSizeTexture
struct UOLUIFrontEnd_RecordingMenu_GetFullSizeTexture_Params
{
	int                                                Index;                                                    // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnRecordingTypeClicked
struct UOLUIFrontEnd_RecordingMenu_OnRecordingTypeClicked_Params
{
	int                                                TypeIndex;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.PopulateChapterList
struct UOLUIFrontEnd_RecordingMenu_PopulateChapterList_Params
{
	bool                                               bFocus;                                                   // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.InitiateThumbnailTextures
struct UOLUIFrontEnd_RecordingMenu_InitiateThumbnailTextures_Params
{
	unsigned char                                      Type;                                                     // (Parm)
	int                                                ThumbSortingType;                                         // (Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.InitiateCategoriesTextures
struct UOLUIFrontEnd_RecordingMenu_InitiateCategoriesTextures_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Pop
struct UOLUIFrontEnd_RecordingMenu_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewDeactivated
struct UOLUIFrontEnd_RecordingMenu_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewActivated
struct UOLUIFrontEnd_RecordingMenu_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewLoaded
struct UOLUIFrontEnd_RecordingMenu_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.SetLocalizedStrings
struct UOLUIFrontEnd_RecordingMenu_SetLocalizedStrings_Params
{
	struct FString                                     Play;                                                     // (Parm, NeedCtorLink)
	struct FString                                     Pause;                                                    // (Parm, NeedCtorLink)
	struct FString                                     cleanText;                                                // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnTopMostView
struct UOLUIFrontEnd_RecordingMenu_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Tick
struct UOLUIFrontEnd_ChapterSelection_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.LinkButtons
struct UOLUIFrontEnd_ChapterSelection_LinkButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnSetBackButton
struct UOLUIFrontEnd_ChapterSelection_OnSetBackButton_Params
{
	class UGFxClikWidget*                              Widget;                                                   // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized
struct UOLUIFrontEnd_ChapterSelection_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.GetCurrentSectionCount
struct UOLUIFrontEnd_ChapterSelection_GetCurrentSectionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.GetMaxSectionCount
struct UOLUIFrontEnd_ChapterSelection_GetMaxSectionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back
struct UOLUIFrontEnd_ChapterSelection_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.back
struct UOLUIFrontEnd_ChapterSelection_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnGameTypeSelect
struct UOLUIFrontEnd_ChapterSelection_OnGameTypeSelect_Params
{
	int                                                Type;                                                     // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.SaveLocationSelected
struct UOLUIFrontEnd_ChapterSelection_SaveLocationSelected_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnChapterClicked
struct UOLUIFrontEnd_ChapterSelection_OnChapterClicked_Params
{
	int                                                chapterIndex;                                             // (Parm)
	int                                                buttonIndex;                                              // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.ShowChangeConfirmationDialog
struct UOLUIFrontEnd_ChapterSelection_ShowChangeConfirmationDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     noButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.ResetFocus
struct UOLUIFrontEnd_ChapterSelection_ResetFocus_Params
{
	int                                                focusIndex;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnSectionClicked
struct UOLUIFrontEnd_ChapterSelection_OnSectionClicked_Params
{
	int                                                SectionIndex;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList
struct UOLUIFrontEnd_ChapterSelection_PopulateChapterList_Params
{
	bool                                               bFocus;                                                   // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.InitializeFocusControl
struct UOLUIFrontEnd_ChapterSelection_InitializeFocusControl_Params
{
	bool                                               bIsController;                                            // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.InputTypeChanged
struct UOLUIFrontEnd_ChapterSelection_InputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.GetChapterName
struct UOLUIFrontEnd_ChapterSelection_GetChapterName_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.HasValidChapters
struct UOLUIFrontEnd_ChapterSelection_HasValidChapters_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Pop
struct UOLUIFrontEnd_ChapterSelection_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewActivated
struct UOLUIFrontEnd_ChapterSelection_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewLoaded
struct UOLUIFrontEnd_ChapterSelection_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.selectConsole
struct UOLUIFrontEnd_ChapterSelection_selectConsole_Params
{
	struct FString                                     Console;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView
struct UOLUIFrontEnd_ChapterSelection_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized
struct UOLUIFrontEnd_DifficultySelectionScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog
struct UOLUIFrontEnd_DifficultySelectionScreen_ASShowConfirmInsaneDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput
struct UOLUIFrontEnd_DifficultySelectionScreen_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop
struct UOLUIFrontEnd_DifficultySelectionScreen_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated
struct UOLUIFrontEnd_DifficultySelectionScreen_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame
struct UOLUIFrontEnd_DifficultySelectionScreen_ProceedToStartGame_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane
struct UOLUIFrontEnd_DifficultySelectionScreen_OnConfirmedInsane_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Insane_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Nightmare_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Hard_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Normal_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Easy
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Easy_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView
struct UOLUIFrontEnd_DifficultySelectionScreen_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded
struct UOLUIFrontEnd_DifficultySelectionScreen_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCancelled
struct UOLUIFrontEnd_Options_ASOnKeyBindingCancelled_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured
struct UOLUIFrontEnd_Options_ASOnKeyBindingCaptured_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog
struct UOLUIFrontEnd_Options_ShowMessageDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog
struct UOLUIFrontEnd_Options_ShowKeyBindingConflictDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog
struct UOLUIFrontEnd_Options_ShowChangeConfirmationDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.FilterButtonInput
struct UOLUIFrontEnd_Options_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.Tick
struct UOLUIFrontEnd_Options_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.CloseDialog
struct UOLUIFrontEnd_Options_CloseDialog_Params
{
	int                                                buttonIdx;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.moveTab
struct UOLUIFrontEnd_Options_moveTab_Params
{
	int                                                Side;                                                     // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.NotifyAltEnter
struct UOLUIFrontEnd_Options_NotifyAltEnter_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnSliderChanged
struct UOLUIFrontEnd_Options_OnSliderChanged_Params
{
	int                                                ProfileSettingId;                                         // (Parm)
	float                                              SliderValue;                                              // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts
struct UOLUIFrontEnd_Options_GetKeyBindingConflicts_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList
struct UOLUIFrontEnd_Options_GetCurrentGFxList_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally
struct UOLUIFrontEnd_Options_SetGamepadConfigExternally_Params
{
	int                                                ConfigIndex;                                              // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig
struct UOLUIFrontEnd_Options_GetGamepadConfig_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCancelled
struct UOLUIFrontEnd_Options_OnKeyBindingCancelled_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured
struct UOLUIFrontEnd_Options_OnKeyBindingCaptured_Params
{
	struct FName                                       KeyName;                                                  // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.GetBorderlessFullscreenOptionIndex
struct UOLUIFrontEnd_Options_GetBorderlessFullscreenOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex
struct UOLUIFrontEnd_Options_GetFullscreenOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex
struct UOLUIFrontEnd_Options_GetResolutionOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.WidgetInitialized
struct UOLUIFrontEnd_Options_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SetSelectionFocus
struct UOLUIFrontEnd_Options_SetSelectionFocus_Params
{
	class UGFxObject*                                  MovieClip;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.GetOLProfile
struct UOLUIFrontEnd_Options_GetOLProfile_Params
{
	class UOLProfileSettings*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile
struct UOLUIFrontEnd_Options_SaveSettingsToProfile_Params
{
	bool                                               bApplyOnly;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged
struct UOLUIFrontEnd_Options_HasAnyPropertyChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList
struct UOLUIFrontEnd_Options_HasPropertyChangedInList_Params
{
	class UGFxObject*                                  OptionsList;                                              // (Parm)
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList
struct UOLUIFrontEnd_Options_SaveSettingsForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.TabChanged
struct UOLUIFrontEnd_Options_TabChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList
struct UOLUIFrontEnd_Options_StoreOptionValuesForList_Params
{
	class UGFxObject*                                  OptionsList;                                              // (Parm)
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt
struct UOLUIFrontEnd_Options_GetOptionValueStringAt_Params
{
	class UGFxObject*                                  OptionsList;                                              // (Parm)
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt
struct UOLUIFrontEnd_Options_GetOptionValueAt_Params
{
	class UGFxObject*                                  OptionsList;                                              // (Parm)
	int                                                Index;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList
struct UOLUIFrontEnd_Options_SetDefaultOptionValuesForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList
struct UOLUIFrontEnd_Options_FillOptionValuesForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile
struct UOLUIFrontEnd_Options_FillOptionValuesFromProfile_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions
struct UOLUIFrontEnd_Options_PopulateControlsOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions
struct UOLUIFrontEnd_Options_PopulateGraphicsOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions
struct UOLUIFrontEnd_Options_PopulateGeneralOptions_Params
{
	bool                                               bIgnoreFocus;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.GetLabelTextFromOptionInfo
struct UOLUIFrontEnd_Options_GetLabelTextFromOptionInfo_Params
{
	struct FOptionInfo                                 Info;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption
struct UOLUIFrontEnd_Options_GetObjectFromOption_Params
{
	struct FOptionInfo                                 CurrentOptionInfo;                                        // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons
struct UOLUIFrontEnd_Options_PopulateTabButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.UseInsaneGameplayOptions
struct UOLUIFrontEnd_Options_UseInsaneGameplayOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.UseMainMenuGameplayOptions
struct UOLUIFrontEnd_Options_UseMainMenuGameplayOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton
struct UOLUIFrontEnd_Options_Press_OptionItemButton_Params
{
	int                                                PSID;                                                     // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Reset
struct UOLUIFrontEnd_Options_Press_Reset_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Gamma
struct UOLUIFrontEnd_Options_Press_Gamma_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Back
struct UOLUIFrontEnd_Options_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.OnDiscardChanges
struct UOLUIFrontEnd_Options_OnDiscardChanges_Params
{
	int                                                bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog
struct UOLUIFrontEnd_Options_OnDismissKeyBindingConflictDialog_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Apply
struct UOLUIFrontEnd_Options_Press_Apply_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted
struct UOLUIFrontEnd_Options_OnMustRestartAccepted_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen
struct UOLUIFrontEnd_Options_ExitOptionsScreen_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.back
struct UOLUIFrontEnd_Options_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.OnTopMostView
struct UOLUIFrontEnd_Options_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_Options.OnViewDeactivated
struct UOLUIFrontEnd_Options_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnViewActivated
struct UOLUIFrontEnd_Options_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnViewLoaded
struct UOLUIFrontEnd_Options_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.WidgetInitialized
struct UOLUIFrontEnd_SaveLocationList_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.SetupActionButtonString
struct UOLUIFrontEnd_SaveLocationList_SetupActionButtonString_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.GetHighlightedIndex
struct UOLUIFrontEnd_SaveLocationList_GetHighlightedIndex_Params
{
	bool                                               bAllowSelectedIndex;                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ASTraceFocus
struct UOLUIFrontEnd_SaveLocationList_ASTraceFocus_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ASInitButtonFocus
struct UOLUIFrontEnd_SaveLocationList_ASInitButtonFocus_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ASShowConfirmDialog
struct UOLUIFrontEnd_SaveLocationList_ASShowConfirmDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowMessageDialog
struct UOLUIFrontEnd_SaveLocationList_ShowMessageDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.back
struct UOLUIFrontEnd_SaveLocationList_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.Press_Back
struct UOLUIFrontEnd_SaveLocationList_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.FilterButtonInput
struct UOLUIFrontEnd_SaveLocationList_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ReloadScreen
struct UOLUIFrontEnd_SaveLocationList_ReloadScreen_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnConfirmedDelete
struct UOLUIFrontEnd_SaveLocationList_OnConfirmedDelete_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnConfirmedOverwrite
struct UOLUIFrontEnd_SaveLocationList_OnConfirmedOverwrite_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnMessageDialogAcknowledged
struct UOLUIFrontEnd_SaveLocationList_OnMessageDialogAcknowledged_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowContentNotAvailaible
struct UOLUIFrontEnd_SaveLocationList_ShowContentNotAvailaible_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowBadCheckpointMsg
struct UOLUIFrontEnd_SaveLocationList_ShowBadCheckpointMsg_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnButtonClick
struct UOLUIFrontEnd_SaveLocationList_OnButtonClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ResetFocus
struct UOLUIFrontEnd_SaveLocationList_ResetFocus_Params
{
	int                                                focusIndex;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.PopulateSaves
struct UOLUIFrontEnd_SaveLocationList_PopulateSaves_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.GetSaveFileDisplayName
struct UOLUIFrontEnd_SaveLocationList_GetSaveFileDisplayName_Params
{
	struct FSaveFileInfo                               SaveFile;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.GetDifficultyStr
struct UOLUIFrontEnd_SaveLocationList_GetDifficultyStr_Params
{
	int                                                Difficulty;                                               // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.Pop
struct UOLUIFrontEnd_SaveLocationList_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.InputTypeChanged
struct UOLUIFrontEnd_SaveLocationList_InputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnViewDeactivated
struct UOLUIFrontEnd_SaveLocationList_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnTopMostView
struct UOLUIFrontEnd_SaveLocationList_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.selectConsole
struct UOLUIFrontEnd_SaveLocationList_selectConsole_Params
{
	struct FString                                     Console;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnViewLoaded
struct UOLUIFrontEnd_SaveLocationList_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.TrySkipScreen
struct UOLUIFrontEnd_SaveLocationList_TrySkipScreen_Params
{
	struct FString                                     StartCPName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.SetMessage
struct UOLUIFrontEnd_PausedPrompt_SetMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.FilterButtonInput
struct UOLUIFrontEnd_PausedPrompt_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.OnPressContinue
struct UOLUIFrontEnd_PausedPrompt_OnPressContinue_Params
{
	int                                                ControllerId;                                             // (Parm)
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.OnTopMostView
struct UOLUIFrontEnd_PausedPrompt_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.OnViewLoaded
struct UOLUIFrontEnd_PausedPrompt_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput
struct UOLUIFrontEnd_PauseMenu_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized
struct UOLUIFrontEnd_PauseMenu_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.Tick
struct UOLUIFrontEnd_PauseMenu_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog
struct UOLUIFrontEnd_PauseMenu_ASShowConfirmExitDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.CloseDialog
struct UOLUIFrontEnd_PauseMenu_CloseDialog_Params
{
	int                                                buttonIdx;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.SetSelectionFocus
struct UOLUIFrontEnd_PauseMenu_SetSelectionFocus_Params
{
	class UGFxObject*                                  MovieClip;                                                // (Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed
struct UOLUIFrontEnd_PauseMenu_OnExitConfirmed_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress
struct UOLUIFrontEnd_PauseMenu_OnExitToMenuButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.back
struct UOLUIFrontEnd_PauseMenu_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted
struct UOLUIFrontEnd_PauseMenu_OnSaveCompleted_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress
struct UOLUIFrontEnd_PauseMenu_OnSaveButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress
struct UOLUIFrontEnd_PauseMenu_OnOptionsButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress
struct UOLUIFrontEnd_PauseMenu_OnReturnButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick
struct UOLUIFrontEnd_PauseMenu_OnButtonClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons
struct UOLUIFrontEnd_PauseMenu_PopulateButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView
struct UOLUIFrontEnd_PauseMenu_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded
struct UOLUIFrontEnd_PauseMenu_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting
struct UOLUIFrontEnd_GammaScreen_GetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized
struct UOLUIFrontEnd_GammaScreen_IsGammaInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized
struct UOLUIFrontEnd_GammaScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput
struct UOLUIFrontEnd_GammaScreen_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider
struct UOLUIFrontEnd_GammaScreen_Change_Slider_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Pop
struct UOLUIFrontEnd_GammaScreen_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated
struct UOLUIFrontEnd_GammaScreen_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.back
struct UOLUIFrontEnd_GammaScreen_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back
struct UOLUIFrontEnd_GammaScreen_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept
struct UOLUIFrontEnd_GammaScreen_OnAccept_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept
struct UOLUIFrontEnd_GammaScreen_Press_Accept_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView
struct UOLUIFrontEnd_GammaScreen_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded
struct UOLUIFrontEnd_GammaScreen_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels
struct UOLUIFrontEnd_GamepadScreen_ASUpdateGamepadLabels_Params
{
	int                                                ConfigType;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged
struct UOLUIFrontEnd_GamepadScreen_TabChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized
struct UOLUIFrontEnd_GamepadScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons
struct UOLUIFrontEnd_GamepadScreen_PopulateTabButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Pop
struct UOLUIFrontEnd_GamepadScreen_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated
struct UOLUIFrontEnd_GamepadScreen_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back
struct UOLUIFrontEnd_GamepadScreen_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept
struct UOLUIFrontEnd_GamepadScreen_Press_Accept_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView
struct UOLUIFrontEnd_GamepadScreen_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded
struct UOLUIFrontEnd_GamepadScreen_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized
struct UOLUIFrontEnd_Options_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput
struct UOLUIFrontEnd_Options_Console_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex
struct UOLUIFrontEnd_Options_Console_GetFullscreenOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex
struct UOLUIFrontEnd_Options_Console_GetResolutionOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged
struct UOLUIFrontEnd_Options_Console_HasResolutionChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.TabChanged
struct UOLUIFrontEnd_Options_Console_TabChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.ResetConsoleOptions
struct UOLUIFrontEnd_Options_Console_ResetConsoleOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset
struct UOLUIFrontEnd_Options_Console_Press_Reset_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile
struct UOLUIFrontEnd_Options_Console_FillOptionValuesFromProfile_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions
struct UOLUIFrontEnd_Options_Console_PopulateControlsOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons
struct UOLUIFrontEnd_Options_Console_PopulateTabButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply
struct UOLUIFrontEnd_Options_Console_Press_Apply_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton
struct UOLUIFrontEnd_Options_Console_Press_OptionItemButton_Params
{
	int                                                PSID;                                                     // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma
struct UOLUIFrontEnd_Options_Console_Press_Gamma_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.back
struct UOLUIFrontEnd_Options_Console_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView
struct UOLUIFrontEnd_Options_Console_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewDeactivated
struct UOLUIFrontEnd_Options_Console_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated
struct UOLUIFrontEnd_Options_Console_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded
struct UOLUIFrontEnd_Options_Console_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels
struct UOLUIFrontEnd_GamepadScreen_Console_ASUpdateGamepadLabels_Params
{
	int                                                ConfigType;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged
struct UOLUIFrontEnd_GamepadScreen_Console_TabChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized
struct UOLUIFrontEnd_GamepadScreen_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput
struct UOLUIFrontEnd_GamepadScreen_Console_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons
struct UOLUIFrontEnd_GamepadScreen_Console_PopulateTabButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop
struct UOLUIFrontEnd_GamepadScreen_Console_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated
struct UOLUIFrontEnd_GamepadScreen_Console_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back
struct UOLUIFrontEnd_GamepadScreen_Console_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView
struct UOLUIFrontEnd_GamepadScreen_Console_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded
struct UOLUIFrontEnd_GamepadScreen_Console_OnViewLoaded_Params
{
};

// Function OLGame.OLUIPopupScreen.FilterButtonInput
struct UOLUIPopupScreen_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIPopupScreen.OnClose
struct UOLUIPopupScreen_OnClose_Params
{
};

// Function OLGame.OLUIPopupScreen.Start
struct UOLUIPopupScreen_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
