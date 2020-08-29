// Outlast2 (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OLGame.OLAITrigger.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLAITrigger::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAITrigger.Touch");

	AOLAITrigger_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAITrigger.NativeOnTouch
// (Native, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AOLAITrigger::NativeOnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAITrigger.NativeOnTouch");

	AOLAITrigger_NativeOnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAITrigger.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AOLAITrigger::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAITrigger.PostBeginPlay");

	AOLAITrigger_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBasementWindow.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLBasementWindow::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBasementWindow.OnToggle");

	AOLBasementWindow_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBashableObject.OnToggle
// (Defined, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLBashableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBashableObject.OnToggle");

	AOLBashableObject_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBlockingObject.OnToggle
// (Defined, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLBlockingObject::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBlockingObject.OnToggle");

	AOLBlockingObject_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBlockingObject.OnDisable
// (Native, Public)

void AOLBlockingObject::OnDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBlockingObject.OnDisable");

	AOLBlockingObject_OnDisable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBlockingObject.OnEnable
// (Native, Public)

void AOLBlockingObject::OnEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBlockingObject.OnEnable");

	AOLBlockingObject_OnEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.SetPCInputLabel
// (Defined, Event, Public)
// Parameters:
// struct FString                 navigationLabelUp              (Parm, NeedCtorLink)
// struct FString                 navigationLabelLeft            (Parm, NeedCtorLink)
// struct FString                 navigationLabelDown            (Parm, NeedCtorLink)
// struct FString                 navigationLabelRight           (Parm, NeedCtorLink)
// struct FString                 nextLabel                      (Parm, NeedCtorLink)
// struct FString                 previousLabel                  (Parm, NeedCtorLink)
// struct FString                 backLabel                      (Parm, NeedCtorLink)
// struct FString                 displayLabel                   (Parm, NeedCtorLink)
// struct FString                 playLabel                      (Parm, NeedCtorLink)
// struct FString                 selectLabelText                (Parm, NeedCtorLink)

void UOLCamcorderFilesHud::SetPCInputLabel(const struct FString& navigationLabelUp, const struct FString& navigationLabelLeft, const struct FString& navigationLabelDown, const struct FString& navigationLabelRight, const struct FString& nextLabel, const struct FString& previousLabel, const struct FString& backLabel, const struct FString& displayLabel, const struct FString& playLabel, const struct FString& selectLabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetPCInputLabel");

	UOLCamcorderFilesHud_SetPCInputLabel_Params params;
	params.navigationLabelUp = navigationLabelUp;
	params.navigationLabelLeft = navigationLabelLeft;
	params.navigationLabelDown = navigationLabelDown;
	params.navigationLabelRight = navigationLabelRight;
	params.nextLabel = nextLabel;
	params.previousLabel = previousLabel;
	params.backLabel = backLabel;
	params.displayLabel = displayLabel;
	params.playLabel = playLabel;
	params.selectLabelText = selectLabelText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.SetPCInputLabelFunction
// (Defined, Public)
// Parameters:
// struct FString                 navigationLabelUp              (Parm, NeedCtorLink)
// struct FString                 navigationLabelLeft            (Parm, NeedCtorLink)
// struct FString                 navigationLabelDown            (Parm, NeedCtorLink)
// struct FString                 navigationLabelRight           (Parm, NeedCtorLink)
// struct FString                 nextLabel                      (Parm, NeedCtorLink)
// struct FString                 previousLabel                  (Parm, NeedCtorLink)
// struct FString                 backLabel                      (Parm, NeedCtorLink)
// struct FString                 displayLabel                   (Parm, NeedCtorLink)
// struct FString                 playLabel                      (Parm, NeedCtorLink)
// struct FString                 selectLabelText                (Parm, NeedCtorLink)

void UOLCamcorderFilesHud::SetPCInputLabelFunction(const struct FString& navigationLabelUp, const struct FString& navigationLabelLeft, const struct FString& navigationLabelDown, const struct FString& navigationLabelRight, const struct FString& nextLabel, const struct FString& previousLabel, const struct FString& backLabel, const struct FString& displayLabel, const struct FString& playLabel, const struct FString& selectLabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetPCInputLabelFunction");

	UOLCamcorderFilesHud_SetPCInputLabelFunction_Params params;
	params.navigationLabelUp = navigationLabelUp;
	params.navigationLabelLeft = navigationLabelLeft;
	params.navigationLabelDown = navigationLabelDown;
	params.navigationLabelRight = navigationLabelRight;
	params.nextLabel = nextLabel;
	params.previousLabel = previousLabel;
	params.backLabel = backLabel;
	params.displayLabel = displayLabel;
	params.playLabel = playLabel;
	params.selectLabelText = selectLabelText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.selectConsole
// (Defined, Public)
// Parameters:
// struct FString                 Console                        (Parm, NeedCtorLink)

void UOLCamcorderFilesHud::selectConsole(const struct FString& Console)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.selectConsole");

	UOLCamcorderFilesHud_selectConsole_Params params;
	params.Console = Console;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.UsingPC
// (Defined, Event, Public)

void UOLCamcorderFilesHud::UsingPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.UsingPC");

	UOLCamcorderFilesHud_UsingPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.UsingXboxOne
// (Defined, Event, Public)

void UOLCamcorderFilesHud::UsingXboxOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.UsingXboxOne");

	UOLCamcorderFilesHud_UsingXboxOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.UsingPS4
// (Defined, Event, Public)

void UOLCamcorderFilesHud::UsingPS4()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.UsingPS4");

	UOLCamcorderFilesHud_UsingPS4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.SetSouthPaw
// (Defined, Event, Public)
// Parameters:
// bool                           bSouthPaw                      (Parm)

void UOLCamcorderFilesHud::SetSouthPaw(bool bSouthPaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetSouthPaw");

	UOLCamcorderFilesHud_SetSouthPaw_Params params;
	params.bSouthPaw = bSouthPaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.SetLocalizedText
// (Defined, Event, Public)
// Parameters:
// struct FString                 zoomLabel                      (Parm, NeedCtorLink)
// struct FString                 navigationLabel                (Parm, NeedCtorLink)
// struct FString                 cleanTextLabel                 (Parm, NeedCtorLink)
// struct FString                 selectLabel                    (Parm, NeedCtorLink)
// struct FString                 backLabel                      (Parm, NeedCtorLink)
// struct FString                 previousLabel                  (Parm, NeedCtorLink)
// struct FString                 nextLabel                      (Parm, NeedCtorLink)
// struct FString                 playLabel                      (Parm, NeedCtorLink)
// struct FString                 pauseLabel                     (Parm, NeedCtorLink)
// struct FString                 moveImage                      (Parm, NeedCtorLink)

void UOLCamcorderFilesHud::SetLocalizedText(const struct FString& zoomLabel, const struct FString& navigationLabel, const struct FString& cleanTextLabel, const struct FString& selectLabel, const struct FString& backLabel, const struct FString& previousLabel, const struct FString& nextLabel, const struct FString& playLabel, const struct FString& pauseLabel, const struct FString& moveImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetLocalizedText");

	UOLCamcorderFilesHud_SetLocalizedText_Params params;
	params.zoomLabel = zoomLabel;
	params.navigationLabel = navigationLabel;
	params.cleanTextLabel = cleanTextLabel;
	params.selectLabel = selectLabel;
	params.backLabel = backLabel;
	params.previousLabel = previousLabel;
	params.nextLabel = nextLabel;
	params.playLabel = playLabel;
	params.pauseLabel = pauseLabel;
	params.moveImage = moveImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.PopulateFolderList
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bRefreshOnly                   (OptionalParm, Parm)

void UOLCamcorderFilesHud::PopulateFolderList(bool bRefreshOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.PopulateFolderList");

	UOLCamcorderFilesHud_PopulateFolderList_Params params;
	params.bRefreshOnly = bRefreshOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.WidgetInitialized");

	UOLCamcorderFilesHud_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.HideImageNavigateLabel
// (Defined, Event, Public)

void UOLCamcorderFilesHud::HideImageNavigateLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.HideImageNavigateLabel");

	UOLCamcorderFilesHud_HideImageNavigateLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.ShowImageNavigateLabel
// (Defined, Event, Public)

void UOLCamcorderFilesHud::ShowImageNavigateLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.ShowImageNavigateLabel");

	UOLCamcorderFilesHud_ShowImageNavigateLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.Pause
// (Defined, Event, Public)

void UOLCamcorderFilesHud::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.Pause");

	UOLCamcorderFilesHud_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.TogglePlayPause
// (Defined, Event, Public)

void UOLCamcorderFilesHud::TogglePlayPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.TogglePlayPause");

	UOLCamcorderFilesHud_TogglePlayPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.InputTypeChanged
// (Defined, Event, Public)

void UOLCamcorderFilesHud::InputTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.InputTypeChanged");

	UOLCamcorderFilesHud_InputTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeInputTypeChanged
// (Native, Public)

void UOLCamcorderFilesHud::NativeInputTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeInputTypeChanged");

	UOLCamcorderFilesHud_NativeInputTypeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativePlaySound
// (Native, Public)
// Parameters:
// class UAkEvent*                SndEvent                       (Parm)

void UOLCamcorderFilesHud::NativePlaySound(class UAkEvent* SndEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativePlaySound");

	UOLCamcorderFilesHud_NativePlaySound_Params params;
	params.SndEvent = SndEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnStop
// (Defined, Public)

void UOLCamcorderFilesHud::OnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnStop");

	UOLCamcorderFilesHud_OnStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeOnStop
// (Native, Public)

void UOLCamcorderFilesHud::NativeOnStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeOnStop");

	UOLCamcorderFilesHud_NativeOnStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeFullStop
// (Native, Public)

void UOLCamcorderFilesHud::NativeFullStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeFullStop");

	UOLCamcorderFilesHud_NativeFullStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnPlay
// (Defined, Public)

void UOLCamcorderFilesHud::OnPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnPlay");

	UOLCamcorderFilesHud_OnPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeOnPlay
// (Native, Public)

void UOLCamcorderFilesHud::NativeOnPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeOnPlay");

	UOLCamcorderFilesHud_NativeOnPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnDisplayChange
// (Defined, Public)

void UOLCamcorderFilesHud::OnDisplayChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnDisplayChange");

	UOLCamcorderFilesHud_OnDisplayChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeOnDisplayChange
// (Native, Public)

void UOLCamcorderFilesHud::NativeOnDisplayChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeOnDisplayChange");

	UOLCamcorderFilesHud_NativeOnDisplayChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnMove
// (Defined, Public)

void UOLCamcorderFilesHud::OnMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnMove");

	UOLCamcorderFilesHud_OnMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnSelect
// (Defined, Public)

void UOLCamcorderFilesHud::OnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnSelect");

	UOLCamcorderFilesHud_OnSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnBack
// (Defined, Public)

void UOLCamcorderFilesHud::OnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnBack");

	UOLCamcorderFilesHud_OnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnBackOnRootMenu
// (Defined, Public)

void UOLCamcorderFilesHud::OnBackOnRootMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnBackOnRootMenu");

	UOLCamcorderFilesHud_OnBackOnRootMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeOnBackOnRootMenu
// (Native, Public)

void UOLCamcorderFilesHud::NativeOnBackOnRootMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeOnBackOnRootMenu");

	UOLCamcorderFilesHud_NativeOnBackOnRootMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnScrollToIndexChange
// (Defined, Public)
// Parameters:
// int                            ListIndex                      (Parm)
// int                            StartIndex                     (Parm)
// int                            endIndex                       (Parm)

void UOLCamcorderFilesHud::OnScrollToIndexChange(int ListIndex, int StartIndex, int endIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnScrollToIndexChange");

	UOLCamcorderFilesHud_OnScrollToIndexChange_Params params;
	params.ListIndex = ListIndex;
	params.StartIndex = StartIndex;
	params.endIndex = endIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeOnScrollToIndexChange
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            ListIndex                      (Parm)
// int                            StartIndex                     (Parm)
// int                            endIndex                       (Parm)
// bool                           bForce                         (OptionalParm, Parm)

void UOLCamcorderFilesHud::NativeOnScrollToIndexChange(int ListIndex, int StartIndex, int endIndex, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeOnScrollToIndexChange");

	UOLCamcorderFilesHud_NativeOnScrollToIndexChange_Params params;
	params.ListIndex = ListIndex;
	params.StartIndex = StartIndex;
	params.endIndex = endIndex;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.OnFullScaleImageChanged
// (Defined, Public)
// Parameters:
// bool                           bInView                        (Parm)
// struct FString                 photoName                      (Parm, NeedCtorLink)

void UOLCamcorderFilesHud::OnFullScaleImageChanged(bool bInView, const struct FString& photoName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.OnFullScaleImageChanged");

	UOLCamcorderFilesHud_OnFullScaleImageChanged_Params params;
	params.bInView = bInView;
	params.photoName = photoName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeOnFullScaleImageChanged
// (Native, Public)
// Parameters:
// bool                           bInView                        (Parm)
// struct FString                 photoName                      (Parm, NeedCtorLink)

void UOLCamcorderFilesHud::NativeOnFullScaleImageChanged(bool bInView, const struct FString& photoName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeOnFullScaleImageChanged");

	UOLCamcorderFilesHud_NativeOnFullScaleImageChanged_Params params;
	params.bInView = bInView;
	params.photoName = photoName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.NativeQuickOpen
// (Native, Public)

void UOLCamcorderFilesHud::NativeQuickOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.NativeQuickOpen");

	UOLCamcorderFilesHud_NativeQuickOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.SetLargePhotoURL
// (Defined, Event, Public)
// Parameters:
// int                            folderIndex                    (Parm)
// int                            imageIndex                     (Parm)
// struct FString                 largePhotoURL                  (Parm, NeedCtorLink)

void UOLCamcorderFilesHud::SetLargePhotoURL(int folderIndex, int imageIndex, const struct FString& largePhotoURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetLargePhotoURL");

	UOLCamcorderFilesHud_SetLargePhotoURL_Params params;
	params.folderIndex = folderIndex;
	params.imageIndex = imageIndex;
	params.largePhotoURL = largePhotoURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.SelectRecording
// (Defined, Event, Public)
// Parameters:
// int                            folderIndex                    (Parm)
// int                            imageIndex                     (Parm)

void UOLCamcorderFilesHud::SelectRecording(int folderIndex, int imageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SelectRecording");

	UOLCamcorderFilesHud_SelectRecording_Params params;
	params.folderIndex = folderIndex;
	params.imageIndex = imageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.SetAllowSingleFolder
// (Defined, Event, Public)
// Parameters:
// bool                           bAllowSingleFolder             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::SetAllowSingleFolder(bool bAllowSingleFolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetAllowSingleFolder");

	UOLCamcorderFilesHud_SetAllowSingleFolder_Params params;
	params.bAllowSingleFolder = bAllowSingleFolder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.SetDisplayLabel
// (Defined, Event, Public)
// Parameters:
// struct FString                 Label                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::SetDisplayLabel(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetDisplayLabel");

	UOLCamcorderFilesHud_SetDisplayLabel_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.SetVisible
// (Defined, Event, Public)
// Parameters:
// bool                           bShow                          (Parm)

void UOLCamcorderFilesHud::SetVisible(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetVisible");

	UOLCamcorderFilesHud_SetVisible_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.FlagRecordingAsRead
// (Defined, Event, Public)
// Parameters:
// int                            folderIndex                    (Parm)
// int                            recordingIndex                 (Parm)

void UOLCamcorderFilesHud::FlagRecordingAsRead(int folderIndex, int recordingIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.FlagRecordingAsRead");

	UOLCamcorderFilesHud_FlagRecordingAsRead_Params params;
	params.folderIndex = folderIndex;
	params.recordingIndex = recordingIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.DisplayChange
// (Defined, Event, Public)

void UOLCamcorderFilesHud::DisplayChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.DisplayChange");

	UOLCamcorderFilesHud_DisplayChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.RefreshData
// (Defined, Event, Public)

void UOLCamcorderFilesHud::RefreshData()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.RefreshData");

	UOLCamcorderFilesHud_RefreshData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.SetListFocusIndex
// (Defined, Event, Public)
// Parameters:
// int                            indexA                         (Parm)
// int                            indexB                         (Parm)
// int                            indexC                         (Parm)
// int                            indexD                         (Parm)
// int                            indexE                         (Parm)
// int                            indexF                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::SetListFocusIndex(int indexA, int indexB, int indexC, int indexD, int indexE, int indexF)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetListFocusIndex");

	UOLCamcorderFilesHud_SetListFocusIndex_Params params;
	params.indexA = indexA;
	params.indexB = indexB;
	params.indexC = indexC;
	params.indexD = indexD;
	params.indexE = indexE;
	params.indexF = indexF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.SetLargeImageSize
// (Defined, Event, Public)
// Parameters:
// float                          SizeX                          (Parm)
// float                          SizeY                          (Parm)
// float                          PosX                           (Parm)
// float                          PosY                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::SetLargeImageSize(float SizeX, float SizeY, float PosX, float PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.SetLargeImageSize");

	UOLCamcorderFilesHud_SetLargeImageSize_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;
	params.PosX = PosX;
	params.PosY = PosY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.DisallowInputChangeFocus
// (Defined, Event, Public)

void UOLCamcorderFilesHud::DisallowInputChangeFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.DisallowInputChangeFocus");

	UOLCamcorderFilesHud_DisallowInputChangeFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.AllowInputChangeFocus
// (Defined, Event, Public)

void UOLCamcorderFilesHud::AllowInputChangeFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.AllowInputChangeFocus");

	UOLCamcorderFilesHud_AllowInputChangeFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderFilesHud.PauseVideo
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::PauseVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.PauseVideo");

	UOLCamcorderFilesHud_PauseVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.ConfigUI
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::ConfigUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.ConfigUI");

	UOLCamcorderFilesHud_ConfigUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.back
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.back");

	UOLCamcorderFilesHud_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.BackToMainMenu
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::BackToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.BackToMainMenu");

	UOLCamcorderFilesHud_BackToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.Next
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.Next");

	UOLCamcorderFilesHud_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.Previous
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.Previous");

	UOLCamcorderFilesHud_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.RefreshLargeImage
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::RefreshLargeImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.RefreshLargeImage");

	UOLCamcorderFilesHud_RefreshLargeImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderFilesHud.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderFilesHud::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderFilesHud.FilterButtonInput");

	UOLCamcorderFilesHud_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderHud.UpdateRecordingTime
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOLCamcorderHud::UpdateRecordingTime(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderHud.UpdateRecordingTime");

	UOLCamcorderHud_UpdateRecordingTime_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderHud.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderHud::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderHud.WidgetInitialized");

	UOLCamcorderHud_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderHud.HandleUnpaused
// (Defined, Event, Public)

void UOLCamcorderHud::HandleUnpaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderHud.HandleUnpaused");

	UOLCamcorderHud_HandleUnpaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderHud.HandlePaused
// (Defined, Event, Public)

void UOLCamcorderHud::HandlePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderHud.HandlePaused");

	UOLCamcorderHud_HandlePaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderHud.SetVisible
// (Defined, Event, Public)
// Parameters:
// bool                           bShow                          (Parm)

void UOLCamcorderHud::SetVisible(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderHud.SetVisible");

	UOLCamcorderHud_SetVisible_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCameraActor.GetCameraView
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void AOLCameraActor::GetCameraView(float DeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCameraActor.GetCameraView");

	AOLCameraActor_GetCameraView_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function OLGame.OLCameraActor.NativeGetCameraView
// (Native, Public, HasOutParms)
// Parameters:
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void AOLCameraActor::NativeGetCameraView(struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCameraActor.NativeGetCameraView");

	AOLCameraActor_NativeGetCameraView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function OLGame.OLTutorialManager.SetTutorialsEnabled
// (Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void UOLTutorialManager::SetTutorialsEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLTutorialManager.SetTutorialsEnabled");

	UOLTutorialManager_SetTutorialsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLTutorialManager.Clear
// (Native, Public)

void UOLTutorialManager::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLTutorialManager.Clear");

	UOLTutorialManager_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLPawn::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.DisplayDebug");

	AOLPawn_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLPawn.IsFirstPerson
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPawn::IsFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.IsFirstPerson");

	AOLPawn_IsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.PlayLanded
// (Defined, Public)
// Parameters:
// struct FVector                 landingLocation                (Parm)
// float                          ImpactVel                      (Parm)

void AOLPawn::PlayLanded(const struct FVector& landingLocation, float ImpactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PlayLanded");

	AOLPawn_PlayLanded_Params params;
	params.landingLocation = landingLocation;
	params.ImpactVel = ImpactVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.Landed
// (Defined, Event, Public, HasDefaults)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  FloorActor                     (Parm)

void AOLPawn::Landed(const struct FVector& HitLocation, const struct FVector& HitNormal, class AActor* FloorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.Landed");

	AOLPawn_Landed_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.FloorActor = FloorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.Destroyed
// (Defined, Simulated, Event, Public)

void AOLPawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.Destroyed");

	AOLPawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.MAT_BeginAIGroup
// (Defined, Event, Public)
// Parameters:
// struct FVector                 StartLoc                       (Parm)
// struct FRotator                StartRot                       (Parm)
// float                          BlendTime                      (Parm)
// bool                           bDiscardSideAdjustments        (Parm)

void AOLPawn::MAT_BeginAIGroup(const struct FVector& StartLoc, const struct FRotator& StartRot, float BlendTime, bool bDiscardSideAdjustments)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.MAT_BeginAIGroup");

	AOLPawn_MAT_BeginAIGroup_Params params;
	params.StartLoc = StartLoc;
	params.StartRot = StartRot;
	params.BlendTime = BlendTime;
	params.bDiscardSideAdjustments = bDiscardSideAdjustments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.AdjustToMatineeStageMark
// (Native, Public)
// Parameters:
// struct FVector                 StartLoc                       (Parm)
// struct FRotator                StartRot                       (Parm)
// float                          BlendTime                      (Parm)
// bool                           bDiscardSideAdjustments        (Parm)

void AOLPawn::AdjustToMatineeStageMark(const struct FVector& StartLoc, const struct FRotator& StartRot, float BlendTime, bool bDiscardSideAdjustments)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.AdjustToMatineeStageMark");

	AOLPawn_AdjustToMatineeStageMark_Params params;
	params.StartLoc = StartLoc;
	params.StartRot = StartRot;
	params.BlendTime = BlendTime;
	params.bDiscardSideAdjustments = bDiscardSideAdjustments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PostInitAnimTree
// (Defined, Simulated, Event, Public)
// Parameters:
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void AOLPawn::PostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PostInitAnimTree");

	AOLPawn_PostInitAnimTree_Params params;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PlayVOLine
// (Native, HasOptionalParms, Public)
// Parameters:
// class UAkEvent*                LineToPlay                     (Parm)
// struct FName                   BoneName                       (OptionalParm, Parm)

void AOLPawn::PlayVOLine(class UAkEvent* LineToPlay, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PlayVOLine");

	AOLPawn_PlayVOLine_Params params;
	params.LineToPlay = LineToPlay;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.GetMaterialBelowFeet
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            footIndex                      (Parm)
// bool                           bForceUpdate                   (OptionalParm, Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AOLPawn::GetMaterialBelowFeet(int footIndex, bool bForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.GetMaterialBelowFeet");

	AOLPawn_GetMaterialBelowFeet_Params params;
	params.footIndex = footIndex;
	params.bForceUpdate = bForceUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.ClientRestart
// (Defined, Simulated, Public, HasDefaults)

void AOLPawn::ClientRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ClientRestart");

	AOLPawn_ClientRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PlayFootStepSound
// (Defined, Simulated, Event, Public)
// Parameters:
// int                            FootDown                       (Parm)
// class UAnimNotify_Footstep*    footstepNotify                 (Parm)

void AOLPawn::PlayFootStepSound(int FootDown, class UAnimNotify_Footstep* footstepNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PlayFootStepSound");

	AOLPawn_PlayFootStepSound_Params params;
	params.FootDown = FootDown;
	params.footstepNotify = footstepNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.OnFootstep
// (Native, Public)
// Parameters:
// int                            FootDown                       (Parm)
// class UAnimNotify_Footstep*    footstepNotify                 (Parm)

void AOLPawn::OnFootstep(int FootDown, class UAnimNotify_Footstep* footstepNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.OnFootstep");

	AOLPawn_OnFootstep_Params params;
	params.FootDown = FootDown;
	params.footstepNotify = footstepNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.SpawnFootstepDecal
// (Defined, Event, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EFootstepDecalType> DecalType                      (Parm)
// bool                           bLeftFoot                      (Parm)
// float                          Alpha                          (Parm)

void AOLPawn::SpawnFootstepDecal(TEnumAsByte<EFootstepDecalType> DecalType, bool bLeftFoot, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.SpawnFootstepDecal");

	AOLPawn_SpawnFootstepDecal_Params params;
	params.DecalType = DecalType;
	params.bLeftFoot = bLeftFoot;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.ProcessNewFootstepDecal
// (Native, Public, HasOutParms)
// Parameters:
// class UDecalComponent*         NewDecalComp                   (Parm, EditInline)
// TEnumAsByte<EFootstepDecalType> DecalType                      (Parm)
// struct FVector                 DecalLocation                  (Parm, OutParm)
// float                          DecalThickness                 (Parm)
// bool                           bLeftFoot                      (Parm)

void AOLPawn::ProcessNewFootstepDecal(class UDecalComponent* NewDecalComp, TEnumAsByte<EFootstepDecalType> DecalType, float DecalThickness, bool bLeftFoot, struct FVector* DecalLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ProcessNewFootstepDecal");

	AOLPawn_ProcessNewFootstepDecal_Params params;
	params.NewDecalComp = NewDecalComp;
	params.DecalType = DecalType;
	params.DecalThickness = DecalThickness;
	params.bLeftFoot = bLeftFoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DecalLocation != nullptr)
		*DecalLocation = params.DecalLocation;
}


// Function OLGame.OLPawn.GetFootstepDecalTransform
// (Native, Public, HasOutParms)
// Parameters:
// bool                           bLeftFoot                      (Parm)
// struct FVector                 DecalLocation                  (Parm, OutParm)
// struct FRotator                DecalRotation                  (Parm, OutParm)

void AOLPawn::GetFootstepDecalTransform(bool bLeftFoot, struct FVector* DecalLocation, struct FRotator* DecalRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.GetFootstepDecalTransform");

	AOLPawn_GetFootstepDecalTransform_Params params;
	params.bLeftFoot = bLeftFoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DecalLocation != nullptr)
		*DecalLocation = params.DecalLocation;
	if (DecalRotation != nullptr)
		*DecalRotation = params.DecalRotation;
}


// Function OLGame.OLPawn.FaceRotation
// (Defined, Simulated, Public)
// Parameters:
// struct FRotator                NewRotation                    (Parm)
// float                          DeltaTime                      (Parm)

void AOLPawn::FaceRotation(const struct FRotator& NewRotation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.FaceRotation");

	AOLPawn_FaceRotation_Params params;
	params.NewRotation = NewRotation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.GetEyeHeight
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AOLPawn::GetEyeHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.GetEyeHeight");

	AOLPawn_GetEyeHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.GetPawnAmbientSound
// (Defined, Simulated, Public)
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* AOLPawn::GetPawnAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.GetPawnAmbientSound");

	AOLPawn_GetPawnAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.SetPawnAmbientSound
// (Defined, Simulated, Public)
// Parameters:
// class USoundCue*               NewAmbientSound                (Parm)

void AOLPawn::SetPawnAmbientSound(class USoundCue* NewAmbientSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.SetPawnAmbientSound");

	AOLPawn_SetPawnAmbientSound_Params params;
	params.NewAmbientSound = NewAmbientSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPawn::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.Died");

	AOLPawn_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.EncroachedBy
// (Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AOLPawn::EncroachedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.EncroachedBy");

	AOLPawn_EncroachedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.SetPawnRBChannels
// (Defined, Simulated, Public)
// Parameters:
// bool                           bRagdollMode                   (Parm)

void AOLPawn::SetPawnRBChannels(bool bRagdollMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.SetPawnRBChannels");

	AOLPawn_SetPawnRBChannels_Params params;
	params.bRagdollMode = bRagdollMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.OnAnimEnd
// (Defined, Simulated, Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLPawn::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.OnAnimEnd");

	AOLPawn_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.ReattachMesh
// (Defined, Simulated, Public)

void AOLPawn::ReattachMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ReattachMesh");

	AOLPawn_ReattachMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.UpdateShadowSettings
// (Defined, Simulated, Public)
// Parameters:
// bool                           bWantShadow                    (Parm)

void AOLPawn::UpdateShadowSettings(bool bWantShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.UpdateShadowSettings");

	AOLPawn_UpdateShadowSettings_Params params;
	params.bWantShadow = bWantShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PostBeginPlay
// (Defined, Simulated, Public, HasDefaults)

void AOLPawn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PostBeginPlay");

	AOLPawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.ProceduralAdjustNotify
// (Native, Public)
// Parameters:
// float                          Duration                       (Parm)

void AOLPawn::ProceduralAdjustNotify(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ProceduralAdjustNotify");

	AOLPawn_ProceduralAdjustNotify_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.EnableCollisionNotify
// (Native, Public)

void AOLPawn::EnableCollisionNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.EnableCollisionNotify");

	AOLPawn_EnableCollisionNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.RestoreCollisionSizeNotify
// (Native, Public)

void AOLPawn::RestoreCollisionSizeNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.RestoreCollisionSizeNotify");

	AOLPawn_RestoreCollisionSizeNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.ChangeCollisionSizeNotify
// (Native, Public)

void AOLPawn::ChangeCollisionSizeNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ChangeCollisionSizeNotify");

	AOLPawn_ChangeCollisionSizeNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.MoveInterruptibleNotify
// (Native, Public)

void AOLPawn::MoveInterruptibleNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.MoveInterruptibleNotify");

	AOLPawn_MoveInterruptibleNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.NativePostBeginPlay
// (Native, Public)

void AOLPawn::NativePostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.NativePostBeginPlay");

	AOLPawn_NativePostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.NativeOnAnimEnd
// (Native, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLPawn::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.NativeOnAnimEnd");

	AOLPawn_NativeOnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.StartSpecialMove
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ESpecialMoveType>  moveType                       (Parm)
// struct FVector                 targetPosition                 (OptionalParm, Parm)
// struct FVector                 TargetDirection                (OptionalParm, Parm)
// TEnumAsByte<EAdjustPositionTargetType> TargetType                     (OptionalParm, Parm)

void AOLPawn::StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.StartSpecialMove");

	AOLPawn_StartSpecialMove_Params params;
	params.moveType = moveType;
	params.targetPosition = targetPosition;
	params.TargetDirection = TargetDirection;
	params.TargetType = TargetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.IsSpecialMoveCompleted
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPawn::IsSpecialMoveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.IsSpecialMoveCompleted");

	AOLPawn_IsSpecialMoveCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.NativeDestroyed
// (Native, Public)

void AOLPawn::NativeDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.NativeDestroyed");

	AOLPawn_NativeDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.UnTouch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AOLHero::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.UnTouch");

	AOLHero_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLHero::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.Touch");

	AOLHero_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeUnTouch
// (Native, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AOLHero::NativeUnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeUnTouch");

	AOLHero_NativeUnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeTouch
// (Native, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLHero::NativeTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeTouch");

	AOLHero_NativeTouch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.IsInMainMenu
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::IsInMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.IsInMainMenu");

	AOLHero_IsInMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.UpdateDifficultyBasedValues
// (Defined, Public)

void AOLHero::UpdateDifficultyBasedValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.UpdateDifficultyBasedValues");

	AOLHero_UpdateDifficultyBasedValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.HandleTeleport
// (Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// TArray<class UObject*>         DestList                       (Parm, NeedCtorLink)
// bool                           bUpdateRotation                (Parm)
// bool                           bCheckOverlap                  (Parm)
// float                          TeleportDistance               (OptionalParm, Parm)
// TArray<class AVolume*>         TeleportVolumes                (OptionalParm, Parm, NeedCtorLink)
// int                            PreferredDestIndex             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::HandleTeleport(TArray<class UObject*> DestList, bool bUpdateRotation, bool bCheckOverlap, float TeleportDistance, TArray<class AVolume*> TeleportVolumes, int PreferredDestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.HandleTeleport");

	AOLHero_HandleTeleport_Params params;
	params.DestList = DestList;
	params.bUpdateRotation = bUpdateRotation;
	params.bCheckOverlap = bCheckOverlap;
	params.TeleportDistance = TeleportDistance;
	params.TeleportVolumes = TeleportVolumes;
	params.PreferredDestIndex = PreferredDestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.OutsideWorldBounds
// (Defined, Singular, Simulated, Event, Public)

void AOLHero::OutsideWorldBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.OutsideWorldBounds");

	AOLHero_OutsideWorldBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.FellOutOfWorld
// (Simulated, Event, Public)
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AOLHero::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.FellOutOfWorld");

	AOLHero_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.MakeFootstepNoise
// (Native, Public)
// Parameters:
// int                            footIndex                      (Parm)

void AOLHero::MakeFootstepNoise(int footIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.MakeFootstepNoise");

	AOLHero_MakeFootstepNoise_Params params;
	params.footIndex = footIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.SetMeshVisibility
// (Defined, Simulated, Public)
// Parameters:
// bool                           bVisible                       (Parm)

void AOLHero::SetMeshVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.SetMeshVisibility");

	AOLHero_SetMeshVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.EndViewTarget
// (Simulated, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AOLHero::EndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.EndViewTarget");

	AOLHero_EndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BecomeViewTarget
// (Defined, Simulated, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AOLHero::BecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BecomeViewTarget");

	AOLHero_BecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PlayLanded
// (Defined, Public)
// Parameters:
// struct FVector                 landingLocation                (Parm)
// float                          ImpactVel                      (Parm)

void AOLHero::PlayLanded(const struct FVector& landingLocation, float ImpactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PlayLanded");

	AOLHero_PlayLanded_Params params;
	params.landingLocation = landingLocation;
	params.ImpactVel = ImpactVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativePlayLanded
// (Native, Public)
// Parameters:
// struct FVector                 landingLocation                (Parm)
// float                          ImpactVel                      (Parm)

void AOLHero::NativePlayLanded(const struct FVector& landingLocation, float ImpactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativePlayLanded");

	AOLHero_NativePlayLanded_Params params;
	params.landingLocation = landingLocation;
	params.ImpactVel = ImpactVel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TakeFallingDamage
// (Defined, Public)
// Parameters:
// struct FVector                 fallLocation                   (Parm)

void AOLHero::TakeFallingDamage(const struct FVector& fallLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TakeFallingDamage");

	AOLHero_TakeFallingDamage_Params params;
	params.fallLocation = fallLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.HealDamage
// (Defined, Event, Public)
// Parameters:
// int                            Amount                         (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::HealDamage(int Amount, class AController* Healer, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.HealDamage");

	AOLHero_HealDamage_Params params;
	params.Amount = Amount;
	params.Healer = Healer;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TakeDamage
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AOLHero::TakeDamage(int Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TakeDamage");

	AOLHero_TakeDamage_Params params;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLHero::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DisplayDebug");

	AOLHero_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLHero.PostInitAnimTree
// (Defined, Simulated, Event, Public)
// Parameters:
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void AOLHero::PostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PostInitAnimTree");

	AOLHero_PostInitAnimTree_Params params;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeInitAnimTree
// (Native, Public)
// Parameters:
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void AOLHero::NativeInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeInitAnimTree");

	AOLHero_NativeInitAnimTree_Params params;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PossessedBy
// (Defined, Public)
// Parameters:
// class AController*             C                              (Parm)
// bool                           bVehicleTransition             (Parm)

void AOLHero::PossessedBy(class AController* C, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PossessedBy");

	AOLHero_PossessedBy_Params params;
	params.C = C;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.RefreshInventory
// (Native, Public)

void AOLHero::RefreshInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.RefreshInventory");

	AOLHero_RefreshInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.SetHeroWalkableFloor
// (Exec, Native, Public)
// Parameters:
// float                          Angle                          (Parm)

void AOLHero::SetHeroWalkableFloor(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.SetHeroWalkableFloor");

	AOLHero_SetHeroWalkableFloor_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TryForceEnterRaft
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// bool                           ignoreAssertIfUnsucessful      (OptionalParm, Parm)

void AOLHero::TryForceEnterRaft(bool ignoreAssertIfUnsucessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryForceEnterRaft");

	AOLHero_TryForceEnterRaft_Params params;
	params.ignoreAssertIfUnsucessful = ignoreAssertIfUnsucessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.OverrideRaftAttachmentMode
// (Exec, Native, Public)
// Parameters:
// bool                           bManuallyControlled            (Parm)

void AOLHero::OverrideRaftAttachmentMode(bool bManuallyControlled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.OverrideRaftAttachmentMode");

	AOLHero_OverrideRaftAttachmentMode_Params params;
	params.bManuallyControlled = bManuallyControlled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.AllowRiverMovement
// (Exec, Native, Public)

void AOLHero::AllowRiverMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.AllowRiverMovement");

	AOLHero_AllowRiverMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DisallowRiverMovement
// (Exec, Native, Public)
// Parameters:
// bool                           bClearVelocity                 (Parm)

void AOLHero::DisallowRiverMovement(bool bClearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DisallowRiverMovement");

	AOLHero_DisallowRiverMovement_Params params;
	params.bClearVelocity = bClearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.QuickHeroTest
// (Exec, Native, Public)

void AOLHero::QuickHeroTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.QuickHeroTest");

	AOLHero_QuickHeroTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CanBeGrabbedUnder
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::CanBeGrabbedUnder()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CanBeGrabbedUnder");

	AOLHero_CanBeGrabbedUnder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.CanBeFatalitized
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::CanBeFatalitized()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CanBeFatalitized");

	AOLHero_CanBeFatalitized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.CanBeAttacked
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::CanBeAttacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CanBeAttacked");

	AOLHero_CanBeAttacked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.BarrelEntryNotify
// (Native, Public)

void AOLHero::BarrelEntryNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BarrelEntryNotify");

	AOLHero_BarrelEntryNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.LandingMaybeStayCrouched
// (Native, Public)

void AOLHero::LandingMaybeStayCrouched()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.LandingMaybeStayCrouched");

	AOLHero_LandingMaybeStayCrouched_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.EndOfHandWatchingNotify
// (Native, Public)

void AOLHero::EndOfHandWatchingNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.EndOfHandWatchingNotify");

	AOLHero_EndOfHandWatchingNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.HandContactNotify
// (Native, Public)

void AOLHero::HandContactNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.HandContactNotify");

	AOLHero_HandContactNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.InventoryToggleNotify
// (Native, Public)

void AOLHero::InventoryToggleNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.InventoryToggleNotify");

	AOLHero_InventoryToggleNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BodyBandageHideAllIfNotVisibleNotify
// (Native, Public)

void AOLHero::BodyBandageHideAllIfNotVisibleNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BodyBandageHideAllIfNotVisibleNotify");

	AOLHero_BodyBandageHideAllIfNotVisibleNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BodyBandageHideAllNotify
// (Native, Public)

void AOLHero::BodyBandageHideAllNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BodyBandageHideAllNotify");

	AOLHero_BodyBandageHideAllNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BodyBandageStepNotify
// (Native, Public)

void AOLHero::BodyBandageStepNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BodyBandageStepNotify");

	AOLHero_BodyBandageStepNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ShowPickupNotify
// (Native, Public)

void AOLHero::ShowPickupNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ShowPickupNotify");

	AOLHero_ShowPickupNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.HidePickupNotify
// (Native, Public)

void AOLHero::HidePickupNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.HidePickupNotify");

	AOLHero_HidePickupNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BandageDetachNotify
// (Native, Public)

void AOLHero::BandageDetachNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BandageDetachNotify");

	AOLHero_BandageDetachNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BandageAttachNotify
// (Native, Public)

void AOLHero::BandageAttachNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BandageAttachNotify");

	AOLHero_BandageAttachNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CSAActivationNotify
// (Native, Public)

void AOLHero::CSAActivationNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CSAActivationNotify");

	AOLHero_CSAActivationNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BarrelCoverDetachNotify
// (Native, Public)

void AOLHero::BarrelCoverDetachNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BarrelCoverDetachNotify");

	AOLHero_BarrelCoverDetachNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BarrelCoverAttachNotify
// (Native, Public)

void AOLHero::BarrelCoverAttachNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BarrelCoverAttachNotify");

	AOLHero_BarrelCoverAttachNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.GlassesPickedUpNotify
// (Native, Public)

void AOLHero::GlassesPickedUpNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GlassesPickedUpNotify");

	AOLHero_GlassesPickedUpNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PutBackGlassesNotify
// (Native, Public)

void AOLHero::PutBackGlassesNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PutBackGlassesNotify");

	AOLHero_PutBackGlassesNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.LoseGlassesNotify
// (Native, Public)

void AOLHero::LoseGlassesNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.LoseGlassesNotify");

	AOLHero_LoseGlassesNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PostRaftBrokenNotify
// (Native, Public)

void AOLHero::PostRaftBrokenNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PostRaftBrokenNotify");

	AOLHero_PostRaftBrokenNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.RaftDetachNotify
// (Native, Public)

void AOLHero::RaftDetachNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.RaftDetachNotify");

	AOLHero_RaftDetachNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.RaftAttachNotify
// (Native, Public)

void AOLHero::RaftAttachNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.RaftAttachNotify");

	AOLHero_RaftAttachNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ExitingWaterNotify
// (Native, Public)

void AOLHero::ExitingWaterNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ExitingWaterNotify");

	AOLHero_ExitingWaterNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.EnteringWaterNotify
// (Native, Public)

void AOLHero::EnteringWaterNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.EnteringWaterNotify");

	AOLHero_EnteringWaterNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.SlideUnderCommitStanceNotify
// (Native, Public)

void AOLHero::SlideUnderCommitStanceNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.SlideUnderCommitStanceNotify");

	AOLHero_SlideUnderCommitStanceNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.HideCamcorderNotify
// (Native, Public)

void AOLHero::HideCamcorderNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.HideCamcorderNotify");

	AOLHero_HideCamcorderNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.SetCamcorderVisibleNotify
// (Native, Public)

void AOLHero::SetCamcorderVisibleNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.SetCamcorderVisibleNotify");

	AOLHero_SetCamcorderVisibleNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ResetNeckOffsetNotify
// (Native, Public)

void AOLHero::ResetNeckOffsetNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ResetNeckOffsetNotify");

	AOLHero_ResetNeckOffsetNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DecapitatedNotify
// (Native, Public)

void AOLHero::DecapitatedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DecapitatedNotify");

	AOLHero_DecapitatedNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.GroinInjuryNotify
// (Native, Public)

void AOLHero::GroinInjuryNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GroinInjuryNotify");

	AOLHero_GroinInjuryNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DieNotify
// (Native, Public)

void AOLHero::DieNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DieNotify");

	AOLHero_DieNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.OverrideCameraSettingsNotify
// (Native, Public)
// Parameters:
// class UOLAnimNotify_OverrideCameraParams* camParamsNotify                (Parm)

void AOLHero::OverrideCameraSettingsNotify(class UOLAnimNotify_OverrideCameraParams* camParamsNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.OverrideCameraSettingsNotify");

	AOLHero_OverrideCameraSettingsNotify_Params params;
	params.camParamsNotify = camParamsNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BandageUsedNotify
// (Native, Public)

void AOLHero::BandageUsedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BandageUsedNotify");

	AOLHero_BandageUsedNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BatteriesReloadedNotify
// (Native, Public)

void AOLHero::BatteriesReloadedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BatteriesReloadedNotify");

	AOLHero_BatteriesReloadedNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CamcorderLoweredNotify
// (Native, Public)

void AOLHero::CamcorderLoweredNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CamcorderLoweredNotify");

	AOLHero_CamcorderLoweredNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CamcorderRaisedNotify
// (Native, Public)

void AOLHero::CamcorderRaisedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CamcorderRaisedNotify");

	AOLHero_CamcorderRaisedNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CamcorderAvailableNotify
// (Native, Public)

void AOLHero::CamcorderAvailableNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CamcorderAvailableNotify");

	AOLHero_CamcorderAvailableNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.WardrobeDoorEndNotify
// (Native, Public)

void AOLHero::WardrobeDoorEndNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.WardrobeDoorEndNotify");

	AOLHero_WardrobeDoorEndNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.WardrobeDoorNotify
// (Native, Public)

void AOLHero::WardrobeDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.WardrobeDoorNotify");

	AOLHero_WardrobeDoorNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BarrelInteractionEndNotify
// (Native, Public)

void AOLHero::BarrelInteractionEndNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BarrelInteractionEndNotify");

	AOLHero_BarrelInteractionEndNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BarrelInteractionNotify
// (Native, Public)

void AOLHero::BarrelInteractionNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BarrelInteractionNotify");

	AOLHero_BarrelInteractionNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BasementWindowEndNotify
// (Native, Public)

void AOLHero::BasementWindowEndNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BasementWindowEndNotify");

	AOLHero_BasementWindowEndNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BasementWindowNotify
// (Native, Public)

void AOLHero::BasementWindowNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BasementWindowNotify");

	AOLHero_BasementWindowNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.WindowAnimEndNotify
// (Native, Public)

void AOLHero::WindowAnimEndNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.WindowAnimEndNotify");

	AOLHero_WindowAnimEndNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.WindowAnimStartNotify
// (Native, Public)

void AOLHero::WindowAnimStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.WindowAnimStartNotify");

	AOLHero_WindowAnimStartNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TryInteractDoorOpen
// (Native, Public)

void AOLHero::TryInteractDoorOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryInteractDoorOpen");

	AOLHero_TryInteractDoorOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DoorAnimNotify
// (Native, Public)

void AOLHero::DoorAnimNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DoorAnimNotify");

	AOLHero_DoorAnimNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DropNotify
// (Native, Public)

void AOLHero::DropNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DropNotify");

	AOLHero_DropNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PickupNotify
// (Native, Public)

void AOLHero::PickupNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PickupNotify");

	AOLHero_PickupNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TryGrabFromUnder
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            Attacker                       (Parm)
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 AttackStartLocation            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryGrabFromUnder(class AOLEnemyPawn* Attacker, const struct FVector& StartLocation, const struct FVector& AttackStartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryGrabFromUnder");

	AOLHero_TryGrabFromUnder_Params params;
	params.Attacker = Attacker;
	params.StartLocation = StartLocation;
	params.AttackStartLocation = AttackStartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryGrabFromBed
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            Attacker                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryGrabFromBed(class AOLEnemyPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryGrabFromBed");

	AOLHero_TryGrabFromBed_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryGrabFromLocker
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            Attacker                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryGrabFromLocker(class AOLEnemyPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryGrabFromLocker");

	AOLHero_TryGrabFromLocker_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.ExitCinematicMode
// (Native, Public)
// Parameters:
// class USeqAct_ToggleCinematicMode* seqAction                      (Parm)

void AOLHero::ExitCinematicMode(class USeqAct_ToggleCinematicMode* seqAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ExitCinematicMode");

	AOLHero_ExitCinematicMode_Params params;
	params.seqAction = seqAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.EnterCinematicMode
// (Native, Public)
// Parameters:
// class USeqAct_ToggleCinematicMode* seqAction                      (Parm)

void AOLHero::EnterCinematicMode(class USeqAct_ToggleCinematicMode* seqAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.EnterCinematicMode");

	AOLHero_EnterCinematicMode_Params params;
	params.seqAction = seqAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.StartSpecialMove
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ESpecialMoveType>  moveType                       (Parm)
// struct FVector                 targetPosition                 (OptionalParm, Parm)
// struct FVector                 TargetDirection                (OptionalParm, Parm)
// TEnumAsByte<EAdjustPositionTargetType> TargetType                     (OptionalParm, Parm)

void AOLHero::StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.StartSpecialMove");

	AOLHero_StartSpecialMove_Params params;
	params.moveType = moveType;
	params.targetPosition = targetPosition;
	params.TargetDirection = TargetDirection;
	params.TargetType = TargetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.RespawnHero
// (Native, Public)

void AOLHero::RespawnHero()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.RespawnHero");

	AOLHero_RespawnHero_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.OnPossess
// (Native, Public)

void AOLHero::OnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.OnPossess");

	AOLHero_OnPossess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ConditionalMakeDoorChimesNoise
// (Native, Public)
// Parameters:
// class AOLDoorChimes*           DoorChimes                     (Parm)

void AOLHero::ConditionalMakeDoorChimesNoise(class AOLDoorChimes* DoorChimes)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ConditionalMakeDoorChimesNoise");

	AOLHero_ConditionalMakeDoorChimesNoise_Params params;
	params.DoorChimes = DoorChimes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TakeKnockbackDamage
// (Native, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AActor*                  InstigatedBy                   (Parm)
// float                          Knockback                      (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLHero::TakeKnockbackDamage(int Damage, class AActor* InstigatedBy, float Knockback, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TakeKnockbackDamage");

	AOLHero_TakeKnockbackDamage_Params params;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.Knockback = Knockback;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TakeElectricDamage
// (Native, Public)
// Parameters:
// int                            Damage                         (Parm)
// float                          Knockback                      (Parm)
// struct FVector                 HitNormal                      (Parm)
// class UAkEvent*                ElectricSoundEvent             (Parm)

void AOLHero::TakeElectricDamage(int Damage, float Knockback, const struct FVector& HitNormal, class UAkEvent* ElectricSoundEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TakeElectricDamage");

	AOLHero_TakeElectricDamage_Params params;
	params.Damage = Damage;
	params.Knockback = Knockback;
	params.HitNormal = HitNormal;
	params.ElectricSoundEvent = ElectricSoundEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeTakeFallingDamage
// (Native, Public)
// Parameters:
// struct FVector                 fallLocation                   (Parm)

void AOLHero::NativeTakeFallingDamage(const struct FVector& fallLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeTakeFallingDamage");

	AOLHero_NativeTakeFallingDamage_Params params;
	params.fallLocation = fallLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeTakeDamage
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AActor*                  InstigatedBy                   (Parm)
// TEnumAsByte<EDamageType>       DamageType                     (Parm)
// struct FVector                 OverrideDamageDirection        (OptionalParm, Parm)
// bool                           bNonFatal                      (OptionalParm, Parm)

void AOLHero::NativeTakeDamage(int Damage, class AActor* InstigatedBy, TEnumAsByte<EDamageType> DamageType, const struct FVector& OverrideDamageDirection, bool bNonFatal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeTakeDamage");

	AOLHero_NativeTakeDamage_Params params;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageType = DamageType;
	params.OverrideDamageDirection = OverrideDamageDirection;
	params.bNonFatal = bNonFatal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeDisplayDebug
// (Native, Public, HasOutParms)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLHero::NativeDisplayDebug(class UCanvas* Canvas, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeDisplayDebug");

	AOLHero_NativeDisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLHero.GetCamera
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)

void AOLHero::GetCamera(struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetCamera");

	AOLHero_GetCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;
}


// Function OLGame.OLHero.NativeOnAnimEnd
// (Native, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLHero::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeOnAnimEnd");

	AOLHero_NativeOnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativePostBeginPlay
// (Native, Public)

void AOLHero::NativePostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativePostBeginPlay");

	AOLHero_NativePostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeDestroyed
// (Native, Public)

void AOLHero::NativeDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeDestroyed");

	AOLHero_NativeDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.HandleSeamlessTeleport
// (Native, Public)

void AOLHero::HandleSeamlessTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.HandleSeamlessTeleport");

	AOLHero_HandleSeamlessTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ResetAfterTeleport
// (Native, Public)

void AOLHero::ResetAfterTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ResetAfterTeleport");

	AOLHero_ResetAfterTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.IsSprinting
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.IsSprinting");

	AOLHero_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.IsRunning
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.IsRunning");

	AOLHero_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryRun
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryRun");

	AOLHero_TryRun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.Walk
// (Native, Public)

void AOLHero::Walk()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.Walk");

	AOLHero_Walk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.GetViewRotation
// (Simulated, Native, Event, Public)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AOLHero::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetViewRotation");

	AOLHero_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.GetPawnViewLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AOLHero::GetPawnViewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetPawnViewLocation");

	AOLHero_GetPawnViewLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.UnlockAchievement
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EOutlastAchievement> achievement                    (Parm)

void AOLPlayerController::UnlockAchievement(TEnumAsByte<EOutlastAchievement> achievement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UnlockAchievement");

	AOLPlayerController_UnlockAchievement_Params params;
	params.achievement = achievement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.NotifyDifficultyChanged
// (Defined, Public)

void AOLPlayerController::NotifyDifficultyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NotifyDifficultyChanged");

	AOLPlayerController_NotifyDifficultyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UpdateDifficultyBasedValues
// (Defined, Public)

void AOLPlayerController::UpdateDifficultyBasedValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UpdateDifficultyBasedValues");

	AOLPlayerController_UpdateDifficultyBasedValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.CheckForProfileUpdate
// (Defined, Event, Public)

void AOLPlayerController::CheckForProfileUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.CheckForProfileUpdate");

	AOLPlayerController_CheckForProfileUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings
// (Defined, Event, Public)
// Parameters:
// class UOLProfileSettings*      EffectiveProfileSettings       (Parm)

void AOLPlayerController::UpdateLocalCacheOfProfileSettings(class UOLProfileSettings* EffectiveProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings");

	AOLPlayerController_UpdateLocalCacheOfProfileSettings_Params params;
	params.EffectiveProfileSettings = EffectiveProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientSaveAllPlayerData
// (Defined, Net, NetReliable, Simulated, HasOptionalParms, Public, NetClient)
// Parameters:
// bool                           bShouldForce                   (OptionalParm, Parm)
// bool                           bSkipCacheUpdate               (OptionalParm, Parm)

void AOLPlayerController::ClientSaveAllPlayerData(bool bShouldForce, bool bSkipCacheUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientSaveAllPlayerData");

	AOLPlayerController_ClientSaveAllPlayerData_Params params;
	params.bShouldForce = bShouldForce;
	params.bSkipCacheUpdate = bSkipCacheUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.OnProfileWriteComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void AOLPlayerController::OnProfileWriteComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.OnProfileWriteComplete");

	AOLPlayerController_OnProfileWriteComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClearSaveProfileDelegate
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void AOLPlayerController::ClearSaveProfileDelegate(int ControllerId, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClearSaveProfileDelegate");

	AOLPlayerController_ClearSaveProfileDelegate_Params params;
	params.ControllerId = ControllerId;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ResetProfile
// (Defined, Event, Public)

void AOLPlayerController::ResetProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ResetProfile");

	AOLPlayerController_ResetProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SaveProfile
// (Defined, Event, Public)

void AOLPlayerController::SaveProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SaveProfile");

	AOLPlayerController_SaveProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.OnControllerChanged
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)

void AOLPlayerController::OnControllerChanged(int ControllerId, bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.OnControllerChanged");

	AOLPlayerController_OnControllerChanged_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.NativeOnControllerChanged
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)

void AOLPlayerController::NativeOnControllerChanged(int ControllerId, bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NativeOnControllerChanged");

	AOLPlayerController_NativeOnControllerChanged_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UnregisterPlayerDataStores
// (Defined, Simulated, Public)

void AOLPlayerController::UnregisterPlayerDataStores()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UnregisterPlayerDataStores");

	AOLPlayerController_UnregisterPlayerDataStores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores
// (Defined, Simulated, Protected)

void AOLPlayerController::RegisterCustomPlayerDataStores()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores");

	AOLPlayerController_RegisterCustomPlayerDataStores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.CheatGiveAllCollectibles
// (Native, Public)

void AOLPlayerController::CheatGiveAllCollectibles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.CheatGiveAllCollectibles");

	AOLPlayerController_CheatGiveAllCollectibles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::ShippingCheat_GiveAllCheckpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints");

	AOLPlayerController_ShippingCheat_GiveAllCheckpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.QueueClearWorldState
// (Defined, Public)

void AOLPlayerController::QueueClearWorldState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.QueueClearWorldState");

	AOLPlayerController_QueueClearWorldState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClearSavedStates
// (Native, Public)

void AOLPlayerController::ClearSavedStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClearSavedStates");

	AOLPlayerController_ClearSavedStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClearAllProgress
// (Native, Public)

void AOLPlayerController::ClearAllProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClearAllProgress");

	AOLPlayerController_ClearAllProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SaveBeforeQuitting
// (Native, Public)

void AOLPlayerController::SaveBeforeQuitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SaveBeforeQuitting");

	AOLPlayerController_SaveBeforeQuitting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientCommitMapChangeNoOverlay
// (Defined, Net, NetReliable, Simulated, Event, Public, NetClient)

void AOLPlayerController::ClientCommitMapChangeNoOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientCommitMapChangeNoOverlay");

	AOLPlayerController_ClientCommitMapChangeNoOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientCommitMapChange
// (Defined, Net, NetReliable, Simulated, Event, Public, NetClient)

void AOLPlayerController::ClientCommitMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientCommitMapChange");

	AOLPlayerController_ClientCommitMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StartNewGameAtCheckpoint
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 CheckpointStr                  (Const, Parm, OutParm, NeedCtorLink)
// bool                           bSaveToDisk                    (Parm)

void AOLPlayerController::StartNewGameAtCheckpoint(bool bSaveToDisk, struct FString* CheckpointStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StartNewGameAtCheckpoint");

	AOLPlayerController_StartNewGameAtCheckpoint_Params params;
	params.bSaveToDisk = bSaveToDisk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckpointStr != nullptr)
		*CheckpointStr = params.CheckpointStr;
}


// Function OLGame.OLPlayerController.ApplyCheckpointRecord
// (Defined, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Const, Parm, OutParm, NeedCtorLink)

void AOLPlayerController::ApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ApplyCheckpointRecord");

	AOLPlayerController_ApplyCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function OLGame.OLPlayerController.GetSaveGameNameFromRecord
// (Defined, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 SaveGameName                   (Parm, OutParm, NeedCtorLink)

void AOLPlayerController::GetSaveGameNameFromRecord(struct AOLPlayerController_FCheckpointRecord* Record, struct FString* SaveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetSaveGameNameFromRecord");

	AOLPlayerController_GetSaveGameNameFromRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
	if (SaveGameName != nullptr)
		*SaveGameName = params.SaveGameName;
}


// Function OLGame.OLPlayerController.CreateCheckpointRecord
// (Defined, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Parm, OutParm, NeedCtorLink)

void AOLPlayerController::CreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.CreateCheckpointRecord");

	AOLPlayerController_CreateCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function OLGame.OLPlayerController.SetSaveGameName
// (Native, Public)
// Parameters:
// struct FString                 SaveGameName                   (Parm, NeedCtorLink)

void AOLPlayerController::SetSaveGameName(const struct FString& SaveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetSaveGameName");

	AOLPlayerController_SetSaveGameName_Params params;
	params.SaveGameName = SaveGameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.GetSaveGameName
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 SaveGameName                   (Parm, OutParm, NeedCtorLink)

void AOLPlayerController::GetSaveGameName(struct FString* SaveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetSaveGameName");

	AOLPlayerController_GetSaveGameName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveGameName != nullptr)
		*SaveGameName = params.SaveGameName;
}


// Function OLGame.OLPlayerController.NativeGetSaveGameNameFromRecord
// (Native, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 SaveGameName                   (Parm, OutParm, NeedCtorLink)

void AOLPlayerController::NativeGetSaveGameNameFromRecord(struct AOLPlayerController_FCheckpointRecord* Record, struct FString* SaveGameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NativeGetSaveGameNameFromRecord");

	AOLPlayerController_NativeGetSaveGameNameFromRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
	if (SaveGameName != nullptr)
		*SaveGameName = params.SaveGameName;
}


// Function OLGame.OLPlayerController.NativeApplyCheckpointRecord
// (Native, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Const, Parm, OutParm, NeedCtorLink)

void AOLPlayerController::NativeApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NativeApplyCheckpointRecord");

	AOLPlayerController_NativeApplyCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function OLGame.OLPlayerController.NativeGetCurrentCheckpointRecord
// (Native, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Parm, OutParm, NeedCtorLink)

void AOLPlayerController::NativeGetCurrentCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NativeGetCurrentCheckpointRecord");

	AOLPlayerController_NativeGetCurrentCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function OLGame.OLPlayerController.StopAllSounds
// (Native, Public)

void AOLPlayerController::StopAllSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StopAllSounds");

	AOLPlayerController_StopAllSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.DrawHUD
// (Defined, Public)
// Parameters:
// class AHUD*                    H                              (Parm)

void AOLPlayerController::DrawHUD(class AHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.DrawHUD");

	AOLPlayerController_DrawHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.FullScreenOverlayChanged
// (Defined, Event, Public)

void AOLPlayerController::FullScreenOverlayChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.FullScreenOverlayChanged");

	AOLPlayerController_FullScreenOverlayChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ForcePause
// (Defined, Event, Public)
// Parameters:
// bool                           bPause                         (Parm)

void AOLPlayerController::ForcePause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ForcePause");

	AOLPlayerController_ForcePause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientSetHUD
// (Defined, Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// class UClass*                  newHUDType                     (Parm)

void AOLPlayerController::ClientSetHUD(class UClass* newHUDType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientSetHUD");

	AOLPlayerController_ClientSetHUD_Params params;
	params.newHUDType = newHUDType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.OnSetMesh
// (Defined, Event, Public)
// Parameters:
// class USeqAct_SetMesh*         Action                         (Parm)

void AOLPlayerController::OnSetMesh(class USeqAct_SetMesh* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.OnSetMesh");

	AOLPlayerController_OnSetMesh_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientSetCameraFade
// (Defined, Net, NetReliable, Simulated, Event, HasOptionalParms, Public, NetClient)
// Parameters:
// bool                           _enableFading                  (Parm)
// struct FColor                  _FadeColor                     (OptionalParm, Parm)
// struct FVector2D               _FadeAlpha                     (OptionalParm, Parm)
// float                          _FadeTime                      (OptionalParm, Parm)
// bool                           _fadeAudio                     (OptionalParm, Parm)

void AOLPlayerController::ClientSetCameraFade(bool _enableFading, const struct FColor& _FadeColor, const struct FVector2D& _FadeAlpha, float _FadeTime, bool _fadeAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientSetCameraFade");

	AOLPlayerController_ClientSetCameraFade_Params params;
	params._enableFading = _enableFading;
	params._FadeColor = _FadeColor;
	params._FadeAlpha = _FadeAlpha;
	params._FadeTime = _FadeTime;
	params._fadeAudio = _fadeAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SetCinematicMode
// (Defined, Public)
// Parameters:
// class USeqAct_ToggleCinematicMode* Action                         (Parm)
// bool                           bInCinematicMode               (Parm)
// bool                           bHidePlayer                    (Parm)
// bool                           bAffectsHUD                    (Parm)
// bool                           bAffectsMovement               (Parm)
// bool                           bAffectsTurning                (Parm)
// bool                           bAffectsButtons                (Parm)

void AOLPlayerController::SetCinematicMode(class USeqAct_ToggleCinematicMode* Action, bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetCinematicMode");

	AOLPlayerController_SetCinematicMode_Params params;
	params.Action = Action;
	params.bInCinematicMode = bInCinematicMode;
	params.bHidePlayer = bHidePlayer;
	params.bAffectsHUD = bAffectsHUD;
	params.bAffectsMovement = bAffectsMovement;
	params.bAffectsTurning = bAffectsTurning;
	params.bAffectsButtons = bAffectsButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.GetPlayerViewPoint
// (Defined, Simulated, Event, Public, HasOutParms)
// Parameters:
// struct FVector                 POVLocation                    (Parm, OutParm)
// struct FRotator                POVRotation                    (Parm, OutParm)

void AOLPlayerController::GetPlayerViewPoint(struct FVector* POVLocation, struct FRotator* POVRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetPlayerViewPoint");

	AOLPlayerController_GetPlayerViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (POVLocation != nullptr)
		*POVLocation = params.POVLocation;
	if (POVRotation != nullptr)
		*POVRotation = params.POVRotation;
}


// Function OLGame.OLPlayerController.GetFOVAngle
// (Defined, Event, Public, HasDefaults)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AOLPlayerController::GetFOVAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetFOVAngle");

	AOLPlayerController_GetFOVAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.SpawnCamera
// (Defined, Public)

void AOLPlayerController::SpawnCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SpawnCamera");

	AOLPlayerController_SpawnCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SetCameraMode
// (Defined, Public)
// Parameters:
// struct FName                   NewCamMode                     (Parm)

void AOLPlayerController::SetCameraMode(const struct FName& NewCamMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetCameraMode");

	AOLPlayerController_SetCameraMode_Params params;
	params.NewCamMode = NewCamMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UsingFirstPersonCamera
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::UsingFirstPersonCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UsingFirstPersonCamera");

	AOLPlayerController_UsingFirstPersonCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.SetBehindView
// (Defined, Public)
// Parameters:
// bool                           bNewBehindView                 (Parm)

void AOLPlayerController::SetBehindView(bool bNewBehindView)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetBehindView");

	AOLPlayerController_SetBehindView_Params params;
	params.bNewBehindView = bNewBehindView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.BehindView
// (Defined, Exec, Public)

void AOLPlayerController::BehindView()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.BehindView");

	AOLPlayerController_BehindView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.NotifyProfileChanged
// (Native, Public)

void AOLPlayerController::NotifyProfileChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NotifyProfileChanged");

	AOLPlayerController_NotifyProfileChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.CleanTextFilterButtonInput
// (Native, Public)
// Parameters:
// struct FName                   ButtonName                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::CleanTextFilterButtonInput(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.CleanTextFilterButtonInput");

	AOLPlayerController_CleanTextFilterButtonInput_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.IsLookInputIgnored
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::IsLookInputIgnored()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.IsLookInputIgnored");

	AOLPlayerController_IsLookInputIgnored_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.ToggleCrawl
// (Defined, Exec, Public)

void AOLPlayerController::ToggleCrawl()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ToggleCrawl");

	AOLPlayerController_ToggleCrawl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PrototypeActionE
// (Defined, Exec, Public)

void AOLPlayerController::PrototypeActionE()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PrototypeActionE");

	AOLPlayerController_PrototypeActionE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PrototypeActionD
// (Defined, Exec, Public)

void AOLPlayerController::PrototypeActionD()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PrototypeActionD");

	AOLPlayerController_PrototypeActionD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PrototypeActionC
// (Defined, Exec, Public)

void AOLPlayerController::PrototypeActionC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PrototypeActionC");

	AOLPlayerController_PrototypeActionC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PrototypeActionB
// (Defined, Exec, Public)

void AOLPlayerController::PrototypeActionB()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PrototypeActionB");

	AOLPlayerController_PrototypeActionB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PrototypeActionA
// (Defined, Exec, Public)

void AOLPlayerController::PrototypeActionA()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PrototypeActionA");

	AOLPlayerController_PrototypeActionA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.GammaCalibration
// (Defined, Exec, Public)

void AOLPlayerController::GammaCalibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GammaCalibration");

	AOLPlayerController_GammaCalibration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ToggleInventory
// (Defined, Exec, Public)

void AOLPlayerController::ToggleInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ToggleInventory");

	AOLPlayerController_ToggleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ToggleMicrophone
// (Defined, Exec, Public)

void AOLPlayerController::ToggleMicrophone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ToggleMicrophone");

	AOLPlayerController_ToggleMicrophone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ToggleRun
// (Defined, Exec, Public)

void AOLPlayerController::ToggleRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ToggleRun");

	AOLPlayerController_ToggleRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PressedJump
// (Defined, Exec, Public)

void AOLPlayerController::PressedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PressedJump");

	AOLPlayerController_PressedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PressedUseBandage
// (Defined, Exec, Public)

void AOLPlayerController::PressedUseBandage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PressedUseBandage");

	AOLPlayerController_PressedUseBandage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ReleasedReloadBatteries
// (Defined, Exec, Public)

void AOLPlayerController::ReleasedReloadBatteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ReleasedReloadBatteries");

	AOLPlayerController_ReleasedReloadBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PressedReloadBatteries
// (Defined, Exec, Public)

void AOLPlayerController::PressedReloadBatteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PressedReloadBatteries");

	AOLPlayerController_PressedReloadBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StopZoom
// (Defined, Simulated, Exec, Public)

void AOLPlayerController::StopZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StopZoom");

	AOLPlayerController_StopZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StartZoomOut
// (Defined, Simulated, Exec, Public)

void AOLPlayerController::StartZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StartZoomOut");

	AOLPlayerController_StartZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StartZoomIn
// (Defined, Simulated, Exec, Public)

void AOLPlayerController::StartZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StartZoomIn");

	AOLPlayerController_StartZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ZoomOut
// (Defined, Exec, Public)

void AOLPlayerController::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ZoomOut");

	AOLPlayerController_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ZoomIn
// (Defined, Exec, Public)

void AOLPlayerController::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ZoomIn");

	AOLPlayerController_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ToggleCamcorder
// (Defined, Exec, Public)

void AOLPlayerController::ToggleCamcorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ToggleCamcorder");

	AOLPlayerController_ToggleCamcorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ToggleNightVision
// (Defined, Exec, Public)

void AOLPlayerController::ToggleNightVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ToggleNightVision");

	AOLPlayerController_ToggleNightVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ReleasedUseButton
// (Defined, Exec, Public)

void AOLPlayerController::ReleasedUseButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ReleasedUseButton");

	AOLPlayerController_ReleasedUseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PressedUseButton
// (Defined, Exec, Public)

void AOLPlayerController::PressedUseButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PressedUseButton");

	AOLPlayerController_PressedUseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PerformedUseAction
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::PerformedUseAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PerformedUseAction");

	AOLPlayerController_PerformedUseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.ResetWorldNoCheckpoint
// (Native, Public)

void AOLPlayerController::ResetWorldNoCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ResetWorldNoCheckpoint");

	AOLPlayerController_ResetWorldNoCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.Destroyed
// (Defined, Event, Public)

void AOLPlayerController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.Destroyed");

	AOLPlayerController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientRestart
// (Defined, Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// class APawn*                   NewPawn                        (Parm)

void AOLPlayerController::ClientRestart(class APawn* NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientRestart");

	AOLPlayerController_ClientRestart_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.Reset
// (Defined, Public)

void AOLPlayerController::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.Reset");

	AOLPlayerController_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UnPossess
// (Defined, Event, Public)

void AOLPlayerController::UnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UnPossess");

	AOLPlayerController_UnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.Possess
// (Defined, Event, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)
// bool                           bVehicleTransition             (Parm)

void AOLPlayerController::Possess(class APawn* inPawn, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.Possess");

	AOLPlayerController_Possess_Params params;
	params.inPawn = inPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AOLPlayerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PostBeginPlay");

	AOLPlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ShowRecordingTime
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::ShowRecordingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ShowRecordingTime");

	AOLPlayerController_ShowRecordingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.GetGraphicAPIString
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AOLPlayerController::GetGraphicAPIString()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetGraphicAPIString");

	AOLPlayerController_GetGraphicAPIString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.ShowGraphicAPIString
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::ShowGraphicAPIString()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ShowGraphicAPIString");

	AOLPlayerController_ShowGraphicAPIString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.HideLoadingOverlay
// (Native, Public)

void AOLPlayerController::HideLoadingOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.HideLoadingOverlay");

	AOLPlayerController_HideLoadingOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ShowLoadingOverlay
// (Native, Public)

void AOLPlayerController::ShowLoadingOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ShowLoadingOverlay");

	AOLPlayerController_ShowLoadingOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SetVolume
// (Native, Public)
// Parameters:
// float                          VolumeLevel                    (Parm)

void AOLPlayerController::SetVolume(float VolumeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetVolume");

	AOLPlayerController_SetVolume_Params params;
	params.VolumeLevel = VolumeLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ApplyKeyBindings
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      UserConfiguredSettings         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::ApplyKeyBindings(class UOLProfileSettings* UserConfiguredSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ApplyKeyBindings");

	AOLPlayerController_ApplyKeyBindings_Params params;
	params.UserConfiguredSettings = UserConfiguredSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.SetGamma
// (Native, Public)
// Parameters:
// float                          GammaValue                     (Parm)

void AOLPlayerController::SetGamma(float GammaValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetGamma");

	AOLPlayerController_SetGamma_Params params;
	params.GammaValue = GammaValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.GetGamma
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AOLPlayerController::GetGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetGamma");

	AOLPlayerController_GetGamma_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.NativePlayerMove
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AOLPlayerController::NativePlayerMove(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NativePlayerMove");

	AOLPlayerController_NativePlayerMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFakeLongSubtitles
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFakeLongSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFakeLongSubtitles");

	UOLCheatManager_ToggleFakeLongSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFakeRecordingReadFailure
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFakeRecordingReadFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFakeRecordingReadFailure");

	UOLCheatManager_ToggleFakeRecordingReadFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFakeRecordingWriteFailure
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFakeRecordingWriteFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFakeRecordingWriteFailure");

	UOLCheatManager_ToggleFakeRecordingWriteFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ClearAllDingoRecordings
// (Exec, Native, Public)

void UOLCheatManager::ClearAllDingoRecordings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ClearAllDingoRecordings");

	UOLCheatManager_ClearAllDingoRecordings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.FakeDingoRecordingRight
// (Exec, Native, Public)

void UOLCheatManager::FakeDingoRecordingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.FakeDingoRecordingRight");

	UOLCheatManager_FakeDingoRecordingRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DingoTest
// (Exec, Native, Public)

void UOLCheatManager::DingoTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DingoTest");

	UOLCheatManager_DingoTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetTutorialReminderTimers
// (Exec, Native, Public)

void UOLCheatManager::ResetTutorialReminderTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetTutorialReminderTimers");

	UOLCheatManager_ResetTutorialReminderTimers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.IsFakeNotFullyDownloaded
// (Exec, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCheatManager::IsFakeNotFullyDownloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.IsFakeNotFullyDownloaded");

	UOLCheatManager_IsFakeNotFullyDownloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCheatManager.ToggleGameFullyDownloaded
// (Exec, Native, Public)

void UOLCheatManager::ToggleGameFullyDownloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleGameFullyDownloaded");

	UOLCheatManager_ToggleGameFullyDownloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.TriggerNotDownloadScreen
// (Exec, Native, Public)

void UOLCheatManager::TriggerNotDownloadScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.TriggerNotDownloadScreen");

	UOLCheatManager_TriggerNotDownloadScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.FakeControllerDisconnected
// (Exec, Native, Public)
// Parameters:
// bool                           bDelayedPause                  (Parm)

void UOLCheatManager::FakeControllerDisconnected(bool bDelayedPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.FakeControllerDisconnected");

	UOLCheatManager_FakeControllerDisconnected_Params params;
	params.bDelayedPause = bDelayedPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ForceHandsCrucifixion
// (Exec, Native, Public)

void UOLCheatManager::ForceHandsCrucifixion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ForceHandsCrucifixion");

	UOLCheatManager_ForceHandsCrucifixion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DecrementDifficultyModeModifier
// (Exec, Native, Public)

void UOLCheatManager::DecrementDifficultyModeModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DecrementDifficultyModeModifier");

	UOLCheatManager_DecrementDifficultyModeModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.IncrementDifficultyModeModifier
// (Exec, Native, Public)

void UOLCheatManager::IncrementDifficultyModeModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.IncrementDifficultyModeModifier");

	UOLCheatManager_IncrementDifficultyModeModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DecrementDifficultyMode
// (Exec, Native, Public)

void UOLCheatManager::DecrementDifficultyMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DecrementDifficultyMode");

	UOLCheatManager_DecrementDifficultyMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.IncrementDifficultyMode
// (Exec, Native, Public)

void UOLCheatManager::IncrementDifficultyMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.IncrementDifficultyMode");

	UOLCheatManager_IncrementDifficultyMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleCharacterPhysicDebug
// (Defined, Exec, Public)

void UOLCheatManager::ToggleCharacterPhysicDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleCharacterPhysicDebug");

	UOLCheatManager_ToggleCharacterPhysicDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.TryGeneratePath
// (Defined, Exec, HasOptionalParms, Public, HasDefaults)
// Parameters:
// float                          PosX                           (Parm)
// float                          PosY                           (Parm)
// float                          PosZ                           (Parm)
// bool                           bTight                         (OptionalParm, Parm)
// float                          BufferDist                     (OptionalParm, Parm)

void UOLCheatManager::TryGeneratePath(float PosX, float PosY, float PosZ, bool bTight, float BufferDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.TryGeneratePath");

	UOLCheatManager_TryGeneratePath_Params params;
	params.PosX = PosX;
	params.PosY = PosY;
	params.PosZ = PosZ;
	params.bTight = bTight;
	params.BufferDist = BufferDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetAIVerbosity
// (Exec, Native, Public)
// Parameters:
// int                            NewVerbosity                   (Parm)

void UOLCheatManager::SetAIVerbosity(int NewVerbosity)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetAIVerbosity");

	UOLCheatManager_SetAIVerbosity_Params params;
	params.NewVerbosity = NewVerbosity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.KillSelectedEnemy
// (Defined, Exec, Public)

void UOLCheatManager::KillSelectedEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.KillSelectedEnemy");

	UOLCheatManager_KillSelectedEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.KillAllEnemiesButSelected
// (Defined, Exec, Public)

void UOLCheatManager::KillAllEnemiesButSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.KillAllEnemiesButSelected");

	UOLCheatManager_KillAllEnemiesButSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.KillAllEnemies
// (Defined, Exec, Public)

void UOLCheatManager::KillAllEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.KillAllEnemies");

	UOLCheatManager_KillAllEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.CleanupAfterKillAll
// (Native, Public)

void UOLCheatManager::CleanupAfterKillAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.CleanupAfterKillAll");

	UOLCheatManager_CleanupAfterKillAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetLanguage
// (Exec, Native, Public)
// Parameters:
// struct FString                 LanguageCode                   (Parm, NeedCtorLink)

void UOLCheatManager::SetLanguage(const struct FString& LanguageCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetLanguage");

	UOLCheatManager_SetLanguage_Params params;
	params.LanguageCode = LanguageCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ReloadSoundBanks
// (Exec, Native, Public)
// Parameters:
// bool                           bFrenchVO                      (Parm)

void UOLCheatManager::ReloadSoundBanks(bool bFrenchVO)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ReloadSoundBanks");

	UOLCheatManager_ReloadSoundBanks_Params params;
	params.bFrenchVO = bFrenchVO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ProcessCheatInput
// (Defined, Event, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// bool                           bPressed                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCheatManager::ProcessCheatInput(const struct FName& Key, bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ProcessCheatInput");

	UOLCheatManager_ProcessCheatInput_Params params;
	params.Key = Key;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCheatManager.StartGamepadCheckpoint
// (Native, Public)

void UOLCheatManager::StartGamepadCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.StartGamepadCheckpoint");

	UOLCheatManager_StartGamepadCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ScrollGamepadCPIdx
// (Native, Public)
// Parameters:
// bool                           bForward                       (Parm)

void UOLCheatManager::ScrollGamepadCPIdx(bool bForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ScrollGamepadCPIdx");

	UOLCheatManager_ScrollGamepadCPIdx_Params params;
	params.bForward = bForward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.IsViewModeUnlit
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCheatManager::IsViewModeUnlit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.IsViewModeUnlit");

	UOLCheatManager_IsViewModeUnlit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCheatManager.ResetProfileProgression
// (Defined, Exec, Public)

void UOLCheatManager::ResetProfileProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetProfileProgression");

	UOLCheatManager_ResetProfileProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetLastCheckpointName
// (Defined, Exec, Public)
// Parameters:
// struct FString                 CPName                         (Parm, NeedCtorLink)

void UOLCheatManager::SetLastCheckpointName(const struct FString& CPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetLastCheckpointName");

	UOLCheatManager_SetLastCheckpointName_Params params;
	params.CPName = CPName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetLastCheckpointId
// (Defined, Exec, Public)
// Parameters:
// int                            Index                          (Parm)

void UOLCheatManager::SetLastCheckpointId(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetLastCheckpointId");

	UOLCheatManager_SetLastCheckpointId_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetFinishedGame
// (Defined, Exec, Public)
// Parameters:
// bool                           hasFinishedGame                (Parm)
// bool                           hasFinishedDLC                 (Parm)

void UOLCheatManager::SetFinishedGame(bool hasFinishedGame, bool hasFinishedDLC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetFinishedGame");

	UOLCheatManager_SetFinishedGame_Params params;
	params.hasFinishedGame = hasFinishedGame;
	params.hasFinishedDLC = hasFinishedDLC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.OutlastPause
// (Defined, Exec, Public)

void UOLCheatManager::OutlastPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.OutlastPause");

	UOLCheatManager_OutlastPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugClosestAI
// (Exec, Native, Public)

void UOLCheatManager::DebugClosestAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugClosestAI");

	UOLCheatManager_DebugClosestAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetGS
// (Exec, Native, Public)

void UOLCheatManager::ResetGS()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetGS");

	UOLCheatManager_ResetGS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DeactivateGS
// (Exec, Native, Public)
// Parameters:
// struct FName                   gsName                         (Parm)

void UOLCheatManager::DeactivateGS(const struct FName& gsName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DeactivateGS");

	UOLCheatManager_DeactivateGS_Params params;
	params.gsName = gsName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ActivateGS
// (Exec, Native, Public)
// Parameters:
// struct FName                   gsName                         (Parm)

void UOLCheatManager::ActivateGS(const struct FName& gsName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ActivateGS");

	UOLCheatManager_ActivateGS_Params params;
	params.gsName = gsName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DumpGS
// (Defined, Exec, Public)

void UOLCheatManager::DumpGS()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DumpGS");

	UOLCheatManager_DumpGS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugPhysMaterials
// (Defined, Exec, Public)

void UOLCheatManager::DebugPhysMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugPhysMaterials");

	UOLCheatManager_DebugPhysMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugPerception
// (Defined, Exec, Public)

void UOLCheatManager::DebugPerception()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugPerception");

	UOLCheatManager_DebugPerception_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.OldBotPhysics
// (Defined, Exec, Public)

void UOLCheatManager::OldBotPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.OldBotPhysics");

	UOLCheatManager_OldBotPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.NewBotPhysics
// (Defined, Exec, Public)

void UOLCheatManager::NewBotPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.NewBotPhysics");

	UOLCheatManager_NewBotPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.OldHeroPhysics
// (Defined, Exec, Public)

void UOLCheatManager::OldHeroPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.OldHeroPhysics");

	UOLCheatManager_OldHeroPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.NewHeroPhysics
// (Defined, Exec, Public)

void UOLCheatManager::NewHeroPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.NewHeroPhysics");

	UOLCheatManager_NewHeroPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.OldPhysics
// (Defined, Exec, Public)

void UOLCheatManager::OldPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.OldPhysics");

	UOLCheatManager_OldPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.newPhysics
// (Defined, Exec, Public)

void UOLCheatManager::newPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.newPhysics");

	UOLCheatManager_newPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleHeroInclusionForSimplifiedPhysics
// (Defined, Exec, Public)

void UOLCheatManager::ToggleHeroInclusionForSimplifiedPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleHeroInclusionForSimplifiedPhysics");

	UOLCheatManager_ToggleHeroInclusionForSimplifiedPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.TogglePhysicsMode
// (Defined, Exec, Public)

void UOLCheatManager::TogglePhysicsMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.TogglePhysicsMode");

	UOLCheatManager_TogglePhysicsMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetSimplifiedPhysics
// (Native, Public)
// Parameters:
// bool                           bHero                          (Parm)
// bool                           bBots                          (Parm)
// bool                           bSimplified                    (Parm)

void UOLCheatManager::SetSimplifiedPhysics(bool bHero, bool bBots, bool bSimplified)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetSimplifiedPhysics");

	UOLCheatManager_SetSimplifiedPhysics_Params params;
	params.bHero = bHero;
	params.bBots = bBots;
	params.bSimplified = bSimplified;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetNewPhysics
// (Native, Public)
// Parameters:
// bool                           bHero                          (Parm)
// bool                           bBots                          (Parm)

void UOLCheatManager::SetNewPhysics(bool bHero, bool bBots)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetNewPhysics");

	UOLCheatManager_SetNewPhysics_Params params;
	params.bHero = bHero;
	params.bBots = bBots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SuppressAllMessages
// (Defined, Exec, Public)

void UOLCheatManager::SuppressAllMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SuppressAllMessages");

	UOLCheatManager_SuppressAllMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.AIEvents
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            NumLines                       (OptionalParm, Parm)

void UOLCheatManager::AIEvents(int NumLines)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.AIEvents");

	UOLCheatManager_AIEvents_Params params;
	params.NumLines = NumLines;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.AILogs
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// int                            NumLines                       (OptionalParm, Parm)

void UOLCheatManager::AILogs(int NumLines)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.AILogs");

	UOLCheatManager_AILogs_Params params;
	params.NumLines = NumLines;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DrawDebug
// (Native, Public)

void UOLCheatManager::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DrawDebug");

	UOLCheatManager_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleMute
// (Exec, Native, Public)

void UOLCheatManager::ToggleMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleMute");

	UOLCheatManager_ToggleMute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetVolumeThreshold
// (Exec, Native, Public)
// Parameters:
// float                          NewThreshold                   (Parm)

void UOLCheatManager::SetVolumeThreshold(float NewThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetVolumeThreshold");

	UOLCheatManager_SetVolumeThreshold_Params params;
	params.NewThreshold = NewThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.MakeNoise
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// float                          NoiseAmount                    (OptionalParm, Parm)

void UOLCheatManager::MakeNoise(float NoiseAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.MakeNoise");

	UOLCheatManager_MakeNoise_Params params;
	params.NoiseAmount = NoiseAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.InflictDamage
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          Amount                         (OptionalParm, Parm)

void UOLCheatManager::InflictDamage(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.InflictDamage");

	UOLCheatManager_InflictDamage_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetTutorials
// (Exec, Native, Public)

void UOLCheatManager::ResetTutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetTutorials");

	UOLCheatManager_ResetTutorials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetWorldToSavedState
// (Exec, Native, Public)

void UOLCheatManager::ResetWorldToSavedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetWorldToSavedState");

	UOLCheatManager_ResetWorldToSavedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetWorldState
// (Exec, Native, Public)

void UOLCheatManager::ResetWorldState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetWorldState");

	UOLCheatManager_ResetWorldState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetPushables
// (Exec, Native, Public)

void UOLCheatManager::ResetPushables()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetPushables");

	UOLCheatManager_ResetPushables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetDoors
// (Exec, Native, Public)

void UOLCheatManager::ResetDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetDoors");

	UOLCheatManager_ResetDoors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GammaDown
// (Exec, Native, Public)

void UOLCheatManager::GammaDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GammaDown");

	UOLCheatManager_GammaDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GammaUp
// (Exec, Native, Public)

void UOLCheatManager::GammaUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GammaUp");

	UOLCheatManager_GammaUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetGamma
// (Exec, Native, Public)
// Parameters:
// float                          newGamma                       (Parm)

void UOLCheatManager::SetGamma(float newGamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetGamma");

	UOLCheatManager_SetGamma_Params params;
	params.newGamma = newGamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.LoadGame
// (Defined, Exec, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLCheatManager::LoadGame(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.LoadGame");

	UOLCheatManager_LoadGame_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SaveGame
// (Defined, Exec, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLCheatManager::SaveGame(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SaveGame");

	UOLCheatManager_SaveGame_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.LoseBandages
// (Exec, Native, Public)

void UOLCheatManager::LoseBandages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.LoseBandages");

	UOLCheatManager_LoseBandages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GiveItem
// (Exec, Native, Public)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)

void UOLCheatManager::GiveItem(const struct FString& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GiveItem");

	UOLCheatManager_GiveItem_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ApplyCP
// (Exec, Native, Public)
// Parameters:
// struct FString                 CPName                         (Parm, NeedCtorLink)

void UOLCheatManager::ApplyCP(const struct FString& CPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ApplyCP");

	UOLCheatManager_ApplyCP_Params params;
	params.CPName = CPName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.cplist
// (Exec, Native, Public)

void UOLCheatManager::cplist()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.cplist");

	UOLCheatManager_cplist_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.cp
// (Defined, Exec, Public)
// Parameters:
// struct FString                 CPName                         (Parm, NeedCtorLink)

void UOLCheatManager::cp(const struct FString& CPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.cp");

	UOLCheatManager_cp_Params params;
	params.CPName = CPName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.Checkpoint
// (Defined, Exec, Public)
// Parameters:
// struct FString                 CPName                         (Parm, NeedCtorLink)

void UOLCheatManager::Checkpoint(const struct FString& CPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.Checkpoint");

	UOLCheatManager_Checkpoint_Params params;
	params.CPName = CPName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.KillFade
// (Defined, Exec, Public)

void UOLCheatManager::KillFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.KillFade");

	UOLCheatManager_KillFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleUnlimitedBatteries
// (Defined, Exec, Public)

void UOLCheatManager::ToggleUnlimitedBatteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleUnlimitedBatteries");

	UOLCheatManager_ToggleUnlimitedBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.LoseAllProfileRecordingMoment
// (Exec, Native, Public)

void UOLCheatManager::LoseAllProfileRecordingMoment()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.LoseAllProfileRecordingMoment");

	UOLCheatManager_LoseAllProfileRecordingMoment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.LoseRecordingMoment
// (Exec, Native, Public)
// Parameters:
// struct FString                 moment                         (Parm, NeedCtorLink)

void UOLCheatManager::LoseRecordingMoment(const struct FString& moment)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.LoseRecordingMoment");

	UOLCheatManager_LoseRecordingMoment_Params params;
	params.moment = moment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GetRecordingMoment
// (Exec, Native, Public)
// Parameters:
// struct FString                 moment                         (Parm, NeedCtorLink)

void UOLCheatManager::GetRecordingMoment(const struct FString& moment)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GetRecordingMoment");

	UOLCheatManager_GetRecordingMoment_Params params;
	params.moment = moment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GetAllRecordingMoments
// (Exec, Native, Public)

void UOLCheatManager::GetAllRecordingMoments()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GetAllRecordingMoments");

	UOLCheatManager_GetAllRecordingMoments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetBandageTime
// (Exec, Native, Public)

void UOLCheatManager::ResetBandageTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetBandageTime");

	UOLCheatManager_ResetBandageTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ForceHeroSkin
// (Exec, Native, Public)
// Parameters:
// int                            Type                           (Parm)
// int                            SubType                        (Parm)

void UOLCheatManager::ForceHeroSkin(int Type, int SubType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ForceHeroSkin");

	UOLCheatManager_ForceHeroSkin_Params params;
	params.Type = Type;
	params.SubType = SubType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.AddBandage
// (Defined, Exec, Public)

void UOLCheatManager::AddBandage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.AddBandage");

	UOLCheatManager_AddBandage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.RechargeNightVision
// (Defined, Exec, Public)

void UOLCheatManager::RechargeNightVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.RechargeNightVision");

	UOLCheatManager_RechargeNightVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.Ghost
// (Defined, Exec, Public)

void UOLCheatManager::Ghost()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.Ghost");

	UOLCheatManager_Ghost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GhostPawn
// (Native, Public)
// Parameters:
// bool                           ghosting                       (Parm)

void UOLCheatManager::GhostPawn(bool ghosting)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GhostPawn");

	UOLCheatManager_GhostPawn_Params params;
	params.ghosting = ghosting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.FasterGameSpeed
// (Defined, Exec, Public)

void UOLCheatManager::FasterGameSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.FasterGameSpeed");

	UOLCheatManager_FasterGameSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SlowerGameSpeed
// (Defined, Exec, Public)

void UOLCheatManager::SlowerGameSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SlowerGameSpeed");

	UOLCheatManager_SlowerGameSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.NormalGameSpeed
// (Defined, Exec, Public)

void UOLCheatManager::NormalGameSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.NormalGameSpeed");

	UOLCheatManager_NormalGameSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.UpdateGameSpeed
// (Defined, Public)

void UOLCheatManager::UpdateGameSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.UpdateGameSpeed");

	UOLCheatManager_UpdateGameSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SingleFrame
// (Exec, Native, Public)

void UOLCheatManager::SingleFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SingleFrame");

	UOLCheatManager_SingleFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.TeleportToFreeCam
// (Defined, Exec, Public)

void UOLCheatManager::TeleportToFreeCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.TeleportToFreeCam");

	UOLCheatManager_TeleportToFreeCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFixedCam
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFixedCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFixedCam");

	UOLCheatManager_ToggleFixedCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFreeCamNoPause
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFreeCamNoPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFreeCamNoPause");

	UOLCheatManager_ToggleFreeCamNoPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFreeCam
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFreeCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFreeCam");

	UOLCheatManager_ToggleFreeCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.AutoSpike
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          Spike                          (OptionalParm, Parm)
// float                          Delay                          (OptionalParm, Parm)

void UOLCheatManager::AutoSpike(float Spike, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.AutoSpike");

	UOLCheatManager_AutoSpike_Params params;
	params.Spike = Spike;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.Spike
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          Spike                          (OptionalParm, Parm)

void UOLCheatManager::Spike(float Spike)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.Spike");

	UOLCheatManager_Spike_Params params;
	params.Spike = Spike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.BadFPS
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          slowdown                       (OptionalParm, Parm)

void UOLCheatManager::BadFPS(float slowdown)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.BadFPS");

	UOLCheatManager_BadFPS_Params params;
	params.slowdown = slowdown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugAI
// (Defined, Exec, Public)

void UOLCheatManager::DebugAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugAI");

	UOLCheatManager_DebugAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowHeroDebug
// (Defined, Exec, Public)

void UOLCheatManager::ShowHeroDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowHeroDebug");

	UOLCheatManager_ShowHeroDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowOLProfiler
// (Defined, Exec, Public)

void UOLCheatManager::ShowOLProfiler()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowOLProfiler");

	UOLCheatManager_ShowOLProfiler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowPerformance
// (Defined, Exec, Public)

void UOLCheatManager::ShowPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowPerformance");

	UOLCheatManager_ShowPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowCollisions
// (Defined, Exec, Public)

void UOLCheatManager::ShowCollisions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowCollisions");

	UOLCheatManager_ShowCollisions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowPaths
// (Defined, Exec, Public)

void UOLCheatManager::ShowPaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowPaths");

	UOLCheatManager_ShowPaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowStatLevels
// (Defined, Exec, Public)

void UOLCheatManager::ShowStatLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowStatLevels");

	UOLCheatManager_ShowStatLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugSubtitles
// (Defined, Exec, Public)

void UOLCheatManager::DebugSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugSubtitles");

	UOLCheatManager_DebugSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.LogSoundEvents
// (Exec, Native, Public)

void UOLCheatManager::LogSoundEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.LogSoundEvents");

	UOLCheatManager_LogSoundEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugVO
// (Defined, Exec, Public)

void UOLCheatManager::DebugVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugVO");

	UOLCheatManager_DebugVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugGameState
// (Defined, Exec, Public)

void UOLCheatManager::DebugGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugGameState");

	UOLCheatManager_DebugGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugAIConfig
// (Defined, Exec, Public)

void UOLCheatManager::DebugAIConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugAIConfig");

	UOLCheatManager_DebugAIConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SlowStreaming
// (Defined, Exec, Public)

void UOLCheatManager::SlowStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SlowStreaming");

	UOLCheatManager_SlowStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugAIAnims
// (Defined, Exec, Public)

void UOLCheatManager::DebugAIAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugAIAnims");

	UOLCheatManager_DebugAIAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugInvestigation
// (Defined, Exec, Public)

void UOLCheatManager::DebugInvestigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugInvestigation");

	UOLCheatManager_DebugInvestigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugClearance
// (Defined, Exec, Public)

void UOLCheatManager::DebugClearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugClearance");

	UOLCheatManager_DebugClearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugSoundMeter
// (Defined, Exec, Public)

void UOLCheatManager::DebugSoundMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugSoundMeter");

	UOLCheatManager_DebugSoundMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowPrecomputedLightVolumes
// (Defined, Exec, Public)

void UOLCheatManager::ShowPrecomputedLightVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowPrecomputedLightVolumes");

	UOLCheatManager_ShowPrecomputedLightVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugTrajectory
// (Defined, Exec, Public)

void UOLCheatManager::DebugTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugTrajectory");

	UOLCheatManager_DebugTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugKismet
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// struct FString                 Filter                         (OptionalParm, Parm, NeedCtorLink)

void UOLCheatManager::DebugKismet(const struct FString& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugKismet");

	UOLCheatManager_DebugKismet_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugCamera
// (Defined, Exec, Public)

void UOLCheatManager::DebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugCamera");

	UOLCheatManager_DebugCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugLineChecks
// (Exec, Native, Public)

void UOLCheatManager::DebugLineChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugLineChecks");

	UOLCheatManager_DebugLineChecks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DumpKismetLog
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Filter                         (OptionalParm, Parm, NeedCtorLink)

void UOLCheatManager::DumpKismetLog(const struct FString& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DumpKismetLog");

	UOLCheatManager_DumpKismetLog_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugSoundEnvironment
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Filter                         (OptionalParm, Parm, NeedCtorLink)

void UOLCheatManager::DebugSoundEnvironment(const struct FString& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugSoundEnvironment");

	UOLCheatManager_DebugSoundEnvironment_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugGameplay
// (Exec, Native, Public)

void UOLCheatManager::DebugGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugGameplay");

	UOLCheatManager_DebugGameplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SaveAllCheckpoints
// (Exec, Native, Public)

void UOLCheatManager::SaveAllCheckpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SaveAllCheckpoints");

	UOLCheatManager_SaveAllCheckpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DeleteAllSaves
// (Exec, Native, Public)

void UOLCheatManager::DeleteAllSaves()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DeleteAllSaves");

	UOLCheatManager_DeleteAllSaves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.KillAll
// (Defined, Exec, Public)
// Parameters:
// class UClass*                  aClass                         (Parm)

void UOLCheatManager::KillAll(class UClass* aClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.KillAll");

	UOLCheatManager_KillAll_Params params;
	params.aClass = aClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.God
// (Exec, Native, Public)

void UOLCheatManager::God()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.God");

	UOLCheatManager_God_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.TakeScreenshot
// (Defined, Exec, Public)

void UOLCheatManager::TakeScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.TakeScreenshot");

	UOLCheatManager_TakeScreenshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.CycleCollisionView
// (Defined, Exec, Public)

void UOLCheatManager::CycleCollisionView()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.CycleCollisionView");

	UOLCheatManager_CycleCollisionView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ViewShaderComplexity
// (Defined, Exec, Public)

void UOLCheatManager::ViewShaderComplexity()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ViewShaderComplexity");

	UOLCheatManager_ViewShaderComplexity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ViewDetailLighting
// (Defined, Exec, Public)

void UOLCheatManager::ViewDetailLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ViewDetailLighting");

	UOLCheatManager_ViewDetailLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ViewLit
// (Defined, Exec, Public)

void UOLCheatManager::ViewLit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ViewLit");

	UOLCheatManager_ViewLit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ViewUnlit
// (Defined, Exec, Public)

void UOLCheatManager::ViewUnlit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ViewUnlit");

	UOLCheatManager_ViewUnlit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ViewWireframe
// (Defined, Exec, Public)

void UOLCheatManager::ViewWireframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ViewWireframe");

	UOLCheatManager_ViewWireframe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleGamepadCheats
// (Defined, Exec, Public)

void UOLCheatManager::ToggleGamepadCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleGamepadCheats");

	UOLCheatManager_ToggleGamepadCheats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleCheats
// (Defined, Exec, Public)

void UOLCheatManager::ToggleCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleCheats");

	UOLCheatManager_ToggleCheats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.CheatMessage
// (Defined, Event, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOLCheatManager::CheatMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.CheatMessage");

	UOLCheatManager_CheatMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GetCheatManager
// (Native, Static, Public)
// Parameters:
// class UOLCheatManager*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLCheatManager* UOLCheatManager::STATIC_GetCheatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GetCheatManager");

	UOLCheatManager_GetCheatManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCheckpoint.OnPlayerSpawn
// (Native, Public)

void AOLCheckpoint::OnPlayerSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheckpoint.OnPlayerSpawn");

	AOLCheckpoint_OnPlayerSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheckpointList.Script_IsUnreached
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FName                   TestCheckpoint                 (Const, Parm, OutParm)
// struct FName                   CurrentCheckpoint              (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLCheckpointList::STATIC_Script_IsUnreached(struct FName* TestCheckpoint, struct FName* CurrentCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheckpointList.Script_IsUnreached");

	AOLCheckpointList_Script_IsUnreached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestCheckpoint != nullptr)
		*TestCheckpoint = params.TestCheckpoint;
	if (CurrentCheckpoint != nullptr)
		*CurrentCheckpoint = params.CurrentCheckpoint;

	return params.ReturnValue;
}


// Function OLGame.OLConsole.InputKey
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (OptionalParm, Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLConsole::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLConsole.InputKey");

	UOLConsole_InputKey_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLConsole.AddCustomCommandsToAutoComplete
// (Native, Public)

void UOLConsole::AddCustomCommandsToAutoComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLConsole.AddCustomCommandsToAutoComplete");

	UOLConsole_AddCustomCommandsToAutoComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDamageActor.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLDamageActor::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDamageActor.OnToggle");

	AOLDamageActor_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDLCManager.FindAndInstallDLC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDLCManager::FindAndInstallDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDLCManager.FindAndInstallDLC");

	UOLDLCManager_FindAndInstallDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.BreakDoor
// (Native, Public)
// Parameters:
// class AOLPawn*                 Breaker                        (Parm)
// bool                           bReversed                      (Parm)
// bool                           bNoSound                       (Parm)

void AOLDoor::BreakDoor(class AOLPawn* Breaker, bool bReversed, bool bNoSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.BreakDoor");

	AOLDoor_BreakDoor_Params params;
	params.Breaker = Breaker;
	params.bReversed = bReversed;
	params.bNoSound = bNoSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.BashDoor
// (Defined, Event, Public)
// Parameters:
// bool                           bReversed                      (Parm)

void AOLDoor::BashDoor(bool bReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.BashDoor");

	AOLDoor_BashDoor_Params params;
	params.bReversed = bReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.ShouldBreak
// (Defined, Event, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLDoor::ShouldBreak(class AOLBot* Bot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.ShouldBreak");

	AOLDoor_ShouldBreak_Params params;
	params.Bot = Bot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.InterpolationFinished
// (Defined, Simulated, Event, Public)
// Parameters:
// class USeqAct_Interp*          InterpAction                   (Parm)

void AOLDoor::InterpolationFinished(class USeqAct_Interp* InterpAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.InterpolationFinished");

	AOLDoor_InterpolationFinished_Params params;
	params.InterpAction = InterpAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.InterpolationStarted
// (Defined, Simulated, Event, Public)
// Parameters:
// class USeqAct_Interp*          InterpAction                   (Parm)
// class UInterpGroupInst*        GroupInst                      (Parm)

void AOLDoor::InterpolationStarted(class USeqAct_Interp* InterpAction, class UInterpGroupInst* GroupInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.InterpolationStarted");

	AOLDoor_InterpolationStarted_Params params;
	params.InterpAction = InterpAction;
	params.GroupInst = GroupInst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.StopMatineeAnim
// (Native, Public)
// Parameters:
// bool                           bHeroTriggered                 (Parm)

void AOLDoor::StopMatineeAnim(bool bHeroTriggered)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.StopMatineeAnim");

	AOLDoor_StopMatineeAnim_Params params;
	params.bHeroTriggered = bHeroTriggered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.StartMatineeAnim
// (Native, Public)
// Parameters:
// bool                           bLooping                       (Parm)

void AOLDoor::StartMatineeAnim(bool bLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.StartMatineeAnim");

	AOLDoor_StartMatineeAnim_Params params;
	params.bLooping = bLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.OnDestroy
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Destroy*         Action                         (Parm)

void AOLDoor::OnDestroy(class USeqAct_Destroy* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.OnDestroy");

	AOLDoor_OnDestroy_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.SoftDestroy
// (Native, Public)

void AOLDoor::SoftDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.SoftDestroy");

	AOLDoor_SoftDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.NotifyHandlesToWait
// (Native, Public)

void AOLDoor::NotifyHandlesToWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.NotifyHandlesToWait");

	AOLDoor_NotifyHandlesToWait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.NotifyHandlesToRepath
// (Native, Public)

void AOLDoor::NotifyHandlesToRepath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.NotifyHandlesToRepath");

	AOLDoor_NotifyHandlesToRepath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.ForcePushBlockingHero
// (Native, Public)

void AOLDoor::ForcePushBlockingHero()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.ForcePushBlockingHero");

	AOLDoor_ForcePushBlockingHero_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.FastOpen
// (Native, Public)
// Parameters:
// class AOLPawn*                 OpeningPawn                    (Parm)

void AOLDoor::FastOpen(class AOLPawn* OpeningPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.FastOpen");

	AOLDoor_FastOpen_Params params;
	params.OpeningPawn = OpeningPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.IsOnPullSide
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 TestLocation                   (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLDoor::IsOnPullSide(struct FVector* TestLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.IsOnPullSide");

	AOLDoor_IsOnPullSide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestLocation != nullptr)
		*TestLocation = params.TestLocation;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.GetOpenAngle
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AOLDoor::GetOpenAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.GetOpenAngle");

	AOLDoor_GetOpenAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.OnStateChanged
// (Native, Public)

void AOLDoor::OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.OnStateChanged");

	AOLDoor_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.TriggerEvent
// (Native, Public)
// Parameters:
// TEnumAsByte<EDoorEventType>    EventType                      (Parm)
// class AOLPawn*                 Triggerer                      (Parm)

void AOLDoor::TriggerEvent(TEnumAsByte<EDoorEventType> EventType, class AOLPawn* Triggerer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.TriggerEvent");

	AOLDoor_TriggerEvent_Params params;
	params.EventType = EventType;
	params.Triggerer = Triggerer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.TriggerBreakDoorCameraShake
// (Native, Public)

void AOLDoor::TriggerBreakDoorCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.TriggerBreakDoorCameraShake");

	AOLDoor_TriggerBreakDoorCameraShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.StopShaking
// (Native, Public)

void AOLDoor::StopShaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.StopShaking");

	AOLDoor_StopShaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.StartShaking
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FDoorShakeData          ShakeParams                    (Parm)
// bool                           bSwitchToBreakingMesh          (OptionalParm, Parm)
// bool                           bReversed                      (OptionalParm, Parm)
// bool                           bFromAI                        (OptionalParm, Parm)

void AOLDoor::StartShaking(const struct FDoorShakeData& ShakeParams, bool bSwitchToBreakingMesh, bool bReversed, bool bFromAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.StartShaking");

	AOLDoor_StartShaking_Params params;
	params.ShakeParams = ShakeParams;
	params.bSwitchToBreakingMesh = bSwitchToBreakingMesh;
	params.bReversed = bReversed;
	params.bFromAI = bFromAI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.IsBroken
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLDoor::IsBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.IsBroken");

	AOLDoor_IsBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.UnregisterNavmeshObstacle
// (Final, Native, Public)

void AOLDoor::UnregisterNavmeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.UnregisterNavmeshObstacle");

	AOLDoor_UnregisterNavmeshObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.RegisterNavMeshObstacle
// (Final, Native, Public)

void AOLDoor::RegisterNavMeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.RegisterNavMeshObstacle");

	AOLDoor_RegisterNavMeshObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.ScriptGetCenterLocation
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AOLDoor::ScriptGetCenterLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.ScriptGetCenterLocation");

	AOLDoor_ScriptGetCenterLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoorChimes.UnTouch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AOLDoorChimes::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoorChimes.UnTouch");

	AOLDoorChimes_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoorChimes.Touch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLDoorChimes::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoorChimes.Touch");

	AOLDoorChimes_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoorChimes.PlayChimes
// (Defined, Event, Public)

void AOLDoorChimes::PlayChimes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoorChimes.PlayChimes");

	AOLDoorChimes_PlayChimes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.UsingFixedSaveLocation
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::UsingFixedSaveLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.UsingFixedSaveLocation");

	UOLEngine_UsingFixedSaveLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.SaveGameImmediate
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bSaveToDisk                    (Parm)
// struct FString                 ForceSaveGameName              (Parm, NeedCtorLink)
// bool                           bNewSave                       (OptionalParm, Parm)
// struct FString                 OverrideSaveCheckpointName     (OptionalParm, Parm, NeedCtorLink)

void UOLEngine::SaveGameImmediate(bool bSaveToDisk, const struct FString& ForceSaveGameName, bool bNewSave, const struct FString& OverrideSaveCheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.SaveGameImmediate");

	UOLEngine_SaveGameImmediate_Params params;
	params.bSaveToDisk = bSaveToDisk;
	params.ForceSaveGameName = ForceSaveGameName;
	params.bNewSave = bNewSave;
	params.OverrideSaveCheckpointName = OverrideSaveCheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.InitiateSaveGame
// (Native, Public)
// Parameters:
// bool                           bSaveToDisk                    (Parm)

void UOLEngine::InitiateSaveGame(bool bSaveToDisk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.InitiateSaveGame");

	UOLEngine_InitiateSaveGame_Params params;
	params.bSaveToDisk = bSaveToDisk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.HasAnyValidSaveGame
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLEngine::HasAnyValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.HasAnyValidSaveGame");

	UOLEngine_HasAnyValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.HasValidSaveGame
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLEngine::HasValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.HasValidSaveGame");

	UOLEngine_HasValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.RefreshSaveFiles
// (Native, Public)

void UOLEngine::RefreshSaveFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.RefreshSaveFiles");

	UOLEngine_RefreshSaveFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.IsGameFullyDownloaded
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::IsGameFullyDownloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.IsGameFullyDownloaded");

	UOLEngine_IsGameFullyDownloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.TryStartDLCGame
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::TryStartDLCGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.TryStartDLCGame");

	UOLEngine_TryStartDLCGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.ShouldShowNewDLCGame
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::ShouldShowNewDLCGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.ShouldShowNewDLCGame");

	UOLEngine_ShouldShowNewDLCGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.RefreshDLC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::RefreshDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.RefreshDLC");

	UOLEngine_RefreshDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.CheckReloadForDLC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::CheckReloadForDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.CheckReloadForDLC");

	UOLEngine_CheckReloadForDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_OnPressedContinue
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)

void UOLDingoEngine::Dingo_OnPressedContinue(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_OnPressedContinue");

	UOLDingoEngine_Dingo_OnPressedContinue_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.ReturnToPressStartScreen
// (Native, Public)

void UOLDingoEngine::ReturnToPressStartScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.ReturnToPressStartScreen");

	UOLDingoEngine_ReturnToPressStartScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.ShouldOpenPressStartScreen
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::ShouldOpenPressStartScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.ShouldOpenPressStartScreen");

	UOLDingoEngine_ShouldOpenPressStartScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_ShowLoginUIAndInitializeUser
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::Dingo_ShowLoginUIAndInitializeUser(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_ShowLoginUIAndInitializeUser");

	UOLDingoEngine_Dingo_ShowLoginUIAndInitializeUser_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.DingoNative_ShowLoginUIAndInitializeUser
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::DingoNative_ShowLoginUIAndInitializeUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.DingoNative_ShowLoginUIAndInitializeUser");

	UOLDingoEngine_DingoNative_ShowLoginUIAndInitializeUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_ShouldShowLoginUI
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::Dingo_ShouldShowLoginUI(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_ShouldShowLoginUI");

	UOLDingoEngine_Dingo_ShouldShowLoginUI_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_OnInitialPressStart
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLDingoEngine::Dingo_OnInitialPressStart(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_OnInitialPressStart");

	UOLDingoEngine_Dingo_OnInitialPressStart_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_AllowAllControllersInput
// (Native, Public)

void UOLDingoEngine::Dingo_AllowAllControllersInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_AllowAllControllersInput");

	UOLDingoEngine_Dingo_AllowAllControllersInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.OnDingoUserInitialized
// (Defined, Event, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLDingoEngine::OnDingoUserInitialized(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.OnDingoUserInitialized");

	UOLDingoEngine_OnDingoUserInitialized_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.Dingo_InitializeUser
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)

void UOLDingoEngine::Dingo_InitializeUser(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_InitializeUser");

	UOLDingoEngine_Dingo_InitializeUser_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.DingoNative_StartInitializeUser
// (Native, Public)

void UOLDingoEngine::DingoNative_StartInitializeUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.DingoNative_StartInitializeUser");

	UOLDingoEngine_DingoNative_StartInitializeUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.DingoUserInitializedCallback
// (Public, Delegate)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLDingoEngine::DingoUserInitializedCallback(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.DingoUserInitializedCallback");

	UOLDingoEngine_DingoUserInitializedCallback_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.GiveRightForRecording
// (Native, Public)

void UOLDingoEngine::GiveRightForRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.GiveRightForRecording");

	UOLDingoEngine_GiveRightForRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.ClearRecordings
// (Native, Public)

void UOLDingoEngine::ClearRecordings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.ClearRecordings");

	UOLDingoEngine_ClearRecordings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDingoEngine.HasEnoughRightsLeftForRecording
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::HasEnoughRightsLeftForRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.HasEnoughRightsLeftForRecording");

	UOLDingoEngine_HasEnoughRightsLeftForRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.HasRightsForRecording
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::HasRightsForRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.HasRightsForRecording");

	UOLDingoEngine_HasRightsForRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_GetActiveGamertag
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLDingoEngine::Dingo_GetActiveGamertag()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_GetActiveGamertag");

	UOLDingoEngine_Dingo_GetActiveGamertag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_GetSaveFileIdStr
// (Native, Public)
// Parameters:
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLDingoEngine::Dingo_GetSaveFileIdStr(const struct FString& SaveFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_GetSaveFileIdStr");

	UOLDingoEngine_Dingo_GetSaveFileIdStr_Params params;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_GetSaveFileIconName
// (Native, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLDingoEngine::Dingo_GetSaveFileIconName(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_GetSaveFileIconName");

	UOLDingoEngine_Dingo_GetSaveFileIconName_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_ShowHelpUI
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::Dingo_ShowHelpUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_ShowHelpUI");

	UOLDingoEngine_Dingo_ShowHelpUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_DeleteSaveGame
// (Native, Public)
// Parameters:
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::Dingo_DeleteSaveGame(const struct FString& SaveFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_DeleteSaveGame");

	UOLDingoEngine_Dingo_DeleteSaveGame_Params params;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_SaveGameImmediateToNewSave
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::Dingo_SaveGameImmediateToNewSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_SaveGameImmediateToNewSave");

	UOLDingoEngine_Dingo_SaveGameImmediateToNewSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_SaveGameImmediate
// (Native, Public)
// Parameters:
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::Dingo_SaveGameImmediate(const struct FString& SaveFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_SaveGameImmediate");

	UOLDingoEngine_Dingo_SaveGameImmediate_Params params;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_StartNewGameWithNewSave
// (Native, Public)
// Parameters:
// struct FString                 startCP                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::Dingo_StartNewGameWithNewSave(const struct FString& startCP)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_StartNewGameWithNewSave");

	UOLDingoEngine_Dingo_StartNewGameWithNewSave_Params params;
	params.startCP = startCP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_StartNewGameWithSave
// (Native, Public)
// Parameters:
// struct FString                 startCP                        (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::Dingo_StartNewGameWithSave(const struct FString& startCP, const struct FString& SaveFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_StartNewGameWithSave");

	UOLDingoEngine_Dingo_StartNewGameWithSave_Params params;
	params.startCP = startCP;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_LoadMostRecentSaveFile
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLDingoEngine::Dingo_LoadMostRecentSaveFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_LoadMostRecentSaveFile");

	UOLDingoEngine_Dingo_LoadMostRecentSaveFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.Dingo_LoadSaveGame
// (Native, Public)
// Parameters:
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLDingoEngine::Dingo_LoadSaveGame(const struct FString& SaveFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.Dingo_LoadSaveGame");

	UOLDingoEngine_Dingo_LoadSaveGame_Params params;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.IsGameFullyDownloaded
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDingoEngine::IsGameFullyDownloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.IsGameFullyDownloaded");

	UOLDingoEngine_IsGameFullyDownloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.HasAnyValidSaveGame
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLDingoEngine::HasAnyValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.HasAnyValidSaveGame");

	UOLDingoEngine_HasAnyValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.HasValidSaveGame
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLDingoEngine::HasValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.HasValidSaveGame");

	UOLDingoEngine_HasValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDingoEngine.RefreshSaveFiles
// (Native, Public)

void UOLDingoEngine::RefreshSaveFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDingoEngine.RefreshSaveFiles");

	UOLDingoEngine_RefreshSaveFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLOrbisEngine.SetMaxCheckpointId
// (Native, Public)
// Parameters:
// int                            MaxCheckpoint                  (Parm)

void UOLOrbisEngine::SetMaxCheckpointId(int MaxCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.SetMaxCheckpointId");

	UOLOrbisEngine_SetMaxCheckpointId_Params params;
	params.MaxCheckpoint = MaxCheckpoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLOrbisEngine.IsGameFullyDownloaded
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLOrbisEngine::IsGameFullyDownloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.IsGameFullyDownloaded");

	UOLOrbisEngine_IsGameFullyDownloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.PS4_LoadMostRecentSaveFile
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLOrbisEngine::PS4_LoadMostRecentSaveFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.PS4_LoadMostRecentSaveFile");

	UOLOrbisEngine_PS4_LoadMostRecentSaveFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.PS4_LoadCurrentSaveFile
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLOrbisEngine::PS4_LoadCurrentSaveFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.PS4_LoadCurrentSaveFile");

	UOLOrbisEngine_PS4_LoadCurrentSaveFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.HasAnyValidSaveGame
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLOrbisEngine::HasAnyValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.HasAnyValidSaveGame");

	UOLOrbisEngine_HasAnyValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.HasValidSaveGame
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLOrbisEngine::HasValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.HasValidSaveGame");

	UOLOrbisEngine_HasValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.GetNumberOfSaveGames
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLOrbisEngine::GetNumberOfSaveGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.GetNumberOfSaveGames");

	UOLOrbisEngine_GetNumberOfSaveGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.SelectAndLoadGame
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLOrbisEngine::SelectAndLoadGame(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.SelectAndLoadGame");

	UOLOrbisEngine_SelectAndLoadGame_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.NativeSelectAndLoadGame
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLOrbisEngine::NativeSelectAndLoadGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.NativeSelectAndLoadGame");

	UOLOrbisEngine_NativeSelectAndLoadGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.NewSaveLocation
// (Defined, Public)
// Parameters:
// struct FString                 startCP                        (Parm, NeedCtorLink)

void UOLOrbisEngine::NewSaveLocation(const struct FString& startCP)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.NewSaveLocation");

	UOLOrbisEngine_NewSaveLocation_Params params;
	params.startCP = startCP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLOrbisEngine.NativeNewSaveLocation
// (Native, Public)
// Parameters:
// struct FString                 startCP                        (Parm, NeedCtorLink)

void UOLOrbisEngine::NativeNewSaveLocation(const struct FString& startCP)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.NativeNewSaveLocation");

	UOLOrbisEngine_NativeNewSaveLocation_Params params;
	params.startCP = startCP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLOrbisEngine.SelectSaveLocation
// (Defined, Public)
// Parameters:
// struct FString                 startCP                        (Parm, NeedCtorLink)
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLOrbisEngine::SelectSaveLocation(const struct FString& startCP, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.SelectSaveLocation");

	UOLOrbisEngine_SelectSaveLocation_Params params;
	params.startCP = startCP;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.NativeSelectSaveLocation
// (Native, Public)
// Parameters:
// struct FString                 startCP                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLOrbisEngine::NativeSelectSaveLocation(const struct FString& startCP)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.NativeSelectSaveLocation");

	UOLOrbisEngine_NativeSelectSaveLocation_Params params;
	params.startCP = startCP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLOrbisEngine.FinishedSaveDataDialog
// (Defined, Event, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLOrbisEngine::FinishedSaveDataDialog(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.FinishedSaveDataDialog");

	UOLOrbisEngine_FinishedSaveDataDialog_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLOrbisEngine.SaveDataDialogDoneCallback
// (Public, Delegate)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLOrbisEngine::SaveDataDialogDoneCallback(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.SaveDataDialogDoneCallback");

	UOLOrbisEngine_SaveDataDialogDoneCallback_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLOrbisEngine.UsingFixedSaveLocation
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLOrbisEngine::UsingFixedSaveLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLOrbisEngine.UsingFixedSaveLocation");

	UOLOrbisEngine_UsingFixedSaveLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWinEngine.UpdateProfileKeyBindingsFromSystem
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLWinEngine::UpdateProfileKeyBindingsFromSystem(class UOLProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.UpdateProfileKeyBindingsFromSystem");

	UOLWinEngine_UpdateProfileKeyBindingsFromSystem_Params params;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWinEngine.UpdateProfileFromSystemSettings
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLWinEngine::UpdateProfileFromSystemSettings(class UOLProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.UpdateProfileFromSystemSettings");

	UOLWinEngine_UpdateProfileFromSystemSettings_Params params;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWinEngine.UpdateFullscreenFromSystemSettings
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLWinEngine::UpdateFullscreenFromSystemSettings(class UOLProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.UpdateFullscreenFromSystemSettings");

	UOLWinEngine_UpdateFullscreenFromSystemSettings_Params params;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWinEngine.ApplySystemSettings
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLWinEngine::ApplySystemSettings(class UOLProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.ApplySystemSettings");

	UOLWinEngine_ApplySystemSettings_Params params;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWinEngine.DebugLoadGame
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLWinEngine::DebugLoadGame(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.DebugLoadGame");

	UOLWinEngine_DebugLoadGame_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWinEngine.DebugSaveGame
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLWinEngine::DebugSaveGame(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.DebugSaveGame");

	UOLWinEngine_DebugSaveGame_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWinEngine.SaveAllCheckpoints
// (Native, Public)

void UOLWinEngine::SaveAllCheckpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.SaveAllCheckpoints");

	UOLWinEngine_SaveAllCheckpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWinEngine.RefreshSaveFiles
// (Native, Public)

void UOLWinEngine::RefreshSaveFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.RefreshSaveFiles");

	UOLWinEngine_RefreshSaveFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWinEngine.DeleteSaveFile
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLWinEngine::DeleteSaveFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.DeleteSaveFile");

	UOLWinEngine_DeleteSaveFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWinEngine.LoadSaveFile
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLWinEngine::LoadSaveFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.LoadSaveFile");

	UOLWinEngine_LoadSaveFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWinEngine.HasAnyValidSaveGame
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLWinEngine::HasAnyValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.HasAnyValidSaveGame");

	UOLWinEngine_HasAnyValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWinEngine.HasValidSaveGame
// (Native, Public)
// Parameters:
// TEnumAsByte<ELoadGameResult>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoadGameResult> UOLWinEngine::HasValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWinEngine.HasValidSaveGame");

	UOLWinEngine_HasValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLFlashLight.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLFlashLight::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFlashLight.OnToggle");

	AOLFlashLight_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFlashLight.TurnOff
// (Native, Public)
// Parameters:
// bool                           bHideMesh                      (Parm)

void AOLFlashLight::TurnOff(bool bHideMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFlashLight.TurnOff");

	AOLFlashLight_TurnOff_Params params;
	params.bHideMesh = bHideMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFlashLight.TurnOn
// (Native, Public)

void AOLFlashLight::TurnOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFlashLight.TurnOn");

	AOLFlashLight_TurnOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLLantern.TurnOff
// (Native, Public)
// Parameters:
// bool                           bHideMesh                      (Parm)

void AOLLantern::TurnOff(bool bHideMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLLantern.TurnOff");

	AOLLantern_TurnOff_Params params;
	params.bHideMesh = bHideMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLLantern.TurnOn
// (Native, Public)

void AOLLantern::TurnOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLLantern.TurnOn");

	AOLLantern_TurnOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLTorch.TurnOff
// (Native, Public)
// Parameters:
// bool                           bHideMesh                      (Parm)

void AOLTorch::TurnOff(bool bHideMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLTorch.TurnOff");

	AOLTorch_TurnOff_Params params;
	params.bHideMesh = bHideMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLTorch.TurnOn
// (Native, Public)

void AOLTorch::TurnOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLTorch.TurnOn");

	AOLTorch_TurnOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFloatingObjectBase.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLFloatingObjectBase::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFloatingObjectBase.OnToggle");

	AOLFloatingObjectBase_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFloorMaterialVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLFloorMaterialVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFloorMaterialVolume.OnToggle");

	AOLFloorMaterialVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.SetFXForEnemyPawn
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            EnemyPawn                      (Parm)

void UOLFXManager::SetFXForEnemyPawn(class AOLEnemyPawn* EnemyPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.SetFXForEnemyPawn");

	UOLFXManager_SetFXForEnemyPawn_Params params;
	params.EnemyPawn = EnemyPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.DeactivateNightVisionEffect
// (Native, Public)

void UOLFXManager::DeactivateNightVisionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.DeactivateNightVisionEffect");

	UOLFXManager_DeactivateNightVisionEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.ActivateCamcorderEffect
// (Native, Public)

void UOLFXManager::ActivateCamcorderEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.ActivateCamcorderEffect");

	UOLFXManager_ActivateCamcorderEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.ActivateNightVisionEffect
// (Native, Public)
// Parameters:
// bool                           bPowered                       (Parm)

void UOLFXManager::ActivateNightVisionEffect(bool bPowered)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.ActivateNightVisionEffect");

	UOLFXManager_ActivateNightVisionEffect_Params params;
	params.bPowered = bPowered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.SetPPSFromScript
// (Native, Public)
// Parameters:
// TEnumAsByte<EPPSMode>          newPPS                         (Parm)

void UOLFXManager::SetPPSFromScript(TEnumAsByte<EPPSMode> newPPS)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.SetPPSFromScript");

	UOLFXManager_SetPPSFromScript_Params params;
	params.newPPS = newPPS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.GetFXManager
// (Native, Static, Public)
// Parameters:
// class UOLFXManager*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLFXManager* UOLFXManager::STATIC_GetFXManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.GetFXManager");

	UOLFXManager_GetFXManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.CloseHint
// (Defined, Event, Public)

void AOLGame::CloseHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.CloseHint");

	AOLGame_CloseHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.HideHint
// (Defined, Event, Public)

void AOLGame::HideHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.HideHint");

	AOLGame_HideHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.ShowHint
// (Defined, Event, Public)
// Parameters:
// struct FString                 MessageText                    (Parm, NeedCtorLink)

void AOLGame::ShowHint(const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.ShowHint");

	AOLGame_ShowHint_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.ClearPause
// (Defined, Event, Public)

void AOLGame::ClearPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.ClearPause");

	AOLGame_ClearPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.SetPause
// (Defined, HasOptionalParms, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// struct FScriptDelegate         CanUnpauseDelegate             (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::SetPause(class APlayerController* PC, const struct FScriptDelegate& CanUnpauseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.SetPause");

	AOLGame_SetPause_Params params;
	params.PC = PC;
	params.CanUnpauseDelegate = CanUnpauseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.HandleUnpaused
// (Native, Public)

void AOLGame::HandleUnpaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.HandleUnpaused");

	AOLGame_HandleUnpaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.HandlePaused
// (Native, Public)

void AOLGame::HandlePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.HandlePaused");

	AOLGame_HandlePaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.SetGameSpeed
// (Defined, Public)
// Parameters:
// float                          T                              (Parm)

void AOLGame::SetGameSpeed(float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.SetGameSpeed");

	AOLGame_SetGameSpeed_Params params;
	params.T = T;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.TravelToStartupMap
// (Defined, Event, Public)

void AOLGame::TravelToStartupMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.TravelToStartupMap");

	AOLGame_TravelToStartupMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.OnTravelToStartupMap
// (Native, Public)

void AOLGame::OnTravelToStartupMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.OnTravelToStartupMap");

	AOLGame_OnTravelToStartupMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.RestartPlayer
// (Defined, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AOLGame::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.RestartPlayer");

	AOLGame_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.EvtRestartPlayer
// (Defined, Event, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AOLGame::EvtRestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.EvtRestartPlayer");

	AOLGame_EvtRestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.UpdateGameType
// (Native, Public)

void AOLGame::UpdateGameType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.UpdateGameType");

	AOLGame_UpdateGameType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.OnPlayerSpawned
// (Defined, Event, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)
// class ANavigationPoint*        StartPoint                     (Parm)

void AOLGame::OnPlayerSpawned(class AController* NewPlayer, class ANavigationPoint* StartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.OnPlayerSpawned");

	AOLGame_OnPlayerSpawned_Params params;
	params.NewPlayer = NewPlayer;
	params.StartPoint = StartPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.FindPlayerStart
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AController*             Player                         (Parm)
// unsigned char                  InTeam                         (OptionalParm, Parm)
// struct FString                 IncomingName                   (OptionalParm, Parm, NeedCtorLink)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* AOLGame::FindPlayerStart(class AController* Player, unsigned char InTeam, const struct FString& IncomingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.FindPlayerStart");

	AOLGame_FindPlayerStart_Params params;
	params.Player = Player;
	params.InTeam = InTeam;
	params.IncomingName = IncomingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.NewPolish
// (Exec, Native, Public)

void AOLGame::NewPolish()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.NewPolish");

	AOLGame_NewPolish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.NewOptim
// (Exec, Native, Public)

void AOLGame::NewOptim()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.NewOptim");

	AOLGame_NewOptim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.NewTask
// (Exec, Native, Public)

void AOLGame::NewTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.NewTask");

	AOLGame_NewTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.NewBug
// (Exec, Native, Public)

void AOLGame::NewBug()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.NewBug");

	AOLGame_NewBug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.GetDifficultyMode
// (Native, Public)
// Parameters:
// TEnumAsByte<EDifficultyMode>   ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EDifficultyMode> AOLGame::GetDifficultyMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.GetDifficultyMode");

	AOLGame_GetDifficultyMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.GetFirstCheckpoint
// (Native, Public)
// Parameters:
// TEnumAsByte<EOutlastGameType>  GameType                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AOLGame::GetFirstCheckpoint(TEnumAsByte<EOutlastGameType> GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.GetFirstCheckpoint");

	AOLGame_GetFirstCheckpoint_Params params;
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.MatchCheckpoint
// (Native, Public)
// Parameters:
// struct FString                 PortalName                     (Parm, NeedCtorLink)
// class AOLCheckpoint*           ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLCheckpoint* AOLGame::MatchCheckpoint(const struct FString& PortalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.MatchCheckpoint");

	AOLGame_MatchCheckpoint_Params params;
	params.PortalName = PortalName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.SetCurrentCheckpoint
// (Native, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)

void AOLGame::SetCurrentCheckpoint(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.SetCurrentCheckpoint");

	AOLGame_SetCurrentCheckpoint_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.CheckpointReached
// (Native, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)

void AOLGame::CheckpointReached(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.CheckpointReached");

	AOLGame_CheckpointReached_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.AllowCheats
// (Defined, Public)
// Parameters:
// class APlayerController*       P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::AllowCheats(class APlayerController* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.AllowCheats");

	AOLGame_AllowCheats_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.GenerateNewHint
// (Native, Public)

void AOLGame::GenerateNewHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.GenerateNewHint");

	AOLGame_GenerateNewHint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.IsDLCInstalled
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::IsDLCInstalled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.IsDLCInstalled");

	AOLGame_IsDLCInstalled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.IsPlayingDLC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::IsPlayingDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.IsPlayingDLC");

	AOLGame_IsPlayingDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.IsCensored
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::IsCensored()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.IsCensored");

	AOLGame_IsCensored_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.IsPlaytest
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::IsPlaytest()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.IsPlaytest");

	AOLGame_IsPlaytest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.IsDemo
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::IsDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.IsDemo");

	AOLGame_IsDemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.SetGameType
// (Defined, Event, Static, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Portal                         (Parm, NeedCtorLink)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AOLGame::STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.SetGameType");

	AOLGame_SetGameType_Params params;
	params.MapName = MapName;
	params.Options = Options;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGameplayMarker.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLGameplayMarker::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameplayMarker.OnToggle");

	AOLGameplayMarker_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameplayMarker.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AOLGameplayMarker::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameplayMarker.PostBeginPlay");

	AOLGameplayMarker_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCSA.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLCSA::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCSA.OnToggle");

	AOLCSA_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCSA.SetEnabled
// (Native, Public)
// Parameters:
// bool                           bNewEnabled                    (Parm)

void AOLCSA::SetEnabled(bool bNewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCSA.SetEnabled");

	AOLCSA_SetEnabled_Params params;
	params.bNewEnabled = bNewEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRecordingMarker.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLRecordingMarker::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingMarker.OnToggle");

	AOLRecordingMarker_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRTPCDistanceModifier.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLRTPCDistanceModifier::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRTPCDistanceModifier.OnToggle");

	AOLRTPCDistanceModifier_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRTPCDistanceModifier.StopSound
// (Native, Public)

void AOLRTPCDistanceModifier::StopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRTPCDistanceModifier.StopSound");

	AOLRTPCDistanceModifier_StopSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRTPCDistanceModifier.StartSound
// (Native, Public)

void AOLRTPCDistanceModifier::StartSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRTPCDistanceModifier.StartSound");

	AOLRTPCDistanceModifier_StartSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRTPCPlayerLookModifier.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLRTPCPlayerLookModifier::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRTPCPlayerLookModifier.OnToggle");

	AOLRTPCPlayerLookModifier_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRTPCPlayerLookModifier.StopSound
// (Native, Public)

void AOLRTPCPlayerLookModifier::StopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRTPCPlayerLookModifier.StopSound");

	AOLRTPCPlayerLookModifier_StopSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRTPCPlayerLookModifier.StartSound
// (Native, Public)

void AOLRTPCPlayerLookModifier::StartSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRTPCPlayerLookModifier.StartSound");

	AOLRTPCPlayerLookModifier_StartSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameplayStaticMeshActor.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLGameplayStaticMeshActor::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameplayStaticMeshActor.OnToggle");

	AOLGameplayStaticMeshActor_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameplayVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLGameplayVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameplayVolume.OnToggle");

	AOLGameplayVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDamageBlockingVolume.Touch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLDamageBlockingVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDamageBlockingVolume.Touch");

	AOLDamageBlockingVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDarknessVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLDarknessVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDarknessVolume.OnToggle");

	AOLDarknessVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLElectrifiedVolume.Touch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLElectrifiedVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLElectrifiedVolume.Touch");

	AOLElectrifiedVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPhysicsVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLPhysicsVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPhysicsVolume.OnToggle");

	AOLPhysicsVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPhysicsVolume.UpdateCollisionState
// (Native, Public)

void AOLPhysicsVolume::UpdateCollisionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPhysicsVolume.UpdateCollisionState");

	AOLPhysicsVolume_UpdateCollisionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameStateList.ResetAllGameState
// (Native, Static, Public)

void AOLGameStateList::STATIC_ResetAllGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameStateList.ResetAllGameState");

	AOLGameStateList_ResetAllGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameStateList.DumpGameState
// (Native, Static, Public)

void AOLGameStateList::STATIC_DumpGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameStateList.DumpGameState");

	AOLGameStateList_DumpGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameViewportClient.DrawTransition
// (Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UOLGameViewportClient::DrawTransition(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameViewportClient.DrawTransition");

	UOLGameViewportClient_DrawTransition_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHidingBarrel.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLHidingBarrel::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHidingBarrel.OnToggle");

	AOLHidingBarrel_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHidingBarrel.TriggerEvent
// (Native, Public)
// Parameters:
// TEnumAsByte<EBarrelEventType>  EventType                      (Parm)
// class AOLPawn*                 Triggerer                      (Parm)

void AOLHidingBarrel::TriggerEvent(TEnumAsByte<EBarrelEventType> EventType, class AOLPawn* Triggerer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHidingBarrel.TriggerEvent");

	AOLHidingBarrel_TriggerEvent_Params params;
	params.EventType = EventType;
	params.Triggerer = Triggerer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.SetLargeImageSize
// (Defined, Event, Public)
// Parameters:
// int                            imageWidth                     (Parm)
// int                            imageHeight                    (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)

void AOLHUD::SetLargeImageSize(int imageWidth, int imageHeight, int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.SetLargeImageSize");

	AOLHUD_SetLargeImageSize_Params params;
	params.imageWidth = imageWidth;
	params.imageHeight = imageHeight;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void AOLHUD::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.Tick");

	AOLHUD_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.NotifyAltEnter
// (Defined, Event, Public)

void AOLHUD::NotifyAltEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.NotifyAltEnter");

	AOLHUD_NotifyAltEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.GamepadConfigChanged
// (Defined, Public)

void AOLHUD::GamepadConfigChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.GamepadConfigChanged");

	AOLHUD_GamepadConfigChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.OnLostFocusPause
// (Defined, Event, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLHUD::OnLostFocusPause(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.OnLostFocusPause");

	AOLHUD_OnLostFocusPause_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowHUDMessages
// (Defined, Public)

void AOLHUD::ShowHUDMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowHUDMessages");

	AOLHUD_ShowHUDMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.HideHUDMessages
// (Defined, Public)

void AOLHUD::HideHUDMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideHUDMessages");

	AOLHUD_HideHUDMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowingSubtitle
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::ShowingSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowingSubtitle");

	AOLHUD_ShowingSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.HideSubtitle
// (Defined, Event, Public)

void AOLHUD::HideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideSubtitle");

	AOLHUD_HideSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.SetSubtitleHeight
// (Defined, Event, Public)
// Parameters:
// bool                           High                           (Parm)

void AOLHUD::SetSubtitleHeight(bool High)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.SetSubtitleHeight");

	AOLHUD_SetSubtitleHeight_Params params;
	params.High = High;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowSubtitle
// (Defined, Event, Public)
// Parameters:
// struct FString                 MessageText                    (Parm, NeedCtorLink)

void AOLHUD::ShowSubtitle(const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowSubtitle");

	AOLHUD_ShowSubtitle_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.HideObjective
// (Defined, Event, Public)

void AOLHUD::HideObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideObjective");

	AOLHUD_HideObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowObjective
// (Defined, Event, Public)
// Parameters:
// struct FString                 ObjectiveText                  (Parm, NeedCtorLink)

void AOLHUD::ShowObjective(const struct FString& ObjectiveText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowObjective");

	AOLHUD_ShowObjective_Params params;
	params.ObjectiveText = ObjectiveText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.HideMessage
// (Defined, Event, Public)

void AOLHUD::HideMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideMessage");

	AOLHUD_HideMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowMessage
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EHUDMessageType>   MessageType                    (Parm)
// TEnumAsByte<EHUDMessagePriority> MessagePriority                (Parm)
// struct FString                 MessageText                    (Parm, NeedCtorLink)

void AOLHUD::ShowMessage(TEnumAsByte<EHUDMessageType> MessageType, TEnumAsByte<EHUDMessagePriority> MessagePriority, const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowMessage");

	AOLHUD_ShowMessage_Params params;
	params.MessageType = MessageType;
	params.MessagePriority = MessagePriority;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ResetMessageScreenForResize
// (Defined, Event, Public)

void AOLHUD::ResetMessageScreenForResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ResetMessageScreenForResize");

	AOLHUD_ResetMessageScreenForResize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.SetCleanTextData
// (Defined, Event, Public)
// Parameters:
// struct FString                 TextName                       (Parm, NeedCtorLink)
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Text                           (Parm, NeedCtorLink)

void AOLHUD::SetCleanTextData(const struct FString& TextName, const struct FString& Title, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.SetCleanTextData");

	AOLHUD_SetCleanTextData_Params params;
	params.TextName = TextName;
	params.Title = Title;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.SetPausedPromptMessage
// (Defined, Event, Public)
// Parameters:
// struct FString                 Messsage                       (Parm, NeedCtorLink)
// bool                           bBackToMainMenu                (Parm)

void AOLHUD::SetPausedPromptMessage(const struct FString& Messsage, bool bBackToMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.SetPausedPromptMessage");

	AOLHUD_SetPausedPromptMessage_Params params;
	params.Messsage = Messsage;
	params.bBackToMainMenu = bBackToMainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowMenuType
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EMenuType>         MenuType                       (Parm)

void AOLHUD::ShowMenuType(TEnumAsByte<EMenuType> MenuType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowMenuType");

	AOLHUD_ShowMenuType_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowPausedPromptMenu
// (Defined, Event, Public)

void AOLHUD::ShowPausedPromptMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowPausedPromptMenu");

	AOLHUD_ShowPausedPromptMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.PostSoundEventEnter
// (Native, Public)

void AOLHUD::PostSoundEventEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.PostSoundEventEnter");

	AOLHUD_PostSoundEventEnter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.PostSoundEventSelect
// (Native, Public)

void AOLHUD::PostSoundEventSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.PostSoundEventSelect");

	AOLHUD_PostSoundEventSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.MuteSelectSound
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          MuteTime                       (OptionalParm, Parm)

void AOLHUD::MuteSelectSound(float MuteTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.MuteSelectSound");

	AOLHUD_MuteSelectSound_Params params;
	params.MuteTime = MuteTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.CanShowSubMenu
// (Native, Public)
// Parameters:
// TEnumAsByte<EMenuType>         MenuType                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::CanShowSubMenu(TEnumAsByte<EMenuType> MenuType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.CanShowSubMenu");

	AOLHUD_CanShowSubMenu_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.HideMenu
// (Defined, Exec, Event, Public)

void AOLHUD::HideMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideMenu");

	AOLHUD_HideMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowMenu
// (Defined, Exec, Public)

void AOLHUD::ShowMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowMenu");

	AOLHUD_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowMainMenu
// (Defined, Exec, Public)

void AOLHUD::ShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowMainMenu");

	AOLHUD_ShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ReturnToPressStartMenu
// (Defined, Event, Public)

void AOLHUD::ReturnToPressStartMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ReturnToPressStartMenu");

	AOLHUD_ReturnToPressStartMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ClosePauseMenu
// (Defined, Event, Public)

void AOLHUD::ClosePauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ClosePauseMenu");

	AOLHUD_ClosePauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.SimulateBackInput
// (Defined, Event, Public)

void AOLHUD::SimulateBackInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.SimulateBackInput");

	AOLHUD_SimulateBackInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ReloadMenu
// (Defined, Exec, Public)

void AOLHUD::ReloadMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ReloadMenu");

	AOLHUD_ReloadMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.InputTypeChanged
// (Defined, Event, Public)

void AOLHUD::InputTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.InputTypeChanged");

	AOLHUD_InputTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.SetPCQTELabels
// (Defined, Event, Public)
// Parameters:
// struct FString                 upStr                          (Parm, NeedCtorLink)
// struct FString                 leftStr                        (Parm, NeedCtorLink)
// struct FString                 downStr                        (Parm, NeedCtorLink)
// struct FString                 rightStr                       (Parm, NeedCtorLink)

void AOLHUD::SetPCQTELabels(const struct FString& upStr, const struct FString& leftStr, const struct FString& downStr, const struct FString& rightStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.SetPCQTELabels");

	AOLHUD_SetPCQTELabels_Params params;
	params.upStr = upStr;
	params.leftStr = leftStr;
	params.downStr = downStr;
	params.rightStr = rightStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.CleanReadPreviousPage
// (Defined, Event, Public)

void AOLHUD::CleanReadPreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.CleanReadPreviousPage");

	AOLHUD_CleanReadPreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.CleanReadNextPage
// (Defined, Event, Public)

void AOLHUD::CleanReadNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.CleanReadNextPage");

	AOLHUD_CleanReadNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.CloseCleanTextMenu
// (Defined, Event, Public)

void AOLHUD::CloseCleanTextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.CloseCleanTextMenu");

	AOLHUD_CloseCleanTextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.IsAMenuOpen
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsAMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsAMenuOpen");

	AOLHUD_IsAMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsInCleanTextMenu
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsInCleanTextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsInCleanTextMenu");

	AOLHUD_IsInCleanTextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsInCreditsMenu
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsInCreditsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsInCreditsMenu");

	AOLHUD_IsInCreditsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsOnMainMenuScreen
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsOnMainMenuScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsOnMainMenuScreen");

	AOLHUD_IsOnMainMenuScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsMainMenuOpen
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsMainMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsMainMenuOpen");

	AOLHUD_IsMainMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsInPausedPromptMenu
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsInPausedPromptMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsInPausedPromptMenu");

	AOLHUD_IsInPausedPromptMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsInPauseMenu
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsInPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsInPauseMenu");

	AOLHUD_IsInPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.CanUnpauseInPauseMenu
// (Defined, Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::CanUnpauseInPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.CanUnpauseInPauseMenu");

	AOLHUD_CanUnpauseInPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.ShowDebugInfo
// (Defined, Public, HasOutParms)
// Parameters:
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLHUD::ShowDebugInfo(float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowDebugInfo");

	AOLHUD_ShowDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLHUD.ShouldDisplayDebugMessages
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::ShouldDisplayDebugMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShouldDisplayDebugMessages");

	AOLHUD_ShouldDisplayDebugMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.DebugNextAI
// (Defined, Exec, Public)

void AOLHUD::DebugNextAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.DebugNextAI");

	AOLHUD_DebugNextAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.DebugPrevAI
// (Defined, Exec, Public)

void AOLHUD::DebugPrevAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.DebugPrevAI");

	AOLHUD_DebugPrevAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.NotifyGameSaved
// (Native, Public)

void AOLHUD::NotifyGameSaved()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.NotifyGameSaved");

	AOLHUD_NotifyGameSaved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.SetGammaCalibrationActive
// (Native, Public)
// Parameters:
// bool                           bActive                        (Parm)

void AOLHUD::SetGammaCalibrationActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.SetGammaCalibrationActive");

	AOLHUD_SetGammaCalibrationActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowingFullScreenOverlay
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::ShowingFullScreenOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowingFullScreenOverlay");

	AOLHUD_ShowingFullScreenOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.Draw
// (Native, Public)

void AOLHUD::Draw()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.Draw");

	AOLHUD_Draw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLInteractiveSkeletalFoliageActor.Touch
// (Simulated, Native, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLInteractiveSkeletalFoliageActor::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLInteractiveSkeletalFoliageActor.Touch");

	AOLInteractiveSkeletalFoliageActor_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLMainHud.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLMainHud::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLMainHud.WidgetInitialized");

	UOLMainHud_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPickableDocument.RefreshUI
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLPickableDocument::RefreshUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPickableDocument.RefreshUI");

	UOLPickableDocument_RefreshUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPickableDocument.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLPickableDocument::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPickableDocument.WidgetInitialized");

	UOLPickableDocument_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPickableObject.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLPickableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPickableObject.OnToggle");

	AOLPickableObject_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCollectiblePickup.PostBeginPlay
// (Defined, Public)

void AOLCollectiblePickup::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCollectiblePickup.PostBeginPlay");

	AOLCollectiblePickup_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCollectiblePickup.ShouldShowCollectible
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLCollectiblePickup::ShouldShowCollectible()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCollectiblePickup.ShouldShowCollectible");

	AOLCollectiblePickup_ShouldShowCollectible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerInput.IsKeyPressed
// (Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLPlayerInput::IsKeyPressed(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.IsKeyPressed");

	UOLPlayerInput_IsKeyPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerInput.UnBindNoSave
// (Defined, Event, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void UOLPlayerInput::UnBindNoSave(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.UnBindNoSave");

	UOLPlayerInput_UnBindNoSave_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.PreProcessInput
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOLPlayerInput::PreProcessInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.PreProcessInput");

	UOLPlayerInput_PreProcessInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StopLeanRight
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StopLeanRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StopLeanRight");

	UOLPlayerInput_StopLeanRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StopLeanLeft
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StopLeanLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StopLeanLeft");

	UOLPlayerInput_StopLeanLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StartLeanRight
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StartLeanRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StartLeanRight");

	UOLPlayerInput_StartLeanRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StartLeanLeft
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StartLeanLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StartLeanLeft");

	UOLPlayerInput_StartLeanLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StopRun
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StopRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StopRun");

	UOLPlayerInput_StopRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.ChangeCamCorderHudDisplay
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::ChangeCamCorderHudDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.ChangeCamCorderHudDisplay");

	UOLPlayerInput_ChangeCamCorderHudDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.NativeChangeCamCorderHudDisplay
// (Native, Public)

void UOLPlayerInput::NativeChangeCamCorderHudDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.NativeChangeCamCorderHudDisplay");

	UOLPlayerInput_NativeChangeCamCorderHudDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StartRun
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StartRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StartRun");

	UOLPlayerInput_StartRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StartRunNative
// (Native, Public)

void UOLPlayerInput::StartRunNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StartRunNative");

	UOLPlayerInput_StartRunNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.ToggleDuck
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::ToggleDuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.ToggleDuck");

	UOLPlayerInput_ToggleDuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.UnDuck
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::UnDuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.UnDuck");

	UOLPlayerInput_UnDuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.Duck
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::Duck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.Duck");

	UOLPlayerInput_Duck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.ResetInput
// (Native, Public)

void UOLPlayerInput::ResetInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.ResetInput");

	UOLPlayerInput_ResetInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings
// (Native, Public)

void UOLProfileSettings::AutoDetectPerformanceSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings");

	UOLProfileSettings_AutoDetectPerformanceSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.MatchMonitorResolution
// (Native, Public)
// Parameters:
// bool                           bLimitForPerformance           (Parm)

void UOLProfileSettings::MatchMonitorResolution(bool bLimitForPerformance)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.MatchMonitorResolution");

	UOLProfileSettings_MatchMonitorResolution_Params params;
	params.bLimitForPerformance = bLimitForPerformance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.SetLanguageFromSteam
// (Native, Public)

void UOLProfileSettings::SetLanguageFromSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.SetLanguageFromSteam");

	UOLProfileSettings_SetLanguageFromSteam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.SetToDefaults
// (Native, Event, Public)

void UOLProfileSettings::SetToDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.SetToDefaults");

	UOLProfileSettings_SetToDefaults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.GetProfileSettingResolutions
// (Native, Public, HasOutParms)
// Parameters:
// int                            ProfileSettingId               (Parm)
// TArray<struct FName>           ResolutionNames                (Parm, OutParm, NeedCtorLink)
// TArray<struct FIntPoint>       Resolutions                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLProfileSettings::GetProfileSettingResolutions(int ProfileSettingId, TArray<struct FName>* ResolutionNames, TArray<struct FIntPoint>* Resolutions)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.GetProfileSettingResolutions");

	UOLProfileSettings_GetProfileSettingResolutions_Params params;
	params.ProfileSettingId = ProfileSettingId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResolutionNames != nullptr)
		*ResolutionNames = params.ResolutionNames;
	if (Resolutions != nullptr)
		*Resolutions = params.Resolutions;

	return params.ReturnValue;
}


// Function OLGame.OLProfileSettings.GetProfileSettingValues
// (Native, Public, HasOutParms)
// Parameters:
// int                            ProfileSettingId               (Parm)
// TArray<struct FName>           Values                         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLProfileSettings::GetProfileSettingValues(int ProfileSettingId, TArray<struct FName>* Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.GetProfileSettingValues");

	UOLProfileSettings_GetProfileSettingValues_Params params;
	params.ProfileSettingId = ProfileSettingId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;

	return params.ReturnValue;
}


// Function OLGame.OLProfileSettings.GetGammaSetting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLProfileSettings::GetGammaSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.GetGammaSetting");

	UOLProfileSettings_GetGammaSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPushableObject.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLPushableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPushableObject.OnToggle");

	AOLPushableObject_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPushableObject.OnTeleport
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Teleport*        Action                         (Parm)

void AOLPushableObject::OnTeleport(class USeqAct_Teleport* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPushableObject.OnTeleport");

	AOLPushableObject_OnTeleport_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPushableObject.PostOnTeleport
// (Native, Public)

void AOLPushableObject::PostOnTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPushableObject.PostOnTeleport");

	AOLPushableObject_PostOnTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPushableObject.PreOnTeleport
// (Native, Public)

void AOLPushableObject::PreOnTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPushableObject.PreOnTeleport");

	AOLPushableObject_PreOnTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRecordingUtils.ShowCleanText
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)

void UOLRecordingUtils::STATIC_ShowCleanText(unsigned char Type, int Index, int SortingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.ShowCleanText");

	UOLRecordingUtils_ShowCleanText_Params params;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRecordingUtils.CleanMemory
// (Native, Static, Public)

void UOLRecordingUtils::STATIC_CleanMemory()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.CleanMemory");

	UOLRecordingUtils_CleanMemory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRecordingUtils.ConditionalResetMovieOverrideDuration
// (Native, Static, Public, HasOutParms)
// Parameters:
// TArray<class UTexture*>        Textures                       (Parm, OutParm, NeedCtorLink)
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)

void UOLRecordingUtils::STATIC_ConditionalResetMovieOverrideDuration(unsigned char Type, int Index, int SortingType, TArray<class UTexture*>* Textures)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.ConditionalResetMovieOverrideDuration");

	UOLRecordingUtils_ConditionalResetMovieOverrideDuration_Params params;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Textures != nullptr)
		*Textures = params.Textures;
}


// Function OLGame.OLRecordingUtils.HasMovieEnded
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLRecordingUtils::STATIC_HasMovieEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.HasMovieEnded");

	UOLRecordingUtils_HasMovieEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.StopMovieTexture
// (Native, Static, Public, HasOutParms)
// Parameters:
// TArray<class UTexture*>        Textures                       (Parm, OutParm, NeedCtorLink)
// bool                           bPause                         (Parm)
// class UAkEvent*                loopStop                       (Parm)

void UOLRecordingUtils::STATIC_StopMovieTexture(bool bPause, class UAkEvent* loopStop, TArray<class UTexture*>* Textures)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.StopMovieTexture");

	UOLRecordingUtils_StopMovieTexture_Params params;
	params.bPause = bPause;
	params.loopStop = loopStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Textures != nullptr)
		*Textures = params.Textures;
}


// Function OLGame.OLRecordingUtils.PlayMovieTexture
// (Native, Static, Public, HasOutParms)
// Parameters:
// TArray<class UTexture*>        Textures                       (Parm, OutParm, NeedCtorLink)
// class UAkEvent*                LoopStart                      (Parm)

void UOLRecordingUtils::STATIC_PlayMovieTexture(class UAkEvent* LoopStart, TArray<class UTexture*>* Textures)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.PlayMovieTexture");

	UOLRecordingUtils_PlayMovieTexture_Params params;
	params.LoopStart = LoopStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Textures != nullptr)
		*Textures = params.Textures;
}


// Function OLGame.OLRecordingUtils.ResizeFullSizeImage
// (Native, Static, Public, HasOutParms)
// Parameters:
// class UGFxMoviePlayer*         menu                           (Parm)
// TArray<class UTexture*>        Textures                       (Parm, OutParm, NeedCtorLink)
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)

void UOLRecordingUtils::STATIC_ResizeFullSizeImage(class UGFxMoviePlayer* menu, unsigned char Type, int Index, int SortingType, TArray<class UTexture*>* Textures)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.ResizeFullSizeImage");

	UOLRecordingUtils_ResizeFullSizeImage_Params params;
	params.menu = menu;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Textures != nullptr)
		*Textures = params.Textures;
}


// Function OLGame.OLRecordingUtils.PlayMovieVO
// (Native, Static, Public)
// Parameters:
// class UAkEvent*                VO                             (Parm)

void UOLRecordingUtils::STATIC_PlayMovieVO(class UAkEvent* VO)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.PlayMovieVO");

	UOLRecordingUtils_PlayMovieVO_Params params;
	params.VO = VO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRecordingUtils.StopMovieVO
// (Native, Static, Public)
// Parameters:
// class UAkEvent*                VO                             (Parm)

void UOLRecordingUtils::STATIC_StopMovieVO(class UAkEvent* VO)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.StopMovieVO");

	UOLRecordingUtils_StopMovieVO_Params params;
	params.VO = VO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLRecordingUtils.LoadMovieLoopStop
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)
// class UAkEvent*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UAkEvent* UOLRecordingUtils::STATIC_LoadMovieLoopStop(unsigned char Type, int Index, int SortingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.LoadMovieLoopStop");

	UOLRecordingUtils_LoadMovieLoopStop_Params params;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.LoadMovieLoopStart
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)
// class UAkEvent*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UAkEvent* UOLRecordingUtils::STATIC_LoadMovieLoopStart(unsigned char Type, int Index, int SortingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.LoadMovieLoopStart");

	UOLRecordingUtils_LoadMovieLoopStart_Params params;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.LoadMovieVO
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)
// class UAkEvent*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UAkEvent* UOLRecordingUtils::STATIC_LoadMovieVO(unsigned char Type, int Index, int SortingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.LoadMovieVO");

	UOLRecordingUtils_LoadMovieVO_Params params;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.GetFullSizeRecordingTexture
// (Native, Static, Public, HasOutParms)
// Parameters:
// TArray<class UTexture*>        Textures                       (Parm, OutParm, NeedCtorLink)
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UOLRecordingUtils::STATIC_GetFullSizeRecordingTexture(unsigned char Type, int Index, int SortingType, TArray<class UTexture*>* Textures)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.GetFullSizeRecordingTexture");

	UOLRecordingUtils_GetFullSizeRecordingTexture_Params params;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Textures != nullptr)
		*Textures = params.Textures;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.GetRecordingTexture
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UOLRecordingUtils::STATIC_GetRecordingTexture(unsigned char Type, int Index, int SortingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.GetRecordingTexture");

	UOLRecordingUtils_GetRecordingTexture_Params params;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.GetCategoryTexture
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            SortingType                    (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UOLRecordingUtils::STATIC_GetCategoryTexture(unsigned char Type, int SortingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.GetCategoryTexture");

	UOLRecordingUtils_GetCategoryTexture_Params params;
	params.Type = Type;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.GetRecordings
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            Section                        (Parm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UOLRecordingUtils::STATIC_GetRecordings(unsigned char Type, int Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.GetRecordings");

	UOLRecordingUtils_GetRecordings_Params params;
	params.Type = Type;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.GetRecordingSections
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UOLRecordingUtils::STATIC_GetRecordingSections(unsigned char Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.GetRecordingSections");

	UOLRecordingUtils_GetRecordingSections_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.GetPathName
// (Native, Static, Public)
// Parameters:
// class UObject*                 Obj                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLRecordingUtils::STATIC_GetPathName(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.GetPathName");

	UOLRecordingUtils_GetPathName_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.HasRecordings
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLRecordingUtils::STATIC_HasRecordings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.HasRecordings");

	UOLRecordingUtils_HasRecordings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLRecordingUtils.IsVideoRecording
// (Native, Static, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            Index                          (Parm)
// int                            SortingType                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLRecordingUtils::STATIC_IsVideoRecording(unsigned char Type, int Index, int SortingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLRecordingUtils.IsVideoRecording");

	UOLRecordingUtils_IsVideoRecording_Params params;
	params.Type = Type;
	params.Index = Index;
	params.SortingType = SortingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_Checkpoint.Activated
// (Defined, Event, Public)

void UOLSeqAct_Checkpoint::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Checkpoint.Activated");

	UOLSeqAct_Checkpoint_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSoundConnector.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLSoundConnector::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundConnector.OnToggle");

	AOLSoundConnector_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager
// (Native, Static, Public)
// Parameters:
// class UOLSoundEnvironmentManager* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLSoundEnvironmentManager* UOLSoundEnvironmentManager::STATIC_GetSoundEnvManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager");

	UOLSoundEnvironmentManager_GetSoundEnvManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSoundEnvironmentManager.Cleanup
// (Native, Public)

void UOLSoundEnvironmentManager::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundEnvironmentManager.Cleanup");

	UOLSoundEnvironmentManager_Cleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay
// (Defined, Event, Public)

void AOLSoundEnvironmentVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay");

	AOLSoundEnvironmentVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUtils.TriggerSoundEvent
// (Native, Static, Public)
// Parameters:
// class UAkEvent*                SoundEvent                     (Parm)

void UOLUtils::STATIC_TriggerSoundEvent(class UAkEvent* SoundEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.TriggerSoundEvent");

	UOLUtils_TriggerSoundEvent_Params params;
	params.SoundEvent = SoundEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUtils.ShouldSubtitlesBeHigh
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_ShouldSubtitlesBeHigh()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.ShouldSubtitlesBeHigh");

	UOLUtils_ShouldSubtitlesBeHigh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsKeyBoundToCommand
// (Native, Static, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsKeyBoundToCommand(const struct FName& Key, const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsKeyBoundToCommand");

	UOLUtils_IsKeyBoundToCommand_Params params;
	params.Key = Key;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.HasValidMovie
// (Native, Static, Public)
// Parameters:
// class UGFxObject*              GFxObject                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_HasValidMovie(class UGFxObject* GFxObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.HasValidMovie");

	UOLUtils_HasValidMovie_Params params;
	params.GFxObject = GFxObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.ElapsedRealTime
// (Native, Static, Public)
// Parameters:
// float                          Time                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUtils::STATIC_ElapsedRealTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.ElapsedRealTime");

	UOLUtils_ElapsedRealTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.ElapsedTime
// (Native, Static, Public)
// Parameters:
// float                          Time                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUtils::STATIC_ElapsedTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.ElapsedTime");

	UOLUtils_ElapsedTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetRealTimeSeconds
// (Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUtils::STATIC_GetRealTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetRealTimeSeconds");

	UOLUtils_GetRealTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetWorldTimeSeconds
// (Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUtils::STATIC_GetWorldTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetWorldTimeSeconds");

	UOLUtils_GetWorldTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.LoadTexture
// (Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UObject*                 Owner                          (Parm)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture2D* UOLUtils::STATIC_LoadTexture(const struct FString& Path, class UObject* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.LoadTexture");

	UOLUtils_LoadTexture_Params params;
	params.Path = Path;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetChapterIndex
// (Native, Static, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUtils::STATIC_GetChapterIndex(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetChapterIndex");

	UOLUtils_GetChapterIndex_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetChapterName
// (Native, Static, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUtils::STATIC_GetChapterName(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetChapterName");

	UOLUtils_GetChapterName_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetCheckpointName
// (Native, Static, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUtils::STATIC_GetCheckpointName(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetCheckpointName");

	UOLUtils_GetCheckpointName_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetCheckpointIndexFromString
// (Native, Static, Public)
// Parameters:
// struct FString                 CheckpointName                 (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUtils::STATIC_GetCheckpointIndexFromString(const struct FString& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetCheckpointIndexFromString");

	UOLUtils_GetCheckpointIndexFromString_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetCheckpointIndex
// (Native, Static, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUtils::STATIC_GetCheckpointIndex(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetCheckpointIndex");

	UOLUtils_GetCheckpointIndex_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetOrbisEngine
// (Native, Static, Public)
// Parameters:
// class UOLOrbisEngine*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLOrbisEngine* UOLUtils::STATIC_GetOrbisEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetOrbisEngine");

	UOLUtils_GetOrbisEngine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetDingoEngine
// (Native, Static, Public)
// Parameters:
// class UOLDingoEngine*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLDingoEngine* UOLUtils::STATIC_GetDingoEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetDingoEngine");

	UOLUtils_GetDingoEngine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetWinEngine
// (Native, Static, Public)
// Parameters:
// class UOLWinEngine*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLWinEngine* UOLUtils::STATIC_GetWinEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetWinEngine");

	UOLUtils_GetWinEngine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetOLEngine
// (Native, Static, Public)
// Parameters:
// class UOLEngine*               ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLEngine* UOLUtils::STATIC_GetOLEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetOLEngine");

	UOLUtils_GetOLEngine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetOLGame
// (Native, Static, Public)
// Parameters:
// class AOLGame*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLGame* UOLUtils::STATIC_GetOLGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetOLGame");

	UOLUtils_GetOLGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetOLWorld
// (Native, Static, Public)
// Parameters:
// class UOLWorld*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLWorld* UOLUtils::STATIC_GetOLWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetOLWorld");

	UOLUtils_GetOLWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetDifficultyConfig
// (Native, Static, Public)
// Parameters:
// class UOLDifficultyConfig*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLDifficultyConfig* UOLUtils::STATIC_GetDifficultyConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetDifficultyConfig");

	UOLUtils_GetDifficultyConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetAICoordinator
// (Native, Static, Public)
// Parameters:
// class UOLAICoordinator*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICoordinator* UOLUtils::STATIC_GetAICoordinator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetAICoordinator");

	UOLUtils_GetAICoordinator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetHero
// (Native, Static, Public)
// Parameters:
// class AOLHero*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLHero* UOLUtils::STATIC_GetHero()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetHero");

	UOLUtils_GetHero_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.GetOLPC
// (Native, Static, Public)
// Parameters:
// class AOLPlayerController*     ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLPlayerController* UOLUtils::STATIC_GetOLPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetOLPC");

	UOLUtils_GetOLPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsBindableKey
// (Native, Static, Public)
// Parameters:
// struct FName                   ButtonName                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsBindableKey(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsBindableKey");

	UOLUtils_IsBindableKey_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsInMainMenu
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsInMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsInMainMenu");

	UOLUtils_IsInMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsPlayingDLC
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsPlayingDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsPlayingDLC");

	UOLUtils_IsPlayingDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsDLCInstalled
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsDLCInstalled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsDLCInstalled");

	UOLUtils_IsDLCInstalled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsDingoController
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsDingoController()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsDingoController");

	UOLUtils_IsDingoController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsPS4Controller
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsPS4Controller()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsPS4Controller");

	UOLUtils_IsPS4Controller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsUsingGamepad
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsUsingGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsUsingGamepad");

	UOLUtils_IsUsingGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsConsole
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsConsole");

	UOLUtils_IsConsole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsDingo
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsDingo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsDingo");

	UOLUtils_IsDingo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsPS4
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsPS4()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsPS4");

	UOLUtils_IsPS4_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWardrobe.TriggerEvent
// (Native, Public)
// Parameters:
// TEnumAsByte<EWardrobeDoorEventType> EventType                      (Parm)
// class AOLPawn*                 Triggerer                      (Parm)

void AOLWardrobe::TriggerEvent(TEnumAsByte<EWardrobeDoorEventType> EventType, class AOLPawn* Triggerer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWardrobe.TriggerEvent");

	AOLWardrobe_TriggerEvent_Params params;
	params.EventType = EventType;
	params.Triggerer = Triggerer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWindow.OnDestroy
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Destroy*         Action                         (Parm)

void AOLWindow::OnDestroy(class USeqAct_Destroy* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWindow.OnDestroy");

	AOLWindow_OnDestroy_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWindow.SoftDestroy
// (Native, Public)

void AOLWindow::SoftDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWindow.SoftDestroy");

	AOLWindow_SoftDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWindow.ScriptOpenWindow
// (Native, Public)
// Parameters:
// class AOLPawn*                 Triggerer                      (Parm)

void AOLWindow::ScriptOpenWindow(class AOLPawn* Triggerer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWindow.ScriptOpenWindow");

	AOLWindow_ScriptOpenWindow_Params params;
	params.Triggerer = Triggerer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWindow.ScriptBreakWindow
// (Native, Public)
// Parameters:
// class AOLPawn*                 Triggerer                      (Parm)

void AOLWindow::ScriptBreakWindow(class AOLPawn* Triggerer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWindow.ScriptBreakWindow");

	AOLWindow_ScriptBreakWindow_Params params;
	params.Triggerer = Triggerer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.FinishAIGroup
// (Defined, Simulated, Public)

void AOLEnemyPawn::FinishAIGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.FinishAIGroup");

	AOLEnemyPawn_FinishAIGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.BeginAIGroup
// (Defined, Simulated, Public)

void AOLEnemyPawn::BeginAIGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.BeginAIGroup");

	AOLEnemyPawn_BeginAIGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.OnAnimEnd
// (Defined, Simulated, Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLEnemyPawn::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.OnAnimEnd");

	AOLEnemyPawn_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.NativeOnAnimEnd
// (Native, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLEnemyPawn::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.NativeOnAnimEnd");

	AOLEnemyPawn_NativeOnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartNormalAttack
// (Native, Public)

void AOLEnemyPawn::StartNormalAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartNormalAttack");

	AOLEnemyPawn_StartNormalAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartDoorKnockback
// (Native, Public)
// Parameters:
// struct FVector                 Direction                      (Parm)
// bool                           bLocker                        (Parm)

void AOLEnemyPawn::StartDoorKnockback(const struct FVector& Direction, bool bLocker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartDoorKnockback");

	AOLEnemyPawn_StartDoorKnockback_Params params;
	params.Direction = Direction;
	params.bLocker = bLocker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartKnockback
// (Native, Public)
// Parameters:
// class AOLHero*                 Hero                           (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLEnemyPawn::StartKnockback(class AOLHero* Hero, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartKnockback");

	AOLEnemyPawn_StartKnockback_Params params;
	params.Hero = Hero;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartAvoid
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            OtherPawn                      (Parm)

void AOLEnemyPawn::StartAvoid(class AOLEnemyPawn* OtherPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartAvoid");

	AOLEnemyPawn_StartAvoid_Params params;
	params.OtherPawn = OtherPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StopMoving
// (Native, Public)

void AOLEnemyPawn::StopMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StopMoving");

	AOLEnemyPawn_StopMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartMoving
// (Native, Public)

void AOLEnemyPawn::StartMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartMoving");

	AOLEnemyPawn_StartMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PlayFullBodyAnim
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   AnimName                       (Parm)
// float                          Rate                           (Parm)
// float                          BlendInTime                    (OptionalParm, Parm)
// float                          BlendOutTime                   (OptionalParm, Parm)
// bool                           bLooping                       (OptionalParm, Parm)
// float                          StartTime                      (OptionalParm, Parm)
// float                          EndTime                        (OptionalParm, Parm)

void AOLEnemyPawn::PlayFullBodyAnim(const struct FName& AnimName, float Rate, float BlendInTime, float BlendOutTime, bool bLooping, float StartTime, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PlayFullBodyAnim");

	AOLEnemyPawn_PlayFullBodyAnim_Params params;
	params.AnimName = AnimName;
	params.Rate = Rate;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.bLooping = bLooping;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PlayParticleEffect
// (Defined, Event, Public)
// Parameters:
// class UAnimNotify_PlayParticleEffect* AnimNotifyData                 (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLEnemyPawn::PlayParticleEffect(class UAnimNotify_PlayParticleEffect* AnimNotifyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PlayParticleEffect");

	AOLEnemyPawn_PlayParticleEffect_Params params;
	params.AnimNotifyData = AnimNotifyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEnemyPawn.NativePlayParticleEffect
// (Native, Public)
// Parameters:
// class UAnimNotify_PlayParticleEffect* AnimNotifyData                 (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLEnemyPawn::NativePlayParticleEffect(class UAnimNotify_PlayParticleEffect* AnimNotifyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.NativePlayParticleEffect");

	AOLEnemyPawn_NativePlayParticleEffect_Params params;
	params.AnimNotifyData = AnimNotifyData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEnemyPawn.HideWeaponMatinee
// (Defined, Event, Public)

void AOLEnemyPawn::HideWeaponMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.HideWeaponMatinee");

	AOLEnemyPawn_HideWeaponMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ShowWeaponMatinee
// (Defined, Event, Public)

void AOLEnemyPawn::ShowWeaponMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ShowWeaponMatinee");

	AOLEnemyPawn_ShowWeaponMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PushNotify
// (Defined, Event, Public)

void AOLEnemyPawn::PushNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PushNotify");

	AOLEnemyPawn_PushNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.KnockbackTickNotify
// (Defined, Event, Public)

void AOLEnemyPawn::KnockbackTickNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.KnockbackTickNotify");

	AOLEnemyPawn_KnockbackTickNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.KnockbackStartNotify
// (Defined, Event, Public)

void AOLEnemyPawn::KnockbackStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.KnockbackStartNotify");

	AOLEnemyPawn_KnockbackStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.BreakDoorNotify
// (Defined, Event, Public)

void AOLEnemyPawn::BreakDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.BreakDoorNotify");

	AOLEnemyPawn_BreakDoorNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.BashDoorNotify
// (Defined, Event, Public)

void AOLEnemyPawn::BashDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.BashDoorNotify");

	AOLEnemyPawn_BashDoorNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify
// (Defined, Event, Public)

void AOLEnemyPawn::DamageTargetRangeTickNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify");

	AOLEnemyPawn_DamageTargetRangeTickNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.HeadButtRangeStartNotify
// (Defined, Event, Public)

void AOLEnemyPawn::HeadButtRangeStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.HeadButtRangeStartNotify");

	AOLEnemyPawn_HeadButtRangeStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PunchLHRangeStartNotify
// (Defined, Event, Public)

void AOLEnemyPawn::PunchLHRangeStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PunchLHRangeStartNotify");

	AOLEnemyPawn_PunchLHRangeStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PunchRHRangeStartNotify
// (Defined, Event, Public)

void AOLEnemyPawn::PunchRHRangeStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PunchRHRangeStartNotify");

	AOLEnemyPawn_PunchRHRangeStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify
// (Defined, Event, Public)

void AOLEnemyPawn::DamageTargetRangeStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify");

	AOLEnemyPawn_DamageTargetRangeStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DamageTargetNonFatal
// (Defined, Event, Public)

void AOLEnemyPawn::DamageTargetNonFatal()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DamageTargetNonFatal");

	AOLEnemyPawn_DamageTargetNonFatal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.KickPlayerRightFoot
// (Defined, Event, Public)

void AOLEnemyPawn::KickPlayerRightFoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.KickPlayerRightFoot");

	AOLEnemyPawn_KickPlayerRightFoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DamageTarget
// (Defined, Event, Public)

void AOLEnemyPawn::DamageTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DamageTarget");

	AOLEnemyPawn_DamageTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.WindowBreakNotify
// (Defined, Event, Public)

void AOLEnemyPawn::WindowBreakNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.WindowBreakNotify");

	AOLEnemyPawn_WindowBreakNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.RestoreHiddenWeapon
// (Native, Public)

void AOLEnemyPawn::RestoreHiddenWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.RestoreHiddenWeapon");

	AOLEnemyPawn_RestoreHiddenWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.TemporaryHideWeapon
// (Native, Public)

void AOLEnemyPawn::TemporaryHideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.TemporaryHideWeapon");

	AOLEnemyPawn_TemporaryHideWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.HideWeapon
// (Native, Public)

void AOLEnemyPawn::HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.HideWeapon");

	AOLEnemyPawn_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ShowWeapon
// (Native, Public)

void AOLEnemyPawn::ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ShowWeapon");

	AOLEnemyPawn_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ExitStairsStartBlendOutNotify
// (Native, Public)

void AOLEnemyPawn::ExitStairsStartBlendOutNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ExitStairsStartBlendOutNotify");

	AOLEnemyPawn_ExitStairsStartBlendOutNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.EnterStairsStartBlendInNotify
// (Native, Public)

void AOLEnemyPawn::EnterStairsStartBlendInNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.EnterStairsStartBlendInNotify");

	AOLEnemyPawn_EnterStairsStartBlendInNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DoorUnlockNotify
// (Native, Public)

void AOLEnemyPawn::DoorUnlockNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DoorUnlockNotify");

	AOLEnemyPawn_DoorUnlockNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.WardrobeDoorEndNotify
// (Native, Public)

void AOLEnemyPawn::WardrobeDoorEndNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.WardrobeDoorEndNotify");

	AOLEnemyPawn_WardrobeDoorEndNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.WardrobeDoorNotify
// (Native, Public)

void AOLEnemyPawn::WardrobeDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.WardrobeDoorNotify");

	AOLEnemyPawn_WardrobeDoorNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.WindowAnimEndNotify
// (Native, Public)

void AOLEnemyPawn::WindowAnimEndNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.WindowAnimEndNotify");

	AOLEnemyPawn_WindowAnimEndNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.WindowAnimStartNotify
// (Native, Public)

void AOLEnemyPawn::WindowAnimStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.WindowAnimStartNotify");

	AOLEnemyPawn_WindowAnimStartNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.NativeDestroyed
// (Native, Public)

void AOLEnemyPawn::NativeDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.NativeDestroyed");

	AOLEnemyPawn_NativeDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PostInitAnimTree
// (Defined, Simulated, Event, Public)
// Parameters:
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void AOLEnemyPawn::PostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PostInitAnimTree");

	AOLEnemyPawn_PostInitAnimTree_Params params;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PossessedBy
// (Defined, Public)
// Parameters:
// class AController*             C                              (Parm)
// bool                           bVehicleTransition             (Parm)

void AOLEnemyPawn::PossessedBy(class AController* C, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PossessedBy");

	AOLEnemyPawn_PossessedBy_Params params;
	params.C = C;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ZeroMovementVariables
// (Defined, Simulated, Public)

void AOLEnemyPawn::ZeroMovementVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ZeroMovementVariables");

	AOLEnemyPawn_ZeroMovementVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AOLEnemyPawn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PostBeginPlay");

	AOLEnemyPawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently
// (Final, Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLEnemyPawn::HasRegisteredNavMeshRecently()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently");

	AOLEnemyPawn_HasRegisteredNavMeshRecently_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle
// (Final, Defined, Public)

void AOLEnemyPawn::UpdateNavMeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle");

	AOLEnemyPawn_UpdateNavMeshObstacle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle
// (Final, Native, Public)

void AOLEnemyPawn::UnregisterNavmeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle");

	AOLEnemyPawn_UnregisterNavmeshObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle
// (Final, Native, Public)

void AOLEnemyPawn::RegisterNavMeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle");

	AOLEnemyPawn_RegisterNavMeshObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues
// (Native, Public)

void AOLEnemyPawn::UpdateDifficultyBasedValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues");

	AOLEnemyPawn_UpdateDifficultyBasedValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.OnMoveAbilityCompleted
// (Native, Public)

void AOLEnemyPawn::OnMoveAbilityCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.OnMoveAbilityCompleted");

	AOLEnemyPawn_OnMoveAbilityCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.EnterCrawl
// (Native, Public)
// Parameters:
// class AOLCrawlMarker*          CrawlMarker                    (Parm)
// bool                           bThroughPathfinding            (Parm)

void AOLEnemyPawn::EnterCrawl(class AOLCrawlMarker* CrawlMarker, bool bThroughPathfinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.EnterCrawl");

	AOLEnemyPawn_EnterCrawl_Params params;
	params.CrawlMarker = CrawlMarker;
	params.bThroughPathfinding = bThroughPathfinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ExitBeam
// (Native, Public)

void AOLEnemyPawn::ExitBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ExitBeam");

	AOLEnemyPawn_ExitBeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.EnterBeam
// (Native, Public)
// Parameters:
// class AOLBeamMarker*           BeamMarker                     (Parm)
// class UOLSeqAct_AIBeam*        BeamSeqAct                     (Parm)

void AOLEnemyPawn::EnterBeam(class AOLBeamMarker* BeamMarker, class UOLSeqAct_AIBeam* BeamSeqAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.EnterBeam");

	AOLEnemyPawn_EnterBeam_Params params;
	params.BeamMarker = BeamMarker;
	params.BeamSeqAct = BeamSeqAct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartJump
// (Native, Public)
// Parameters:
// class AOLJumpMarker*           JumpMarker                     (Parm)
// class UOLSeqAct_AIJump*        JumpSeqAct                     (Parm)

void AOLEnemyPawn::StartJump(class AOLJumpMarker* JumpMarker, class UOLSeqAct_AIJump* JumpSeqAct)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartJump");

	AOLEnemyPawn_StartJump_Params params;
	params.JumpMarker = JumpMarker;
	params.JumpSeqAct = JumpSeqAct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartDoorSpecialMove
// (Native, Public)
// Parameters:
// TEnumAsByte<ESpecialMoveType>  moveType                       (Parm)

void AOLEnemyPawn::StartDoorSpecialMove(TEnumAsByte<ESpecialMoveType> moveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartDoorSpecialMove");

	AOLEnemyPawn_StartDoorSpecialMove_Params params;
	params.moveType = moveType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.BashThroughWindow
// (Native, Public)

void AOLEnemyPawn::BashThroughWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.BashThroughWindow");

	AOLEnemyPawn_BashThroughWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.OpenActiveWindow
// (Native, Public)

void AOLEnemyPawn::OpenActiveWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.OpenActiveWindow");

	AOLEnemyPawn_OpenActiveWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.CancelSpecialMove
// (Native, Public)

void AOLEnemyPawn::CancelSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.CancelSpecialMove");

	AOLEnemyPawn_CancelSpecialMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartSpecialMove
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ESpecialMoveType>  moveType                       (Parm)
// struct FVector                 targetPosition                 (OptionalParm, Parm)
// struct FVector                 TargetDirection                (OptionalParm, Parm)
// TEnumAsByte<EAdjustPositionTargetType> TargetType                     (OptionalParm, Parm)

void AOLEnemyPawn::StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartSpecialMove");

	AOLEnemyPawn_StartSpecialMove_Params params;
	params.moveType = moveType;
	params.targetPosition = targetPosition;
	params.TargetDirection = TargetDirection;
	params.TargetType = TargetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLBot::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.DisplayDebug");

	AOLBot_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLBot.NativeDisplayDebug
// (Native, Public, HasOutParms)
// Parameters:
// class UCanvas*                 aCanvas                        (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLBot::NativeDisplayDebug(class UCanvas* aCanvas, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.NativeDisplayDebug");

	AOLBot_NativeDisplayDebug_Params params;
	params.aCanvas = aCanvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLBot.ShouldLogToConsole
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::ShouldLogToConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ShouldLogToConsole");

	AOLBot_ShouldLogToConsole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.AILog_Internal
// (Event, HasOptionalParms, Public)
// Parameters:
// struct FString                 LogText                        (Parm, CoerceParm, NeedCtorLink)
// struct FName                   LogCategory                    (OptionalParm, Parm)
// bool                           bForce                         (OptionalParm, Parm)

void AOLBot::AILog_Internal(const struct FString& LogText, const struct FName& LogCategory, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.AILog_Internal");

	AOLBot_AILog_Internal_Params params;
	params.LogText = LogText;
	params.LogCategory = LogCategory;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.DebugMessagePlayer
// (Event, Public)
// Parameters:
// struct FString                 msg                            (Parm, CoerceParm, NeedCtorLink)

void AOLBot::DebugMessagePlayer(const struct FString& msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.DebugMessagePlayer");

	AOLBot_DebugMessagePlayer_Params params;
	params.msg = msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ToggleAIAlwaysSeePlayer
// (Defined, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLBot::ToggleAIAlwaysSeePlayer(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ToggleAIAlwaysSeePlayer");

	AOLBot_ToggleAIAlwaysSeePlayer_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer
// (Defined, Public)
// Parameters:
// class UOLSeqAct_ToggleAIAlwaysSeePlayer* Action                         (Parm)

void AOLBot::OnToggleAIAlwaysSeePlayer(class UOLSeqAct_ToggleAIAlwaysSeePlayer* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer");

	AOLBot_OnToggleAIAlwaysSeePlayer_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.IgnoreTarget
// (Defined, Event, Public)
// Parameters:
// float                          Time                           (Parm)

void AOLBot::IgnoreTarget(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IgnoreTarget");

	AOLBot_IgnoreTarget_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ToggleAIIgnorePlayer
// (Defined, Event, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLBot::ToggleAIIgnorePlayer(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ToggleAIIgnorePlayer");

	AOLBot_ToggleAIIgnorePlayer_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnToggleAIIgnorePlayer
// (Defined, Public)
// Parameters:
// class UOLSeqAct_ToggleAIIgnorePlayer* Action                         (Parm)

void AOLBot::OnToggleAIIgnorePlayer(class UOLSeqAct_ToggleAIIgnorePlayer* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnToggleAIIgnorePlayer");

	AOLBot_OnToggleAIIgnorePlayer_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StartWaitForDoor
// (Defined, Event, Public)

void AOLBot::StartWaitForDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StartWaitForDoor");

	AOLBot_StartWaitForDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.TargetReachable
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::TargetReachable()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TargetReachable");

	AOLBot_TargetReachable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.StartDynamicMove
// (Defined, Event, Public)
// Parameters:
// struct FMovementData           aData                          (Parm)

void AOLBot::StartDynamicMove(const struct FMovementData& aData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StartDynamicMove");

	AOLBot_StartDynamicMove_Params params;
	params.aData = aData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StartMove
// (Defined, Event, Public)
// Parameters:
// struct FMovementData           aData                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::StartMove(const struct FMovementData& aData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StartMove");

	AOLBot_StartMove_Params params;
	params.aData = aData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.NotifyBump
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitNormal                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::NotifyBump(class AActor* Other, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.NotifyBump");

	AOLBot_NotifyBump_Params params;
	params.Other = Other;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.NotifyPathChanged
// (Defined, Event, Public)

void AOLBot::NotifyPathChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.NotifyPathChanged");

	AOLBot_NotifyPathChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.GeneratePathWithMaxDist
// (Defined, Event, Public)
// Parameters:
// struct FVector                 Goal                           (Parm)
// float                          WithinDistance                 (Parm)
// float                          MaxPathDistance                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GeneratePathWithMaxDist(const struct FVector& Goal, float WithinDistance, float MaxPathDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GeneratePathWithMaxDist");

	AOLBot_GeneratePathWithMaxDist_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.MaxPathDistance = MaxPathDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GeneratePathToLocation
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GeneratePathToLocation(const struct FVector& Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GeneratePathToLocation");

	AOLBot_GeneratePathToLocation_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GeneratePathToActor");

	AOLBot_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.AddBasePathContraints
// (Defined, Public)

void AOLBot::AddBasePathContraints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.AddBasePathContraints");

	AOLBot_AddBasePathContraints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.KnockbackTickNotify
// (Defined, Event, Public)

void AOLBot::KnockbackTickNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.KnockbackTickNotify");

	AOLBot_KnockbackTickNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.KnockbackStartNotify
// (Defined, Event, Public)

void AOLBot::KnockbackStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.KnockbackStartNotify");

	AOLBot_KnockbackStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.BreakDoorNotify
// (Defined, Event, Public)

void AOLBot::BreakDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.BreakDoorNotify");

	AOLBot_BreakDoorNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.BashDoorNotify
// (Defined, Event, Public)

void AOLBot::BashDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.BashDoorNotify");

	AOLBot_BashDoorNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.AttackCycleEnd
// (Defined, Public)

void AOLBot::AttackCycleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.AttackCycleEnd");

	AOLBot_AttackCycleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearAnimation
// (Defined, Public)

void AOLBot::ClearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearAnimation");

	AOLBot_ClearAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PlayFullBodyAnim
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   AnimName                       (Parm)
// float                          Rate                           (Parm)
// float                          BlendInTime                    (OptionalParm, Parm)
// float                          BlendOutTime                   (OptionalParm, Parm)
// bool                           bLooping                       (OptionalParm, Parm)
// float                          StartTime                      (OptionalParm, Parm)
// float                          EndTime                        (OptionalParm, Parm)

void AOLBot::PlayFullBodyAnim(const struct FName& AnimName, float Rate, float BlendInTime, float BlendOutTime, bool bLooping, float StartTime, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PlayFullBodyAnim");

	AOLBot_PlayFullBodyAnim_Params params;
	params.AnimName = AnimName;
	params.Rate = Rate;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.bLooping = bLooping;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PushQueuedCommand
// (Defined, Public)

void AOLBot::PushQueuedCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PushQueuedCommand");

	AOLBot_PushQueuedCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.QueueAICommand
// (Defined, Event, Public)
// Parameters:
// class UGameAICommand*          Cmd                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::QueueAICommand(class UGameAICommand* Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.QueueAICommand");

	AOLBot_QueueAICommand_Params params;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.UnPossess
// (Defined, Public)

void AOLBot::UnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.UnPossess");

	AOLBot_UnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.Possess
// (Defined, Public)
// Parameters:
// class APawn*                   aPawn                          (Parm)
// bool                           bVehicleTransition             (Parm)

void AOLBot::Possess(class APawn* aPawn, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.Possess");

	AOLBot_Possess_Params params;
	params.aPawn = aPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.Destroyed
// (Defined, Event, Public)

void AOLBot::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.Destroyed");

	AOLBot_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.InitNavigationHandle
// (Defined, Simulated, Public)

void AOLBot::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.InitNavigationHandle");

	AOLBot_InitNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PostBeginPlay
// (Defined, Simulated, Public)

void AOLBot::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PostBeginPlay");

	AOLBot_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.LogErrorNotOnNavmesh
// (Native, Public)

void AOLBot::LogErrorNotOnNavmesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.LogErrorNotOnNavmesh");

	AOLBot_LogErrorNotOnNavmesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.LogErrorFailedMove
// (Native, Public)

void AOLBot::LogErrorFailedMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.LogErrorFailedMove");

	AOLBot_LogErrorFailedMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.TestLogAIToConsole
// (Native, Public)
// Parameters:
// int                            Verbosity                      (Parm)

void AOLBot::TestLogAIToConsole(int Verbosity)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TestLogAIToConsole");

	AOLBot_TestLogAIToConsole_Params params;
	params.Verbosity = Verbosity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.UpdateClosingDoorsState
// (Native, Public)

void AOLBot::UpdateClosingDoorsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.UpdateClosingDoorsState");

	AOLBot_UpdateClosingDoorsState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.CanUnlockDoor
// (Native, Public)
// Parameters:
// class AOLDoor*                 aDoor                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::CanUnlockDoor(class AOLDoor* aDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.CanUnlockDoor");

	AOLBot_CanUnlockDoor_Params params;
	params.aDoor = aDoor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.ShouldCloseDoor
// (Native, Public)
// Parameters:
// class AOLDoor*                 aDoor                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::ShouldCloseDoor(class AOLDoor* aDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ShouldCloseDoor");

	AOLBot_ShouldCloseDoor_Params params;
	params.aDoor = aDoor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetDoorApproachPoint
// (Native, Public, HasOutParms)
// Parameters:
// class AOLDoor*                 aDoor                          (Parm)
// struct FVector                 ApproachPoint                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GetDoorApproachPoint(class AOLDoor* aDoor, struct FVector* ApproachPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetDoorApproachPoint");

	AOLBot_GetDoorApproachPoint_Params params;
	params.aDoor = aDoor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ApproachPoint != nullptr)
		*ApproachPoint = params.ApproachPoint;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetClosestPointToActor
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 NewPoint                       (Parm, OutParm)
// class AActor*                  ActorToCheck                   (Parm)
// float                          NewBuffer                      (Parm, OutParm)
// bool                           bForceNudging                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GetClosestPointToActor(class AActor* ActorToCheck, bool bForceNudging, struct FVector* NewPoint, float* NewBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetClosestPointToActor");

	AOLBot_GetClosestPointToActor_Params params;
	params.ActorToCheck = ActorToCheck;
	params.bForceNudging = bForceNudging;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPoint != nullptr)
		*NewPoint = params.NewPoint;
	if (NewBuffer != nullptr)
		*NewBuffer = params.NewBuffer;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetClosestPointOnNavMesh
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 out_NewPoint                   (Parm, OutParm)
// struct FVector                 PointToCheck                   (Parm)
// bool                           bForceNudging                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GetClosestPointOnNavMesh(const struct FVector& PointToCheck, bool bForceNudging, struct FVector* out_NewPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetClosestPointOnNavMesh");

	AOLBot_GetClosestPointOnNavMesh_Params params;
	params.PointToCheck = PointToCheck;
	params.bForceNudging = bForceNudging;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_NewPoint != nullptr)
		*out_NewPoint = params.out_NewPoint;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetCurrentWaypoint
// (Native, Public)
// Parameters:
// class AOLWaypoint*             ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLWaypoint* AOLBot::GetCurrentWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetCurrentWaypoint");

	AOLBot_GetCurrentWaypoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetMoveCommand
// (Native, Public)
// Parameters:
// class UOLAICmd_MoveAbility*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility* AOLBot::GetMoveCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetMoveCommand");

	AOLBot_GetMoveCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsPerformingMoveAbility
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsPerformingMoveAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsPerformingMoveAbility");

	AOLBot_IsPerformingMoveAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsPlayerOnVaultingPath
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsPlayerOnVaultingPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsPlayerOnVaultingPath");

	AOLBot_IsPlayerOnVaultingPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor
// (Native, Public)
// Parameters:
// class AOLDoor*                 door                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsPlayerOnBrokenSideOfDoor(class AOLDoor* door)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor");

	AOLBot_IsPlayerOnBrokenSideOfDoor_Params params;
	params.door = door;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInDamageRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInDamageRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInDamageRange");

	AOLBot_IsInDamageRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInFinalAttackRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInFinalAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInFinalAttackRange");

	AOLBot_IsInFinalAttackRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInApproachAttackRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInApproachAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInApproachAttackRange");

	AOLBot_IsInApproachAttackRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInCrouchingAttackRange
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          ForwardRangeFactor             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInCrouchingAttackRange(float ForwardRangeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInCrouchingAttackRange");

	AOLBot_IsInCrouchingAttackRange_Params params;
	params.ForwardRangeFactor = ForwardRangeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInCrawlingAttackRange
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          ForwardRangeFactor             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInCrawlingAttackRange(float ForwardRangeFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInCrawlingAttackRange");

	AOLBot_IsInCrawlingAttackRange_Params params;
	params.ForwardRangeFactor = ForwardRangeFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInGrabUnderAttackRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInGrabUnderAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInGrabUnderAttackRange");

	AOLBot_IsInGrabUnderAttackRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInAttackRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInAttackRange");

	AOLBot_IsInAttackRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.TargetInSpecialLocation
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::TargetInSpecialLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TargetInSpecialLocation");

	AOLBot_TargetInSpecialLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.CanSeePlayer
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::CanSeePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.CanSeePlayer");

	AOLBot_CanSeePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.TryTurnAtDestination
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::TryTurnAtDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TryTurnAtDestination");

	AOLBot_TryTurnAtDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.HasReachedDestination
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::HasReachedDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.HasReachedDestination");

	AOLBot_HasReachedDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.OnMoveSucceeded
// (Native, Public)

void AOLBot::OnMoveSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnMoveSucceeded");

	AOLBot_OnMoveSucceeded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.MoveDynamic
// (Latent, Native, Public)

void AOLBot::MoveDynamic()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.MoveDynamic");

	AOLBot_MoveDynamic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.MoveToPoint
// (Latent, Native, Public, HasOutParms)
// Parameters:
// struct FVector                 Dest                           (Const, Parm, OutParm)
// class AActor*                  ViewFocus                      (Parm)
// float                          DesiredOffset                  (Parm)

void AOLBot::MoveToPoint(class AActor* ViewFocus, float DesiredOffset, struct FVector* Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.MoveToPoint");

	AOLBot_MoveToPoint_Params params;
	params.ViewFocus = ViewFocus;
	params.DesiredOffset = DesiredOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;
}


// Function OLGame.OLBot.MoveAlongPath
// (Latent, Native, HasOptionalParms, Public)
// Parameters:
// TArray<struct FVector>         PathPoints                     (Parm, NeedCtorLink)
// class AActor*                  FocusTarget                    (OptionalParm, Parm)

void AOLBot::MoveAlongPath(TArray<struct FVector> PathPoints, class AActor* FocusTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.MoveAlongPath");

	AOLBot_MoveAlongPath_Params params;
	params.PathPoints = PathPoints;
	params.FocusTarget = FocusTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.WaitForCrawlEngaged
// (Final, Latent, Native, Public)

void AOLBot::WaitForCrawlEngaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.WaitForCrawlEngaged");

	AOLBot_WaitForCrawlEngaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.WaitForSpecialMove
// (Final, Latent, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bNoDelay                       (OptionalParm, Parm)

void AOLBot::WaitForSpecialMove(bool bNoDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.WaitForSpecialMove");

	AOLBot_WaitForSpecialMove_Params params;
	params.bNoDelay = bNoDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.WaitForFullBodyAnim
// (Final, Latent, Native, Public)

void AOLBot::WaitForFullBodyAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.WaitForFullBodyAnim");

	AOLBot_WaitForFullBodyAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.TargetUnreacheable
// (Native, Public)

void AOLBot::TargetUnreacheable()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TargetUnreacheable");

	AOLBot_TargetUnreacheable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PushPlayer
// (Native, Public)

void AOLBot::PushPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PushPlayer");

	AOLBot_PushPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.TryKnockbackTarget
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::TryKnockbackTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TryKnockbackTarget");

	AOLBot_TryKnockbackTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.TryDamageTarget
// (Native, Public)
// Parameters:
// bool                           bNonFatal                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::TryDamageTarget(bool bNonFatal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TryDamageTarget");

	AOLBot_TryDamageTarget_Params params;
	params.bNonFatal = bNonFatal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.FinishMatinee
// (Native, Public)

void AOLBot::FinishMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.FinishMatinee");

	AOLBot_FinishMatinee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.BeginMatinee
// (Native, Public)

void AOLBot::BeginMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.BeginMatinee");

	AOLBot_BeginMatinee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PerformAttackCheck
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bForSynchedAnim                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::PerformAttackCheck(bool bForSynchedAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PerformAttackCheck");

	AOLBot_PerformAttackCheck_Params params;
	params.bForSynchedAnim = bForSynchedAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.PerformGrabCheck
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::PerformGrabCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PerformGrabCheck");

	AOLBot_PerformGrabCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.EndDoorTraversal
// (Native, Public)

void AOLBot::EndDoorTraversal()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.EndDoorTraversal");

	AOLBot_EndDoorTraversal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StartDoorTraversal
// (Native, Public)
// Parameters:
// bool                           bReversed                      (Parm)

void AOLBot::StartDoorTraversal(bool bReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StartDoorTraversal");

	AOLBot_StartDoorTraversal_Params params;
	params.bReversed = bReversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StopMoving
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bAborted                       (OptionalParm, Parm)

void AOLBot::StopMoving(bool bAborted)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StopMoving");

	AOLBot_StopMoving_Params params;
	params.bAborted = bAborted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.RegeneratePath
// (Native, Public)

void AOLBot::RegeneratePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.RegeneratePath");

	AOLBot_RegeneratePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.SetNavmeshValidatedMovePoint
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bForceNudging                  (OptionalParm, Parm)
// bool                           bQuiet                         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::SetNavmeshValidatedMovePoint(bool bForceNudging, bool bQuiet)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.SetNavmeshValidatedMovePoint");

	AOLBot_SetNavmeshValidatedMovePoint_Params params;
	params.bForceNudging = bForceNudging;
	params.bQuiet = bQuiet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GeneratePath
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bQuiet                         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GeneratePath(bool bQuiet)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GeneratePath");

	AOLBot_GeneratePath_Params params;
	params.bQuiet = bQuiet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.ClearAllActivities
// (Native, Public)

void AOLBot::ClearAllActivities()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearAllActivities");

	AOLBot_ClearAllActivities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearDestination
// (Native, Public)

void AOLBot::ClearDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearDestination");

	AOLBot_ClearDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearInvestigation
// (Native, Public)

void AOLBot::ClearInvestigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearInvestigation");

	AOLBot_ClearInvestigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearNextMove
// (Native, Public)

void AOLBot::ClearNextMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearNextMove");

	AOLBot_ClearNextMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearCurrentMove
// (Native, Public)

void AOLBot::ClearCurrentMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearCurrentMove");

	AOLBot_ClearCurrentMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.TurnBeforePerform
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility::TurnBeforePerform()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.TurnBeforePerform");

	UOLAICmd_MoveAbility_TurnBeforePerform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.MustTurnBeforePerform
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility::MustTurnBeforePerform()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.MustTurnBeforePerform");

	UOLAICmd_MoveAbility_MustTurnBeforePerform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.ShouldWaitBeforeUsing
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility::ShouldWaitBeforeUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.ShouldWaitBeforeUsing");

	UOLAICmd_MoveAbility_ShouldWaitBeforeUsing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.IsObjectInUse
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility::IsObjectInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.IsObjectInUse");

	UOLAICmd_MoveAbility_IsObjectInUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.ModifyPath
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 NewDestination                 (Parm)
// TArray<struct FVector>         NewPath                        (Parm, OutParm, NeedCtorLink)

void UOLAICmd_MoveAbility::ModifyPath(const struct FVector& NewDestination, TArray<struct FVector>* NewPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.ModifyPath");

	UOLAICmd_MoveAbility_ModifyPath_Params params;
	params.NewDestination = NewDestination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPath != nullptr)
		*NewPath = params.NewPath;
}


// Function OLGame.OLAICmd_MoveAbility.ModifyApproach
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 NewDestination                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility::ModifyApproach(struct FVector* NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.ModifyApproach");

	UOLAICmd_MoveAbility_ModifyApproach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDestination != nullptr)
		*NewDestination = params.NewDestination;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.Completed
// (Defined, Public)

void UOLAICmd_MoveAbility::Completed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.Completed");

	UOLAICmd_MoveAbility_Completed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.Popped
// (Defined, Public)

void UOLAICmd_MoveAbility::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.Popped");

	UOLAICmd_MoveAbility_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.Pushed
// (Defined, Public)

void UOLAICmd_MoveAbility::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.Pushed");

	UOLAICmd_MoveAbility_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLBashableObject*       InBashable                     (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Bash* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Bash* UOLAICmd_MoveAbility_Bash::STATIC_MoveThruBashable(class AOLBot* Bot, class AOLBashableObject* InBashable, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable");

	UOLAICmd_MoveAbility_Bash_MoveThruBashable_Params params;
	params.Bot = Bot;
	params.InBashable = InBashable;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.AutomaticDoorOpen
// (Defined, Public)

void UOLAICmd_MoveAbility_Door::AutomaticDoorOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.AutomaticDoorOpen");

	UOLAICmd_MoveAbility_Door_AutomaticDoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.CancelPlayerInteraction
// (Native, Public)

void UOLAICmd_MoveAbility_Door::CancelPlayerInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.CancelPlayerInteraction");

	UOLAICmd_MoveAbility_Door_CancelPlayerInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.Cleanup
// (Native, Public)

void UOLAICmd_MoveAbility_Door::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.Cleanup");

	UOLAICmd_MoveAbility_Door_Cleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.GetDoorBashCount
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLAICmd_MoveAbility_Door::GetDoorBashCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.GetDoorBashCount");

	UOLAICmd_MoveAbility_Door_GetDoorBashCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.ShouldWaitBeforeUsing
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Door::ShouldWaitBeforeUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.ShouldWaitBeforeUsing");

	UOLAICmd_MoveAbility_Door_ShouldWaitBeforeUsing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Door::IsObjectInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse");

	UOLAICmd_MoveAbility_Door_IsObjectInUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.Cancel
// (Defined, Public)

void UOLAICmd_MoveAbility_Door::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.Cancel");

	UOLAICmd_MoveAbility_Door_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.Popped
// (Defined, Public)

void UOLAICmd_MoveAbility_Door::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.Popped");

	UOLAICmd_MoveAbility_Door_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 NewDestination                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Door::ModifyApproach(struct FVector* NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach");

	UOLAICmd_MoveAbility_Door_ModifyApproach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDestination != nullptr)
		*NewDestination = params.NewDestination;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen
// (Defined, Public)
// Parameters:
// class AOLDoor*                 TestDoor                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Door::IsDoorOpen(class AOLDoor* TestDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen");

	UOLAICmd_MoveAbility_Door_IsDoorOpen_Params params;
	params.TestDoor = TestDoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLDoor*                 InDoor                         (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Door* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Door* UOLAICmd_MoveAbility_Door::STATIC_MoveThruDoor(class AOLBot* Bot, class AOLDoor* InDoor, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor");

	UOLAICmd_MoveAbility_Door_MoveThruDoor_Params params;
	params.Bot = Bot;
	params.InDoor = InDoor;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_EnterBeam.MoveToBeam
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLBeamMarker*           InMarker                       (Parm)
// struct FVector                 InitialDestination             (Parm)
// class UOLAICmd_MoveAbility_EnterBeam* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_EnterBeam* UOLAICmd_MoveAbility_EnterBeam::STATIC_MoveToBeam(class AOLBot* Bot, class AOLBeamMarker* InMarker, const struct FVector& InitialDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_EnterBeam.MoveToBeam");

	UOLAICmd_MoveAbility_EnterBeam_MoveToBeam_Params params;
	params.Bot = Bot;
	params.InMarker = InMarker;
	params.InitialDestination = InitialDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_EnterCrawl.MoveToCrawl
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLCrawlMarker*          InMarker                       (Parm)
// struct FVector                 InitialDestination             (Parm)
// class UOLAICmd_MoveAbility_EnterCrawl* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_EnterCrawl* UOLAICmd_MoveAbility_EnterCrawl::STATIC_MoveToCrawl(class AOLBot* Bot, class AOLCrawlMarker* InMarker, const struct FVector& InitialDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_EnterCrawl.MoveToCrawl");

	UOLAICmd_MoveAbility_EnterCrawl_MoveToCrawl_Params params;
	params.Bot = Bot;
	params.InMarker = InMarker;
	params.InitialDestination = InitialDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_EnterCrawl.ShouldWaitBeforeUsing
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_EnterCrawl::ShouldWaitBeforeUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_EnterCrawl.ShouldWaitBeforeUsing");

	UOLAICmd_MoveAbility_EnterCrawl_ShouldWaitBeforeUsing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Jump.MoveThruJump
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLJumpMarker*           InMarker                       (Parm)
// struct FVector                 InitialDestination             (Parm)
// class UOLAICmd_MoveAbility_Jump* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Jump* UOLAICmd_MoveAbility_Jump::STATIC_MoveThruJump(class AOLBot* Bot, class AOLJumpMarker* InMarker, const struct FVector& InitialDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Jump.MoveThruJump");

	UOLAICmd_MoveAbility_Jump_MoveThruJump_Params params;
	params.Bot = Bot;
	params.InMarker = InMarker;
	params.InitialDestination = InitialDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLLedgeMarker*          InLedge                        (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Ledge* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Ledge* UOLAICmd_MoveAbility_Ledge::STATIC_MoveThruLedge(class AOLBot* Bot, class AOLLedgeMarker* InLedge, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge");

	UOLAICmd_MoveAbility_Ledge_MoveThruLedge_Params params;
	params.Bot = Bot;
	params.InLedge = InLedge;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLAIVaultMarker*        InMarker                       (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Vault* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Vault* UOLAICmd_MoveAbility_Vault::STATIC_MoveThruLedge(class AOLBot* Bot, class AOLAIVaultMarker* InMarker, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge");

	UOLAICmd_MoveAbility_Vault_MoveThruLedge_Params params;
	params.Bot = Bot;
	params.InMarker = InMarker;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Window.ShouldWaitBeforeUsing
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Window::ShouldWaitBeforeUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Window.ShouldWaitBeforeUsing");

	UOLAICmd_MoveAbility_Window_ShouldWaitBeforeUsing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Window.IsObjectInUse
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Window::IsObjectInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Window.IsObjectInUse");

	UOLAICmd_MoveAbility_Window_IsObjectInUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Window.Cancel
// (Defined, Public)

void UOLAICmd_MoveAbility_Window::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Window.Cancel");

	UOLAICmd_MoveAbility_Window_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Window.Popped
// (Defined, Public)

void UOLAICmd_MoveAbility_Window::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Window.Popped");

	UOLAICmd_MoveAbility_Window_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Window.MoveThruWindow
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLWindow*               InWindow                       (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Window* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Window* UOLAICmd_MoveAbility_Window::STATIC_MoveThruWindow(class AOLBot* Bot, class AOLWindow* InWindow, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Window.MoveThruWindow");

	UOLAICmd_MoveAbility_Window_MoveThruWindow_Params params;
	params.Bot = Bot;
	params.InWindow = InWindow;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAIGroup.UseFallbackFormation
// (Native, Public)

void UOLAIGroup::UseFallbackFormation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.UseFallbackFormation");

	UOLAIGroup_UseFallbackFormation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.UseDesiredFormation
// (Native, Public)

void UOLAIGroup::UseDesiredFormation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.UseDesiredFormation");

	UOLAIGroup_UseDesiredFormation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AOLAIInvestigationVolume::ProcessActorSetVolume(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume");

	AOLAIInvestigationVolume_ProcessActorSetVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLNavigationHandle.PointReachable
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 OverrideStartPoint             (OptionalParm, Parm)
// bool                           bAllowHitsInEndCollisionBox    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::PointReachable(const struct FVector& Point, const struct FVector& OverrideStartPoint, bool bAllowHitsInEndCollisionBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.PointReachable");

	UOLNavigationHandle_PointReachable_Params params;
	params.Point = Point;
	params.OverrideStartPoint = OverrideStartPoint;
	params.bAllowHitsInEndCollisionBox = bAllowHitsInEndCollisionBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.TrimPathByDistance
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// float                          DistanceToTrim                 (Parm)
// struct FVector                 out_NewDestination             (Parm, OutParm)
// bool                           bStopAtMeshObject              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::TrimPathByDistance(float DistanceToTrim, bool bStopAtMeshObject, struct FVector* out_NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.TrimPathByDistance");

	UOLNavigationHandle_TrimPathByDistance_Params params;
	params.DistanceToTrim = DistanceToTrim;
	params.bStopAtMeshObject = bStopAtMeshObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_NewDestination != nullptr)
		*out_NewDestination = params.out_NewDestination;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.TrimPathToLastClosedDoor
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 out_NewDestination             (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::TrimPathToLastClosedDoor(struct FVector* out_NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.TrimPathToLastClosedDoor");

	UOLNavigationHandle_TrimPathToLastClosedDoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_NewDestination != nullptr)
		*out_NewDestination = params.out_NewDestination;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.ClearPath
// (Native, Public)

void UOLNavigationHandle::ClearPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.ClearPath");

	UOLNavigationHandle_ClearPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLNavigationHandle.PopMoveLocation
// (Native, Public)

void UOLNavigationHandle::PopMoveLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.PopMoveLocation");

	UOLNavigationHandle_PopMoveLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLNavigationHandle.GetNextMovePath
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FVector>         out_MovePath                   (Parm, OutParm, NeedCtorLink)
// float                          ArrivalDistance                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::GetNextMovePath(float ArrivalDistance, TArray<struct FVector>* out_MovePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.GetNextMovePath");

	UOLNavigationHandle_GetNextMovePath_Params params;
	params.ArrivalDistance = ArrivalDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_MovePath != nullptr)
		*out_MovePath = params.out_MovePath;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.GetNextMoveLocation
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 out_MoveDest                   (Parm, OutParm)
// float                          ArrivalDistance                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::GetNextMoveLocation(float ArrivalDistance, struct FVector* out_MoveDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.GetNextMoveLocation");

	UOLNavigationHandle_GetNextMoveLocation_Params params;
	params.ArrivalDistance = ArrivalDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_MoveDest != nullptr)
		*out_MoveDest = params.out_MoveDest;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.FindPath
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class AActor*                  out_DestActor                  (OptionalParm, Parm, OutParm)
// int                            out_DestItem                   (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::FindPath(class AActor** out_DestActor, int* out_DestItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.FindPath");

	UOLNavigationHandle_FindPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DestActor != nullptr)
		*out_DestActor = params.out_DestActor;
	if (out_DestItem != nullptr)
		*out_DestItem = params.out_DestItem;

	return params.ReturnValue;
}


// Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle
// (Defined, Event, Public)

void UOLNavMeshPath_SimilarToLastPath::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle");

	UOLNavMeshPath_SimilarToLastPath_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath
// (Defined, Static, Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavMeshPath_SimilarToLastPath::STATIC_SimilarToLastPath(class UNavigationHandle* NavHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath");

	UOLNavMeshPath_SimilarToLastPath_SimilarToLastPath_Params params;
	params.NavHandle = NavHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEnemyMartha.PlayParticleEffect
// (Defined, Event, Public)
// Parameters:
// class UAnimNotify_PlayParticleEffect* AnimNotifyData                 (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLEnemyMartha::PlayParticleEffect(class UAnimNotify_PlayParticleEffect* AnimNotifyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyMartha.PlayParticleEffect");

	AOLEnemyMartha_PlayParticleEffect_Params params;
	params.AnimNotifyData = AnimNotifyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEnemyNickAndLaird.StopAnimatingArrow
// (Native, Public)

void AOLEnemyNickAndLaird::StopAnimatingArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNickAndLaird.StopAnimatingArrow");

	AOLEnemyNickAndLaird_StopAnimatingArrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNickAndLaird.SpawnAndAnimateNewArrow
// (Native, Public)

void AOLEnemyNickAndLaird::SpawnAndAnimateNewArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNickAndLaird.SpawnAndAnimateNewArrow");

	AOLEnemyNickAndLaird_SpawnAndAnimateNewArrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNickAndLaird.SpawnNewArrow
// (Native, Public)

void AOLEnemyNickAndLaird::SpawnNewArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNickAndLaird.SpawnNewArrow");

	AOLEnemyNickAndLaird_SpawnNewArrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNickAndLaird.ArrowLaunch
// (Native, Public)

void AOLEnemyNickAndLaird::ArrowLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNickAndLaird.ArrowLaunch");

	AOLEnemyNickAndLaird_ArrowLaunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWaypoint.AnimStartedEvent
// (Native, Public)
// Parameters:
// class AActor*                  InInstigator                   (Parm)

void AOLWaypoint::AnimStartedEvent(class AActor* InInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWaypoint.AnimStartedEvent");

	AOLWaypoint_AnimStartedEvent_Params params;
	params.InInstigator = InInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWaypoint.WaypointReachedEvent
// (Native, Public)
// Parameters:
// class AActor*                  InInstigator                   (Parm)

void AOLWaypoint::WaypointReachedEvent(class AActor* InInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWaypoint.WaypointReachedEvent");

	AOLWaypoint_WaypointReachedEvent_Params params;
	params.InInstigator = InInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAnimMappedSequence.SetAnim
// (Native, Public)
// Parameters:
// struct FName                   Sequence                       (Parm)

void UOLAnimMappedSequence::SetAnim(const struct FName& Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAnimMappedSequence.SetAnim");

	UOLAnimMappedSequence_SetAnim_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSeqAct_AICondition.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_AICondition::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_AICondition.GetObjClassVersion");

	UOLSeqAct_AICondition_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_AIForceCrawl.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_AIForceCrawl::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_AIForceCrawl.GetObjClassVersion");

	UOLSeqAct_AIForceCrawl_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_AIGotoPoint.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_AIGotoPoint::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_AIGotoPoint.GetObjClassVersion");

	UOLSeqAct_AIGotoPoint_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_AIInvestigatePoint.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_AIInvestigatePoint::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_AIInvestigatePoint.GetObjClassVersion");

	UOLSeqAct_AIInvestigatePoint_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_AISetLeash.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_AISetLeash::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_AISetLeash.GetObjClassVersion");

	UOLSeqAct_AISetLeash_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_AIStartPatrol::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion");

	UOLSeqAct_AIStartPatrol_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_AIUnspawnAtLocation.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_AIUnspawnAtLocation::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_AIUnspawnAtLocation.GetObjClassVersion");

	UOLSeqAct_AIUnspawnAtLocation_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_Arrow.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_Arrow::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Arrow.GetObjClassVersion");

	UOLSeqAct_Arrow_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_Camcorder.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_Camcorder::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Camcorder.GetObjClassVersion");

	UOLSeqAct_Camcorder_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_CameraParticleEffect.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_CameraParticleEffect::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_CameraParticleEffect.GetObjClassVersion");

	UOLSeqAct_CameraParticleEffect_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_CameraShake.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_CameraShake::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_CameraShake.GetObjClassVersion");

	UOLSeqAct_CameraShake_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_DelayByDifficulty.ResetDelayActive
// (Native, Public)

void UOLSeqAct_DelayByDifficulty::ResetDelayActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_DelayByDifficulty.ResetDelayActive");

	UOLSeqAct_DelayByDifficulty_ResetDelayActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSeqAct_DelayByDifficulty.Reset
// (Defined, Public)

void UOLSeqAct_DelayByDifficulty::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_DelayByDifficulty.Reset");

	UOLSeqAct_DelayByDifficulty_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSeqAct_Door.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_Door::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Door.GetObjClassVersion");

	UOLSeqAct_Door_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_GenericBlend.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_GenericBlend::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_GenericBlend.GetObjClassVersion");

	UOLSeqAct_GenericBlend_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_HeroControl.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_HeroControl::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_HeroControl.GetObjClassVersion");

	UOLSeqAct_HeroControl_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_HeroPlayAnim.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_HeroPlayAnim::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_HeroPlayAnim.GetObjClassVersion");

	UOLSeqAct_HeroPlayAnim_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_HideInSight.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_HideInSight::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_HideInSight.GetObjClassVersion");

	UOLSeqAct_HideInSight_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_InvisibleFootsteps.ShouldHandleDecal
// (Defined, Public)
// Parameters:
// TEnumAsByte<EFootstepDecalType> DecalType                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLSeqAct_InvisibleFootsteps::ShouldHandleDecal(TEnumAsByte<EFootstepDecalType> DecalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_InvisibleFootsteps.ShouldHandleDecal");

	UOLSeqAct_InvisibleFootsteps_ShouldHandleDecal_Params params;
	params.DecalType = DecalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_InvisibleFootsteps.SpawnFootstepDecal
// (Native, Public, HasOutParms)
// Parameters:
// bool                           bLeftFoot                      (Parm)
// struct FVector                 DecalLocation                  (Parm, OutParm)
// struct FRotator                DecalRotation                  (Parm, OutParm)

void UOLSeqAct_InvisibleFootsteps::SpawnFootstepDecal(bool bLeftFoot, struct FVector* DecalLocation, struct FRotator* DecalRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_InvisibleFootsteps.SpawnFootstepDecal");

	UOLSeqAct_InvisibleFootsteps_SpawnFootstepDecal_Params params;
	params.bLeftFoot = bLeftFoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DecalLocation != nullptr)
		*DecalLocation = params.DecalLocation;
	if (DecalRotation != nullptr)
		*DecalRotation = params.DecalRotation;
}


// Function OLGame.OLSeqAct_LightEnvControl.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_LightEnvControl::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_LightEnvControl.GetObjClassVersion");

	UOLSeqAct_LightEnvControl_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_NightVisionStatus.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_NightVisionStatus::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_NightVisionStatus.GetObjClassVersion");

	UOLSeqAct_NightVisionStatus_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_PairedWalk.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_PairedWalk::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_PairedWalk.GetObjClassVersion");

	UOLSeqAct_PairedWalk_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_PrepareMapTransition.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_PrepareMapTransition::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_PrepareMapTransition.GetObjClassVersion");

	UOLSeqAct_PrepareMapTransition_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_Pushable.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_Pushable::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Pushable.GetObjClassVersion");

	UOLSeqAct_Pushable_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_SetObjective.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_SetObjective::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_SetObjective.GetObjClassVersion");

	UOLSeqAct_SetObjective_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_Struggle.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_Struggle::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Struggle.GetObjClassVersion");

	UOLSeqAct_Struggle_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_WaitAndReact.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_WaitAndReact::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_WaitAndReact.GetObjClassVersion");

	UOLSeqAct_WaitAndReact_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_WaitForPlayerInput.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_WaitForPlayerInput::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_WaitForPlayerInput.GetObjClassVersion");

	UOLSeqAct_WaitForPlayerInput_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_AIState.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_AIState::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_AIState.GetObjClassVersion");

	UOLSeqCond_AIState_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_Checkpoint::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion");

	UOLSeqCond_Checkpoint_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_IsDemo.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_IsDemo::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_IsDemo.GetObjClassVersion");

	UOLSeqCond_IsDemo_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_IsTouching::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion");

	UOLSeqCond_IsTouching_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_PlayerHealth.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_PlayerHealth::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_PlayerHealth.GetObjClassVersion");

	UOLSeqCond_PlayerHealth_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqEvent_ApplyCheckpointState::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion");

	UOLSeqEvent_ApplyCheckpointState_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqEvent_Bashable.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqEvent_Bashable::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqEvent_Bashable.GetObjClassVersion");

	UOLSeqEvent_Bashable_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqEvent_CSAActivated.Toggled
// (Defined, Event, Public)

void UOLSeqEvent_CSAActivated::Toggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqEvent_CSAActivated.Toggled");

	UOLSeqEvent_CSAActivated_Toggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSeqEvent_Door.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqEvent_Door::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqEvent_Door.GetObjClassVersion");

	UOLSeqEvent_Door_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOLGFxMoviePlayer::OnProfileWriteComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete");

	UOLGFxMoviePlayer_OnProfileWriteComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGFxMoviePlayer.SaveProfile
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (OptionalParm, Parm, NeedCtorLink)
// class AOLPlayerController*     PlayerToSave                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLGFxMoviePlayer::SaveProfile(const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate, class AOLPlayerController* PlayerToSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.SaveProfile");

	UOLGFxMoviePlayer_SaveProfile_Params params;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;
	params.PlayerToSave = PlayerToSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface
// (Final, Defined, Static, Public)
// Parameters:
// TScriptInterface<class UOnlinePlayerInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UOnlinePlayerInterface> UOLGFxMoviePlayer::STATIC_GetOnlinePlayerInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface");

	UOLGFxMoviePlayer_GetOnlinePlayerInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGFxMoviePlayer.MuteSoundThemes
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           bMute                          (Parm)

void UOLGFxMoviePlayer::MuteSoundThemes(bool bMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.MuteSoundThemes");

	UOLGFxMoviePlayer_MuteSoundThemes_Params params;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGFxMoviePlayer.GetGame
// (Defined, Static, Public)
// Parameters:
// class AOLGame*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLGame* UOLGFxMoviePlayer::STATIC_GetGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.GetGame");

	UOLGFxMoviePlayer_GetGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGFxMoviePlayer.GetOLPC
// (Defined, Public)
// Parameters:
// class AOLPlayerController*     ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLPlayerController* UOLGFxMoviePlayer::GetOLPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.GetOLPC");

	UOLGFxMoviePlayer_GetOLPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIMessage.SetPCQTELabels
// (Defined, Event, Public)
// Parameters:
// struct FString                 upStr                          (Parm, NeedCtorLink)
// struct FString                 leftStr                        (Parm, NeedCtorLink)
// struct FString                 downStr                        (Parm, NeedCtorLink)
// struct FString                 rightStr                       (Parm, NeedCtorLink)

void UOLUIMessage::SetPCQTELabels(const struct FString& upStr, const struct FString& leftStr, const struct FString& downStr, const struct FString& rightStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.SetPCQTELabels");

	UOLUIMessage_SetPCQTELabels_Params params;
	params.upStr = upStr;
	params.leftStr = leftStr;
	params.downStr = downStr;
	params.rightStr = rightStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIMessage.SetSubtitleHeight
// (Defined, Public)
// Parameters:
// bool                           hight                          (Parm)

void UOLUIMessage::SetSubtitleHeight(bool hight)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.SetSubtitleHeight");

	UOLUIMessage_SetSubtitleHeight_Params params;
	params.hight = hight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIMessage.TryClose
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIMessage::TryClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.TryClose");

	UOLUIMessage_TryClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIMessage.TryCloseInternal
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIMessage::TryCloseInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.TryCloseInternal");

	UOLUIMessage_TryCloseInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIMessage.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIMessage::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.WidgetInitialized");

	UOLUIMessage_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIMessage.SetMessage
// (Defined, Public)
// Parameters:
// TEnumAsByte<EHUDMessageType>   MessageType                    (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOLUIMessage::SetMessage(TEnumAsByte<EHUDMessageType> MessageType, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.SetMessage");

	UOLUIMessage_SetMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIMessage.SetVisible
// (Defined, Public)
// Parameters:
// bool                           bVisible                       (Parm)

void UOLUIMessage::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.SetVisible");

	UOLUIMessage_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIMessage.OnClose
// (Public)

void UOLUIMessage::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.OnClose");

	UOLUIMessage_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIMessage.Start
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIMessage::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.Start");

	UOLUIMessage_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.NotifyAltEnter
// (Defined, Public)

void UOLUIFrontEnd::NotifyAltEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.NotifyAltEnter");

	UOLUIFrontEnd_NotifyAltEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.GetLocalizedString
// (Defined, Public)
// Parameters:
// struct FString                 Category                       (Parm, NeedCtorLink)
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 File                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd::GetLocalizedString(const struct FString& Category, const struct FString& KeyName, const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.GetLocalizedString");

	UOLUIFrontEnd_GetLocalizedString_Params params;
	params.Category = Category;
	params.KeyName = KeyName;
	params.File = File;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey
// (Defined, Public)
// Parameters:
// struct FString                 KeyNameString                  (Parm, NeedCtorLink)
// int                            ConfigType                     (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd::GetGamepadActionBoundToKey(const struct FString& KeyNameString, int ConfigType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey");

	UOLUIFrontEnd_GetGamepadActionBoundToKey_Params params;
	params.KeyNameString = KeyNameString;
	params.ConfigType = ConfigType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.HasInitializedGamma
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd::HasInitializedGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.HasInitializedGamma");

	UOLUIFrontEnd_HasInitializedGamma_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName
// (Defined, Public)
// Parameters:
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd::GetFriendlyKeyBindingName(const struct FString& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName");

	UOLUIFrontEnd_GetFriendlyKeyBindingName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.StartKeyBindingCapture
// (Defined, Public)

void UOLUIFrontEnd::StartKeyBindingCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.StartKeyBindingCapture");

	UOLUIFrontEnd_StartKeyBindingCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.FilterButtonInput");

	UOLUIFrontEnd_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.WidgetInitialized");

	UOLUIFrontEnd_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.ConfigureTargetView
// (Defined, Public)
// Parameters:
// class UOLUIFrontEnd_View*      targetView                     (Parm)

void UOLUIFrontEnd::ConfigureTargetView(class UOLUIFrontEnd_View* targetView)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.ConfigureTargetView");

	UOLUIFrontEnd_ConfigureTargetView_Params params;
	params.targetView = targetView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.ConfigureView
// (Final, Defined, Public)
// Parameters:
// class UOLUIFrontEnd_View*      InView                         (Parm)
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)

void UOLUIFrontEnd::ConfigureView(class UOLUIFrontEnd_View* InView, const struct FName& WidgetName, const struct FName& WidgetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.ConfigureView");

	UOLUIFrontEnd_ConfigureView_Params params;
	params.InView = InView;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.PopViewStub
// (Final, Defined, Public)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UOLUIFrontEnd::PopViewStub()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.PopViewStub");

	UOLUIFrontEnd_PopViewStub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.PopView
// (Defined, Public)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UOLUIFrontEnd::PopView()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.PopView");

	UOLUIFrontEnd_PopView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.PushViewByName
// (Final, Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   TargetViewName                 (Parm)
// class UOLUIFrontEnd_Screen*    ParentView                     (OptionalParm, Parm)

void UOLUIFrontEnd::PushViewByName(const struct FName& TargetViewName, class UOLUIFrontEnd_Screen* ParentView)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.PushViewByName");

	UOLUIFrontEnd_PushViewByName_Params params;
	params.TargetViewName = TargetViewName;
	params.ParentView = ParentView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.PushView
// (Defined, Public)
// Parameters:
// class UOLUIFrontEnd_View*      targetView                     (Parm, CoerceParm)

void UOLUIFrontEnd::PushView(class UOLUIFrontEnd_View* targetView)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.PushView");

	UOLUIFrontEnd_PushView_Params params;
	params.targetView = targetView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.LoadView
// (Final, Defined, Public, HasDefaults)
// Parameters:
// struct FViewInfo               InViewInfo                     (Parm, NeedCtorLink)

void UOLUIFrontEnd::LoadView(const struct FViewInfo& InViewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.LoadView");

	UOLUIFrontEnd_LoadView_Params params;
	params.InViewInfo = InViewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.LoadViews
// (Final, Defined, Public)

void UOLUIFrontEnd::LoadViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.LoadViews");

	UOLUIFrontEnd_LoadViews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.CleanViews
// (Public)

void UOLUIFrontEnd::CleanViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.CleanViews");

	UOLUIFrontEnd_CleanViews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.ConfigFrontEnd
// (Final, Defined, Public)

void UOLUIFrontEnd::ConfigFrontEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.ConfigFrontEnd");

	UOLUIFrontEnd_ConfigFrontEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged
// (Defined, Public)

void UOLUIFrontEnd::OnKeyBindingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged");

	UOLUIFrontEnd_OnKeyBindingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.AddCaptureKeys
// (Defined, Public)

void UOLUIFrontEnd::AddCaptureKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.AddCaptureKeys");

	UOLUIFrontEnd_AddCaptureKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.OnClose
// (Defined, Event, Public)

void UOLUIFrontEnd::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.OnClose");

	UOLUIFrontEnd_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.Start
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.Start");

	UOLUIFrontEnd_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_View.InputTypeChanged
// (Event, Public)

void UOLUIFrontEnd_View::InputTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.InputTypeChanged");

	UOLUIFrontEnd_View_InputTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.ASHideDialogs
// (Defined, Public)

void UOLUIFrontEnd_View::ASHideDialogs()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.ASHideDialogs");

	UOLUIFrontEnd_View_ASHideDialogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCancelled
// (Public)

void UOLUIFrontEnd_View::OnKeyBindingCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnKeyBindingCancelled");

	UOLUIFrontEnd_View_OnKeyBindingCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured
// (Public)
// Parameters:
// struct FName                   KeyName                        (Parm)

void UOLUIFrontEnd_View::OnKeyBindingCaptured(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured");

	UOLUIFrontEnd_View_OnKeyBindingCaptured_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_View::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.FilterButtonInput");

	UOLUIFrontEnd_View_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_View.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_View::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.WidgetInitialized");

	UOLUIFrontEnd_View_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_View.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_View::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.back");

	UOLUIFrontEnd_View_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_View.NotifyAltEnter
// (Public)

void UOLUIFrontEnd_View::NotifyAltEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.NotifyAltEnter");

	UOLUIFrontEnd_View_NotifyAltEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_View::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnViewDeactivated");

	UOLUIFrontEnd_View_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnViewActivated
// (Public)

void UOLUIFrontEnd_View::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnViewActivated");

	UOLUIFrontEnd_View_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnTopMostView
// (HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_View::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnTopMostView");

	UOLUIFrontEnd_View_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnViewLoaded
// (Public)

void UOLUIFrontEnd_View::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnViewLoaded");

	UOLUIFrontEnd_View_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized");

	UOLUIFrontEnd_Screen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.LocalizeGeneric
// (Defined, Public)
// Parameters:
// struct FString                 SectionName                    (Parm, NeedCtorLink)
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_Screen::LocalizeGeneric(const struct FString& SectionName, const struct FString& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.LocalizeGeneric");

	UOLUIFrontEnd_Screen_LocalizeGeneric_Params params;
	params.SectionName = SectionName;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative
// (Defined, Public)
// Parameters:
// struct FString                 SectionName                    (Parm, NeedCtorLink)
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_Screen::LocalizeNarrative(const struct FString& SectionName, const struct FString& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative");

	UOLUIFrontEnd_Screen_LocalizeNarrative_Params params;
	params.SectionName = SectionName;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::IsDLCInstalled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled");

	UOLUIFrontEnd_Screen_IsDLCInstalled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.IsPlaytest
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::IsPlaytest()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.IsPlaytest");

	UOLUIFrontEnd_Screen_IsPlaytest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.IsDemo
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::IsDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.IsDemo");

	UOLUIFrontEnd_Screen_IsDemo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.IsTopMostView
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::IsTopMostView()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.IsTopMostView");

	UOLUIFrontEnd_Screen_IsTopMostView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_MainMenu.TickGameDownload
// (Defined, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UOLUIFrontEnd_MainMenu::TickGameDownload(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.TickGameDownload");

	UOLUIFrontEnd_MainMenu_TickGameDownload_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.Tick
// (Defined, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UOLUIFrontEnd_MainMenu::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.Tick");

	UOLUIFrontEnd_MainMenu_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ASInitButtonFocus
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::ASInitButtonFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ASInitButtonFocus");

	UOLUIFrontEnd_MainMenu_ASInitButtonFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::ASShowNewGameIntroText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText");

	UOLUIFrontEnd_MainMenu_ASShowNewGameIntroText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ShowDeleteRecordingsConfirmationDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::ShowDeleteRecordingsConfirmationDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ShowDeleteRecordingsConfirmationDialog");

	UOLUIFrontEnd_MainMenu_ShowDeleteRecordingsConfirmationDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ShowMessageDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::ShowMessageDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ShowMessageDialog");

	UOLUIFrontEnd_MainMenu_ShowMessageDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_MainMenu::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized");

	UOLUIFrontEnd_MainMenu_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_MainMenu.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_MainMenu::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.FilterButtonInput");

	UOLUIFrontEnd_MainMenu_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ShowPressStartScreen
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::ShowPressStartScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ShowPressStartScreen");

	UOLUIFrontEnd_MainMenu_ShowPressStartScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ForceShowLoginUI
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)

void UOLUIFrontEnd_MainMenu::ForceShowLoginUI(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ForceShowLoginUI");

	UOLUIFrontEnd_MainMenu_ForceShowLoginUI_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnPressStart
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)

void UOLUIFrontEnd_MainMenu::OnPressStart(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnPressStart");

	UOLUIFrontEnd_MainMenu_OnPressStart_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnDingoUserInitialized
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLUIFrontEnd_MainMenu::OnDingoUserInitialized(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnDingoUserInitialized");

	UOLUIFrontEnd_MainMenu_OnDingoUserInitialized_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnButtonClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick");

	UOLUIFrontEnd_MainMenu_OnButtonClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.SetMainMenuText
// (Defined, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::SetMainMenuText(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.SetMainMenuText");

	UOLUIFrontEnd_MainMenu_SetMainMenuText_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::PopulateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons");

	UOLUIFrontEnd_MainMenu_PopulateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_MainMenu::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.back");

	UOLUIFrontEnd_MainMenu_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnRecordingsButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnRecordingsButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnRecordingsButtonPress");

	UOLUIFrontEnd_MainMenu_OnRecordingsButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnExitButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress");

	UOLUIFrontEnd_MainMenu_OnExitButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnCreditsButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress");

	UOLUIFrontEnd_MainMenu_OnCreditsButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnOptionsButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress");

	UOLUIFrontEnd_MainMenu_OnOptionsButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.Select_Options
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::Select_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.Select_Options");

	UOLUIFrontEnd_MainMenu_Select_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnSaveListButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnSaveListButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnSaveListButtonPress");

	UOLUIFrontEnd_MainMenu_OnSaveListButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnLoadButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress");

	UOLUIFrontEnd_MainMenu_OnLoadButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnOK
// (Final, Defined, Private)

void UOLUIFrontEnd_MainMenu::OnOK()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnOK");

	UOLUIFrontEnd_MainMenu_OnOK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnOKButtonClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick");

	UOLUIFrontEnd_MainMenu_OnOKButtonClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.GoToNextIntroText
// (Final, Defined, Private)
// Parameters:
// struct FString                 NextText                       (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::GoToNextIntroText(const struct FString& NextText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.GoToNextIntroText");

	UOLUIFrontEnd_MainMenu_GoToNextIntroText_Params params;
	params.NextText = NextText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnChaptersButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress");

	UOLUIFrontEnd_MainMenu_OnChaptersButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnStartDLCButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress");

	UOLUIFrontEnd_MainMenu_OnStartDLCButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnStartButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress");

	UOLUIFrontEnd_MainMenu_OnStartButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLUIFrontEnd_MainMenu::GameLoadedCallback(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback");

	UOLUIFrontEnd_MainMenu_GameLoadedCallback_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame
// (Final, Defined, Private)

void UOLUIFrontEnd_MainMenu::StartNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame");

	UOLUIFrontEnd_MainMenu_StartNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.DingoRecordingStorageDialogResult
// (Defined, Public)
// Parameters:
// int                            Type                           (Parm)

void UOLUIFrontEnd_MainMenu::DingoRecordingStorageDialogResult(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.DingoRecordingStorageDialogResult");

	UOLUIFrontEnd_MainMenu_DingoRecordingStorageDialogResult_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::DifficultySelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected");

	UOLUIFrontEnd_MainMenu_DifficultySelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.TrySkipSaveScreen
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_MainMenu::TrySkipSaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.TrySkipSaveScreen");

	UOLUIFrontEnd_MainMenu_TrySkipSaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ShowGamertag
// (Defined, Public)
// Parameters:
// struct FString                 Gamertag                       (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::ShowGamertag(const struct FString& Gamertag)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ShowGamertag");

	UOLUIFrontEnd_MainMenu_ShowGamertag_Params params;
	params.Gamertag = Gamertag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.HideGametag
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::HideGametag()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.HideGametag");

	UOLUIFrontEnd_MainMenu_HideGametag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLUIFrontEnd_MainMenu::SaveLocationSelected(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected");

	UOLUIFrontEnd_MainMenu_SaveLocationSelected_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnBadCheckpointMsgAcknowledged
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::OnBadCheckpointMsgAcknowledged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnBadCheckpointMsgAcknowledged");

	UOLUIFrontEnd_MainMenu_OnBadCheckpointMsgAcknowledged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ShowBadCheckpointMsg
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::ShowBadCheckpointMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ShowBadCheckpointMsg");

	UOLUIFrontEnd_MainMenu_ShowBadCheckpointMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnContinueButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress");

	UOLUIFrontEnd_MainMenu_OnContinueButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_MainMenu::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView");

	UOLUIFrontEnd_MainMenu_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded");

	UOLUIFrontEnd_MainMenu_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Credits::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized");

	UOLUIFrontEnd_Credits_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Credits.SetCreditsText
// (Defined, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void UOLUIFrontEnd_Credits::SetCreditsText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.SetCreditsText");

	UOLUIFrontEnd_Credits_SetCreditsText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Credits::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.FilterButtonInput");

	UOLUIFrontEnd_Credits_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Credits.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Credits::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.Press_Back");

	UOLUIFrontEnd_Credits_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_Credits::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated");

	UOLUIFrontEnd_Credits_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.StartCredits
// (Defined, Public)
// Parameters:
// bool                           bQuickstart                    (Parm)

void UOLUIFrontEnd_Credits::StartCredits(bool bQuickstart)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.StartCredits");

	UOLUIFrontEnd_Credits_StartCredits_Params params;
	params.bQuickstart = bQuickstart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_Credits::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.OnTopMostView");

	UOLUIFrontEnd_Credits_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFadeOut
// (Defined, Public)

void UOLUIFrontEnd_Credits::OnCreditsFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.OnCreditsFadeOut");

	UOLUIFrontEnd_Credits_OnCreditsFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished
// (Defined, Public)

void UOLUIFrontEnd_Credits::OnCreditsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished");

	UOLUIFrontEnd_Credits_OnCreditsFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Credits::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.back");

	UOLUIFrontEnd_Credits_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_CleanText.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_CleanText::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.FilterButtonInput");

	UOLUIFrontEnd_CleanText_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_CleanText.Tick
// (Defined, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UOLUIFrontEnd_CleanText::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.Tick");

	UOLUIFrontEnd_CleanText_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.PreviousPage
// (Defined, Public)

void UOLUIFrontEnd_CleanText::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.PreviousPage");

	UOLUIFrontEnd_CleanText_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.NextPage
// (Defined, Public)

void UOLUIFrontEnd_CleanText::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.NextPage");

	UOLUIFrontEnd_CleanText_NextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.InitializeFocusControl
// (Defined, Public)
// Parameters:
// bool                           bIsController                  (Parm)

void UOLUIFrontEnd_CleanText::InitializeFocusControl(bool bIsController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.InitializeFocusControl");

	UOLUIFrontEnd_CleanText_InitializeFocusControl_Params params;
	params.bIsController = bIsController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.InputTypeChanged
// (Defined, Event, Public)

void UOLUIFrontEnd_CleanText::InputTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.InputTypeChanged");

	UOLUIFrontEnd_CleanText_InputTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.InitializeText
// (Defined, Public)
// Parameters:
// struct FString                 In_Title                       (Parm, NeedCtorLink)
// struct FString                 In_Text                        (Parm, NeedCtorLink)
// bool                           In_bIsGospel                   (Parm)

void UOLUIFrontEnd_CleanText::InitializeText(const struct FString& In_Title, const struct FString& In_Text, bool In_bIsGospel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.InitializeText");

	UOLUIFrontEnd_CleanText_InitializeText_Params params;
	params.In_Title = In_Title;
	params.In_Text = In_Text;
	params.In_bIsGospel = In_bIsGospel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_CleanText::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.back");

	UOLUIFrontEnd_CleanText_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_CleanText.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_CleanText::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.Press_Back");

	UOLUIFrontEnd_CleanText_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_CleanText::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.WidgetInitialized");

	UOLUIFrontEnd_CleanText_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_CleanText.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_CleanText::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.OnViewLoaded");

	UOLUIFrontEnd_CleanText_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.InitializeView
// (Defined, Public)

void UOLUIFrontEnd_CleanText::InitializeView()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.InitializeView");

	UOLUIFrontEnd_CleanText_InitializeView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_CleanText.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_CleanText::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_CleanText.OnTopMostView");

	UOLUIFrontEnd_CleanText_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Console.WidgetInitialized");

	UOLUIFrontEnd_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Console.CleanViews
// (Defined, Public)

void UOLUIFrontEnd_Console::CleanViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Console.CleanViews");

	UOLUIFrontEnd_Console_CleanViews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton
// (Final, Defined, Private)
// Parameters:
// bool                           bDisable                       (Parm)

void UOLUIFrontEnd_GammaScreen_Console::ASDisableBackButton(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton");

	UOLUIFrontEnd_GammaScreen_Console_ASDisableBackButton_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUIFrontEnd_GammaScreen_Console::GetCurrentGammaSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting");

	UOLUIFrontEnd_GammaScreen_Console_GetCurrentGammaSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::IsGammaInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized");

	UOLUIFrontEnd_GammaScreen_Console_IsGammaInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized");

	UOLUIFrontEnd_GammaScreen_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Tick
// (Defined, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UOLUIFrontEnd_GammaScreen_Console::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Tick");

	UOLUIFrontEnd_GammaScreen_Console_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput");

	UOLUIFrontEnd_GammaScreen_Console_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Change_Slider(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider");

	UOLUIFrontEnd_GammaScreen_Console_Change_Slider_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen_Console::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop");

	UOLUIFrontEnd_GammaScreen_Console_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen_Console::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated");

	UOLUIFrontEnd_GammaScreen_Console_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.back");

	UOLUIFrontEnd_GammaScreen_Console_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back");

	UOLUIFrontEnd_GammaScreen_Console_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen_Console::OnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept");

	UOLUIFrontEnd_GammaScreen_Console_OnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Press_Accept(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept");

	UOLUIFrontEnd_GammaScreen_Console_Press_Accept_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_GammaScreen_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView");

	UOLUIFrontEnd_GammaScreen_Console_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen_Console::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded");

	UOLUIFrontEnd_GammaScreen_Console_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.InputTypeChanged
// (Defined, Event, Public)

void UOLUIFrontEnd_RecordingMenu::InputTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.InputTypeChanged");

	UOLUIFrontEnd_RecordingMenu_InputTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.selectConsole
// (Defined, Public)
// Parameters:
// struct FString                 Console                        (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingMenu::selectConsole(const struct FString& Console)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.selectConsole");

	UOLUIFrontEnd_RecordingMenu_selectConsole_Params params;
	params.Console = Console;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.InitializeFocusControl
// (Defined, Public)
// Parameters:
// bool                           bIsController                  (Parm)

void UOLUIFrontEnd_RecordingMenu::InitializeFocusControl(bool bIsController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.InitializeFocusControl");

	UOLUIFrontEnd_RecordingMenu_InitializeFocusControl_Params params;
	params.bIsController = bIsController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingMenu::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.FilterButtonInput");

	UOLUIFrontEnd_RecordingMenu_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingMenu::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.WidgetInitialized");

	UOLUIFrontEnd_RecordingMenu_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.LinkButtons
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::LinkButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.LinkButtons");

	UOLUIFrontEnd_RecordingMenu_LinkButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetPlayButton
// (Defined, Public)
// Parameters:
// class UGFxClikWidget*          Widget                         (Parm)

void UOLUIFrontEnd_RecordingMenu::OnSetPlayButton(class UGFxClikWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetPlayButton");

	UOLUIFrontEnd_RecordingMenu_OnSetPlayButton_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetPreviousButton
// (Defined, Public)
// Parameters:
// class UGFxClikWidget*          Widget                         (Parm)

void UOLUIFrontEnd_RecordingMenu::OnSetPreviousButton(class UGFxClikWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetPreviousButton");

	UOLUIFrontEnd_RecordingMenu_OnSetPreviousButton_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetNextButton
// (Defined, Public)
// Parameters:
// class UGFxClikWidget*          Widget                         (Parm)

void UOLUIFrontEnd_RecordingMenu::OnSetNextButton(class UGFxClikWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetNextButton");

	UOLUIFrontEnd_RecordingMenu_OnSetNextButton_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetBackButton
// (Defined, Public)
// Parameters:
// class UGFxClikWidget*          Widget                         (Parm)

void UOLUIFrontEnd_RecordingMenu::OnSetBackButton(class UGFxClikWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetBackButton");

	UOLUIFrontEnd_RecordingMenu_OnSetBackButton_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.SetLargeImageSize
// (Defined, Event, Public)
// Parameters:
// float                          SizeX                          (Parm)
// float                          SizeY                          (Parm)
// float                          PosX                           (Parm)
// float                          PosY                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingMenu::SetLargeImageSize(float SizeX, float SizeY, float PosX, float PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.SetLargeImageSize");

	UOLUIFrontEnd_RecordingMenu_SetLargeImageSize_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;
	params.PosX = PosX;
	params.PosY = PosY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.PlayEvent
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::PlayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.PlayEvent");

	UOLUIFrontEnd_RecordingMenu_PlayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Play
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingMenu::Press_Play(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Play");

	UOLUIFrontEnd_RecordingMenu_Press_Play_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.PauseVideo
// (Defined, Public)
// Parameters:
// bool                           bForce                         (Parm)

void UOLUIFrontEnd_RecordingMenu::PauseVideo(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.PauseVideo");

	UOLUIFrontEnd_RecordingMenu_PauseVideo_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.StopVideo
// (Defined, Public)
// Parameters:
// bool                           bClearVO                       (Parm)

void UOLUIFrontEnd_RecordingMenu::StopVideo(bool bClearVO)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.StopVideo");

	UOLUIFrontEnd_RecordingMenu_StopVideo_Params params;
	params.bClearVO = bClearVO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.PlayVideo
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::PlayVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.PlayVideo");

	UOLUIFrontEnd_RecordingMenu_PlayVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Previous
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingMenu::Press_Previous(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Previous");

	UOLUIFrontEnd_RecordingMenu_Press_Previous_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.Previous
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.Previous");

	UOLUIFrontEnd_RecordingMenu_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Next
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingMenu::Press_Next(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Next");

	UOLUIFrontEnd_RecordingMenu_Press_Next_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.Next
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.Next");

	UOLUIFrontEnd_RecordingMenu_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingMenu::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Back");

	UOLUIFrontEnd_RecordingMenu_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingMenu::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.back");

	UOLUIFrontEnd_RecordingMenu_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.ShowChangeConfirmationDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 noButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingMenu::ShowChangeConfirmationDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& noButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.ShowChangeConfirmationDialog");

	UOLUIFrontEnd_RecordingMenu_ShowChangeConfirmationDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.noButtonLabel = noButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.ResetFocus
// (Final, Defined, Private)
// Parameters:
// int                            focusIndex                     (Parm)

void UOLUIFrontEnd_RecordingMenu::ResetFocus(int focusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.ResetFocus");

	UOLUIFrontEnd_RecordingMenu_ResetFocus_Params params;
	params.focusIndex = focusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.Tick
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOLUIFrontEnd_RecordingMenu::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.Tick");

	UOLUIFrontEnd_RecordingMenu_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.ShowFullSizeImage
// (Defined, Public)
// Parameters:
// struct FString                 ImageURL                       (Parm, NeedCtorLink)
// bool                           bIsVideo                       (Parm)

void UOLUIFrontEnd_RecordingMenu::ShowFullSizeImage(const struct FString& ImageURL, bool bIsVideo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.ShowFullSizeImage");

	UOLUIFrontEnd_RecordingMenu_ShowFullSizeImage_Params params;
	params.ImageURL = ImageURL;
	params.bIsVideo = bIsVideo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnRecordingClicked
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UOLUIFrontEnd_RecordingMenu::OnRecordingClicked(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnRecordingClicked");

	UOLUIFrontEnd_RecordingMenu_OnRecordingClicked_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.GetFullSizeTexture
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UOLUIFrontEnd_RecordingMenu::GetFullSizeTexture(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.GetFullSizeTexture");

	UOLUIFrontEnd_RecordingMenu_GetFullSizeTexture_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnRecordingTypeClicked
// (Defined, Public)
// Parameters:
// int                            TypeIndex                      (Parm)

void UOLUIFrontEnd_RecordingMenu::OnRecordingTypeClicked(int TypeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnRecordingTypeClicked");

	UOLUIFrontEnd_RecordingMenu_OnRecordingTypeClicked_Params params;
	params.TypeIndex = TypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.PopulateChapterList
// (Defined, Public)
// Parameters:
// bool                           bFocus                         (Parm)

void UOLUIFrontEnd_RecordingMenu::PopulateChapterList(bool bFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.PopulateChapterList");

	UOLUIFrontEnd_RecordingMenu_PopulateChapterList_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.InitiateThumbnailTextures
// (Defined, Public)
// Parameters:
// unsigned char                  Type                           (Parm)
// int                            ThumbSortingType               (Parm)

void UOLUIFrontEnd_RecordingMenu::InitiateThumbnailTextures(unsigned char Type, int ThumbSortingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.InitiateThumbnailTextures");

	UOLUIFrontEnd_RecordingMenu_InitiateThumbnailTextures_Params params;
	params.Type = Type;
	params.ThumbSortingType = ThumbSortingType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.InitiateCategoriesTextures
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::InitiateCategoriesTextures()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.InitiateCategoriesTextures");

	UOLUIFrontEnd_RecordingMenu_InitiateCategoriesTextures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.Pop
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.Pop");

	UOLUIFrontEnd_RecordingMenu_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewDeactivated");

	UOLUIFrontEnd_RecordingMenu_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewActivated");

	UOLUIFrontEnd_RecordingMenu_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_RecordingMenu::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewLoaded");

	UOLUIFrontEnd_RecordingMenu_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.SetLocalizedStrings
// (Defined, Public)
// Parameters:
// struct FString                 Play                           (Parm, NeedCtorLink)
// struct FString                 Pause                          (Parm, NeedCtorLink)
// struct FString                 cleanText                      (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingMenu::SetLocalizedStrings(const struct FString& Play, const struct FString& Pause, const struct FString& cleanText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.SetLocalizedStrings");

	UOLUIFrontEnd_RecordingMenu_SetLocalizedStrings_Params params;
	params.Play = Play;
	params.Pause = Pause;
	params.cleanText = cleanText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingMenu.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_RecordingMenu::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingMenu.OnTopMostView");

	UOLUIFrontEnd_RecordingMenu_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.Tick
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOLUIFrontEnd_ChapterSelection::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.Tick");

	UOLUIFrontEnd_ChapterSelection_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.LinkButtons
// (Defined, Public)

void UOLUIFrontEnd_ChapterSelection::LinkButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.LinkButtons");

	UOLUIFrontEnd_ChapterSelection_LinkButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnSetBackButton
// (Defined, Public)
// Parameters:
// class UGFxClikWidget*          Widget                         (Parm)

void UOLUIFrontEnd_ChapterSelection::OnSetBackButton(class UGFxClikWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnSetBackButton");

	UOLUIFrontEnd_ChapterSelection_OnSetBackButton_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_ChapterSelection::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized");

	UOLUIFrontEnd_ChapterSelection_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.GetCurrentSectionCount
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_ChapterSelection::GetCurrentSectionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.GetCurrentSectionCount");

	UOLUIFrontEnd_ChapterSelection_GetCurrentSectionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.GetMaxSectionCount
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_ChapterSelection::GetMaxSectionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.GetMaxSectionCount");

	UOLUIFrontEnd_ChapterSelection_GetMaxSectionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back");

	UOLUIFrontEnd_ChapterSelection_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_ChapterSelection::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.back");

	UOLUIFrontEnd_ChapterSelection_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnGameTypeSelect
// (Defined, Public)
// Parameters:
// int                            Type                           (Parm)

void UOLUIFrontEnd_ChapterSelection::OnGameTypeSelect(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnGameTypeSelect");

	UOLUIFrontEnd_ChapterSelection_OnGameTypeSelect_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.SaveLocationSelected
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLUIFrontEnd_ChapterSelection::SaveLocationSelected(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.SaveLocationSelected");

	UOLUIFrontEnd_ChapterSelection_SaveLocationSelected_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnChapterClicked
// (Defined, Public)
// Parameters:
// int                            chapterIndex                   (Parm)
// int                            buttonIndex                    (Parm)

void UOLUIFrontEnd_ChapterSelection::OnChapterClicked(int chapterIndex, int buttonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnChapterClicked");

	UOLUIFrontEnd_ChapterSelection_OnChapterClicked_Params params;
	params.chapterIndex = chapterIndex;
	params.buttonIndex = buttonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.ShowChangeConfirmationDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 noButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::ShowChangeConfirmationDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& noButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.ShowChangeConfirmationDialog");

	UOLUIFrontEnd_ChapterSelection_ShowChangeConfirmationDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.noButtonLabel = noButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.ResetFocus
// (Final, Defined, Private)
// Parameters:
// int                            focusIndex                     (Parm)

void UOLUIFrontEnd_ChapterSelection::ResetFocus(int focusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.ResetFocus");

	UOLUIFrontEnd_ChapterSelection_ResetFocus_Params params;
	params.focusIndex = focusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnSectionClicked
// (Defined, Public)
// Parameters:
// int                            SectionIndex                   (Parm)

void UOLUIFrontEnd_ChapterSelection::OnSectionClicked(int SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnSectionClicked");

	UOLUIFrontEnd_ChapterSelection_OnSectionClicked_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList
// (Defined, Public)
// Parameters:
// bool                           bFocus                         (Parm)

void UOLUIFrontEnd_ChapterSelection::PopulateChapterList(bool bFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList");

	UOLUIFrontEnd_ChapterSelection_PopulateChapterList_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.InitializeFocusControl
// (Defined, Public)
// Parameters:
// bool                           bIsController                  (Parm)

void UOLUIFrontEnd_ChapterSelection::InitializeFocusControl(bool bIsController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.InitializeFocusControl");

	UOLUIFrontEnd_ChapterSelection_InitializeFocusControl_Params params;
	params.bIsController = bIsController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.InputTypeChanged
// (Defined, Event, Public)

void UOLUIFrontEnd_ChapterSelection::InputTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.InputTypeChanged");

	UOLUIFrontEnd_ChapterSelection_InputTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.GetChapterName
// (Defined, Static, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_ChapterSelection::STATIC_GetChapterName(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.GetChapterName");

	UOLUIFrontEnd_ChapterSelection_GetChapterName_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.HasValidChapters
// (Defined, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_ChapterSelection::STATIC_HasValidChapters()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.HasValidChapters");

	UOLUIFrontEnd_ChapterSelection_HasValidChapters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.Pop
// (Defined, Public)

void UOLUIFrontEnd_ChapterSelection::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.Pop");

	UOLUIFrontEnd_ChapterSelection_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_ChapterSelection::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewActivated");

	UOLUIFrontEnd_ChapterSelection_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_ChapterSelection::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewLoaded");

	UOLUIFrontEnd_ChapterSelection_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.selectConsole
// (Defined, Public)
// Parameters:
// struct FString                 Console                        (Parm, NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::selectConsole(const struct FString& Console)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.selectConsole");

	UOLUIFrontEnd_ChapterSelection_selectConsole_Params params;
	params.Console = Console;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_ChapterSelection::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView");

	UOLUIFrontEnd_ChapterSelection_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_DifficultySelectionScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized");

	UOLUIFrontEnd_DifficultySelectionScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::ASShowConfirmInsaneDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog");

	UOLUIFrontEnd_DifficultySelectionScreen_ASShowConfirmInsaneDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_DifficultySelectionScreen::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput");

	UOLUIFrontEnd_DifficultySelectionScreen_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop
// (Defined, Public)

void UOLUIFrontEnd_DifficultySelectionScreen::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop");

	UOLUIFrontEnd_DifficultySelectionScreen_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_DifficultySelectionScreen::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated");

	UOLUIFrontEnd_DifficultySelectionScreen_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame
// (Defined, Public)

void UOLUIFrontEnd_DifficultySelectionScreen::ProceedToStartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame");

	UOLUIFrontEnd_DifficultySelectionScreen_ProceedToStartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_DifficultySelectionScreen::OnConfirmedInsane(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane");

	UOLUIFrontEnd_DifficultySelectionScreen_OnConfirmedInsane_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Insane(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Insane_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Nightmare(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Nightmare_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Hard(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Hard_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Normal(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Normal_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Easy
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Easy(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Easy");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Easy_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_DifficultySelectionScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView");

	UOLUIFrontEnd_DifficultySelectionScreen_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_DifficultySelectionScreen::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded");

	UOLUIFrontEnd_DifficultySelectionScreen_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCancelled
// (Final, Defined, Private)

void UOLUIFrontEnd_Options::ASOnKeyBindingCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCancelled");

	UOLUIFrontEnd_Options_ASOnKeyBindingCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured
// (Final, Defined, Private)
// Parameters:
// struct FString                 KeyName                        (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ASOnKeyBindingCaptured(const struct FString& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured");

	UOLUIFrontEnd_Options_ASOnKeyBindingCaptured_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ShowMessageDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog");

	UOLUIFrontEnd_Options_ShowMessageDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ShowKeyBindingConflictDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog");

	UOLUIFrontEnd_Options_ShowKeyBindingConflictDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ShowChangeConfirmationDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog");

	UOLUIFrontEnd_Options_ShowChangeConfirmationDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.FilterButtonInput");

	UOLUIFrontEnd_Options_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOLUIFrontEnd_Options::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Tick");

	UOLUIFrontEnd_Options_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.CloseDialog
// (Defined, Public)
// Parameters:
// int                            buttonIdx                      (Parm)

void UOLUIFrontEnd_Options::CloseDialog(int buttonIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.CloseDialog");

	UOLUIFrontEnd_Options_CloseDialog_Params params;
	params.buttonIdx = buttonIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.moveTab
// (Defined, Public)
// Parameters:
// int                            Side                           (Parm)

void UOLUIFrontEnd_Options::moveTab(int Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.moveTab");

	UOLUIFrontEnd_Options_moveTab_Params params;
	params.Side = Side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.NotifyAltEnter
// (Defined, Public)

void UOLUIFrontEnd_Options::NotifyAltEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.NotifyAltEnter");

	UOLUIFrontEnd_Options_NotifyAltEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnSliderChanged
// (Defined, Public)
// Parameters:
// int                            ProfileSettingId               (Parm)
// float                          SliderValue                    (Parm)

void UOLUIFrontEnd_Options::OnSliderChanged(int ProfileSettingId, float SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnSliderChanged");

	UOLUIFrontEnd_Options_OnSliderChanged_Params params;
	params.ProfileSettingId = ProfileSettingId;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts
// (Defined, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UOLUIFrontEnd_Options::GetKeyBindingConflicts()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts");

	UOLUIFrontEnd_Options_GetKeyBindingConflicts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList
// (Defined, Public)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UOLUIFrontEnd_Options::GetCurrentGFxList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList");

	UOLUIFrontEnd_Options_GetCurrentGFxList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally
// (Defined, Public)
// Parameters:
// int                            ConfigIndex                    (Parm)

void UOLUIFrontEnd_Options::SetGamepadConfigExternally(int ConfigIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally");

	UOLUIFrontEnd_Options_SetGamepadConfigExternally_Params params;
	params.ConfigIndex = ConfigIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetGamepadConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig");

	UOLUIFrontEnd_Options_GetGamepadConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCancelled
// (Defined, Public)

void UOLUIFrontEnd_Options::OnKeyBindingCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCancelled");

	UOLUIFrontEnd_Options_OnKeyBindingCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured
// (Defined, Public)
// Parameters:
// struct FName                   KeyName                        (Parm)

void UOLUIFrontEnd_Options::OnKeyBindingCaptured(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured");

	UOLUIFrontEnd_Options_OnKeyBindingCaptured_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetBorderlessFullscreenOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetBorderlessFullscreenOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetBorderlessFullscreenOptionIndex");

	UOLUIFrontEnd_Options_GetBorderlessFullscreenOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetFullscreenOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex");

	UOLUIFrontEnd_Options_GetFullscreenOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetResolutionOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex");

	UOLUIFrontEnd_Options_GetResolutionOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.WidgetInitialized");

	UOLUIFrontEnd_Options_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SetSelectionFocus
// (Defined, Public)
// Parameters:
// class UGFxObject*              MovieClip                      (Parm)

void UOLUIFrontEnd_Options::SetSelectionFocus(class UGFxObject* MovieClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SetSelectionFocus");

	UOLUIFrontEnd_Options_SetSelectionFocus_Params params;
	params.MovieClip = MovieClip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetOLProfile
// (Defined, Public)
// Parameters:
// class UOLProfileSettings*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLProfileSettings* UOLUIFrontEnd_Options::GetOLProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetOLProfile");

	UOLUIFrontEnd_Options_GetOLProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile
// (Defined, Public)
// Parameters:
// bool                           bApplyOnly                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::SaveSettingsToProfile(bool bApplyOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile");

	UOLUIFrontEnd_Options_SaveSettingsToProfile_Params params;
	params.bApplyOnly = bApplyOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::HasAnyPropertyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged");

	UOLUIFrontEnd_Options_HasAnyPropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList
// (Defined, Public, HasDefaults)
// Parameters:
// class UGFxObject*              OptionsList                    (Parm)
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::HasPropertyChangedInList(class UGFxObject* OptionsList, TArray<struct FOptionInfo> OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList");

	UOLUIFrontEnd_Options_HasPropertyChangedInList_Params params;
	params.OptionsList = OptionsList;
	params.OptionInfos = OptionInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList
// (Defined, Public, HasDefaults)
// Parameters:
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::SaveSettingsForList(TArray<struct FOptionInfo> OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList");

	UOLUIFrontEnd_Options_SaveSettingsForList_Params params;
	params.OptionInfos = OptionInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.TabChanged
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::TabChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.TabChanged");

	UOLUIFrontEnd_Options_TabChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList
// (Defined, Public, HasOutParms)
// Parameters:
// class UGFxObject*              OptionsList                    (Parm)
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, OutParm, NeedCtorLink)

void UOLUIFrontEnd_Options::StoreOptionValuesForList(class UGFxObject* OptionsList, TArray<struct FOptionInfo>* OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList");

	UOLUIFrontEnd_Options_StoreOptionValuesForList_Params params;
	params.OptionsList = OptionsList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionInfos != nullptr)
		*OptionInfos = params.OptionInfos;
}


// Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt
// (Defined, Public, HasDefaults)
// Parameters:
// class UGFxObject*              OptionsList                    (Parm)
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_Options::GetOptionValueStringAt(class UGFxObject* OptionsList, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt");

	UOLUIFrontEnd_Options_GetOptionValueStringAt_Params params;
	params.OptionsList = OptionsList;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt
// (Defined, Public, HasDefaults)
// Parameters:
// class UGFxObject*              OptionsList                    (Parm)
// int                            Index                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUIFrontEnd_Options::GetOptionValueAt(class UGFxObject* OptionsList, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt");

	UOLUIFrontEnd_Options_GetOptionValueAt_Params params;
	params.OptionsList = OptionsList;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::SetDefaultOptionValuesForList(TArray<struct FOptionInfo>* OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList");

	UOLUIFrontEnd_Options_SetDefaultOptionValuesForList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionInfos != nullptr)
		*OptionInfos = params.OptionInfos;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, OutParm, NeedCtorLink)

void UOLUIFrontEnd_Options::FillOptionValuesForList(TArray<struct FOptionInfo>* OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList");

	UOLUIFrontEnd_Options_FillOptionValuesForList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionInfos != nullptr)
		*OptionInfos = params.OptionInfos;
}


// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile
// (Defined, Public)

void UOLUIFrontEnd_Options::FillOptionValuesFromProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile");

	UOLUIFrontEnd_Options_FillOptionValuesFromProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions
// (Defined, Public)

void UOLUIFrontEnd_Options::PopulateControlsOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions");

	UOLUIFrontEnd_Options_PopulateControlsOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions
// (Defined, Public)

void UOLUIFrontEnd_Options::PopulateGraphicsOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions");

	UOLUIFrontEnd_Options_PopulateGraphicsOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions
// (Defined, Public)
// Parameters:
// bool                           bIgnoreFocus                   (Parm)

void UOLUIFrontEnd_Options::PopulateGeneralOptions(bool bIgnoreFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions");

	UOLUIFrontEnd_Options_PopulateGeneralOptions_Params params;
	params.bIgnoreFocus = bIgnoreFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetLabelTextFromOptionInfo
// (Defined, Public)
// Parameters:
// struct FOptionInfo             Info                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_Options::GetLabelTextFromOptionInfo(const struct FOptionInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetLabelTextFromOptionInfo");

	UOLUIFrontEnd_Options_GetLabelTextFromOptionInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption
// (Defined, Public)
// Parameters:
// struct FOptionInfo             CurrentOptionInfo              (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UOLUIFrontEnd_Options::GetObjectFromOption(const struct FOptionInfo& CurrentOptionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption");

	UOLUIFrontEnd_Options_GetObjectFromOption_Params params;
	params.CurrentOptionInfo = CurrentOptionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons
// (Defined, Public)

void UOLUIFrontEnd_Options::PopulateTabButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons");

	UOLUIFrontEnd_Options_PopulateTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.UseInsaneGameplayOptions
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::UseInsaneGameplayOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.UseInsaneGameplayOptions");

	UOLUIFrontEnd_Options_UseInsaneGameplayOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.UseMainMenuGameplayOptions
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::UseMainMenuGameplayOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.UseMainMenuGameplayOptions");

	UOLUIFrontEnd_Options_UseMainMenuGameplayOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton
// (Defined, Public)
// Parameters:
// int                            PSID                           (Parm)

void UOLUIFrontEnd_Options::Press_OptionItemButton(int PSID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton");

	UOLUIFrontEnd_Options_Press_OptionItemButton_Params params;
	params.PSID = PSID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.Press_Reset
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Reset(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_Reset");

	UOLUIFrontEnd_Options_Press_Reset_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.Press_Gamma
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Gamma(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_Gamma");

	UOLUIFrontEnd_Options_Press_Gamma_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_Back");

	UOLUIFrontEnd_Options_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnDiscardChanges
// (Defined, Public)
// Parameters:
// int                            bOk                            (Parm)

void UOLUIFrontEnd_Options::OnDiscardChanges(int bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnDiscardChanges");

	UOLUIFrontEnd_Options_OnDiscardChanges_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_Options::OnDismissKeyBindingConflictDialog(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog");

	UOLUIFrontEnd_Options_OnDismissKeyBindingConflictDialog_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.Press_Apply
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Apply(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_Apply");

	UOLUIFrontEnd_Options_Press_Apply_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted
// (Defined, Public)

void UOLUIFrontEnd_Options::OnMustRestartAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted");

	UOLUIFrontEnd_Options_OnMustRestartAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen
// (Defined, Public)

void UOLUIFrontEnd_Options::ExitOptionsScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen");

	UOLUIFrontEnd_Options_ExitOptionsScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.back");

	UOLUIFrontEnd_Options_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_Options::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnTopMostView");

	UOLUIFrontEnd_Options_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_Options::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnViewDeactivated");

	UOLUIFrontEnd_Options_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_Options::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnViewActivated");

	UOLUIFrontEnd_Options_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_Options::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnViewLoaded");

	UOLUIFrontEnd_Options_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_SaveLocationList::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.WidgetInitialized");

	UOLUIFrontEnd_SaveLocationList_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.SetupActionButtonString
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::SetupActionButtonString()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.SetupActionButtonString");

	UOLUIFrontEnd_SaveLocationList_SetupActionButtonString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.GetHighlightedIndex
// (Defined, Public)
// Parameters:
// bool                           bAllowSelectedIndex            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_SaveLocationList::GetHighlightedIndex(bool bAllowSelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.GetHighlightedIndex");

	UOLUIFrontEnd_SaveLocationList_GetHighlightedIndex_Params params;
	params.bAllowSelectedIndex = bAllowSelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.ASTraceFocus
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::ASTraceFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.ASTraceFocus");

	UOLUIFrontEnd_SaveLocationList_ASTraceFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.ASInitButtonFocus
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::ASInitButtonFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.ASInitButtonFocus");

	UOLUIFrontEnd_SaveLocationList_ASInitButtonFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.ASShowConfirmDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_SaveLocationList::ASShowConfirmDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.ASShowConfirmDialog");

	UOLUIFrontEnd_SaveLocationList_ASShowConfirmDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowMessageDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_SaveLocationList::ShowMessageDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.ShowMessageDialog");

	UOLUIFrontEnd_SaveLocationList_ShowMessageDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_SaveLocationList::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.back");

	UOLUIFrontEnd_SaveLocationList_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_SaveLocationList::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.Press_Back");

	UOLUIFrontEnd_SaveLocationList_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_SaveLocationList::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.FilterButtonInput");

	UOLUIFrontEnd_SaveLocationList_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.ReloadScreen
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::ReloadScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.ReloadScreen");

	UOLUIFrontEnd_SaveLocationList_ReloadScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.OnConfirmedDelete
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_SaveLocationList::OnConfirmedDelete(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.OnConfirmedDelete");

	UOLUIFrontEnd_SaveLocationList_OnConfirmedDelete_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.OnConfirmedOverwrite
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_SaveLocationList::OnConfirmedOverwrite(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.OnConfirmedOverwrite");

	UOLUIFrontEnd_SaveLocationList_OnConfirmedOverwrite_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.OnMessageDialogAcknowledged
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::OnMessageDialogAcknowledged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.OnMessageDialogAcknowledged");

	UOLUIFrontEnd_SaveLocationList_OnMessageDialogAcknowledged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowContentNotAvailaible
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::ShowContentNotAvailaible()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.ShowContentNotAvailaible");

	UOLUIFrontEnd_SaveLocationList_ShowContentNotAvailaible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowBadCheckpointMsg
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::ShowBadCheckpointMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.ShowBadCheckpointMsg");

	UOLUIFrontEnd_SaveLocationList_ShowBadCheckpointMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.OnButtonClick
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_SaveLocationList::OnButtonClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.OnButtonClick");

	UOLUIFrontEnd_SaveLocationList_OnButtonClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.ResetFocus
// (Final, Defined, Private)
// Parameters:
// int                            focusIndex                     (Parm)

void UOLUIFrontEnd_SaveLocationList::ResetFocus(int focusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.ResetFocus");

	UOLUIFrontEnd_SaveLocationList_ResetFocus_Params params;
	params.focusIndex = focusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.PopulateSaves
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::PopulateSaves()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.PopulateSaves");

	UOLUIFrontEnd_SaveLocationList_PopulateSaves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.GetSaveFileDisplayName
// (Defined, Public, HasDefaults)
// Parameters:
// struct FSaveFileInfo           SaveFile                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_SaveLocationList::GetSaveFileDisplayName(const struct FSaveFileInfo& SaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.GetSaveFileDisplayName");

	UOLUIFrontEnd_SaveLocationList_GetSaveFileDisplayName_Params params;
	params.SaveFile = SaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.GetDifficultyStr
// (Defined, Public)
// Parameters:
// int                            Difficulty                     (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_SaveLocationList::GetDifficultyStr(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.GetDifficultyStr");

	UOLUIFrontEnd_SaveLocationList_GetDifficultyStr_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.Pop
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.Pop");

	UOLUIFrontEnd_SaveLocationList_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.InputTypeChanged
// (Defined, Event, Public)

void UOLUIFrontEnd_SaveLocationList::InputTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.InputTypeChanged");

	UOLUIFrontEnd_SaveLocationList_InputTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_SaveLocationList::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.OnViewDeactivated");

	UOLUIFrontEnd_SaveLocationList_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_SaveLocationList::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.OnTopMostView");

	UOLUIFrontEnd_SaveLocationList_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.selectConsole
// (Defined, Public)
// Parameters:
// struct FString                 Console                        (Parm, NeedCtorLink)

void UOLUIFrontEnd_SaveLocationList::selectConsole(const struct FString& Console)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.selectConsole");

	UOLUIFrontEnd_SaveLocationList_selectConsole_Params params;
	params.Console = Console;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_SaveLocationList::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.OnViewLoaded");

	UOLUIFrontEnd_SaveLocationList_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_SaveLocationList.TrySkipScreen
// (Defined, Public)
// Parameters:
// struct FString                 StartCPName                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_SaveLocationList::TrySkipScreen(const struct FString& StartCPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_SaveLocationList.TrySkipScreen");

	UOLUIFrontEnd_SaveLocationList_TrySkipScreen_Params params;
	params.StartCPName = StartCPName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_PausedPrompt.SetMessage
// (Defined, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOLUIFrontEnd_PausedPrompt::SetMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PausedPrompt.SetMessage");

	UOLUIFrontEnd_PausedPrompt_SetMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PausedPrompt.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_PausedPrompt::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PausedPrompt.FilterButtonInput");

	UOLUIFrontEnd_PausedPrompt_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_PausedPrompt.OnPressContinue
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)

void UOLUIFrontEnd_PausedPrompt::OnPressContinue(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PausedPrompt.OnPressContinue");

	UOLUIFrontEnd_PausedPrompt_OnPressContinue_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PausedPrompt.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_PausedPrompt::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PausedPrompt.OnTopMostView");

	UOLUIFrontEnd_PausedPrompt_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PausedPrompt.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_PausedPrompt::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PausedPrompt.OnViewLoaded");

	UOLUIFrontEnd_PausedPrompt_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_PauseMenu::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput");

	UOLUIFrontEnd_PauseMenu_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_PauseMenu::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized");

	UOLUIFrontEnd_PauseMenu_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.Tick
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOLUIFrontEnd_PauseMenu::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.Tick");

	UOLUIFrontEnd_PauseMenu_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::ASShowConfirmExitDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog");

	UOLUIFrontEnd_PauseMenu_ASShowConfirmExitDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.CloseDialog
// (Defined, Public)
// Parameters:
// int                            buttonIdx                      (Parm)

void UOLUIFrontEnd_PauseMenu::CloseDialog(int buttonIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.CloseDialog");

	UOLUIFrontEnd_PauseMenu_CloseDialog_Params params;
	params.buttonIdx = buttonIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.SetSelectionFocus
// (Defined, Public)
// Parameters:
// class UGFxObject*              MovieClip                      (Parm)

void UOLUIFrontEnd_PauseMenu::SetSelectionFocus(class UGFxObject* MovieClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.SetSelectionFocus");

	UOLUIFrontEnd_PauseMenu_SetSelectionFocus_Params params;
	params.MovieClip = MovieClip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_PauseMenu::OnExitConfirmed(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed");

	UOLUIFrontEnd_PauseMenu_OnExitConfirmed_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnExitToMenuButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress");

	UOLUIFrontEnd_PauseMenu_OnExitToMenuButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_PauseMenu::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.back");

	UOLUIFrontEnd_PauseMenu_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLUIFrontEnd_PauseMenu::OnSaveCompleted(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted");

	UOLUIFrontEnd_PauseMenu_OnSaveCompleted_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnSaveButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress");

	UOLUIFrontEnd_PauseMenu_OnSaveButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnOptionsButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress");

	UOLUIFrontEnd_PauseMenu_OnOptionsButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnReturnButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress");

	UOLUIFrontEnd_PauseMenu_OnReturnButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnButtonClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick");

	UOLUIFrontEnd_PauseMenu_OnButtonClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons
// (Defined, Public)

void UOLUIFrontEnd_PauseMenu::PopulateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons");

	UOLUIFrontEnd_PauseMenu_PopulateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_PauseMenu::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView");

	UOLUIFrontEnd_PauseMenu_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_PauseMenu::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded");

	UOLUIFrontEnd_PauseMenu_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUIFrontEnd_GammaScreen::GetCurrentGammaSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting");

	UOLUIFrontEnd_GammaScreen_GetCurrentGammaSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen::IsGammaInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized");

	UOLUIFrontEnd_GammaScreen_IsGammaInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized");

	UOLUIFrontEnd_GammaScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput");

	UOLUIFrontEnd_GammaScreen_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Change_Slider(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider");

	UOLUIFrontEnd_GammaScreen_Change_Slider_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.Pop
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.Pop");

	UOLUIFrontEnd_GammaScreen_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated");

	UOLUIFrontEnd_GammaScreen_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.back");

	UOLUIFrontEnd_GammaScreen_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back");

	UOLUIFrontEnd_GammaScreen_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen::OnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept");

	UOLUIFrontEnd_GammaScreen_OnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Press_Accept(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept");

	UOLUIFrontEnd_GammaScreen_Press_Accept_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_GammaScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView");

	UOLUIFrontEnd_GammaScreen_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded");

	UOLUIFrontEnd_GammaScreen_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels
// (Final, Defined, Private)
// Parameters:
// int                            ConfigType                     (Parm)

void UOLUIFrontEnd_GamepadScreen::ASUpdateGamepadLabels(int ConfigType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels");

	UOLUIFrontEnd_GamepadScreen_ASUpdateGamepadLabels_Params params;
	params.ConfigType = ConfigType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::TabChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged");

	UOLUIFrontEnd_GamepadScreen_TabChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GamepadScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized");

	UOLUIFrontEnd_GamepadScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen::PopulateTabButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons");

	UOLUIFrontEnd_GamepadScreen_PopulateTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.Pop
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.Pop");

	UOLUIFrontEnd_GamepadScreen_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_GamepadScreen::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated");

	UOLUIFrontEnd_GamepadScreen_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back");

	UOLUIFrontEnd_GamepadScreen_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::Press_Accept(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept");

	UOLUIFrontEnd_GamepadScreen_Press_Accept_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_GamepadScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView");

	UOLUIFrontEnd_GamepadScreen_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded");

	UOLUIFrontEnd_GamepadScreen_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized");

	UOLUIFrontEnd_Options_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options_Console::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput");

	UOLUIFrontEnd_Options_Console_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options_Console::GetFullscreenOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex");

	UOLUIFrontEnd_Options_Console_GetFullscreenOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options_Console::GetResolutionOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex");

	UOLUIFrontEnd_Options_Console_GetResolutionOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options_Console::HasResolutionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged");

	UOLUIFrontEnd_Options_Console_HasResolutionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.TabChanged
// (Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options_Console::TabChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.TabChanged");

	UOLUIFrontEnd_Options_Console_TabChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.ResetConsoleOptions
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::ResetConsoleOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.ResetConsoleOptions");

	UOLUIFrontEnd_Options_Console_ResetConsoleOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Reset(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset");

	UOLUIFrontEnd_Options_Console_Press_Reset_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::FillOptionValuesFromProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile");

	UOLUIFrontEnd_Options_Console_FillOptionValuesFromProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions
// (Public)

void UOLUIFrontEnd_Options_Console::PopulateControlsOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions");

	UOLUIFrontEnd_Options_Console_PopulateControlsOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::PopulateTabButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons");

	UOLUIFrontEnd_Options_Console_PopulateTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Apply(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply");

	UOLUIFrontEnd_Options_Console_Press_Apply_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton
// (Defined, Public)
// Parameters:
// int                            PSID                           (Parm)

void UOLUIFrontEnd_Options_Console::Press_OptionItemButton(int PSID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton");

	UOLUIFrontEnd_Options_Console_Press_OptionItemButton_Params params;
	params.PSID = PSID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Gamma(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma");

	UOLUIFrontEnd_Options_Console_Press_Gamma_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options_Console::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.back");

	UOLUIFrontEnd_Options_Console_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_Options_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView");

	UOLUIFrontEnd_Options_Console_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.OnViewDeactivated");

	UOLUIFrontEnd_Options_Console_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated");

	UOLUIFrontEnd_Options_Console_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded");

	UOLUIFrontEnd_Options_Console_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels
// (Final, Defined, Private)
// Parameters:
// int                            ConfigType                     (Parm)

void UOLUIFrontEnd_GamepadScreen_Console::ASUpdateGamepadLabels(int ConfigType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels");

	UOLUIFrontEnd_GamepadScreen_Console_ASUpdateGamepadLabels_Params params;
	params.ConfigType = ConfigType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen_Console::TabChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged");

	UOLUIFrontEnd_GamepadScreen_Console_TabChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GamepadScreen_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized");

	UOLUIFrontEnd_GamepadScreen_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GamepadScreen_Console::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput");

	UOLUIFrontEnd_GamepadScreen_Console_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen_Console::PopulateTabButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons");

	UOLUIFrontEnd_GamepadScreen_Console_PopulateTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen_Console::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop");

	UOLUIFrontEnd_GamepadScreen_Console_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_GamepadScreen_Console::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated");

	UOLUIFrontEnd_GamepadScreen_Console_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GamepadScreen_Console::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back");

	UOLUIFrontEnd_GamepadScreen_Console_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_GamepadScreen_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView");

	UOLUIFrontEnd_GamepadScreen_Console_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen_Console::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded");

	UOLUIFrontEnd_GamepadScreen_Console_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIPopupScreen.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIPopupScreen::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIPopupScreen.FilterButtonInput");

	UOLUIPopupScreen_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIPopupScreen.OnClose
// (Public)

void UOLUIPopupScreen::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIPopupScreen.OnClose");

	UOLUIPopupScreen_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIPopupScreen.Start
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIPopupScreen::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIPopupScreen.Start");

	UOLUIPopupScreen_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
