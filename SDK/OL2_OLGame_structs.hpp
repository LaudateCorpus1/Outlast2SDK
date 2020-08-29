#pragma once

// Outlast2 (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_NUMBER_OF_DAMAGE_COLUMN                            3

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OLGame.OLTypes.ECamcorderHudType
enum class ECamcorderHudType : uint8_t
{
	CHT_None                       = 0,
	CHT_Fullscreen                 = 1,
	CHT_RenderTarget               = 2,
	CHT_Files                      = 3,
	CHT_MAX                        = 4
};


// Enum OLGame.OLTypes.FootstepDecalType
enum class EFootstepDecalType : uint8_t
{
	FDT_None                       = 0,
	FDT_Blood                      = 1,
	FDT_Snow                       = 2,
	FDT_MAX                        = 3
};


// Enum OLGame.OLTypes.BotCollisionType
enum class EBotCollisionType : uint8_t
{
	BCT_None                       = 0,
	BCT_HeadToHead                 = 1,
	BCT_SideCollision              = 2,
	BCT_TakeOver                   = 3,
	BCT_Merge                      = 4,
	BCT_MAX                        = 5
};


// Enum OLGame.OLTypes.ExoticTeleportType
enum class ExoticTeleportType : uint8_t
{
	ETT_LockerToWardrobe           = 0,
	ETT_SqueezeToLocker            = 1,
	ETT_LedgeHangToLedgeHang       = 2,
	ETT_SqueezeToSqueeze           = 3,
	ETT_MAX                        = 4
};


// Enum OLGame.OLTypes.DeathGripVariantType
enum class EDeathGripVariantType : uint8_t
{
	DGVT_Generic                   = 0,
	DGVT_CrawlerA                  = 1,
	DGVT_CrawlerB                  = 2,
	DGVT_MAX                       = 3
};


// Enum OLGame.OLTypes.PushableMaterial
enum class EPushableMaterial : uint8_t
{
	PM_Wood                        = 0,
	PM_Metal                       = 1,
	PM_MineCart                    = 2,
	PM_WoodenCart                  = 3,
	PM_BarnDoor                    = 4,
	PM_RollingCart                 = 5,
	PM_BigBucket                   = 6,
	PM_MAX                         = 7
};


// Enum OLGame.OLTypes.GamepadShakeDirection
enum class EGamepadShakeDirection : uint8_t
{
	GSD_Undefined                  = 0,
	GSD_Left                       = 1,
	GSD_Right                      = 2,
	GSD_MAX                        = 3
};


// Enum OLGame.OLTypes.KismetLogEventType
enum class EKismetLogEventType : uint8_t
{
	KLET_NodeActivated             = 0,
	KLET_NodeDeactivated           = 1,
	KLET_EventFired                = 2,
	KLET_Message                   = 3,
	KLET_MAX                       = 4
};


// Enum OLGame.OLTypes.ENVEvent
enum class ENVEvent : uint8_t
{
	NVE_CamcorderActivated         = 0,
	NVE_CamcorderDeactivated       = 1,
	NVE_DefaultViewSelected        = 2,
	NVE_PassiveNVSelected          = 3,
	NVE_ActiveNVSelected           = 4,
	NVE_OutOfBatteries             = 5,
	NVE_MAX                        = 6
};


// Enum OLGame.OLTypes.PairedWalkAnimStyle
enum class EPairedWalkAnimStyle : uint8_t
{
	PWAS_Default                   = 0,
	PWAS_HurtingLynn               = 1,
	PWAS_HurtingPregnant           = 2,
	PWAS_JessicaLookAt             = 3,
	PWAS_MAX                       = 4
};


// Enum OLGame.OLTypes.PairedWalkScenario
enum class EPairedWalkScenario : uint8_t
{
	PWS_PregnantLynn               = 0,
	PWS_YoungBlakeAndJessica       = 1,
	PWS_LeadingLynn                = 2,
	PWS_MAX                        = 3
};


// Enum OLGame.OLTypes.PairedWalkType
enum class EPairedWalkType : uint8_t
{
	PWT_HeroRelative               = 0,
	PWT_LeadingPartner             = 1,
	PWT_MAX                        = 2
};


// Enum OLGame.OLTypes.EAIMusicState
enum class EAIMusicState : uint8_t
{
	EAIMS_None                     = 0,
	EAIMS_Patrol                   = 1,
	EAIMS_Investigate              = 2,
	EAIMS_Chase                    = 3,
	EAIMS_MAX                      = 4
};


// Enum OLGame.OLTypes.EBotDestSelectionHeuristic
enum class EBotDestSelectionHeuristic : uint8_t
{
	BDSH_ClosestToBot              = 0,
	BDSH_FarthestFromBot           = 1,
	BDSH_FarthestFromPlayer        = 2,
	BDSH_MAX                       = 3
};


// Enum OLGame.OLTypes.EVOContext
enum class EVOContext : uint8_t
{
	EVOC_Undefined                 = 0,
	EVOC_Kismet                    = 1,
	EVOC_AfterSpawn                = 2,
	EVOC_ReactToDisturbance        = 3,
	EVOC_InvestigateDisturbance    = 4,
	EVOC_ReactToPlayerBeforeChase  = 5,
	EVOC_ReactNoChase              = 6,
	EVOC_StartChaseNoReaction      = 7,
	EVOC_StartChase                = 8,
	EVOC_StartChaseMultiple        = 9,
	EVOC_JoinChase                 = 10,
	EVOC_LostSightOfPlayer         = 11,
	EVOC_ReachedLastKnownPosition  = 12,
	EVOC_ReachedLastKnownPositionMultiple = 13,
	EVOC_ReachedInvestigationPoint = 14,
	EVOC_FinishedInvestigatingPoint = 15,
	EVOC_InvestigationGiveUp       = 16,
	EVOC_InvestigationGiveUpMultiple = 17,
	EVOC_AttackPlayer              = 18,
	EVOC_KillingPlayer             = 19,
	EVOC_DeathGripStarted          = 20,
	EVOC_DeathGripPlayerEscaped    = 21,
	EVOC_ChaseClosingInToPlayer    = 22,
	EVOC_ChaseReachedLeashLimit    = 23,
	EVOC_SawPlayerEnterHidingSpot  = 24,
	EVOC_FoundHiddenPlayer         = 25,
	EVOC_PatrolRandom              = 26,
	EVOC_InvestigateRandom         = 27,
	EVOC_ChaseRandom               = 28,
	EVOC_PatrolQuestion            = 29,
	EVOC_PatrolAnswer              = 30,
	EVOC_InvestigateQuestion       = 31,
	EVOC_InvestigateAnswer         = 32,
	EVOC_MAX                       = 33
};


// Enum OLGame.OLTypes.EDeathCountLoopMode
enum class EDeathCountLoopMode : uint8_t
{
	ELM_Random                     = 0,
	ELM_Loop                       = 1,
	ELM_RepeatLast                 = 2,
	ELM_MAX                        = 3
};


// Enum OLGame.OLTypes.OutlastGameType
enum class EOutlastGameType : uint8_t
{
	OGT_Outlast2                   = 0,
	OGT_Demo                       = 1,
	OGT_MAX                        = 2
};


// Enum OLGame.OLTypes.EForceFeedbackWaveformTemplate
enum class EForceFeedbackWaveformTemplate : uint8_t
{
	FFW_None                       = 0,
	FFW_A                          = 1,
	FFW_B                          = 2,
	FFW_C                          = 3,
	FFW_D                          = 4,
	FFW_E                          = 5,
	FFW_MAX                        = 6
};


// Enum OLGame.OLTypes.EDamageType
enum class EDamageType : uint8_t
{
	EDTP_None                      = 0,
	EDTP_Default                   = 1,
	EDTP_GenericHit                = 2,
	EDTP_Electrified               = 3,
	EDTP_Fire                      = 4,
	EDTP_Fell                      = 5,
	EDTP_Scripted                  = 6,
	EDTP_SpikyPlant                = 7,
	EDTP_OutOfAir                  = 8,
	EDTP_Arrow                     = 9,
	EDTP_Throwable                 = 10,
	EDTP_CrucifiedHands            = 11,
	EDTP_Custom                    = 12,
	EDTP_Debug                     = 13,
	EDTP_MAX                       = 14
};


// Enum OLGame.OLPawn.ESpecialMoveType
enum class ESpecialMoveType : uint8_t
{
	SMT_None                       = 0,
	SMT_Crouch                     = 1,
	SMT_Uncrouch                   = 2,
	SMT_JumpOnSpot                 = 3,
	SMT_Dodge                      = 4,
	SMT_BigLanding                 = 5,
	SMT_JumpOver                   = 6,
	SMT_JumpOverAndGrabLedge       = 7,
	SMT_SlideOver                  = 8,
	SMT_ClimbUpObstacle            = 9,
	SMT_ClimbUpWall                = 10,
	SMT_ClimbOverWall              = 11,
	SMT_ClimbUpToCrawl             = 12,
	SMT_StepUpAndLand              = 13,
	SMT_EnterLookBack              = 14,
	SMT_ExitLookBack               = 15,
	SMT_GrabLedgeFromGround        = 16,
	SMT_GrabLedgeFromAir           = 17,
	SMT_LedgeHangTransition        = 18,
	SMT_ClimbUpLedge               = 19,
	SMT_DropFromLedge              = 20,
	SMT_GrabAndClimb               = 21,
	SMT_EnterLedgeWalk             = 22,
	SMT_ExitLedgeWalk              = 23,
	SMT_LedgeWalkTransition        = 24,
	SMT_JumpFromLedgeWalk          = 25,
	SMT_StepOffFromLedgeWalk       = 26,
	SMT_EnterSqueeze               = 27,
	SMT_ExitSqueeze                = 28,
	SMT_AutomaticSqueeze           = 29,
	SMT_SqueezeReload              = 30,
	SMT_EnterDoorInteraction       = 31,
	SMT_OpenDoorInstant            = 32,
	SMT_OpenDoorPartial            = 33,
	SMT_TryOpenLockedDoor          = 34,
	SMT_KnockOnDoor                = 35,
	SMT_RunThroughDoor             = 36,
	SMT_CloseDoor                  = 37,
	SMT_CloseDoorPositionned       = 38,
	SMT_ClearClosingDoor           = 39,
	SMT_DoorClosedFromOtherSide    = 40,
	SMT_OpenLockerFromOutside      = 41,
	SMT_EnterLocker                = 42,
	SMT_ExitLocker                 = 43,
	SMT_ExitOpenLocker             = 44,
	SMT_EnterBed                   = 45,
	SMT_ExitBed                    = 46,
	SMT_BedReload                  = 47,
	SMT_EnterLadderFromGround      = 48,
	SMT_EnterLadderFromAbove       = 49,
	SMT_ExitLadderOnGround         = 50,
	SMT_ExitLadderOnTop            = 51,
	SMT_DropFromLadder             = 52,
	SMT_GrabLadderFromAir          = 53,
	SMT_PickupObject               = 54,
	SMT_CSA                        = 55,
	SMT_EnterStruggle              = 56,
	SMT_ExitStruggle               = 57,
	SMT_KilledInStruggle           = 58,
	SMT_StartPushingObject         = 59,
	SMT_StopPushingObject          = 60,
	SMT_PushFromLedgeProcedural    = 61,
	SMT_PushFromLedgeAnimated      = 62,
	SMT_EnterContextualLean        = 63,
	SMT_ExitContextualLean         = 64,
	SMT_ExitContextualLeanForward  = 65,
	SMT_ContextualLeanCrouch       = 66,
	SMT_ContextualLeanUncrouch     = 67,
	SMT_ContextualLeanInsideTransition = 68,
	SMT_SlideToCrouch              = 69,
	SMT_SlideToFreeCrawl           = 70,
	SMT_SlideToConstrainedCrawl    = 71,
	SMT_SlideUnder                 = 72,
	SMT_SlideToLedge               = 73,
	SMT_SlideUnderBed              = 74,
	SMT_EnterCrawl                 = 75,
	SMT_ExitCrawl                  = 76,
	SMT_EnterAutoCrawl             = 77,
	SMT_OpenWindow                 = 78,
	SMT_CloseWindow                = 79,
	SMT_LockDoor                   = 80,
	SMT_UnlockDoor                 = 81,
	SMT_UnlockAndOpenDoor          = 82,
	SMT_EnterBasement              = 83,
	SMT_ExitBasement               = 84,
	SMT_EnterSlidingSlope          = 85,
	SMT_ExitSlidingSlope           = 86,
	SMT_EnterTripping              = 87,
	SMT_EnterHurting               = 88,
	SMT_EnterHidingBarrel          = 89,
	SMT_ExitHidingBarrel           = 90,
	SMT_EnterWardRobe              = 91,
	SMT_TryOpenLockedWardRobe      = 92,
	SMT_ExitWardRobe               = 93,
	SMT_AdjustPositionForPeekFromWardrobe = 94,
	SMT_EnterUnderwater            = 95,
	SMT_ExitUnderwater             = 96,
	SMT_AnimatedDeath              = 97,
	SMT_EnterRaft                  = 98,
	SMT_ExitRaft                   = 99,
	SMT_PutGlassesOn               = 100,
	SMT_BeamLanding                = 101,
	SMT_ClimbUpOnBeam              = 102,
	SMT_GetUpAfterPunt             = 103,
	SMT_OpenInventory              = 104,
	SMT_CloseInventory             = 105,
	SMT_UseBandage                 = 106,
	SMT_RaiseCamcorderHud          = 107,
	SMT_LowerCamcorderHud          = 108,
	SMT_PickupObjectForSnapshot    = 109,
	SMT_DropObjectFromSnapshot     = 110,
	SMT_RunStumble                 = 111,
	SMT_WatchCrucifiedHands        = 112,
	SMT_FallingDeath               = 113,
	SMT_HeroGrabbedFromSqueeze     = 114,
	SMT_HeroGrabbedFromLocker      = 115,
	SMT_HeroGrabbedFromBed         = 116,
	SMT_HeroGrabbedFromUnder       = 117,
	SMT_HeroGrabbedFromBarrel      = 118,
	SMT_HeroGrabbedFromWardrobe    = 119,
	SMT_HeroGrabbedUnderwater      = 120,
	SMT_HeroFatalityBarrel         = 121,
	SMT_HeroKilled                 = 122,
	SMT_HeroEnterDeathGrip         = 123,
	SMT_HeroDeathGripKill          = 124,
	SMT_HeroDeathGripEscape        = 125,
	SMT_HeroMultiKilled            = 126,
	SMT_HeroScriptedContact        = 127,
	SMT_HeroAttackedCrawling       = 128,
	SMT_Dying                      = 129,
	SMT_AttackNormal               = 130,
	SMT_AttackDirectional          = 131,
	SMT_AttackLocker               = 132,
	SMT_AttackBed                  = 133,
	SMT_AttackGrabUnder            = 134,
	SMT_AttackQuick                = 135,
	SMT_AttackBack                 = 136,
	SMT_AttackPush                 = 137,
	SMT_AttackCrawl                = 138,
	SMT_AttackCrouch               = 139,
	SMT_AttackBeam                 = 140,
	SMT_AttackBarrel               = 141,
	SMT_AttackWardrobe             = 142,
	SMT_AttackCrawlingPlayer       = 143,
	SMT_AttackArrow                = 144,
	SMT_AttackUnderwater           = 145,
	SMT_AttackSqueezeSuccess       = 146,
	SMT_AttackSqueezeFail          = 147,
	SMT_EnemyEnterDeathGrip        = 148,
	SMT_EnemyDeathGripKill         = 149,
	SMT_EnemyDeathGripEscape       = 150,
	SMT_EnemyMultiKillOwner        = 151,
	SMT_EnemyMultiKillAssitant     = 152,
	SMT_KillHero                   = 153,
	SMT_Investigate                = 154,
	SMT_InvestigateLocker          = 155,
	SMT_InvestigateBed             = 156,
	SMT_InvestigateWindow          = 157,
	SMT_InvestigateCrawl           = 158,
	SMT_InvestigateBarrel          = 159,
	SMT_InvestigateWardrobe        = 160,
	SMT_InvestigateConfessional    = 161,
	SMT_Bash                       = 162,
	SMT_BashDoorStart              = 163,
	SMT_BashDoorLoop               = 164,
	SMT_BashDoorFinish             = 165,
	SMT_BashDoorFailed             = 166,
	SMT_Avoiding                   = 167,
	SMT_Knockedback                = 168,
	SMT_TurnOnSpot                 = 169,
	SMT_AlignAnim                  = 170,
	SMT_SlideToNavMesh             = 171,
	SMT_Disturbed                  = 172,
	SMT_ReactToPlayer              = 173,
	SMT_EnemyVault                 = 174,
	SMT_EnemyJump                  = 175,
	SMT_EnemyPassAndCloseDoor      = 176,
	SMT_EnemyUnlockAndOpenDoor     = 177,
	SMT_EnemyOpenWindow            = 178,
	SMT_EnemyBashThroughWindow     = 179,
	SMT_WaypointAnim               = 180,
	SMT_EnemySlamDoor              = 181,
	SMT_EnemyEnterAmbush           = 182,
	SMT_EnemyExitAmbush            = 183,
	SMT_EnemyShootBlindArrow       = 184,
	SMT_EnemyShootScriptedArrow    = 185,
	SMT_EnemyEnterCrawl            = 186,
	SMT_EnemyExitCrawl             = 187,
	SMT_EnemyEnterBeamPerch        = 188,
	SMT_EnemyExitPerchToBeam       = 189,
	SMT_EnemyExitStairs            = 190,
	SMT_EnemyAnimatedUnspawn       = 191,
	SMT_EnemyEquipWeapon           = 192,
	SMT_EnemyUnequipWeapon         = 193,
	SMT_MartaWallBreak             = 194,
	SMT_InnerDemonScare            = 195,
	SMTTT_FixCompileErrorWithSteam_SMT_MAX = 196,
	ESpecialMoveType_MAX           = 197
};


// Enum OLGame.OLPawn.ELocomotionMode
enum class ELocomotionMode : uint8_t
{
	LM_Walk                        = 0,
	LM_Fall                        = 1,
	LM_SpecialMove                 = 2,
	LM_Ladder                      = 3,
	LM_LedgeHang                   = 4,
	LM_LedgeWalk                   = 5,
	LM_Squeeze                     = 6,
	LM_Door                        = 7,
	LM_Locker                      = 8,
	LM_Cinematic                   = 9,
	LM_Bed                         = 10,
	LM_LookBack                    = 11,
	LM_Struggle                    = 12,
	LM_Grabbed                     = 13,
	LM_Pushing                     = 14,
	LM_ContextualLean              = 15,
	LM_FreeCrawl                   = 16,
	LM_ConstrainedCrawl            = 17,
	LM_DeathGrip                   = 18,
	LM_SlidingSlope                = 19,
	LM_HiddenInBarrel              = 20,
	LM_HiddenInWardrobe            = 21,
	LM_PeekFromWardrobe            = 22,
	LM_Beam                        = 23,
	LM_HiddenUnderwater            = 24,
	LM_River                       = 25,
	LM_PairedWalk                  = 26,
	LM_Punt                        = 27,
	LM_Swimming                    = 28,
	LM_Inventory                   = 29,
	LM_CamcorderHud                = 30,
	LM_LookingAtObject             = 31,
	LM_HoldingBaby                 = 32,
	LM_MAX                         = 33
};


// Enum OLGame.OLPawn.EAdjustPositionTargetType
enum class EAdjustPositionTargetType : uint8_t
{
	APTT_TargetAtStart             = 0,
	APTT_TargetAtEnd               = 1,
	APTT_MAX                       = 2
};


// Enum OLGame.OLPawn.ProceduralAnimInterpType
enum class EProceduralAnimInterpType : uint8_t
{
	PAIT_Smooth                    = 0,
	PAIT_Linear                    = 1,
	PAIT_Decel                     = 2,
	PAIT_Accel                     = 3,
	PAIT_ExpDecel                  = 4,
	PAIT_ExpAccel                  = 5,
	PAIT_EaseOut                   = 6,
	PAIT_MAX                       = 7
};


// Enum OLGame.OLPawn.NoiseChannelType
enum class ENoiseChannelType : uint8_t
{
	NCT_None                       = 0,
	NCT_Movement                   = 1,
	NCT_Camcorder                  = 2,
	NCT_MAX                        = 3
};


// Enum OLGame.OLPawn.ClearanceTestType
enum class EClearanceTestType : uint8_t
{
	CTT_Navmesh                    = 0,
	CTT_Geometry                   = 1,
	CTT_MAX                        = 2
};


// Enum OLGame.OLPawn.EPhysicsLOD
enum class EPhysicsLOD : uint8_t
{
	PLOD_Complex                   = 0,
	PLOD_SimpleAdv                 = 1,
	PLOD_Simple                    = 2,
	PLOD_MAX                       = 3
};


// Enum OLGame.OLPawn.CameraRotationMode
enum class ECameraRotationMode : uint8_t
{
	CRM_UserControlled             = 0,
	CRM_Limited                    = 1,
	CRM_Spring                     = 2,
	CRM_FullyAnimated              = 3,
	CRM_Locked                     = 4,
	CRM_MAX                        = 5
};


// Enum OLGame.OLAIConfig.EWeapon
enum class EWeapon : uint8_t
{
	Weapon_None                    = 0,
	Weapon_Knife                   = 1,
	Weapon_Machete                 = 2,
	Weapon_Axe                     = 3,
	Weapon_MarthaMace              = 4,
	Weapon_HereticBoneSword        = 5,
	Weapon_CrawlerShiv             = 6,
	Weapon_MAX                     = 7
};


// Enum OLGame.OLAIConfig.EDoorClosingBehavior
enum class EDoorClosingBehavior : uint8_t
{
	DCB_Never                      = 0,
	DCB_Always                     = 1,
	DCB_Normal                     = 2,
	DCB_MAX                        = 3
};


// Enum OLGame.OLAIConfig.LookAtNoisePreset
enum class ELookAtNoisePreset : uint8_t
{
	LANP_None                      = 0,
	LANP_SlowScan                  = 1,
	LANP_FastScan                  = 2,
	LANP_SlowDrift                 = 3,
	LANP_FastDrift                 = 4,
	LANP_SlowRandom                = 5,
	LANP_FastRandom                = 6,
	LANP_Custom                    = 7,
	LANP_MAX                       = 8
};


// Enum OLGame.OLAIConfig.LookAtNoiseType
enum class ELookAtNoiseType : uint8_t
{
	LANT_Scan                      = 0,
	LANT_Drift                     = 1,
	LANT_Random                    = 2,
	LANT_MAX                       = 3
};


// Enum OLGame.OLEnemyPawn.MultiplicityConfig
enum class EMultiplicityConfig : uint8_t
{
	MC_ClassDefault                = 0,
	MC_Allow                       = 1,
	MC_UnspawnExisting             = 2,
	MC_DontSpawnIfExists           = 3,
	MC_MAX                         = 4
};


// Enum OLGame.OLEnemyPawn.InvestigationAnimType
enum class EInvestigationAnimType : uint8_t
{
	IAT_OnSpot                     = 0,
	IAT_Narrow                     = 1,
	IAT_Broad                      = 2,
	IAT_Full                       = 3,
	IAT_MAX                        = 4
};


// Enum OLGame.OLEnemyPawn.EFacialSystemState
enum class EFacialSystemState : uint8_t
{
	FSS_None                       = 0,
	FSS_IdleUnaware                = 1,
	FSS_IdleAlert                  = 2,
	FSS_Chase                      = 3,
	FSS_Investigate                = 4,
	FSS_MAX                        = 5
};


// Enum OLGame.OLEnemyPawn.EFacialAnimSource
enum class EFacialAnimSource : uint8_t
{
	FAS_Default                    = 0,
	FAS_Scripted                   = 1,
	FAS_SpecialMove                = 2,
	FAS_Other                      = 3,
	FAS_MAX                        = 4
};


// Enum OLGame.OLEnemyPawn.EAttackSide
enum class EAttackSide : uint8_t
{
	EAS_Left                       = 0,
	EAS_Right                      = 1,
	EAS_Middle                     = 2,
	EAS_MAX                        = 3
};


// Enum OLGame.OLEnemyPawn.EEnemyAnimStyle
enum class EEnemyAnimStyle : uint8_t
{
	EM_Unaware                     = 0,
	EM_Alert                       = 1,
	EM_MAX                         = 2
};


// Enum OLGame.OLEnemyPawn.StairsStyle
enum class EStairsStyle : uint8_t
{
	SS_Slow                        = 0,
	SS_Fast                        = 1,
	SS_Run                         = 2,
	SS_MAX                         = 3
};


// Enum OLGame.OLEnemyPawn.ERotationMode
enum class ERotationMode : uint8_t
{
	RM_FaceVelocity                = 0,
	RM_FaceTarget                  = 1,
	RM_Explicit                    = 2,
	RM_MAX                         = 3
};


// Enum OLGame.OLEnemyPawn.EAILocoMode
enum class EAILocoMode : uint8_t
{
	ALM_Normal                     = 0,
	ALM_FaceOff                    = 1,
	ALM_DeathGrip                  = 2,
	ALM_Stairs                     = 3,
	ALM_ConstrainedCrawl           = 4,
	ALM_FreeCrawl                  = 5,
	ALM_Scripted                   = 6,
	ALM_Disturbed                  = 7,
	ALM_Demonic                    = 8,
	ALM_DirectionalAttack          = 9,
	ALM_Beam                       = 10,
	ALM_Ambush                     = 11,
	ALM_Perched                    = 12,
	ALM_PairedWalk                 = 13,
	ALM_ConstrainedCrouch          = 14,
	ALM_MAX                        = 15
};


// Enum OLGame.OLEnemyPawn.EnemyType
enum class EnemyType : uint8_t
{
	ET_Generic                     = 0,
	ET_Martha                      = 1,
	ET_InnerDemon                  = 2,
	ET_Heretic                     = 3,
	ET_Syphilitic                  = 4,
	ET_Crawler                     = 5,
	ET_NickAndLaird                = 6,
	ET_Jessica                     = 7,
	ET_Lynn                        = 8,
	ET_MAX                         = 9
};


// Enum OLGame.OLAIAnimMapping.AIAnimId
enum class EAIAnimId : uint8_t
{
	AAI_Idle                       = 0,
	AAI_FacialUnaware              = 1,
	AAI_FacialAware                = 2,
	AAI_FacialChase                = 3,
	AAI_FacialSurprised            = 4,
	AAI_FacialInvestigate          = 5,
	AAI_EyesLookLR                 = 6,
	AAI_EyesLookUD                 = 7,
	AAI_MAX                        = 8
};


// Enum OLGame.ActorFactoryOLAI.EVOMappingsMergeType
enum class EVOMappingsMergeType : uint8_t
{
	VMMT_OverrideMatching          = 0,
	VMMT_AppendToExisting          = 1,
	VMMT_MAX                       = 2
};


// Enum OLGame.OLAIGroup.GroupFormation
enum class EGroupFormation : uint8_t
{
	GF_None                        = 0,
	GF_SideBySide                  = 1,
	GF_Natural                     = 2,
	GF_CheckerBoard                = 3,
	GF_StraightLine                = 4,
	GF_Columns                     = 5,
	GF_FlyingV                     = 6,
	GF_MAX                         = 7
};


// Enum OLGame.OLAIInvestigationPoint.IRotationAlignBehavior
enum class EIRotationAlignBehavior : uint8_t
{
	RAB_None                       = 0,
	RAB_LookAtThisPoint            = 1,
	RAB_LookAtTarget               = 2,
	RAB_LookInDirection            = 3,
	RAB_LookInAxisEitherDirection  = 4,
	RAB_LookInPlayerDirection      = 5,
	RAB_MAX                        = 6
};


// Enum OLGame.OLAnimBlendByEnemySpeedSimple.ESpeedType
enum class ESpeedType : uint8_t
{
	EAST_MinSpeed                  = 0,
	EAST_MedSpeed                  = 1,
	EAST_MaxSpeed                  = 2,
	EAST_RunSpeed                  = 3,
	EAST_MAX                       = 4
};


// Enum OLGame.OLAnimEnemyStruggle.EStruggleAnimPhase
enum class EStruggleAnimPhase : uint8_t
{
	SAP_StartIdle                  = 0,
	SAP_Entry                      = 1,
	SAP_Cycle                      = 2,
	SAP_Success                    = 3,
	SAP_Fail                       = 4,
	SAP_SuccessIdle                = 5,
	SAP_MAX                        = 6
};


// Enum OLGame.OLAnimHandShielding.HandShieldingType
enum class EHandShieldingType : uint8_t
{
	HST_IdxNormal                  = 0,
	HST_IdxHeatShieldingLow        = 1,
	HST_IdxHeatShieldingHigh       = 2,
	HST_IdxFoliageShielding        = 3,
	HST_IdxFlySwatting             = 4,
	HST_IdxBrightLightShielding    = 5,
	HST_IdxBranchShielding         = 6,
	HST_MAX                        = 7
};


// Enum OLGame.OLAnimLocomotion.LocomotionAnimState
enum class ELocomotionAnimState : uint8_t
{
	LAS_Idle                       = 0,
	LAS_Moving                     = 1,
	LAS_Starting                   = 2,
	LAS_Stopping                   = 3,
	LAS_Turning                    = 4,
	LAS_MAX                        = 5
};


// Enum OLGame.OLAnimNotify_Door.EDoorInteraction
enum class EDoorInteraction : uint8_t
{
	DI_Open                        = 0,
	DI_Close                       = 1,
	DI_MAX                         = 2
};


// Enum OLGame.OLHero.EGameplayItemShape
enum class EGameplayItemShape : uint8_t
{
	GIS_None                       = 0,
	GIS_Small                      = 1,
	GIS_Cylinder                   = 2,
	GIS_MAX                        = 3
};


// Enum OLGame.OLHero.EOutOfItemType
enum class EOutOfItemType : uint8_t
{
	EOOIT_None                     = 0,
	EOOIT_Batteries                = 1,
	EOOIT_Bandages                 = 2,
	EOOIT_Camcorder                = 3,
	EOOIT_MAX                      = 4
};


// Enum OLGame.OLHero.ESlidingSlopeSlideType
enum class ESlidingSlopeSlideType : uint8_t
{
	ESSST_Sliding                  = 0,
	ESSST_Falling                  = 1,
	ESSST_Stepping                 = 2,
	ESSST_MAX                      = 3
};


// Enum OLGame.OLHero.EUnderwaterHidingType
enum class EUnderwaterHidingType : uint8_t
{
	UHT_None                       = 0,
	UHT_Shallow                    = 1,
	UHT_Deep                       = 2,
	UHT_Swimming                   = 3,
	UHT_MAX                        = 4
};


// Enum OLGame.OLHero.ERaftIdleAnimationType
enum class ERaftIdleAnimationType : uint8_t
{
	RIAT_Normal                    = 0,
	RIAT_Broken                    = 1,
	RIAT_MAX                       = 2
};


// Enum OLGame.OLHero.RaftCollisionType
enum class ERaftCollisionType : uint8_t
{
	RCT_None                       = 0,
	RCT_Light                      = 1,
	RCT_Medium                     = 2,
	RCT_Hard                       = 3,
	RCT_MAX                        = 4
};


// Enum OLGame.OLHero.EHeroBodySetup
enum class EHeroBodySetup : uint8_t
{
	HBS_Normal                     = 0,
	HBS_NoProxy                    = 1,
	HBS_CamcorderRaised            = 2,
	HBS_CamcorderRaisedNoShadow    = 3,
	HBS_CamcorderVisible           = 4,
	HBS_MAX                        = 5
};


// Enum OLGame.OLHero.EDoorClosingType
enum class EDoorClosingType : uint8_t
{
	DCT_LeftFront                  = 0,
	DCT_LeftSide                   = 1,
	DCT_LeftBack                   = 2,
	DCT_LeftInside                 = 3,
	DCT_RightFront                 = 4,
	DCT_RightSide                  = 5,
	DCT_RightBack                  = 6,
	DCT_RightInside                = 7,
	DCT_MAX                        = 8
};


// Enum OLGame.OLHero.EDoorPartialOpenType
enum class EDoorPartialOpenType : uint8_t
{
	DPOT_LeftPush                  = 0,
	DPOT_LeftPull                  = 1,
	DPOT_LeftSwipe                 = 2,
	DPOT_RightPush                 = 3,
	DPOT_RightPull                 = 4,
	DPOT_RightSwipe                = 5,
	DPOT_MAX                       = 6
};


// Enum OLGame.OLHero.EDoorOpeningType
enum class EDoorOpeningType : uint8_t
{
	DOT_LeftPush                   = 0,
	DOT_LeftPull                   = 1,
	DOT_RightPush                  = 2,
	DOT_RightPull                  = 3,
	DOT_MAX                        = 4
};


// Enum OLGame.OLHero.ELedgeClimbType
enum class ELedgeClimbType : uint8_t
{
	LCT_ClimbUpToStand             = 0,
	LCT_ClimbUpToCrouch            = 1,
	LCT_ClimbUpToCrawl             = 2,
	LCT_ClimbOverToFalling         = 3,
	LCT_ClimbOverToStand           = 4,
	LCT_ClimbUpBeam                = 5,
	LCT_MAX                        = 6
};


// Enum OLGame.OLHero.ELedgeTransitionType
enum class ELedgeTransitionType : uint8_t
{
	LTT_LeftInside                 = 0,
	LTT_LeftOutside                = 1,
	LTT_RightInside                = 2,
	LTT_RightOutside               = 3,
	LTT_LeftBeam                   = 4,
	LTT_RightBeam                  = 5,
	LTT_Forward                    = 6,
	LTT_Backward                   = 7,
	LTT_MAX                        = 8
};


// Enum OLGame.OLHero.EHeroWalkingStyle
enum class EHeroWalkingStyle : uint8_t
{
	HWS_Default                    = 0,
	HWS_Water                      = 1,
	HWS_Limping                    = 2,
	HWS_Hobbling                   = 3,
	HWS_PrototypeStyleA            = 4,
	HWS_PrototypeStyleB            = 5,
	HWS_PrototypeStyleC            = 6,
	HWS_PrototypeStyleD            = 7,
	HWS_PrototypeStyleE            = 8,
	HWS_MAX                        = 9
};


// Enum OLGame.OLHero.NVGlitchType
enum class ENVGlitchType : uint8_t
{
	NVGT_SuddenDrop                = 0,
	NVGT_SlowDrop                  = 1,
	NVGT_Buzz                      = 2,
	NVGT_LastBreath                = 3,
	NVGT_MAX                       = 4
};


// Enum OLGame.OLHero.ECamcorderState
enum class ECamcorderState : uint8_t
{
	CCS_Inactive                   = 0,
	CCS_Active                     = 1,
	CCS_Raising                    = 2,
	CCS_Lowering                   = 3,
	CCS_ReloadingActive            = 4,
	CCS_ReloadingInactive          = 5,
	CCS_MAX                        = 6
};


// Enum OLGame.OLHero.ECamcorderMode
enum class ECamcorderMode : uint8_t
{
	CCM_Default                    = 0,
	CCM_PoweredNightVision         = 1,
	CCM_NightVision                = 2,
	CCM_MAX                        = 3
};


// Enum OLGame.OLHero.ObjectivePrompt
enum class EObjectivePrompt : uint8_t
{
	EOP_None                       = 0,
	EOP_Top                        = 1,
	EOP_Bottom                     = 2,
	EOP_MAX                        = 3
};


// Enum OLGame.OLHero.ECornerPeekType
enum class ECornerPeekType : uint8_t
{
	ECPT_Standing                  = 0,
	ECPT_Crouched                  = 1,
	ECPT_MAX                       = 2
};


// Enum OLGame.OLHero.EPregLynnState
enum class EPregLynnState : uint8_t
{
	PLS_Normal                     = 0,
	PLS_Hurting                    = 1,
	PLS_Limited                    = 2,
	PLS_MAX                        = 3
};


// Enum OLGame.OLHero.PushSideType
enum class EPushSideType : uint8_t
{
	EPST_Forward                   = 0,
	EPST_Backward                  = 1,
	EPST_Leftward                  = 2,
	EPST_Rightward                 = 3,
	EPST_Custom                    = 4,
	EPST_MAX                       = 5
};


// Enum OLGame.OLHero.EPushObjectType
enum class EPushObjectType : uint8_t
{
	POT_Left                       = 0,
	POT_Right                      = 1,
	POT_Low                        = 2,
	POT_BarnDoor                   = 3,
	POT_Light                      = 4,
	POT_Projector                  = 5,
	POT_MAX                        = 6
};


// Enum OLGame.OLHero.CrawlModeAnimIndices
enum class ECrawlModeAnimIndices : uint8_t
{
	CMAI_IdxFree                   = 0,
	CMAI_IdxConstrained            = 1,
	CMAI_LookbackLeft              = 2,
	CMAI_LookbackRight             = 3,
	CMAI_MAX                       = 4
};


// Enum OLGame.OLHero.CornerPeekPosition
enum class ECornerPeekPosition : uint8_t
{
	CPP_Left                       = 0,
	CPP_Right                      = 1,
	CPP_MiddleLeft                 = 2,
	CPP_MiddleRight                = 3,
	CPP_MAX                        = 4
};


// Enum OLGame.OLHero.IKTargetType
enum class EIKTargetType : uint8_t
{
	IKTT_DoorKnob                  = 0,
	IKTT_CSAPropDestination        = 1,
	IKTT_Other                     = 2,
	IKTT_MAX                       = 3
};


// Enum OLGame.OLHero.ESubSkinType
enum class ESubSkinType : uint8_t
{
	SST_None                       = 0,
	SST_Injured                    = 1,
	SST_Bandaged                   = 2,
	SST_MAX                        = 3
};


// Enum OLGame.OLHero.ESkinType
enum class ESkinType : uint8_t
{
	SkinType_Dirty                 = 0,
	SkinType_JustCrucified         = 1,
	SkinType_Crucified             = 2,
	SkinType_Bloody                = 3,
	SkinType_Vomit                 = 4,
	SkinType_BloodyArms            = 5,
	SkinType_MAX                   = 6
};


// Enum OLGame.OLHeroCamera.ECameraShakeType
enum class ECameraShakeType : uint8_t
{
	ECST_Environment               = 0,
	ECST_Exhausted                 = 1,
	ECST_Scripted                  = 2,
	ECST_Wind                      = 3,
	ECST_MAX                       = 4
};


// Enum OLGame.OLAnimRiver.ERowingAnimSet
enum class ERowingAnimSet : uint8_t
{
	ERAS_RowRight                  = 0,
	ERAS_RowLeft                   = 1,
	ERAS_RowFastRight              = 2,
	ERAS_RowFastLeft               = 3,
	ERAS_MAX                       = 4
};


// Enum OLGame.OLArrow.EArrowState
enum class EArrowState : uint8_t
{
	EAMS_Dead                      = 0,
	EAMS_FreeTravel                = 1,
	EAMS_PreciseTravel             = 2,
	EAMS_StuckInDoor               = 3,
	EAMS_HeldByBot                 = 4,
	EAMS_StuckInPawn               = 5,
	EAMS_MAX                       = 6
};


// Enum OLGame.OLBot.BotErrorType
enum class EBotErrorType : uint8_t
{
	BET_Generic                    = 0,
	BET_MoveFailed                 = 1,
	BET_BadCommand                 = 2,
	BET_NoCommand                  = 3,
	BET_MAX                        = 4
};


// Enum OLGame.OLBot.EAILogVerbosity
enum class EAILogVerbosity : uint8_t
{
	LV_Always                      = 0,
	LV_Normal                      = 1,
	LV_Verbose                     = 2,
	LV_MAX                         = 3
};


// Enum OLGame.OLBot.EMoveFailedReason
enum class EMoveFailedReason : uint8_t
{
	MFR_Unknown                    = 0,
	MFR_AINotOnNavMesh             = 1,
	MFR_TargetNotOnNavMesh         = 2,
	MFR_NoPathToTarget             = 3,
	MFR_Aborted                    = 4,
	MFR_MAX                        = 5
};


// Enum OLGame.OLBot.EMoveType
enum class EMoveType : uint8_t
{
	MT_Invalid                     = 0,
	MT_Point                       = 1,
	MT_Actor                       = 2,
	MT_ManualPath                  = 3,
	MT_Dynamic                     = 4,
	MT_MAX                         = 5
};


// Enum OLGame.OLBot.EMoveStatus
enum class EMoveStatus : uint8_t
{
	MS_Moving                      = 0,
	MS_Success                     = 1,
	MS_Failed                      = 2,
	MS_Pending                     = 3,
	MS_MAX                         = 4
};


// Enum OLGame.OLBot.EAIEvent
enum class EAIEvent : uint8_t
{
	AIE_SeePlayer                  = 0,
	AIE_HearPlayer                 = 1,
	AIE_ReactToDisturbance         = 2,
	AIE_InvestigateDisturbance     = 3,
	AIE_ChasePlayer                = 4,
	AIE_ReactToPlayerBeforeChase   = 5,
	AIE_ReactNoChase               = 6,
	AIE_StartChaseNoReaction       = 7,
	AIE_InvestigateLostSight       = 8,
	AIE_FindHiddenPlayer           = 9,
	AIE_InvestigatePoint           = 10,
	AIE_PuntPlayer                 = 11,
	AIE_AttackPlayer               = 12,
	AIE_ChaseReachedLeashLimit     = 13,
	AIE_LostSightOfPlayer          = 14,
	AIE_ReachedLastKnownPosition   = 15,
	AIE_ReachedInvestigationPoint  = 16,
	AIE_FinishedInvestigatingPoint = 17,
	AIE_InvestigationGiveUp        = 18,
	AIE_MoveToResumeLocation       = 19,
	AIE_ResumePreviousActivity     = 20,
	AIE_DeathGripStarted           = 21,
	AIE_DeathGripPlayerEscaped     = 22,
	AIE_DestinationUnreacheable    = 23,
	AIE_NoPathToTarget             = 24,
	AIE_KillingPlayer              = 25,
	AIE_MAX                        = 26
};


// Enum OLGame.OLBot.DisturbanceType
enum class EDisturbanceType : uint8_t
{
	EDT_Audio                      = 0,
	EDT_Visual                     = 1,
	EDT_MAX                        = 2
};


// Enum OLGame.OLBot.DisturbanceReactionType
enum class EDisturbanceReactionType : uint8_t
{
	DRT_None                       = 0,
	DRT_SlowDownAndLook            = 1,
	DRT_StopAndLook                = 2,
	DRT_LookThenGoto               = 3,
	DRT_StraightToInvestigate      = 4,
	DRT_MAX                        = 5
};


// Enum OLGame.OLBot.DisturbanceReactionPhase
enum class EDisturbanceReactionPhase : uint8_t
{
	DRP_Inactive                   = 0,
	DRP_Pending                    = 1,
	DRP_React                      = 2,
	DRP_Wait                       = 3,
	DRP_Exit                       = 4,
	DRP_MAX                        = 5
};


// Enum OLGame.OLBot.ECrawlerState
enum class ECrawlerState : uint8_t
{
	EBAS_Wait                      = 0,
	EBAS_Follow                    = 1,
	EBAS_React                     = 2,
	EBAS_BackOff                   = 3,
	EBAS_Warn                      = 4,
	EBAS_Chase                     = 5,
	EBAS_GiveUp                    = 6,
	EBAS_MAX                       = 7
};


// Enum OLGame.OLBot.EGuardState
enum class EGuardState : uint8_t
{
	EGS_Relaxed                    = 0,
	EGS_Alert                      = 1,
	EGS_Attacking                  = 2,
	EGS_MAX                        = 3
};


// Enum OLGame.OLBot.ScriptedBehaviorState
enum class EScriptedBehaviorState : uint8_t
{
	SBS_None                       = 0,
	SBS_PlayAnim                   = 1,
	SBS_AmbiantLooking             = 2,
	SBS_AmbiantAntiLook            = 3,
	SBS_WaitAndReact               = 4,
	SBS_MovingToResumeLocation     = 5,
	SBS_MovingToCommandLocation    = 6,
	SBS_PerformingCommand          = 7,
	SBS_MovingToPlayer             = 8,
	SBS_PlayerContact              = 9,
	SBS_Guard                      = 10,
	SBS_SpecialAttack              = 11,
	SBS_MAX                        = 12
};


// Enum OLGame.OLBot.EWaitAndReactState
enum class EWaitAndReactState : uint8_t
{
	WRS_None                       = 0,
	WRS_Idle                       = 1,
	WRS_Reacting                   = 2,
	WRS_Aware                      = 3,
	WRS_BackToUnaware              = 4,
	WRS_Exiting                    = 5,
	WRS_Exited                     = 6,
	WRS_MAX                        = 7
};


// Enum OLGame.OLBot.InvestigationPointIrrelevanceReason
enum class EInvestigationPointIrrelevanceReason : uint8_t
{
	IPIR_NoWeight                  = 0,
	IPIR_NotInSameVolume           = 1,
	IPIR_TooManyBotsInVolume       = 2,
	IPIR_WasRecentlyInvestigated   = 3,
	IPIR_TooClose                  = 4,
	IPIR_OutsideLeash              = 5,
	IPIR_FindingPlayerNotAllowed   = 6,
	IPIR_NotFindingPlayerThisTime  = 7,
	IPIR_NotPlayerOpenedDoor       = 8,
	IPIR_ObstacleInPath            = 9,
	IPIR_AlreadyUnderInvestigation = 10,
	IPIR_ProhibitedByKismet        = 11,
	IPIR_MAX                       = 12
};


// Enum OLGame.OLBot.EOLInvestigationPointType
enum class EOLInvestigationPointType : uint8_t
{
	OLIPT_SimpleLocation           = 0,
	OLIPT_InvestigationPoint       = 1,
	OLIPT_Locker                   = 2,
	OLIPT_Bed                      = 3,
	OLIPT_Window                   = 4,
	OLIPT_Door                     = 5,
	OLIPT_Crawl                    = 6,
	OLIPT_Barrel                   = 7,
	OLIPT_Wardrobe                 = 8,
	OLIPT_Confessional             = 9,
	OLIPT_MAX                      = 10
};


// Enum OLGame.OLBot.PatrolType
enum class EPatrolType : uint8_t
{
	PT_None                        = 0,
	PT_Route                       = 1,
	PT_Point                       = 2,
	PT_SingleWaypoint              = 3,
	PT_FollowActor                 = 4,
	PT_FollowLead                  = 5,
	PT_Ambush                      = 6,
	PT_UnspawnAtLocation           = 7,
	PT_MAX                         = 8
};


// Enum OLGame.OLBot.ChaseMoveDestination
enum class EChaseMoveDestination : uint8_t
{
	CMD_Player                     = 0,
	CMD_Bed                        = 1,
	CMD_Locker                     = 2,
	CMD_Crawl                      = 3,
	CMD_Beam                       = 4,
	CMD_Barrel                     = 5,
	CMD_Wardrobe                   = 6,
	CMD_Squeeze                    = 7,
	CMD_LastKnownPos               = 8,
	CMD_AttackStrategy             = 9,
	CMD_FollowDistance             = 10,
	CMD_BackOff                    = 11,
	CMD_MAX                        = 12
};


// Enum OLGame.OLBot.AttackStrategyType
enum class EAttackStrategyType : uint8_t
{
	AIST_None                      = 0,
	AIST_NormalAttack              = 1,
	AIST_FaceOff                   = 2,
	AIST_StayBack                  = 3,
	AIST_MultiKill                 = 4,
	AIST_MAX                       = 5
};


// Enum OLGame.OLBot.DeathGripPhase
enum class EDeathGripPhase : uint8_t
{
	DGP_None                       = 0,
	DGP_Entry                      = 1,
	DGP_Struggle                   = 2,
	DGP_Kill                       = 3,
	DGP_Escape                     = 4,
	DGP_MultiKill                  = 5,
	DGP_Inactive                   = 6,
	DGP_MAX                        = 7
};


// Enum OLGame.OLBot.EAIActivity
enum class EAIActivity : uint8_t
{
	AIA_None                       = 0,
	AIA_Idle                       = 1,
	AIA_Ambush                     = 2,
	AIA_Patrol                     = 3,
	AIA_Investigate                = 4,
	AIA_Chase                      = 5,
	AIA_SpecialLocomotion          = 6,
	AIA_DeathGrip                  = 7,
	AIA_FaceOff                    = 8,
	AIA_Scripted                   = 9,
	AIA_PairedWalk                 = 10,
	AIA_Matinee                    = 11,
	AIA_MAX                        = 12
};


// Enum OLGame.OLBotCondition_Difficulty.BotDifficultyCondition
enum class EBotDifficultyCondition : uint8_t
{
	BDC_LesserOrEqualsTo           = 0,
	BDC_Equals                     = 1,
	BDC_GreaterOrEqualsTo          = 2,
	BDC_MAX                        = 3
};


// Enum OLGame.OLGame.GameplayDataType
enum class EGameplayDataType : uint8_t
{
	GDT_CheckpointReached          = 0,
	GDT_Death                      = 1,
	GDT_CamcorderReloaded          = 2,
	GDT_BatteryPickedUp            = 3,
	GDT_Movement                   = 4,
	GDT_OpenDoorFast               = 5,
	GDT_CloseDoorFast              = 6,
	GDT_OpenDoorSlow               = 7,
	GDT_CloseDoorSlow              = 8,
	GDT_LockDoor                   = 9,
	GDT_UnlockDoor                 = 10,
	GDT_OpenWindow                 = 11,
	GDT_CloseWindow                = 12,
	GDT_Hiding                     = 13,
	GDT_Ghosting                   = 14,
	GDT_Idle                       = 15,
	GDT_BandagePickedUp            = 16,
	GDT_BandageUsed                = 17,
	GDT_Damage                     = 18,
	GDT_RecordingMoment            = 19,
	GDT_GenericPickup              = 20,
	GDT_MAX                        = 21
};


// Enum OLGame.OLGame.EDifficultyModeModifier
enum class EDifficultyModeModifier : uint8_t
{
	EDMM_Easier                    = 0,
	EDMM_Untouched                 = 1,
	EDMM_Harder                    = 2,
	EDMM_MAX                       = 3
};


// Enum OLGame.OLGame.EDifficultyMode
enum class EDifficultyMode : uint8_t
{
	EDM_Easy                       = 0,
	EDM_Normal                     = 1,
	EDM_NormalPlus                 = 2,
	EDM_Hard                       = 3,
	EDM_HardPlus                   = 4,
	EDM_Nightmare                  = 5,
	EDM_MAX                        = 6
};


// Enum OLGame.OLGame.EDifficultyModeOption
enum class EDifficultyModeOption : uint8_t
{
	EDMO_Normal                    = 0,
	EDMO_Hard                      = 1,
	EDMO_Nightmare                 = 2,
	EDMO_Insane                    = 3,
	EDMO_Easy                      = 4,
	EDMO_MAX                       = 5
};


// Enum OLGame.OLBushesVolume.EBushHidingStance
enum class EBushHidingStance : uint8_t
{
	EBHS_CrawlOnly                 = 0,
	EBHS_CrouchedAndCrawl          = 1,
	EBHS_Any                       = 2,
	EBHS_MAX                       = 3
};


// Enum OLGame.OLCamcorderFilesHud.EFolderCategory
enum class EFolderCategory : uint8_t
{
	EFC_01_Genesis                 = 0,
	EFC_02_Job                     = 1,
	EFC_03_Lamentations            = 2,
	EFC_04_Judges                  = 3,
	EFC_05_Leviticus               = 4,
	EFC_06_Revelations             = 5,
	EFC_MAX                        = 6
};


// Enum OLGame.OLCamcorderFilesHud.ESortingCategoryType
enum class ESortingCategoryType : uint8_t
{
	ESCT_Chronologically           = 0,
	ESCT_Category                  = 1,
	ESCT_Type                      = 2,
	ESCT_MAX                       = 3
};


// Enum OLGame.OLCheatManager.EDebugTrajectoryType
enum class EDebugTrajectoryType : uint8_t
{
	DTT_Walking                    = 0,
	DTT_Falling                    = 1,
	DTT_AdjustPosition             = 2,
	DTT_ProceduralAnim             = 3,
	DTT_SpecialMove                = 4,
	DTT_Camera                     = 5,
	DTT_Other                      = 6,
	DTT_MAX                        = 7
};


// Enum OLGame.OLCollectiblePickup.EPickupNightVisionState
enum class EPickupNightVisionState : uint8_t
{
	PNVS_DoNothing                 = 0,
	PNVS_ForceNightVision          = 1,
	PNVS_ForceNoNightVision        = 2,
	PNVS_MAX                       = 3
};


// Enum OLGame.OLCollectiblePickup.ECollectibleType
enum class ECollectibleType : uint8_t
{
	ECT_Static                     = 0,
	ECT_Dynamic                    = 1,
	ECT_MAX                        = 2
};


// Enum OLGame.OLEngine.LoadGameResult
enum class ELoadGameResult : uint8_t
{
	LGR_LoadError                  = 0,
	LGR_BadCheckpoint              = 1,
	LGR_CheckpointNotDownloaded    = 2,
	LGR_SuccessOnLastCheckpoint    = 3,
	LGR_Success                    = 4,
	LGR_MAX                        = 5
};


// Enum OLGame.OLEngine.ECheckpointAction
enum class ECheckpointAction : uint8_t
{
	Checkpoint_Default             = 0,
	Checkpoint_Load                = 1,
	Checkpoint_SaveToDisk          = 2,
	Checkpoint_SaveToMemory        = 3,
	Checkpoint_MAX                 = 4
};


// Enum OLGame.OLDoor.DoorEventType
enum class EDoorEventType : uint8_t
{
	DET_StartOpening               = 0,
	DET_Opened                     = 1,
	DET_Closed                     = 2,
	DET_TriedOnLocked              = 3,
	DET_OpenThresholdReached       = 4,
	DET_Bashed                     = 5,
	DET_StartedBashing             = 6,
	DET_StartedClosing             = 7,
	DET_Locked                     = 8,
	DET_Unlocked                   = 9,
	DET_MAX                        = 10
};


// Enum OLGame.OLDoor.EDoorState
enum class EDoorState : uint8_t
{
	DS_Idle                        = 0,
	DS_Opening                     = 1,
	DS_Closing                     = 2,
	DS_PlayerInteracting           = 3,
	DS_Animating                   = 4,
	DS_Matinee                     = 5,
	DS_MAX                         = 6
};


// Enum OLGame.OLDoor.EDoorBreakState
enum class EDoorBreakState : uint8_t
{
	DBS_Normal                     = 0,
	DBS_Breaking                   = 1,
	DBS_Broken                     = 2,
	DBS_MAX                        = 3
};


// Enum OLGame.OLDoor.ECancelBashDirection
enum class ECancelBashDirection : uint8_t
{
	ECBD_Both                      = 0,
	ECBD_Forward                   = 1,
	ECBD_Backward                  = 2,
	ECBD_MAX                       = 3
};


// Enum OLGame.OLDoor.EOLDoorMeshType
enum class EOLDoorMeshType : uint8_t
{
	DMesh_Undefined                = 0,
	DMesh_Door_Ext                 = 1,
	DMesh_Door_Ext_Windows         = 2,
	DMesh_Door_Int                 = 3,
	DMesh_School_Int               = 4,
	DMesh_School_Int_Window        = 5,
	DMesh_School_Int_Locked        = 6,
	DMesh_School_Int_Locked_Window = 7,
	DMesh_School_Metal_Window      = 8,
	DMesh_School_Ext               = 9,
	DMesh_School_Bathroom          = 10,
	DMesh_School_Locker            = 11,
	DMesh_Church                   = 12,
	DMesh_School_OneWay            = 13,
	DMesh_SchoolWindow_OneWay      = 14,
	DMesh_OldLockers               = 15,
	DMesh_ScreenDoor               = 16,
	DMesh_SyphiliticDoor           = 17,
	DMesh_KnothDungeonDoor         = 18,
	DMesh_MAX                      = 19
};


// Enum OLGame.OLDoor.EDoorMaterial
enum class EDoorMaterial : uint8_t
{
	OLDM_Wood                      = 0,
	OLDM_Metal                     = 1,
	OLDM_School                    = 2,
	OLDM_MAX                       = 3
};


// Enum OLGame.OLDoor.EOLDoorType
enum class EOLDoorType : uint8_t
{
	DT_Normal                      = 0,
	DT_Locker                      = 1,
	DT_MAX                         = 2
};


// Enum OLGame.OLDoor.GameFlowDoorAction
enum class EGameFlowDoorAction : uint8_t
{
	GFDA_Reset                     = 0,
	GFDA_ClosedUnlocked            = 1,
	GFDA_ClosedLocked              = 2,
	GFDA_Opened                    = 3,
	GFDA_BrokenFwd                 = 4,
	GFDA_BrokenBwd                 = 5,
	GFDA_PartiallyOpened           = 6,
	GFDA_MAX                       = 7
};


// Enum OLGame.OLFlashLight.FlashlightType
enum class EFlashlightType : uint8_t
{
	EFT_Flashlight                 = 0,
	EFT_Torch                      = 1,
	EFT_Lantern                    = 2,
	EFT_MAX                        = 3
};


// Enum OLGame.OLFXManager.EPPSMode
enum class EPPSMode : uint8_t
{
	PPS_Default                    = 0,
	PPS_Camcorder                  = 1,
	PPS_NightVision                = 2,
	PPS_GammaCalibration           = 3,
	PPS_Death                      = 4,
	PPS_MAX                        = 5
};


// Enum OLGame.OLGameplayItemPickup.GameFlowPickupAction
enum class EGameFlowPickupAction : uint8_t
{
	GFPA_Hide                      = 0,
	GFPA_Unhide                    = 1,
	GFPA_GiveAndHide               = 2,
	GFPA_MAX                       = 3
};


// Enum OLGame.OLHidingBarrel.BarrelEventType
enum class EBarrelEventType : uint8_t
{
	EBET_StartedEntering           = 0,
	EBET_Entered                   = 1,
	EBET_StartedExiting            = 2,
	EBET_Exited                    = 3,
	EBET_EnteredWater              = 4,
	EBET_ExitedWater               = 5,
	EBET_MAX                       = 6
};


// Enum OLGame.OLHidingBarrel.BarrelMaterialType
enum class EBarrelMaterialType : uint8_t
{
	BMT_EmptyBarrel                = 0,
	BMT_WaterBarrel                = 1,
	BMT_BloodBarrel                = 2,
	BMT_TreeStump                  = 3,
	BMT_MAX                        = 4
};


// Enum OLGame.OLHUD.EHUDMessageType
enum class EHUDMessageType : uint8_t
{
	EHMT_None                      = 0,
	EHMT_Objective                 = 1,
	EHMT_Tutorial                  = 2,
	EHMT_Generic                   = 3,
	EHMT_Interaction               = 4,
	EHMT_Subtitle                  = 5,
	EHMT_ShakeMouse                = 6,
	EHMT_ShakeStick                = 7,
	EHMT_ObjectiveCam              = 8,
	EHMT_QTE                       = 9,
	EHMT_MAX                       = 10
};


// Enum OLGame.OLHUD.EMenuType
enum class EMenuType : uint8_t
{
	EMT_MainMenu                   = 0,
	EMT_PauseMenu                  = 1,
	EMT_PausedPromptMenu           = 2,
	EMT_CleanText                  = 3,
	EMT_Credits                    = 4,
	EMT_MAX                        = 5
};


// Enum OLGame.OLHUD.EHUDMessagePriority
enum class EHUDMessagePriority : uint8_t
{
	EHMP_Generic_SuperHighPriority = 0,
	EHMP_Tutorial_HighPriority     = 1,
	EHMP_Gameplay_HighPriority     = 2,
	EHMP_Tutorial_MediumPriority   = 3,
	EHMP_Gameplay_MediumPriority   = 4,
	EHMP_Tutorial_LowPriority      = 5,
	EHMP_Gameplay_LowPriority      = 6,
	EHMP_Gameplay_VeryLowPriority  = 7,
	EHMP_Generic_SuperLowPriority  = 8,
	EHMP_Generic_NoPriority        = 9,
	EHMP_MAX                       = 10
};


// Enum OLGame.OLInterpTrackPPSEffectParam.TrackPropertyType
enum class ETrackPropertyType : uint8_t
{
	TPP_MaterialInstance           = 0,
	TPP_MAX                        = 1
};


// Enum OLGame.OLLadderMarker.LadderMaterial
enum class ELadderMaterial : uint8_t
{
	LMT_Wood                       = 0,
	LMT_Metal                      = 1,
	LMT_MAX                        = 2
};


// Enum OLGame.OLLeashMarker.ELeashType
enum class ELeashType : uint8_t
{
	ELT_CantLeave                  = 0,
	ELT_CantEnter                  = 1,
	ELT_MAX                        = 2
};


// Enum OLGame.OLPlayerController.EOutlastAchievement
enum class EOutlastAchievement : uint8_t
{
	OA_000_Platinum                = 0,
	OA_001_FinishAny               = 1,
	OA_002_FinishHard              = 2,
	OA_003_FinishNightmare         = 3,
	OA_004_FinishInsane            = 4,
	OA_005_FinishNoHide            = 5,
	OA_006_InsaneNoBattery         = 6,
	OA_007_Speedrun                = 7,
	OA_008_GM1                     = 8,
	OA_009_GM2                     = 9,
	OA_010_GM3                     = 10,
	OA_011_GM4                     = 11,
	OA_012_GM5                     = 12,
	OA_013_GM6                     = 13,
	OA_014_GM7                     = 14,
	OA_015_GM8                     = 15,
	OA_016_MilestoneDocuments      = 16,
	OA_017_AllDocuments            = 17,
	OA_018_MilestoneRecordings     = 18,
	OA_019_AllRecordings           = 19,
	OA_020_Bandages                = 20,
	OA_021_Underwater              = 21,
	OA_022_Mike                    = 22,
	OA_023_Slide                   = 23,
	OA_024_Crawl                   = 24,
	OA_MAX                         = 25
};


// Enum OLGame.OLPlayerController.ZoomMovementType
enum class EZoomMovementType : uint8_t
{
	Zoom_Undefined                 = 0,
	Zoom_MovingLeft                = 1,
	Zoom_NotMoving                 = 2,
	Zoom_MovingRight               = 3,
	Zoom_MAX                       = 4
};


// Enum OLGame.OLPlayerController.EPlayerInteractionType
enum class EPlayerInteractionType : uint8_t
{
	PIT_CSA                        = 0,
	PIT_PickupObject               = 1,
	PIT_BatteriesFull              = 2,
	PIT_EnterBed                   = 3,
	PIT_EnterLocker                = 4,
	PIT_ExitLocker                 = 5,
	PIT_OpenDoor                   = 6,
	PIT_OpenDoorTutorial           = 7,
	PIT_OpenPartiallyOpenDoor      = 8,
	PIT_CloseDoor                  = 9,
	PIT_LockedDoor                 = 10,
	PIT_KnockOnDoor                = 11,
	PIT_KnownLockedDoor            = 12,
	PIT_KnownJammedDoor            = 13,
	PIT_KnownBlockedDoor           = 14,
	PIT_AutoCloseDoor              = 15,
	PIT_ClimbUpLedge               = 16,
	PIT_ReloadBatteries            = 17,
	PIT_DeathgripQTE               = 18,
	PIT_DeathgripShake             = 19,
	PIT_PushObject                 = 20,
	PIT_PushObjectInteraction      = 21,
	PIT_OpenWindow                 = 22,
	PIT_CloseWindow                = 23,
	PIT_LockDoor                   = 24,
	PIT_UnlockDoor                 = 25,
	PIT_UnlockAndOpenDoor          = 26,
	PIT_EnterBasement              = 27,
	PIT_ExitBasement               = 28,
	PIT_EnterWardrobe              = 29,
	PIT_ExitWardrobe               = 30,
	PIT_ExitWardrobeTutorial       = 31,
	PIT_EnterConfessional          = 32,
	PIT_ExitConfessional           = 33,
	PIT_EnterHidingBarrel          = 34,
	PIT_EnterCoveredHidingBarrel   = 35,
	PIT_ExitHidingBarrel           = 36,
	PIT_ExitCoveredHidingBarrel    = 37,
	PIT_EnterTreeStump             = 38,
	PIT_ExitTreeStump              = 39,
	PIT_QTEDrivenMatinee           = 40,
	PIT_InteractiveDoorPush        = 41,
	PIT_InteractiveDoorPull        = 42,
	PIT_BandagesFull               = 43,
	PIT_PromptBleedingNoBandage    = 44,
	PIT_PromptBleedingWithBandage  = 45,
	PIT_PutDownCollectible         = 46,
	PIT_InventoryUseBattery        = 47,
	PIT_InventoryUseBandage        = 48,
	PIT_InventoryUseCamcorder      = 49,
	PIT_InventoryUseNoBattery      = 50,
	PIT_InventoryUseNoBandage      = 51,
	PIT_InventoryUseUselessBattery = 52,
	PIT_InventoryUseUselessBandage = 53,
	PIT_InventoryUseUselessBatteryNoCamcorder = 54,
	PIT_InventoryUseNoCamcorder    = 55,
	PIT_MAX                        = 56
};


// Enum OLGame.OLOrbisEngine.OrbisDialogType
enum class EOrbisDialogType : uint8_t
{
	ODT_None                       = 0,
	ODT_SelectSaveLocation         = 1,
	ODT_LoadGame                   = 2,
	ODT_SystemError                = 3,
	ODT_LoadedBadCheckpoint        = 4,
	ODT_CheckpointNotDownloaded    = 5,
	ODT_CheckpointNotValidWithSaveGame = 6,
	ODT_RecordingDataCorrupted     = 7,
	ODT_PSStore                    = 8,
	ODT_MAX                        = 9
};


// Enum OLGame.OLPhysicsVolume.WaterFootstep
enum class EWaterFootstep : uint8_t
{
	WFS_Small                      = 0,
	WFS_Deep                       = 1,
	WFS_MAX                        = 2
};


// Enum OLGame.OLPhysicsVolume.ECustomLandingType
enum class ECustomLandingType : uint8_t
{
	CLT_BigLanding                 = 0,
	CLT_FallForward                = 1,
	CLT_LoseGlasses                = 2,
	CLT_MAX                        = 3
};


// Enum OLGame.OLPlayerInput.GamepadBindingsType
enum class EGamepadBindingsType : uint8_t
{
	GBT_A                          = 0,
	GBT_B                          = 1,
	GBT_C                          = 2,
	GBT_D                          = 3,
	GBT_E                          = 4,
	GBT_MAX                        = 5
};


// Enum OLGame.OLProfileSettings.ProfileQualityLevel5
enum class EProfileQualityLevel5 : uint8_t
{
	PQL5_VeryLow                   = 0,
	PQL5_Low                       = 1,
	PQL5_Medium                    = 2,
	PQL5_High                      = 3,
	PQL5_VeryHigh                  = 4,
	PQL5_MAX                       = 5
};


// Enum OLGame.OLProfileSettings.ProfileQualityLevel3
enum class EProfileQualityLevel3 : uint8_t
{
	PQL3_Low                       = 0,
	PQL3_Medium                    = 1,
	PQL3_High                      = 2,
	PQL3_MAX                       = 3
};


// Enum OLGame.OLProfileSettings.ProfileQualityLevel2
enum class EProfileQualityLevel2 : uint8_t
{
	PQL2_Low                       = 0,
	PQL2_High                      = 1,
	PQL2_MAX                       = 2
};


// Enum OLGame.OLProfileSettings.EGamepadConfigId
enum class EGamepadConfigId : uint8_t
{
	GC_TypeA                       = 0,
	GC_TypeB                       = 1,
	GC_TypeC                       = 2,
	GC_TypeD                       = 3,
	GC_TypeE                       = 4,
	GC_MAX                         = 5
};


// Enum OLGame.OLProfileSettings.ELanguage
enum class ELanguage : uint8_t
{
	EL_English                     = 0,
	EL_French                      = 1,
	EL_Spanish                     = 2,
	EL_Italian                     = 3,
	EL_German                      = 4,
	EL_Russian                     = 5,
	EL_Polish                      = 6,
	EL_Brazilian                   = 7,
	EL_Japanese                    = 8,
	EL_Chinese                     = 9,
	EL_MAX                         = 10
};


// Enum OLGame.OLProfileSettings.EFilteringQuality
enum class EFilteringQuality : uint8_t
{
	EFQ_1x                         = 0,
	EFQ_2x                         = 1,
	EFQ_4x                         = 2,
	EFQ_8x                         = 3,
	EFQ_16x                        = 4,
	EFQ_MAX                        = 5
};


// Enum OLGame.OLProfileSettings.EAntialiasingType
enum class EAntialiasingType : uint8_t
{
	AAT_Off                        = 0,
	AAT_FXAA                       = 1,
	AAT_Temporal                   = 2,
	AAT_MAX                        = 3
};


// Enum OLGame.OLPushableObject.GameFlowPushableAction
enum class EGameFlowPushableAction : uint8_t
{
	GFPUA_Reset                    = 0,
	GFPUA_PushedFwd                = 1,
	GFPUA_PushedBwd                = 2,
	GFPUA_MAX                      = 3
};


// Enum OLGame.OLPushableObject.PushableEventType
enum class EPushableEventType : uint8_t
{
	PET_StartedPushing             = 0,
	PET_StoppedPushing             = 1,
	PET_UnblockedDoor              = 2,
	PET_BlockedDoor                = 3,
	PET_ReachedLimitBwd            = 4,
	PET_ReachedLimitFwd            = 5,
	PET_MAX                        = 6
};


// Enum OLGame.OLPushableObject.EPushableCollisionType
enum class EPushableCollisionType : uint8_t
{
	PCT_NoHit                      = 0,
	PCT_PushableHit                = 1,
	PCT_PlayerHit                  = 2,
	PCT_MAX                        = 3
};


// Enum OLGame.OLSeqAct_AIGuard.GuardAttackType
enum class EGuardAttackType : uint8_t
{
	GAT_Push                       = 0,
	GAT_Attack                     = 1,
	GAT_Kill                       = 2,
	GAT_DeathGrip                  = 3,
	GAT_MAX                        = 4
};


// Enum OLGame.OLSeqAct_AIInvestigatePoint.ScriptedInvestigationType
enum class EScriptedInvestigationType : uint8_t
{
	SIT_SinglePoint                = 0,
	SIT_AllSpecifiedOnce           = 1,
	SIT_AllSpecifiedLoop           = 2,
	SIT_UseConfig                  = 3,
	SIT_MAX                        = 4
};


// Enum OLGame.OLSeqAct_AILookAt.LookAtBehavior
enum class ELookAtBehavior : uint8_t
{
	LAB_TurnTowardsTarget          = 0,
	LAB_OnlyIfFacingTarget         = 1,
	LAB_MAX                        = 2
};


// Enum OLGame.OLSeqAct_AIPlayerContact.PlayerContactPawnMovementMode
enum class EPlayerContactPawnMovementMode : uint8_t
{
	PCPMM_MovePlayer               = 0,
	PCPMM_MoveEnemy                = 1,
	PCPMM_MAX                      = 2
};


// Enum OLGame.OLSeqAct_AIPlayerContact.PlayerContactPawnRotationMode
enum class EPlayerContactPawnRotationMode : uint8_t
{
	PCPRM_RotateBoth               = 0,
	PCPRM_RotatePlayer             = 1,
	PCPRM_RotateEnemy              = 2,
	PCPRM_MAX                      = 3
};


// Enum OLGame.OLSeqAct_AISetConditions.EConditionMergeType
enum class EConditionMergeType : uint8_t
{
	CMT_ClearAll                   = 0,
	CMT_Override                   = 1,
	CMT_AppendToExisting           = 2,
	CMT_MAX                        = 3
};


// Enum OLGame.OLSeqAct_ChangeDynamicDifficulty.EDynamicDifficultyIncreaseType
enum class EDynamicDifficultyIncreaseType : uint8_t
{
	EDDI_Decrease                  = 0,
	EDDI_Increase                  = 1,
	EDDI_MAX                       = 2
};


// Enum OLGame.OLSeqAct_ChangeHeroType.EHeroType
enum class EHeroType : uint8_t
{
	EHT_YoungBlake                 = 0,
	EHT_AdultBlake                 = 1,
	EHT_MAX                        = 2
};


// Enum OLGame.OLSeqAct_Dialogue.EDialogueSpeaker
enum class EDialogueSpeaker : uint8_t
{
	DSp_A                          = 0,
	DSp_B                          = 1,
	DSp_C                          = 2,
	DSp_D                          = 3,
	DSp_E                          = 4,
	DSp_MAX                        = 5
};


// Enum OLGame.OLSeqAct_DisablePrompts.EDisablePromptGroup
enum class EDisablePromptGroup : uint8_t
{
	EDPG_Tutorials                 = 0,
	EDPG_None                      = 1,
	EDPG_MAX                       = 2
};


// Enum OLGame.OLSeqAct_Dizzy.DizzinessTemplateType
enum class EDizzinessTemplateType : uint8_t
{
	EDTT_Concussion                = 0,
	EDTT_Poison                    = 1,
	EDTT_Hallucination             = 2,
	EDTT_FastDrop                  = 3,
	EDTT_MAX                       = 4
};


// Enum OLGame.OLSeqAct_Glasses.GlassesAction
enum class EGlassesAction : uint8_t
{
	GA_Remove                      = 0,
	GA_Lose                        = 1,
	GA_PickedUp                    = 2,
	GA_SnapOn                      = 3,
	GA_MAX                         = 4
};


// Enum OLGame.OLSeqAct_HeroControl.HeroControlRotationType
enum class EHeroControlRotationType : uint8_t
{
	HCRT_LikeTarget                = 0,
	HCRT_None                      = 1,
	HCRT_ToTarget                  = 2,
	HCRT_MAX                       = 3
};


// Enum OLGame.OLSeqAct_HeroSetSkinMaterials.SkinMaterialsType
enum class ESkinMaterialsType : uint8_t
{
	ESkinMT_BloodyArms             = 0,
	ESkinMT_Vomit                  = 1,
	ESkinMT_MAX                    = 2
};


// Enum OLGame.OLSeqAct_HeroTeleport.HeroTeleportStance
enum class EHeroTeleportStance : uint8_t
{
	HTS_Standing                   = 0,
	HTS_Crawl                      = 1,
	HTS_Crouch                     = 2,
	HTS_MAX                        = 3
};


// Enum OLGame.OLSeqAct_Limp.EHobbleIntensity
enum class EHobbleIntensity : uint8_t
{
	HI_VeryBad                     = 0,
	HI_Bad                         = 1,
	HI_NotSoBad                    = 2,
	HI_RatherOk                    = 3,
	HI_Healed                      = 4,
	HI_MAX                         = 5
};


// Enum OLGame.OLSeqAct_OutOfSight.OoSOp
enum class EOoSOp : uint8_t
{
	OOSO_Hide                      = 0,
	OOSO_Unhide                    = 1,
	OOSO_TeleportFrom              = 2,
	OOSO_TeleportTo                = 3,
	OOSO_Unspawn                   = 4,
	OOSO_NoAction                  = 5,
	OOSO_MAX                       = 6
};


// Enum OLGame.OLSeqAct_Silhouette.SilhouetteState
enum class ESilhouetteState : uint8_t
{
	ESS_Inactive                   = 0,
	ESS_Ready                      = 1,
	ESS_Active                     = 2,
	ESS_Done                       = 3,
	ESS_MAX                        = 4
};


// Enum OLGame.OLSeqAct_SplineNode.ESplineAction
enum class ESplineAction : uint8_t
{
	SA_Enable                      = 0,
	SA_Disable                     = 1,
	SA_DoNothing                   = 2,
	SA_MAX                         = 3
};


// Enum OLGame.OLSeqAct_Tutorial.ETutorialPriority
enum class ETutorialPriority : uint8_t
{
	ETP_High                       = 0,
	ETP_Medium                     = 1,
	ETP_Low                        = 2,
	ETP_MAX                        = 3
};


// Enum OLGame.OLSeqAct_WaitForCamcorderEvent.ECamcorderEventType
enum class ECamcorderEventType : uint8_t
{
	CET_CamcorderActive            = 0,
	CET_CamcorderInactive          = 1,
	CET_NightVisionActive          = 2,
	CET_NightVisionInactive        = 3,
	CET_MicrophoneActive           = 4,
	CET_MicrophoneInactive         = 5,
	CET_OutOfBatteries             = 6,
	CET_CompletelyOutOfBatteries   = 7,
	CET_ZoomedIn                   = 8,
	CET_MAX                        = 9
};


// Enum OLGame.OLSeqAct_WaitForSpecificConditions.SpecificConditionType
enum class ESpecificConditionType : uint8_t
{
	SCT_DoorsAreOpen               = 0,
	SCT_DoorsAreClosed             = 1,
	SCT_WindowsAreOpen             = 2,
	SCT_WindowsAreClosed           = 3,
	SCT_PlayerInsideAnyVolume      = 4,
	SCT_PlayerOutsideAllVolumes    = 5,
	SCT_PlayerIsCrawling           = 6,
	SCT_PlayerIsCrouching          = 7,
	SCT_PlayerIsStanding           = 8,
	SCT_PlayerInBasicState         = 9,
	SCT_PlayerIsHiding             = 10,
	SCT_PlayerInLedgeHang          = 11,
	SCT_PlayerInLedgeWalk          = 12,
	SCT_PlayerInLadder             = 13,
	SCT_PlayerInSqueeze            = 14,
	SCT_PlayerPushing              = 15,
	SCT_PlayerInSlidingSlope       = 16,
	SCT_PlayerInBarrel             = 17,
	SCT_PlayerInLocker             = 18,
	SCT_PlayerInWardrobe           = 19,
	SCT_PlayerOnBeam               = 20,
	SCT_PlayerSwimming             = 21,
	SCT_PlayerUnderwater           = 22,
	SCT_PlayerInInventory          = 23,
	SCT_UsingNightVision           = 24,
	SCT_NotUsingNightVision        = 25,
	SCT_UsingMicrophone            = 26,
	SCT_NotUsingMicrophone         = 27,
	SCT_PlayerKilled               = 28,
	SCT_MAX                        = 29
};


// Enum OLGame.OLSeqCond_DifficultyCondition.SequenceDifficultyCondition
enum class ESequenceDifficultyCondition : uint8_t
{
	SDC_LesserOrEqualsTo           = 0,
	SDC_Equals                     = 1,
	SDC_GreaterOrEqualsTo          = 2,
	SDC_MAX                        = 3
};


// Enum OLGame.OLSeqEvent_Door.DoorOpenEventFilter
enum class EDoorOpenEventFilter : uint8_t
{
	DOEF_Any                       = 0,
	DOEF_QuietOnly                 = 1,
	DOEF_NoisyOnly                 = 2,
	DOEF_MAX                       = 3
};


// Enum OLGame.OLSkelControl_GameTime.GameTimeHand
enum class EGameTimeHand : uint8_t
{
	GTH_Hour                       = 0,
	GTH_Minute                     = 1,
	GTH_Second                     = 2,
	GTH_MAX                        = 3
};


// Enum OLGame.OLSlidingSlopeMarker.GameFlowSlidingSlopeAction
enum class EGameFlowSlidingSlopeAction : uint8_t
{
	GFPSS_Enabled                  = 0,
	GFPSS_Disabled                 = 1,
	GFPSS_MAX                      = 2
};


// Enum OLGame.OLSlidingSlopeMarker.SlopeLanding
enum class ESlopeLanding : uint8_t
{
	FeetSoft                       = 0,
	FeetHard                       = 1,
	FeetShort                      = 2,
	LoseGlasses                    = 3,
	SlopeLanding_MAX               = 4
};


// Enum OLGame.OLSlidingSlopeMarker.SlopeMaterial
enum class ESlopeMaterial : uint8_t
{
	SSM_Dirt                       = 0,
	SSM_Leaves                     = 1,
	SSM_Wood                       = 2,
	SSM_MAX                        = 3
};


// Enum OLGame.OLSoundEmitter.EmitterUpdateDetail
enum class EmitterUpdateDetail : uint8_t
{
	EUD_Irrelevant                 = 0,
	EUD_VeryLow                    = 1,
	EUD_Low                        = 2,
	EUD_Normal                     = 3,
	EUD_High                       = 4,
	EUD_MAX                        = 5
};


// Enum OLGame.OLSoundEnvironmentVolume.EVolumePriority
enum class EVolumePriority : uint8_t
{
	EVP_VeryLow                    = 0,
	EVP_Low                        = 1,
	EVP_Normal                     = 2,
	EVP_High                       = 3,
	EVP_VeryHigh                   = 4,
	EVP_MAX                        = 5
};


// Enum OLGame.OLSqueezeMarker.ESqueezeAnimType
enum class ESqueezeAnimType : uint8_t
{
	EST_HandsInFront               = 0,
	EST_HandsOnBack                = 1,
	EST_MAX                        = 2
};


// Enum OLGame.OLThrowable.EThrowableState
enum class EThrowableState : uint8_t
{
	ETMS_Dead                      = 0,
	ETMS_PreciseTravel             = 1,
	ETMS_FreeTravel                = 2,
	ETMS_RigidBody                 = 3,
	ETMS_Sinking                   = 4,
	ETMS_MAX                       = 5
};


// Enum OLGame.OLUberPostProcessEffect.ECameraMode
enum class ECameraMode : uint8_t
{
	CM_Off                         = 0,
	CM_On                          = 1,
	CM_OnNightVision               = 2,
	CM_OffGammaScreen              = 3,
	CM_MAX                         = 4
};


// Enum OLGame.OLUIFrontEnd_Options.ENonProfileOption
enum class ENonProfileOption : uint8_t
{
	NPO_None                       = 0,
	NPO_DisableMotionBlur          = 1,
	NPO_Difficulty                 = 2,
	NPO_MAX                        = 3
};


// Enum OLGame.OLUIFrontEnd_Options.EOptionSelectorType
enum class EOptionSelectorType : uint8_t
{
	OST_CheckBox                   = 0,
	OST_Dropdown                   = 1,
	OST_Slider                     = 2,
	OST_KeyBinding                 = 3,
	OST_ControllerConfigButton     = 4,
	OST_GammaButton                = 5,
	OST_Label                      = 6,
	OST_MAX                        = 7
};


// Enum OLGame.OLUIFrontEnd_Options.EOptionTabs
enum class EOptionTabs : uint8_t
{
	OT_Gameplay                    = 0,
	OT_Graphics                    = 1,
	OT_Controls                    = 2,
	OT_MAX                         = 3
};


// Enum OLGame.OLWardrobe.WardrobeDoorEventType
enum class EWardrobeDoorEventType : uint8_t
{
	WDET_StartEntering             = 0,
	WDET_Entered                   = 1,
	WDET_StartExiting              = 2,
	WDET_Exited                    = 3,
	WDET_StartedPeeking            = 4,
	WDET_StartedPeekingToExiting   = 5,
	WDET_TriedLockedDoor           = 6,
	WDET_LeftDoorOpened            = 7,
	WDET_LeftDoorClosed            = 8,
	WDET_RightDoorOpened           = 9,
	WDET_RightDoorClosed           = 10,
	WDET_MAX                       = 11
};


// Enum OLGame.OLWaypoint.ActionSelectionMethod
enum class EActionSelectionMethod : uint8_t
{
	ASM_FirstValid                 = 0,
	ASM_Random                     = 1,
	ASM_DeathCount                 = 2,
	ASM_MAX                        = 3
};


// Enum OLGame.OLWindow.GameFlowWindowAction
enum class EGameFlowWindowAction : uint8_t
{
	GFWA_Reset                     = 0,
	GFWA_Closed                    = 1,
	GFWA_Opened                    = 2,
	GFWA_Broken                    = 3,
	GFWA_MAX                       = 4
};


// Enum OLGame.OLWindow.EOLWindowType
enum class EOLWindowType : uint8_t
{
	OLWT_Default                   = 0,
	OLWT_ArrowBreakable            = 1,
	OLWT_MAX                       = 2
};


// Enum OLGame.OLWindow.EWindowState
enum class EWindowState : uint8_t
{
	WS_Closed                      = 0,
	WS_PartiallyOpened             = 1,
	WS_Opened                      = 2,
	WS_Opening                     = 3,
	WS_Closing                     = 4,
	WS_Broken                      = 5,
	WS_PlayerInteracting           = 6,
	WS_BotInteracting              = 7,
	WS_MAX                         = 8
};


// Enum OLGame.OLWindow.WindowEventType
enum class EWindowEventType : uint8_t
{
	WET_StartOpening               = 0,
	WET_Opened                     = 1,
	WET_StartClosing               = 2,
	WET_Closed                     = 3,
	WET_Broken                     = 4,
	WET_MAX                        = 5
};


// Enum OLGame.OLWindow.EWindowInitialState
enum class EWindowInitialState : uint8_t
{
	WIS_Closed                     = 0,
	WIS_PartiallyOpen              = 1,
	WIS_Open                       = 2,
	WIS_Broken                     = 3,
	WIS_MAX                        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OLGame.OLArrow.ArrowSettings
// 0x0064
struct FArrowSettings
{
	float                                              ArrowSpeed;                                               // 0x0000(0x0004) (Edit)
	unsigned long                                      bNoPlayerHit : 1;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bGuaranteedPlayerHit : 1;                                 // 0x0004(0x0004) (Edit)
	unsigned long                                      bFollowTarget : 1;                                        // 0x0004(0x0004) (Edit)
	float                                              MinDistForFollowTarget;                                   // 0x0008(0x0004) (Edit)
	unsigned long                                      bStopAtTarget : 1;                                        // 0x000C(0x0004) (Edit)
	unsigned long                                      bEnableWobble : 1;                                        // 0x000C(0x0004) (Edit)
	float                                              MaxWobbleOffset;                                          // 0x0010(0x0004) (Edit)
	float                                              WobbleOffsetInterval;                                     // 0x0014(0x0004) (Edit)
	unsigned long                                      bEnableShake : 1;                                         // 0x0018(0x0004) (Edit)
	float                                              MinPenetration;                                           // 0x001C(0x0004) (Edit)
	float                                              MaxPenetration;                                           // 0x0020(0x0004) (Edit)
	int                                                HitDamage;                                                // 0x0024(0x0004) (Edit)
	unsigned long                                      bCanStickInLandscape : 1;                                 // 0x0028(0x0004) (Edit)
	struct FName                                       NPCAttachSocketName;                                      // 0x002C(0x0008) (Edit)
	unsigned long                                      bEnableRandomInaccuracy : 1;                              // 0x0034(0x0004) (Edit)
	float                                              DistanceForAccurate;                                      // 0x0038(0x0004) (Edit)
	float                                              DistanceForMaxInaccuracy;                                 // 0x003C(0x0004) (Edit)
	float                                              MaxInaccuracy;                                            // 0x0040(0x0004) (Edit)
	float                                              VelocityPredictionFactor;                                 // 0x0044(0x0004) (Edit)
	unsigned long                                      bEnableFixedInaccuracy : 1;                               // 0x0048(0x0004)
	struct FVector                                     FixedInaccuracyWS;                                        // 0x004C(0x000C)
	float                                              MinDistToTargetToDisableCollisions;                       // 0x0058(0x0004) (Edit)
	unsigned long                                      bOnFire : 1;                                              // 0x005C(0x0004) (Edit)
	float                                              FireStopDuration;                                         // 0x0060(0x0004) (Edit)
};

// ScriptStruct OLGame.OLArrow.ArrowPreciseTravelData
// 0x0034
struct FArrowPreciseTravelData
{
	float                                              TotalAirDuration;                                         // 0x0000(0x0004)
	float                                              InitialVelZ;                                              // 0x0004(0x0004)
	struct FVector                                     StartPos;                                                 // 0x0008(0x000C)
	struct FVector                                     TargetPos;                                                // 0x0014(0x000C)
	struct FVector                                     Inaccuracy;                                               // 0x0020(0x000C)
	class AActor*                                      TargetActor;                                              // 0x002C(0x0008)
};

// ScriptStruct OLGame.OLArrow.ArrowShakeData
// 0x0014
struct FArrowShakeData
{
	unsigned long                                      bShaking : 1;                                             // 0x0000(0x0004)
	float                                              StartTime;                                                // 0x0004(0x0004)
	struct FRotator                                    BaseRotation;                                             // 0x0008(0x000C)
};

// ScriptStruct OLGame.OLArrow.ArrowLandingData
// 0x0040
struct FArrowLandingData
{
	unsigned long                                      bLanding : 1;                                             // 0x0000(0x0004)
	float                                              LandedTime;                                               // 0x0004(0x0004)
	struct FVector                                     InitialPos;                                               // 0x0008(0x000C)
	struct FVector                                     FinalPos;                                                 // 0x0014(0x000C)
	struct FQuat                                       InitialRot;                                               // 0x0020(0x0010)
	struct FQuat                                       FinalRot;                                                 // 0x0030(0x0010)
};

// ScriptStruct OLGame.OLArrow.ArrowWobbleData
// 0x0014
struct FArrowWobbleData
{
	float                                              CurrentOffsetSide;                                        // 0x0000(0x0004)
	float                                              CurrentOffsetUp;                                          // 0x0004(0x0004)
	float                                              TargetOffsetSide;                                         // 0x0008(0x0004)
	float                                              TargetOffsetUp;                                           // 0x000C(0x0004)
	float                                              NextOffsetChangeTime;                                     // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLArrow.ArrowStuckDoorData
// 0x0054
struct FArrowStuckDoorData
{
	class AOLDoor*                                     TheDoor;                                                  // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     InitialRelativeXform;                                     // 0x0010(0x0040)
	float                                              LastDoorOpenRatio;                                        // 0x0050(0x0004)
};

// ScriptStruct OLGame.OLBashableObject.BashableTriggerData
// 0x000C
struct FBashableTriggerData
{
	float                                              MaxAngleInFrontOfPlayer;                                  // 0x0000(0x0004) (Edit)
	class AVolume*                                     TriggerVolume;                                            // 0x0004(0x0008) (Edit)
};

// ScriptStruct OLGame.OLHeroCamera.CamView
// 0x0018
struct FCamView
{
	struct FVector                                     Loc;                                                      // 0x0000(0x000C)
	float                                              Yaw;                                                      // 0x000C(0x0004)
	float                                              Pitch;                                                    // 0x0010(0x0004)
	float                                              Roll;                                                     // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLHeroCamera.ViewLimits
// 0x0010
struct FViewLimits
{
	float                                              MinYaw;                                                   // 0x0000(0x0004)
	float                                              MaxYaw;                                                   // 0x0004(0x0004)
	float                                              MinPitch;                                                 // 0x0008(0x0004)
	float                                              MaxPitch;                                                 // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLHeroCamera.SmoothingData
// 0x0024
struct FSmoothingData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	struct FCamView                                    ViewWS;                                                   // 0x0004(0x0018)
	float                                              StartTime;                                                // 0x001C(0x0004)
	float                                              Duration;                                                 // 0x0020(0x0004)
};

// ScriptStruct OLGame.OLHeroCamera.TargettedSmoothingData
// 0x0014
struct FTargettedSmoothingData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              TargetAngleWS;                                            // 0x0004(0x0004)
	float                                              StartAngleWS;                                             // 0x0008(0x0004)
	float                                              StartTime;                                                // 0x000C(0x0004)
	float                                              Duration;                                                 // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLHeroCamera.CameraShakeList
// 0x0010
struct FCameraShakeList
{
	TArray<struct FCameraShakeData>                    List;                                                     // 0x0000(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct OLGame.OLHeroCamera.CameraWaveData
// 0x000C
struct FCameraWaveData
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit)
	float                                              StartPhase;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct OLGame.OLHeroCamera.CameraShakeData
// 0x0098
struct FCameraShakeData
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit)
	float                                              FadeInTime;                                               // 0x0008(0x0004) (Edit)
	float                                              FadeOutTime;                                              // 0x000C(0x0004) (Edit)
	float                                              MaxShakeDistance;                                         // 0x0010(0x0004) (Edit)
	float                                              DistanceExponent;                                         // 0x0014(0x0004) (Edit)
	unsigned long                                      bPositionless : 1;                                        // 0x0018(0x0004) (Edit)
	unsigned long                                      bOverrideForceFeedbackIntensity : 1;                      // 0x0018(0x0004) (Edit)
	float                                              OveriddenForceFeedbackIntensity;                          // 0x001C(0x0004) (Edit)
	unsigned long                                      bDynamicForceFeedbackIntensity : 1;                       // 0x0020(0x0004)
	float                                              DynamicForceFeedbackMultiplier;                           // 0x0024(0x0004)
	struct FCameraWaveData                             YawWaveA;                                                 // 0x0028(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             YawWaveB;                                                 // 0x0034(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             PitchWaveA;                                               // 0x0040(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             PitchWaveB;                                               // 0x004C(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             RollWaveA;                                                // 0x0058(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             RollWaveB;                                                // 0x0064(0x000C) (Edit, EditInline)
	unsigned long                                      bActive : 1;                                              // 0x0070(0x0004) (Transient)
	float                                              StartedTime;                                              // 0x0074(0x0004) (Transient)
	struct FVector                                     SourceLocation;                                           // 0x0078(0x000C) (Transient)
	float                                              YawOffset;                                                // 0x0084(0x0004) (Transient)
	float                                              PitchOffset;                                              // 0x0088(0x0004) (Transient)
	float                                              RollOffset;                                               // 0x008C(0x0004) (Transient)
	class UObject*                                     Owner;                                                    // 0x0090(0x0008) (Transient)
};

// ScriptStruct OLGame.OLBugTracker.OLBugTrackerBinding
// 0x0018
struct FOLBugTrackerBinding
{
	struct FName                                       PCName;                                                   // 0x0000(0x0008) (Config)
	struct FString                                     BugTrackerRealName;                                       // 0x0008(0x0010) (Config, NeedCtorLink)
};

// ScriptStruct OLGame.OLCamcorderFilesHud.CamcorderRecord
// 0x007C
struct FCamcorderRecord
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	unsigned long                                      bIsVideo : 1;                                             // 0x0008(0x0004)
	int                                                Order;                                                    // 0x000C(0x0004)
	int                                                CatOrder;                                                 // 0x0010(0x0004)
	TEnumAsByte<EFolderCategory>                       Category;                                                 // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     VOSndPath;                                                // 0x0018(0x0010) (NeedCtorLink)
	unsigned long                                      bNoEmptyFile : 1;                                         // 0x0028(0x0004)
	struct FName                                       RecordGroup;                                              // 0x002C(0x0008)
	class UTexture*                                    StaticRecordedThumbnail;                                  // 0x0034(0x0008)
	class UTexture*                                    StaticRecordedImage;                                      // 0x003C(0x0008)
	struct FName                                       StaticRecordedVideoFilename;                              // 0x0044(0x0008)
	struct FString                                     StaticSndStartPath;                                       // 0x004C(0x0010) (NeedCtorLink)
	struct FString                                     StaticSndEndPath;                                         // 0x005C(0x0010) (NeedCtorLink)
	class UAkBank*                                     StaticSndRequiredBank;                                    // 0x006C(0x0008)
	float                                              FixedMovieDuration;                                       // 0x0074(0x0004)
	float                                              DelayBeforeVO;                                            // 0x0078(0x0004)
};

// ScriptStruct OLGame.OLCamcorderFilesHud.CachedNamedTexture
// 0x0010
struct FCachedNamedTexture
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	class UTexture*                                    Texture;                                                  // 0x0008(0x0008)
};

// ScriptStruct OLGame.OLCamcorderFilesHud.CachedThumbnailData
// 0x0020
struct FCachedThumbnailData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	TArray<unsigned char>                              TextureData;                                              // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                SizeX;                                                    // 0x0018(0x0004)
	int                                                SizeY;                                                    // 0x001C(0x0004)
};

// ScriptStruct OLGame.OLCamcorderHud.CamcorderHudObjects
// 0x0070
struct FCamcorderHudObjects
{
	class UGFxObject*                                  ZoomTrackerMC;                                            // 0x0000(0x0008)
	class UGFxObject*                                  NVStatusMC;                                               // 0x0008(0x0008)
	class UGFxObject*                                  BatteryBarMC;                                             // 0x0010(0x0008)
	class UGFxObject*                                  RecStatucMC;                                              // 0x0018(0x0008)
	class UGFxObject*                                  StbyStatucMC;                                             // 0x0020(0x0008)
	class UGFxObject*                                  MainOpacity;                                              // 0x0028(0x0008)
	class UGFxObject*                                  RecordingTimeLabel;                                       // 0x0030(0x0008)
	class UGFxObject*                                  SoundBarL;                                                // 0x0038(0x0008)
	class UGFxObject*                                  SoundBarR;                                                // 0x0040(0x0008)
	class UGFxObject*                                  SoundBarGroup;                                            // 0x0048(0x0008)
	class UGFxObject*                                  MicStatus;                                                // 0x0050(0x0008)
	class UGFxObject*                                  CircularBar;                                              // 0x0058(0x0008)
	class UGFxObject*                                  CircularTime;                                             // 0x0060(0x0008)
	class UGFxObject*                                  Aperture;                                                 // 0x0068(0x0008)
};

// ScriptStruct OLGame.OLCamcorderHud.CamcorderHudState
// 0x0030
struct FCamcorderHudState
{
	int                                                ZoomFactor;                                               // 0x0000(0x0004)
	int                                                CamcorderMode;                                            // 0x0004(0x0004)
	int                                                BatteryLeft;                                              // 0x0008(0x0004)
	int                                                RecStatucState;                                           // 0x000C(0x0004)
	int                                                MainOpacityState;                                         // 0x0010(0x0004)
	int                                                SoundLevelL;                                              // 0x0014(0x0004)
	int                                                SoundLevelR;                                              // 0x0018(0x0004)
	int                                                SoundGroupStatus;                                         // 0x001C(0x0004)
	int                                                MicStatus;                                                // 0x0020(0x0004)
	int                                                CircularBarStatus;                                        // 0x0024(0x0004)
	int                                                CircularTimeStatus;                                       // 0x0028(0x0004)
	int                                                ApertureState;                                            // 0x002C(0x0004)
};

// ScriptStruct OLGame.OLTutorialManager.ContextualTutorialsData
// 0x0004
struct FContextualTutorialsData
{
	unsigned long                                      bBattery : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bClimbUp : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bDocument : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bSpikyPlant : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bStaminaDepletion : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bStaminaDepleted : 1;                                     // 0x0000(0x0004)
	unsigned long                                      bSwimmingStaminaDepletion : 1;                            // 0x0000(0x0004)
	unsigned long                                      bHidingInFoliageStand : 1;                                // 0x0000(0x0004)
	unsigned long                                      bHidingInFoliageCrouch : 1;                               // 0x0000(0x0004)
	unsigned long                                      bHidingInFoliageCrawl : 1;                                // 0x0000(0x0004)
	unsigned long                                      bPeekingFromBarrel : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bPeekingFromDoor : 1;                                     // 0x0000(0x0004)
	unsigned long                                      bPeekingFromWardrobe : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bPeekingFromLedgeHang : 1;                                // 0x0000(0x0004)
	unsigned long                                      bPeekingFromUnderwater : 1;                               // 0x0000(0x0004)
	unsigned long                                      bBandagePickedUp : 1;                                     // 0x0000(0x0004)
	unsigned long                                      bBatteryPickedUp : 1;                                     // 0x0000(0x0004)
	unsigned long                                      bRecordingGathered : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bBandagePocket : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bBatteryPocket : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bRecordingShown : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bEasyDeathQTEShown : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bHidingUnderBed : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bReadingDocument : 1;                                     // 0x0000(0x0004)
	unsigned long                                      bOpenDoorSlowlyPrompt : 1;                                // 0x0000(0x0004)
	unsigned long                                      bOpenWardrobeDoorSlowlyPrompt : 1;                        // 0x0000(0x0004)
};

// ScriptStruct OLGame.OLPlayerController.PersistentCheckpointData
// 0x0044
struct FPersistentCheckpointData
{
	struct FString                                     TimeStamp;                                                // 0x0000(0x0010) (NeedCtorLink)
	int                                                DifficultyMode;                                           // 0x0010(0x0004)
	float                                              TotalPlayTime;                                            // 0x0014(0x0004)
	unsigned long                                      bStartedFromChapter : 1;                                  // 0x0018(0x0004)
	int                                                EasiestDifficulty;                                        // 0x001C(0x0004)
	struct FContextualTutorialsData                    CompletedContextualTutorials;                             // 0x0020(0x0004)
	TArray<struct FName>                               CompletedRecordingMoments;                                // 0x0024(0x0010) (NeedCtorLink)
	TArray<struct FName>                               UnreadRecordingMoments;                                   // 0x0034(0x0010) (NeedCtorLink)
};

// ScriptStruct OLGame.OLPawn.GameplayParams
// 0x0040
struct FGameplayParams
{
	TEnumAsByte<ERootMotionMode>                       RMM;                                                      // 0x0000(0x0001) (Edit)
	TEnumAsByte<ECameraRotationMode>                   CameraMode;                                               // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	unsigned long                                      bAllowSpringForMouse : 1;                                 // 0x0004(0x0004) (Edit)
	float                                              MinYaw;                                                   // 0x0008(0x0004) (Edit)
	float                                              MaxYaw;                                                   // 0x000C(0x0004) (Edit)
	float                                              MinPitchWS;                                               // 0x0010(0x0004) (Edit)
	float                                              MaxPitchWS;                                               // 0x0014(0x0004) (Edit)
	float                                              MinPitchCS;                                               // 0x0018(0x0004) (Edit)
	float                                              MaxPitchCS;                                               // 0x001C(0x0004) (Edit)
	float                                              ViewLimitsApproachCoeff;                                  // 0x0020(0x0004) (Edit)
	float                                              FOVOverride;                                              // 0x0024(0x0004) (Edit)
	unsigned long                                      DisableCollisions : 1;                                    // 0x0028(0x0004) (Edit)
	unsigned long                                      IgnorePawnCollisions : 1;                                 // 0x0028(0x0004) (Edit)
	unsigned long                                      bEnablePawnRepulsion : 1;                                 // 0x0028(0x0004) (Edit)
	unsigned long                                      bSupportsCrouching : 1;                                   // 0x0028(0x0004) (Edit)
	unsigned long                                      bKeepsPhysics : 1;                                        // 0x0028(0x0004) (Edit)
	float                                              CollisionHeight;                                          // 0x002C(0x0004) (Edit)
	float                                              CollisionRadius;                                          // 0x0030(0x0004) (Edit)
	TEnumAsByte<EPhysics>                              Physics;                                                  // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	unsigned long                                      bDisablePhysFalling : 1;                                  // 0x0038(0x0004) (Edit)
	unsigned long                                      bNoZVelocityClear : 1;                                    // 0x0038(0x0004) (Edit)
	unsigned long                                      BothHandsNeeded : 1;                                      // 0x0038(0x0004) (Edit)
	float                                              MaxStepHeight;                                            // 0x003C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLPawn.SpecialMoveParameters
// 0x0078
struct FSpecialMoveParameters
{
	struct FGameplayParams                             GP;                                                       // 0x0000(0x0040) (Edit)
	TEnumAsByte<ELocomotionMode>                       NextLocomotionMode;                                       // 0x0040(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FName                                       AnimName;                                                 // 0x0044(0x0008) (Edit)
	float                                              AnimPlayRate;                                             // 0x004C(0x0004) (Edit)
	unsigned long                                      bNoAnim : 1;                                              // 0x0050(0x0004) (Edit)
	unsigned long                                      bUpperBodyAnim : 1;                                       // 0x0050(0x0004) (Edit)
	float                                              AnimBlendInTime;                                          // 0x0054(0x0004) (Edit)
	float                                              AnimBlendOutTime;                                         // 0x0058(0x0004) (Edit)
	unsigned long                                      bCancelMoveOnInterruption : 1;                            // 0x005C(0x0004) (Edit)
	unsigned long                                      bExitOnBlendOut : 1;                                      // 0x005C(0x0004) (Edit)
	unsigned long                                      bPlayAnimWhenPositioned : 1;                              // 0x005C(0x0004) (Edit)
	unsigned long                                      bTargettedYawSmoothing : 1;                               // 0x005C(0x0004) (Edit)
	unsigned long                                      bTargettedPitchSmoothing : 1;                             // 0x005C(0x0004) (Edit)
	unsigned long                                      bAlwaysInterruptible : 1;                                 // 0x005C(0x0004) (Edit)
	unsigned long                                      bInterruptibleAfterTrigger : 1;                           // 0x005C(0x0004) (Edit)
	unsigned long                                      bCollisionChangeOnTrigger : 1;                            // 0x005C(0x0004) (Edit)
	unsigned long                                      PlayerInputEnabled : 1;                                   // 0x005C(0x0004) (Edit)
	unsigned long                                      KeepLocomotionMode : 1;                                   // 0x005C(0x0004) (Edit)
	unsigned long                                      AdjustPosition : 1;                                       // 0x005C(0x0004) (Edit)
	unsigned long                                      AdjustOrientation : 1;                                    // 0x005C(0x0004) (Edit)
	unsigned long                                      UseAnimTimeForPositionAdjustment : 1;                     // 0x005C(0x0004) (Edit)
	unsigned long                                      bUsePawnVelocityForPositionning : 1;                      // 0x005C(0x0004) (Edit)
	float                                              PositionningLinearVelocity;                               // 0x0060(0x0004) (Edit)
	float                                              PositionningCrouchedLinearVelocity;                       // 0x0064(0x0004) (Edit)
	float                                              PositionningCrawledLinearVelocity;                        // 0x0068(0x0004) (Edit)
	float                                              PositionningAngularVelocity;                              // 0x006C(0x0004) (Edit)
	float                                              StaminaConsumption;                                       // 0x0070(0x0004) (Edit)
	unsigned long                                      bUseDarkLight : 1;                                        // 0x0074(0x0004) (Edit)
	unsigned long                                      bNoCamcorderTransition : 1;                               // 0x0074(0x0004) (Edit)
};

// ScriptStruct OLGame.OLPawn.AdjustPositionData
// 0x0038
struct FAdjustPositionData
{
	unsigned long                                      Active : 1;                                               // 0x0000(0x0004)
	unsigned long                                      Done : 1;                                                 // 0x0000(0x0004)
	struct FVector                                     PositionError;                                            // 0x0004(0x000C)
	float                                              HeadingError;                                             // 0x0010(0x0004)
	TEnumAsByte<EAdjustPositionTargetType>             TargetType;                                               // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FVector                                     OriginalPosition;                                         // 0x0018(0x000C)
	struct FRotator                                    OriginalRotation;                                         // 0x0024(0x000C)
	float                                              CorrectionTime;                                           // 0x0030(0x0004)
	float                                              ElapsedTime;                                              // 0x0034(0x0004)
};

// ScriptStruct OLGame.OLPawn.ProceduralAnimData
// 0x0049
struct FProceduralAnimData
{
	struct FVector                                     PositionDelta;                                            // 0x0000(0x000C)
	float                                              HeadingDelta;                                             // 0x000C(0x0004)
	TEnumAsByte<EProceduralAnimInterpType>             InterpType;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ConstantSpeedContrib;                                     // 0x0014(0x0004)
	float                                              DelayTimeLeft;                                            // 0x0018(0x0004)
	float                                              TotalTime;                                                // 0x001C(0x0004)
	float                                              ElapsedTime;                                              // 0x0020(0x0004)
	unsigned long                                      bWaitForNotify : 1;                                       // 0x0024(0x0004)
	unsigned long                                      bRecomputeDataAfterNotify : 1;                            // 0x0024(0x0004)
	struct FVector                                     RecomputeDesiredPosition;                                 // 0x0028(0x000C)
	struct FRotator                                    RecomputeDesiredOrientation;                              // 0x0034(0x000C)
	unsigned long                                      bIndependentRotationControl : 1;                          // 0x0040(0x0004)
	float                                              IndependentRotationDuration;                              // 0x0044(0x0004)
	TEnumAsByte<EProceduralAnimInterpType>             RotationInterpType;                                       // 0x0048(0x0001)
};

// ScriptStruct OLGame.OLPawn.MovementBlockedData
// 0x001C
struct FMovementBlockedData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FVector                                     Direction;                                                // 0x000C(0x000C)
	float                                              TimeStamp;                                                // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLPawn.DelayedEventInfo
// 0x0014
struct FDelayedEventInfo
{
	class UAkEvent*                                    SoundEvent;                                               // 0x0000(0x0008)
	float                                              DueTime;                                                  // 0x0008(0x0004)
	struct FName                                       BoneName;                                                 // 0x000C(0x0008)
};

// ScriptStruct OLGame.OLHero.SkinMaterials
// 0x01FC
struct FSkinMaterials
{
	TEnumAsByte<ESkinType>                             BaseSkinType;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UMaterialInterface*                          NM[0x14];                                                 // 0x0004(0x0008)
	class UMaterialInterface*                          IM[0x14];                                                 // 0x00A4(0x0008)
	class UMaterialInterface*                          BM[0x14];                                                 // 0x0144(0x0008)
	class UMaterialInterface*                          WM[0x3];                                                  // 0x01E4(0x0008)
};

// ScriptStruct OLGame.OLHero.HeroAnimNodes
// 0x01D8
struct FHeroAnimNodes
{
	class UOLAnimCameraSpace*                          UpperBodyCamSpace;                                        // 0x0000(0x0008)
	class UOLAnimCustomBlend*                          UpperBodyBlendNode;                                       // 0x0008(0x0008)
	class UAnimNodeSlot*                               RightArmAnimSlot;                                         // 0x0010(0x0008)
	class UAnimNodeSlot*                               RightArmNoCamSpaceAnimSlot;                               // 0x0018(0x0008)
	class UAnimNodeSlot*                               LeftArmAnimSlot;                                          // 0x0020(0x0008)
	class UOLAnimBlendByPosture*                       BlendByPostureWalkingAnimNode;                            // 0x0028(0x0008)
	class UOLAnimBlendByPosture*                       BlendByPostureFallingAnimNode;                            // 0x0030(0x0008)
	class UOLAnimBlendBySpeed*                         BlendBySpeedCrouchFallingAnimNode;                        // 0x0038(0x0008)
	class UOLAnimBlendBySpeed*                         BlendBySpeedCrawlFallingAnimNode;                         // 0x0040(0x0008)
	class UOLAnimBlendByLocomotionMode*                LocomotionAnimNode;                                       // 0x0048(0x0008)
	class UOLAnimConstrainedMovement*                  LedgeHangAnimNode;                                        // 0x0050(0x0008)
	class UOLAnimConstrainedMovement*                  LedgeWalkAnimNode;                                        // 0x0058(0x0008)
	class UOLAnimConstrainedMovement*                  SqueezeAnimNode;                                          // 0x0060(0x0008)
	class UOLAnimMultiCycleConstrainedMovement*        LadderAnimNode;                                           // 0x0068(0x0008)
	class UOLAnimDoorInteraction*                      DoorAnimNode;                                             // 0x0070(0x0008)
	class UAnimNodeBlendPerBone*                       LeftArmWallContactFilterNode;                             // 0x0078(0x0008)
	class UAnimNodeBlendPerBone*                       CrouchedLeftArmWallContactFilterNode;                     // 0x0080(0x0008)
	class UAnimNodeSequence*                           LeftArmWallContactAnimSequence;                           // 0x0088(0x0008)
	class UAnimNodeSequence*                           CrouchedLeftArmWallContactAnimSequence;                   // 0x0090(0x0008)
	class UOLAnimPeeking*                              PeekingAnimNode;                                          // 0x0098(0x0008)
	class UAnimNodeSequence*                           BedAnimNode;                                              // 0x00A0(0x0008)
	class UOLAnimBlendDirectionalRM*                   FreeCrawlAnimNode;                                        // 0x00A8(0x0008)
	class UOLAnimBlendDirectionalRM*                   ConstrainedCrawlAnimNode;                                 // 0x00B0(0x0008)
	class UAnimNodeBlendList*                          CrawlModeAnimNode;                                        // 0x00B8(0x0008)
	class UOLAnimScrubbable*                           CrawlLookScrubAnimNode;                                   // 0x00C0(0x0008)
	class UAnimNodeBlendList*                          CrawlTurnAnimNode;                                        // 0x00C8(0x0008)
	class UAnimNodeBlendPerBone*                       LeftFootPlacementNode;                                    // 0x00D0(0x0008)
	class UAnimNodeBlendPerBone*                       RightFootPlacementNode;                                   // 0x00D8(0x0008)
	class UOLAnimCrouchedTurnOnSpot*                   CrouchTurnOnSpotAnimNode;                                 // 0x00E0(0x0008)
	class UOLAnimParrying*                             ParryingAnimNode;                                         // 0x00E8(0x0008)
	class UOLAnimBlendByLeaning*                       LeanStandingAnimNode;                                     // 0x00F0(0x0008)
	class UOLAnimBlendByLeaning*                       LeanCrouchedAnimNode;                                     // 0x00F8(0x0008)
	class UOLAnimScrubbable*                           DeathGripAnimNode;                                        // 0x0100(0x0008)
	class UAnimNodeSequence*                           DeathGripShake;                                           // 0x0108(0x0008)
	class UOLAnimWardrobe*                             WardrobeAnimNode;                                         // 0x0110(0x0008)
	class UOLAnimSlidingSlope*                         SlidingSlopeAnimNode;                                     // 0x0118(0x0008)
	class UOLAnimSelectByWaterDepth*                   HiddenInWaterAnimNode;                                    // 0x0120(0x0008)
	class UOLAnimRiver*                                RiverAnimNode;                                            // 0x0128(0x0008)
	class UOLAnimPairedWalk*                           PairedWalkAnimNode;                                       // 0x0130(0x0008)
	class UAnimNodeAdditiveBlending*                   CrawlIdleAnimNode;                                        // 0x0138(0x0008)
	class UAnimNodeBlendPerBone*                       GameplayItemLeftArmAnimNode;                              // 0x0140(0x0008)
	class UOLAnimGenericPoseBlend*                     GenericPoseBlend;                                         // 0x0148(0x0008)
	TArray<class UAnimNodeSequence*>                   FlySwattingNodes;                                         // 0x0150(0x0010) (NeedCtorLink)
	class UAnimNodeAdditiveBlending*                   BabyHoldingIdleAdditiveAnimNode;                          // 0x0160(0x0008)
	class UAnimNodeAdditiveBlending*                   StandIdleAdditiveAnimNode;                                // 0x0168(0x0008)
	class UAnimNodeBlendPerBone*                       LookLeftToRightFilter;                                    // 0x0170(0x0008)
	class UOLAnimPoseKeeper*                           PoseKeeper;                                               // 0x0178(0x0008)
	class USkelControlLimb*                            LeftHandIK;                                               // 0x0180(0x0008)
	class USkelControlLimb*                            RightHandIK;                                              // 0x0188(0x0008)
	class USkelControlSingleBone*                      LeftHandFix;                                              // 0x0190(0x0008)
	class USkelControlSingleBone*                      HiddenRightArmControl;                                    // 0x0198(0x0008)
	class USkelControlSingleBone*                      HiddenLeftArmControl;                                     // 0x01A0(0x0008)
	class USkelControlBase*                            LeftForeTwistControl;                                     // 0x01A8(0x0008)
	class USkelControlBase*                            LeftForeTwist1Control;                                    // 0x01B0(0x0008)
	class USkelControlBase*                            LeftUpArmTwistControl;                                    // 0x01B8(0x0008)
	class USkelControlBase*                            RightForeTwistControl;                                    // 0x01C0(0x0008)
	class USkelControlBase*                            RightForeTwist1Control;                                   // 0x01C8(0x0008)
	class USkelControlBase*                            RightUpArmTwistControl;                                   // 0x01D0(0x0008)
};

// ScriptStruct OLGame.OLHero.EnvironmentReactionData
// 0x0020
struct FEnvironmentReactionData
{
	class AActor*                                      LeftSideObstacle;                                         // 0x0000(0x0008)
	float                                              LeftSideObstacleFreeTime;                                 // 0x0008(0x0004)
	unsigned long                                      bLeftArmEnvironmentDodge : 1;                             // 0x000C(0x0004)
	class AActor*                                      RightSideObstacle;                                        // 0x0010(0x0008)
	float                                              RightSideObstacleFreeTime;                                // 0x0018(0x0004)
	unsigned long                                      bRightArmEnvironmentDodge : 1;                            // 0x001C(0x0004)
};

// ScriptStruct OLGame.OLHero.HandIKData
// 0x0030
struct FHandIKData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	TEnumAsByte<EIKTargetType>                         IKTarget;                                                 // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x0008(0x0004)
	float                                              Duration;                                                 // 0x000C(0x0004)
	float                                              FadeInTime;                                               // 0x0010(0x0004)
	float                                              FadeOutTime;                                              // 0x0014(0x0004)
	struct FVector                                     EffectorOffset;                                           // 0x0018(0x000C)
	struct FRotator                                    EffectorRotationOffset;                                   // 0x0024(0x000C)
};

// ScriptStruct OLGame.OLHero.HandPlantedIKData
// 0x0024
struct FHandPlantedIKData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              Strength;                                                 // 0x0004(0x0004)
	float                                              DesiredStrength;                                          // 0x0008(0x0004)
	struct FVector                                     EffectorOffset;                                           // 0x000C(0x000C)
	struct FRotator                                    EffectorRotation;                                         // 0x0018(0x000C)
};

// ScriptStruct OLGame.OLHero.CornerPeekData
// 0x00AC
struct FCornerPeekData
{
	struct FCornerData                                 CornerMarker;                                             // 0x0000(0x0038)
	TEnumAsByte<ECornerPeekPosition>                   PeekPosition;                                             // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	unsigned long                                      bCrouched : 1;                                            // 0x003C(0x0004)
	struct FVector                                     CornerLocation;                                           // 0x0040(0x000C)
	struct FVector                                     FwdDir;                                                   // 0x004C(0x000C)
	struct FVector                                     SideDir;                                                  // 0x0058(0x000C)
	unsigned long                                      bRoundedCorner : 1;                                       // 0x0064(0x0004)
	float                                              IKStrength;                                               // 0x0068(0x0004)
	float                                              LastInterpActivatedTime;                                  // 0x006C(0x0004)
	float                                              LastDisconnectTime;                                       // 0x0070(0x0004)
	unsigned long                                      bDisconnecting : 1;                                       // 0x0074(0x0004)
	unsigned long                                      bScrewedAround : 1;                                       // 0x0074(0x0004)
	struct FVector                                     AnchorPos;                                                // 0x0078(0x000C)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
	struct FQuat                                       AnchorRot;                                                // 0x0090(0x0010)
	struct FVector                                     JointTargetPos;                                           // 0x00A0(0x000C)
};

// ScriptStruct OLGame.OLHero.AttachmentData
// 0x0060
struct FAttachmentData
{
	class UPrimitiveComponent*                         AttachedComp;                                             // 0x0000(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      bNoUpdateLocOffset : 1;                                   // 0x0008(0x0004)
	unsigned long                                      bHideWhenDone : 1;                                        // 0x0008(0x0004)
	float                                              BlendInTime;                                              // 0x000C(0x0004)
	float                                              BlendOutTime;                                             // 0x0010(0x0004)
	float                                              Duration;                                                 // 0x0014(0x0004)
	struct FVector                                     PositionOffset;                                           // 0x0018(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x0024(0x000C)
	unsigned long                                      bActive : 1;                                              // 0x0030(0x0004)
	unsigned long                                      bAttached : 1;                                            // 0x0030(0x0004)
	float                                              StartTimestamp;                                           // 0x0034(0x0004)
	struct FVector                                     BlendStartPos;                                            // 0x0038(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FQuat                                       BlendStartRot;                                            // 0x0050(0x0010)
};

// ScriptStruct OLGame.OLHero.CrawlData
// 0x0088
struct FCrawlData
{
	unsigned long                                      bAirvent : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bScramble : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bInIntersection : 1;                                      // 0x0000(0x0004)
	class AOLCrawlMarker*                              IntersectionEntryMarker;                                  // 0x0004(0x0008)
	class AOLCrawlMarker*                              CurrentIntersectionTargetMarker;                          // 0x000C(0x0008)
	unsigned long                                      bEnteringIntersectionBwd : 1;                             // 0x0014(0x0004)
	struct FVector                                     CurrentIntersectionDirection;                             // 0x0018(0x000C)
	unsigned long                                      bStopAtIntersection : 1;                                  // 0x0024(0x0004)
	unsigned long                                      bLookingBack : 1;                                         // 0x0024(0x0004)
	float                                              LookbackIntent;                                           // 0x0028(0x0004)
	unsigned long                                      bTurningOnSpot : 1;                                       // 0x002C(0x0004)
	float                                              LastMouseToSIntentTime;                                   // 0x0030(0x0004)
	float                                              PendingProceduralRotationDelta;                           // 0x0034(0x0004)
	unsigned long                                      bExtremityBlockedTowardsPrev : 1;                         // 0x0038(0x0004)
	unsigned long                                      bExtremityBlockedTowardsNext : 1;                         // 0x0038(0x0004)
	unsigned long                                      bForceGroundCheck : 1;                                    // 0x0038(0x0004)
	float                                              LastGroundPitch;                                          // 0x003C(0x0004)
	float                                              LastGroundRoll;                                           // 0x0040(0x0004)
	float                                              LastGroundCheckYaw;                                       // 0x0044(0x0004)
	struct FVector                                     LastGroundCheckPosition;                                  // 0x0048(0x000C)
	struct FVector                                     LastUpdatedFloorMaterialPosition;                         // 0x0054(0x000C)
	int                                                CurrentExitCrawlDivision;                                 // 0x0060(0x0004)
	struct FVector                                     LastGroundPosFeet;                                        // 0x0064(0x000C)
	struct FVector                                     LastGroundPosLeft;                                        // 0x0070(0x000C)
	struct FVector                                     LastGroundPosRight;                                       // 0x007C(0x000C)
};

// ScriptStruct OLGame.OLHero.SlidingSlopeData
// 0x0010
struct FSlidingSlopeData
{
	float                                              EntrySpeedMultiplier;                                     // 0x0000(0x0004)
	float                                              CurrentSpeed;                                             // 0x0004(0x0004)
	struct FName                                       EntryAnim;                                                // 0x0008(0x0008)
};

// ScriptStruct OLGame.OLHero.LedgeHangData
// 0x0018
struct FLedgeHangData
{
	float                                              IdleStartTime;                                            // 0x0000(0x0004)
	float                                              PeekOutRatio;                                             // 0x0004(0x0004)
	float                                              PeekOutDuration;                                          // 0x0008(0x0004)
	float                                              PeekExhaustDuration;                                      // 0x000C(0x0004)
	unsigned long                                      bPlayedPeekingOutSound : 1;                               // 0x0010(0x0004)
	unsigned long                                      bPlayedPeekingInSound : 1;                                // 0x0010(0x0004)
	float                                              PeekOutBreathSndTriggerTimestamp;                         // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLHero.HidingBarrelData
// 0x0040
struct FHidingBarrelData
{
	struct FVector                                     AnimationDirection;                                       // 0x0000(0x000C)
	class AOLHidingBarrel*                             ActiveBarrel;                                             // 0x000C(0x0008)
	unsigned long                                      bCoverAttached : 1;                                       // 0x0014(0x0004)
	unsigned long                                      bPeeking : 1;                                             // 0x0014(0x0004)
	struct FVector                                     PeekStopDir;                                              // 0x0018(0x000C)
	float                                              HighestPeekRatio;                                         // 0x0024(0x0004)
	float                                              LastPeekRatio;                                            // 0x0028(0x0004)
	float                                              PeekRatio;                                                // 0x002C(0x0004)
	struct FVector                                     SlidingDirection;                                         // 0x0030(0x000C)
	float                                              SlidingRatio;                                             // 0x003C(0x0004)
};

// ScriptStruct OLGame.OLHero.PushableData
// 0x0064
struct FPushableData
{
	class AOLPushableObject*                           PromptedPushable;                                         // 0x0000(0x0008)
	class AOLPushableObject*                           ActivePushable;                                           // 0x0008(0x0008)
	TEnumAsByte<EPushSideType>                         PushActionSide;                                           // 0x0010(0x0001)
	TEnumAsByte<EPushObjectType>                       PushObjectType;                                           // 0x0011(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FVector                                     PushEntryInitialDisplacement;                             // 0x0014(0x000C)
	struct FVector                                     PushEntryPushableLocalDelta;                              // 0x0020(0x000C)
	struct FVector                                     PushLocalOffset;                                          // 0x002C(0x000C)
	struct FVector                                     PushLocalOrientation;                                     // 0x0038(0x000C)
	struct FVector                                     LastPushPullLocalDirection;                               // 0x0044(0x000C)
	struct FVector                                     CameraOffsetDir;                                          // 0x0050(0x000C)
	float                                              CameraOffsetLength;                                       // 0x005C(0x0004)
	unsigned long                                      bWasPushing : 1;                                          // 0x0060(0x0004)
	unsigned long                                      bWasPulling : 1;                                          // 0x0060(0x0004)
	unsigned long                                      bWasSlidingLeft : 1;                                      // 0x0060(0x0004)
	unsigned long                                      bWasSlidingRight : 1;                                     // 0x0060(0x0004)
	unsigned long                                      bPlayerPushedOnce : 1;                                    // 0x0060(0x0004)
};

// ScriptStruct OLGame.OLHero.PairedWalkData
// 0x0044
struct FPairedWalkData
{
	class AOLBot*                                      PairedNPC;                                                // 0x0000(0x0008)
	TEnumAsByte<EPairedWalkType>                       Type;                                                     // 0x0008(0x0001)
	TEnumAsByte<EPairedWalkScenario>                   Scenario;                                                 // 0x0009(0x0001)
	TEnumAsByte<EPairedWalkAnimStyle>                  AnimStyle;                                                // 0x000A(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              WalkSpeed;                                                // 0x000C(0x0004)
	float                                              RunSpeed;                                                 // 0x0010(0x0004)
	float                                              StartedTime;                                              // 0x0014(0x0004)
	unsigned long                                      bTurningOnSpot : 1;                                       // 0x0018(0x0004)
	float                                              LastMouseToSIntentTime;                                   // 0x001C(0x0004)
	TEnumAsByte<EPregLynnState>                        PregLynnState;                                            // 0x0020(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              StateStartedTime;                                         // 0x0024(0x0004)
	float                                              HurtMeter;                                                // 0x0028(0x0004)
	float                                              HurtDuration;                                             // 0x002C(0x0004)
	float                                              BaseWalkSpeed;                                            // 0x0030(0x0004)
	float                                              BaseRunSpeed;                                             // 0x0034(0x0004)
	struct FVector                                     LastWalkTargetDirection;                                  // 0x0038(0x000C)
};

// ScriptStruct OLGame.OLHero.PuntData
// 0x0014
struct FPuntData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bLanded : 1;                                              // 0x0000(0x0004)
	float                                              LandedTime;                                               // 0x0004(0x0004)
	float                                              GettingUpStartTime;                                       // 0x0008(0x0004)
	float                                              GroundDuration;                                           // 0x000C(0x0004)
	float                                              DizzinessDuration;                                        // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLHero.CornerPeekConfigData
// 0x008C
struct FCornerPeekConfigData
{
	float                                              DistForMaxStrength;                                       // 0x0000(0x0004)
	float                                              DistForExpectStrength;                                    // 0x0004(0x0004)
	float                                              DistForNoStrength;                                        // 0x0008(0x0004)
	float                                              ExpectStrength;                                           // 0x000C(0x0004)
	float                                              DistOutsideSoftThresh;                                    // 0x0010(0x0004)
	float                                              DistOutsideHardThresh;                                    // 0x0014(0x0004)
	float                                              DistInsideFromLeftSoftThresh;                             // 0x0018(0x0004)
	float                                              DistInsideFromLeftHardThresh;                             // 0x001C(0x0004)
	float                                              DistInsideFromRightSoftThresh;                            // 0x0020(0x0004)
	float                                              DistInsideFromRightHardThresh;                            // 0x0024(0x0004)
	float                                              DistMinFwdSoftThresh;                                     // 0x0028(0x0004)
	float                                              DistMinFwdHardThresh;                                     // 0x002C(0x0004)
	float                                              DistMaxFwdSoftThresh;                                     // 0x0030(0x0004)
	float                                              DistMaxFwdHardThresh;                                     // 0x0034(0x0004)
	float                                              AngleDownSoftThresh;                                      // 0x0038(0x0004)
	float                                              AngleDownHardThresh;                                      // 0x003C(0x0004)
	float                                              AngleInSoftThresh;                                        // 0x0040(0x0004)
	float                                              AngleInHardThresh;                                        // 0x0044(0x0004)
	float                                              AngleOutSoftThresh;                                       // 0x0048(0x0004)
	float                                              AngleOutHardThresh;                                       // 0x004C(0x0004)
	float                                              ShoulderDist;                                             // 0x0050(0x0004)
	float                                              MaxScrewingAroundTime;                                    // 0x0054(0x0004)
	float                                              MinDisconnectedTime;                                      // 0x0058(0x0004)
	float                                              CriticalArmDistLow;                                       // 0x005C(0x0004)
	float                                              CriticalArmDistMed;                                       // 0x0060(0x0004)
	float                                              CriticalArmDistHigh;                                      // 0x0064(0x0004)
	float                                              CriticalDownPitchLow;                                     // 0x0068(0x0004)
	float                                              CriticalDownPitchMed;                                     // 0x006C(0x0004)
	float                                              CriticalDownPitchHigh;                                    // 0x0070(0x0004)
	float                                              StrengthApproachCoeffCrouchUncrouch;                      // 0x0074(0x0004)
	float                                              StrengthApproachCoeffIn;                                  // 0x0078(0x0004)
	float                                              StrengthApproachCoeffTransition;                          // 0x007C(0x0004)
	float                                              StrengthApproachCoeffOutNormal;                           // 0x0080(0x0004)
	float                                              StrengthApproachCoeffOutFast;                             // 0x0084(0x0004)
	float                                              StrengthApproachCoeffOutIdling;                           // 0x0088(0x0004)
};

// ScriptStruct OLGame.OLHero.CameraParameters
// 0x0018
struct FCameraParameters
{
	float                                              MinYaw;                                                   // 0x0000(0x0004)
	float                                              MaxYaw;                                                   // 0x0004(0x0004)
	float                                              MinPitchWS;                                               // 0x0008(0x0004)
	float                                              MaxPitchWS;                                               // 0x000C(0x0004)
	float                                              MinPitchCS;                                               // 0x0010(0x0004)
	float                                              MaxPitchCS;                                               // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLHero.RotationRateLimitParams
// 0x0014
struct FRotationRateLimitParams
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bFromInnerDemonMagnet : 1;                                // 0x0000(0x0004)
	float                                              CurrentMaxRotationRate;                                   // 0x0004(0x0004)
	float                                              BaseMaxRotationRate;                                      // 0x0008(0x0004)
	float                                              LimitDuration;                                            // 0x000C(0x0004)
	float                                              LimitStartedTime;                                         // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLHero.ScriptedDOFData
// 0x0020
struct FScriptedDOFData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              StartedTime;                                              // 0x0004(0x0004)
	float                                              Intensity;                                                // 0x0008(0x0004)
	float                                              Duration;                                                 // 0x000C(0x0004)
	float                                              BlendInTime;                                              // 0x0010(0x0004)
	float                                              BlendOutTime;                                             // 0x0014(0x0004)
	float                                              FocusDist;                                                // 0x0018(0x0004)
	float                                              TransitionDist;                                           // 0x001C(0x0004)
};

// ScriptStruct OLGame.OLTypes.DamageTypeParams
// 0x001D
struct FDamageTypeParams
{
	TEnumAsByte<EDamageType>                           DamageType;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bBloodParticles : 1;                                      // 0x0004(0x0004) (Edit)
	unsigned long                                      bCameraShake : 1;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bBlur : 1;                                                // 0x0004(0x0004) (Edit)
	unsigned long                                      bSoundEffect : 1;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bBladeDamage : 1;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bNonLethal : 1;                                           // 0x0004(0x0004) (Edit)
	unsigned long                                      bForceBleeding : 1;                                       // 0x0004(0x0004) (Edit)
	unsigned long                                      bNoBleeding : 1;                                          // 0x0004(0x0004) (Edit)
	unsigned long                                      bShowBloodColumn : 1;                                     // 0x0004(0x0004) (Edit)
	float                                              BloodColumnTime;                                          // 0x0008(0x0004) (Edit)
	float                                              ForcedDamageAngle;                                        // 0x000C(0x0004) (Edit)
	float                                              CameraShakeDamageOverride;                                // 0x0010(0x0004) (Edit)
	float                                              SpeedPenaltyPctOnDamage;                                  // 0x0014(0x0004) (Edit)
	float                                              SpeedPenaltyDuration;                                     // 0x0018(0x0004) (Edit)
	TEnumAsByte<EForceFeedbackWaveformTemplate>        DamagedFFWaveform;                                        // 0x001C(0x0001) (Edit)
};

// ScriptStruct OLGame.OLHero.DizzinessIdleDriftConfig
// 0x0044
struct FDizzinessIdleDriftConfig
{
	float                                              YawDriftAmpl;                                             // 0x0000(0x0004) (Edit)
	float                                              PitchDriftAmpl;                                           // 0x0004(0x0004) (Edit)
	float                                              RollDriftAmpl;                                            // 0x0008(0x0004) (Edit)
	float                                              DriftPeriod;                                              // 0x000C(0x0004) (Edit)
	float                                              MinSpeedMultiplierDuration;                               // 0x0010(0x0004) (Edit)
	float                                              MaxSpeedMultiplierDuration;                               // 0x0014(0x0004) (Edit)
	float                                              MinSpeedMultiplier;                                       // 0x0018(0x0004) (Edit)
	float                                              MaxSpeedMultiplier;                                       // 0x001C(0x0004) (Edit)
	float                                              SpeedMultiplierApproach;                                  // 0x0020(0x0004) (Edit)
	float                                              MinAmpMultiplier;                                         // 0x0024(0x0004) (Edit)
	float                                              MaxAmpMultiplier;                                         // 0x0028(0x0004) (Edit)
	float                                              MaxAutoRoll;                                              // 0x002C(0x0004) (Edit)
	float                                              MaxTotalRoll;                                             // 0x0030(0x0004) (Edit)
	float                                              AutoRollForFullWeight;                                    // 0x0034(0x0004) (Edit)
	float                                              AutoRollApproach;                                         // 0x0038(0x0004) (Edit)
	float                                              PlayerRotSpdThresh;                                       // 0x003C(0x0004) (Edit)
	float                                              PlayerRotSpdForMaxAutoRoll;                               // 0x0040(0x0004) (Edit)
};

// ScriptStruct OLGame.OLHero.DizzinessInertialDriftConfig
// 0x0040
struct FDizzinessInertialDriftConfig
{
	float                                              YawDriftInertialFactor;                                   // 0x0000(0x0004) (Edit)
	float                                              YawDriftInertialFactorLimit;                              // 0x0004(0x0004) (Edit)
	float                                              YawNonLinearSpringAngleStart;                             // 0x0008(0x0004) (Edit)
	float                                              YawMaxInertialDrift;                                      // 0x000C(0x0004) (Edit)
	float                                              YawInertialDamping;                                       // 0x0010(0x0004) (Edit)
	float                                              YawInertialFriction;                                      // 0x0014(0x0004) (Edit)
	unsigned long                                      bYawDampingOnVelocity : 1;                                // 0x0018(0x0004) (Edit)
	float                                              PitchDriftInertialFactor;                                 // 0x001C(0x0004) (Edit)
	float                                              PitchDriftInertialFactorLimit;                            // 0x0020(0x0004) (Edit)
	float                                              PitchNonLinearSpringAngleStart;                           // 0x0024(0x0004) (Edit)
	float                                              PitchMaxInertialDrift;                                    // 0x0028(0x0004) (Edit)
	float                                              PitchInertialDamping;                                     // 0x002C(0x0004) (Edit)
	float                                              PitchInertialFriction;                                    // 0x0030(0x0004) (Edit)
	unsigned long                                      bPitchDampingOnVelocity : 1;                              // 0x0034(0x0004) (Edit)
	float                                              IdleDriftWeightApproachDown;                              // 0x0038(0x0004) (Edit)
	float                                              IdleDriftWeightApproachUp;                                // 0x003C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLHero.DizzinessMovementConfig
// 0x0018
struct FDizzinessMovementConfig
{
	float                                              MinDelayForAngleChange;                                   // 0x0000(0x0004) (Edit)
	float                                              MaxDelayForAngleChange;                                   // 0x0004(0x0004) (Edit)
	float                                              MaxAngleOffset;                                           // 0x0008(0x0004) (Edit)
	float                                              MinApproachCoeff;                                         // 0x000C(0x0004) (Edit)
	float                                              MaxApproachCoeff;                                         // 0x0010(0x0004) (Edit)
	float                                              RandomMotion;                                             // 0x0014(0x0004) (Edit)
};

// ScriptStruct OLGame.OLHero.DizzinessThrobbingConfig
// 0x0014
struct FDizzinessThrobbingConfig
{
	float                                              Freq;                                                     // 0x0000(0x0004) (Edit)
	float                                              SineExp;                                                  // 0x0004(0x0004) (Edit)
	float                                              EnvelopeExp;                                              // 0x0008(0x0004) (Edit)
	float                                              Phase;                                                    // 0x000C(0x0004) (Edit)
	float                                              ConstantRatio;                                            // 0x0010(0x0004) (Edit)
};

// ScriptStruct OLGame.OLHero.DizzinessConfig
// 0x00D0
struct FDizzinessConfig
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x0008(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x000C(0x0004) (Edit)
	unsigned long                                      bBlur : 1;                                                // 0x0010(0x0004) (Edit)
	unsigned long                                      bInertialCameraDrift : 1;                                 // 0x0010(0x0004) (Edit)
	unsigned long                                      bIdleCameraDrift : 1;                                     // 0x0010(0x0004) (Edit)
	unsigned long                                      bAffectMovementHeading : 1;                               // 0x0010(0x0004) (Edit)
	unsigned long                                      bDisableJump : 1;                                         // 0x0010(0x0004) (Edit)
	unsigned long                                      bCapPlayerSpeed : 1;                                      // 0x0010(0x0004) (Edit)
	unsigned long                                      bThrobbing : 1;                                           // 0x0010(0x0004) (Edit)
	float                                              BlurAmount;                                               // 0x0014(0x0004) (Edit)
	float                                              MaxPlayerSpeed;                                           // 0x0018(0x0004) (Edit)
	float                                              MaxCameraRotationSpeed;                                   // 0x001C(0x0004) (Edit)
	struct FDizzinessIdleDriftConfig                   IdleDrift;                                                // 0x0020(0x0044) (Edit)
	struct FDizzinessInertialDriftConfig               InertialDrift;                                            // 0x0064(0x0040) (Edit)
	struct FDizzinessMovementConfig                    Movement;                                                 // 0x00A4(0x0018) (Edit)
	struct FDizzinessThrobbingConfig                   Throbbing;                                                // 0x00BC(0x0014) (Edit)
};

// ScriptStruct OLGame.OLHero.DizzinessData
// 0x0140
struct FDizzinessData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bFadingOut : 1;                                           // 0x0000(0x0004)
	float                                              StartedTime;                                              // 0x0004(0x0004)
	float                                              StoppedTime;                                              // 0x0008(0x0004)
	float                                              CurrentIntensity;                                         // 0x000C(0x0004)
	float                                              CurrentIntensityNoContext;                                // 0x0010(0x0004)
	float                                              YawVel;                                                   // 0x0014(0x0004)
	float                                              PitchVel;                                                 // 0x0018(0x0004)
	float                                              CurrentPhase;                                             // 0x001C(0x0004)
	float                                              CurrentSpeedMultiplier;                                   // 0x0020(0x0004)
	float                                              SpeedMultiplierTarget;                                    // 0x0024(0x0004)
	float                                              NextSpeedMultiplierChange;                                // 0x0028(0x0004)
	float                                              PitchAmpMultiplier;                                       // 0x002C(0x0004)
	float                                              YawAmpMultiplier;                                         // 0x0030(0x0004)
	float                                              CurrentAutoRoll;                                          // 0x0034(0x0004)
	float                                              YawDriftVelocity;                                         // 0x0038(0x0004)
	float                                              YawInertialDrift;                                         // 0x003C(0x0004)
	float                                              PitchDriftVelocity;                                       // 0x0040(0x0004)
	float                                              PitchInertialDrift;                                       // 0x0044(0x0004)
	float                                              IdleDriftWeight;                                          // 0x0048(0x0004)
	float                                              TotalYawDrift;                                            // 0x004C(0x0004)
	float                                              TotalPitchDrift;                                          // 0x0050(0x0004)
	float                                              YawDriftDelta;                                            // 0x0054(0x0004)
	float                                              PitchDriftDelta;                                          // 0x0058(0x0004)
	float                                              MovementAngleOffset;                                      // 0x005C(0x0004)
	float                                              TargetMovementOffset;                                     // 0x0060(0x0004)
	float                                              AngleOffsetApproachCoeff;                                 // 0x0064(0x0004)
	float                                              NextAngleChangeTime;                                      // 0x0068(0x0004)
	float                                              CurrentRandomMotion;                                      // 0x006C(0x0004)
	struct FDizzinessConfig                            Config;                                                   // 0x0070(0x00D0)
};

// ScriptStruct OLGame.OLHero.WindData
// 0x0038
struct FWindData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	struct FVector                                     WindDirection;                                            // 0x0004(0x000C)
	unsigned long                                      bBurstActive : 1;                                         // 0x0010(0x0004)
	float                                              BurstDuration;                                            // 0x0014(0x0004)
	float                                              BurstIntensity;                                           // 0x0018(0x0004)
	float                                              BurstAlphaThresh;                                         // 0x001C(0x0004)
	struct FVector                                     MovementImpulse;                                          // 0x0020(0x000C)
	float                                              CurrentIntensity;                                         // 0x002C(0x0004)
	float                                              BurstStartedTime;                                         // 0x0030(0x0004)
	float                                              NextBurstTime;                                            // 0x0034(0x0004)
};

// ScriptStruct OLGame.OLHero.NVLightSettings
// 0x0030
struct FNVLightSettings
{
	float                                              InnerConeAngleZoomedOut;                                  // 0x0000(0x0004) (Config)
	float                                              InnerConeAngleZoomedIn;                                   // 0x0004(0x0004) (Config)
	float                                              OuterConeAngleZoomedOut;                                  // 0x0008(0x0004) (Config)
	float                                              OuterConeAngleZoomedIn;                                   // 0x000C(0x0004) (Config)
	float                                              RadiusZoomedOut;                                          // 0x0010(0x0004) (Config)
	float                                              RadiusZoomedIn;                                           // 0x0014(0x0004) (Config)
	float                                              BrightnessEVZoomedOut;                                    // 0x0018(0x0004) (Config)
	float                                              BrightnessEVZoomedIn;                                     // 0x001C(0x0004) (Config)
	float                                              DepthOfFieldFocusInnerRadiusZoomedOut;                    // 0x0020(0x0004) (Config)
	float                                              DepthOfFieldFocusInnerRadiusZoomedIn;                     // 0x0024(0x0004) (Config)
	float                                              DepthOfFieldFocusDistanceZoomedOut;                       // 0x0028(0x0004) (Config)
	float                                              DepthOfFieldFocusDistanceZoomedIn;                        // 0x002C(0x0004) (Config)
};

// ScriptStruct OLGame.OLHero.CameraEffectData
// 0x001C
struct FCameraEffectData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              Duration;                                                 // 0x0004(0x0004)
	float                                              BlendOutDuration;                                         // 0x0008(0x0004)
	float                                              PlaneDist;                                                // 0x000C(0x0004)
	unsigned long                                      bNoRotation : 1;                                          // 0x0010(0x0004)
	unsigned long                                      bDeactivateOnCamcorderTransition : 1;                     // 0x0010(0x0004)
	float                                              StartedTime;                                              // 0x0014(0x0004)
	float                                              BlendOutStartedTime;                                      // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLHero.NVGlitchData
// 0x001C
struct FNVGlitchData
{
	unsigned long                                      bGlitching : 1;                                           // 0x0000(0x0004)
	float                                              CurrentLevel;                                             // 0x0004(0x0004)
	float                                              NextGlitchTime;                                           // 0x0008(0x0004)
	float                                              StartTime;                                                // 0x000C(0x0004)
	TEnumAsByte<ENVGlitchType>                         GlitchType;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              TargetLevel;                                              // 0x0014(0x0004)
	float                                              Duration;                                                 // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLHero.LocomotionModeParameters
// 0x004C
struct FLocomotionModeParameters
{
	struct FGameplayParams                             GP;                                                       // 0x0000(0x0040) (Edit)
	float                                              NeckOffsetSide;                                           // 0x0040(0x0004) (Edit)
	float                                              NeckOffsetFwd;                                            // 0x0044(0x0004) (Edit)
	unsigned long                                      bAllowsCameraReloading : 1;                               // 0x0048(0x0004) (Edit)
	unsigned long                                      bAllowsUsingBandages : 1;                                 // 0x0048(0x0004) (Edit)
	unsigned long                                      bLeftHandIsFree : 1;                                      // 0x0048(0x0004) (Edit)
	unsigned long                                      bAllowsProceduralLookback : 1;                            // 0x0048(0x0004) (Edit)
	unsigned long                                      bAllowsProceduralLookbackQuickSupport : 1;                // 0x0048(0x0004) (Edit)
	unsigned long                                      bDisableBaseSupport : 1;                                  // 0x0048(0x0004) (Edit)
	unsigned long                                      bAllowsCamcorderHUD : 1;                                  // 0x0048(0x0004) (Edit)
};

// ScriptStruct OLGame.OLHero.SpeedLimitParams
// 0x0014
struct FSpeedLimitParams
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              CurrentMaxSpeed;                                          // 0x0004(0x0004)
	float                                              BaseMaxSpeed;                                             // 0x0008(0x0004)
	float                                              LimitDuration;                                            // 0x000C(0x0004)
	float                                              LimitStartedTime;                                         // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLHero.SqueezeLimitsParams
// 0x0004
struct FSqueezeLimitsParams
{
	unsigned long                                      bLimitSqueeze : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bLimitMvmtLeft : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bLimitMvmtRight : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bLimitViewLeft : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bLimitViewRight : 1;                                      // 0x0000(0x0004)
};

// ScriptStruct OLGame.OLHero.CamcorderLostPromptRangeData
// 0x0010
struct FCamcorderLostPromptRangeData
{
	struct FName                                       CheckpointStart;                                          // 0x0000(0x0008)
	struct FName                                       CheckpointEnd;                                            // 0x0008(0x0008)
};

// ScriptStruct OLGame.OLHero.HeroDeathGripData
// 0x006C
struct FHeroDeathGripData
{
	TEnumAsByte<EDeathGripVariantType>                 VariantType;                                              // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bHasGoodQTEInput : 1;                                     // 0x0004(0x0004)
	unsigned long                                      bHasBadQTEInput : 1;                                      // 0x0004(0x0004)
	unsigned long                                      bReadyForQTEInput : 1;                                    // 0x0004(0x0004)
	int                                                QTEKey;                                                   // 0x0008(0x0004)
	unsigned long                                      bFastInput : 1;                                           // 0x000C(0x0004)
	unsigned long                                      bSlowInput : 1;                                           // 0x000C(0x0004)
	float                                              ImmediateInput;                                           // 0x0010(0x0004)
	float                                              AccInput;                                                 // 0x0014(0x0004)
	TEnumAsByte<EGamepadShakeDirection>                LastShakeDirection;                                       // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              LastShakeEventTime;                                       // 0x001C(0x0004)
	float                                              LastShakeDuration;                                        // 0x0020(0x0004)
	struct FName                                       AnimEnter;                                                // 0x0024(0x0008)
	struct FName                                       AnimStruggle;                                             // 0x002C(0x0008)
	struct FName                                       AnimShake;                                                // 0x0034(0x0008)
	struct FName                                       AnimDeath;                                                // 0x003C(0x0008)
	struct FName                                       AnimEscape;                                               // 0x0044(0x0008)
	unsigned long                                      bBlendEnterAnims : 1;                                     // 0x004C(0x0004)
	struct FName                                       AnimEnterA;                                               // 0x0050(0x0008)
	struct FName                                       AnimEnterB;                                               // 0x0058(0x0008)
	float                                              BlendWeigthEnterA;                                        // 0x0060(0x0004)
	class AOLBot*                                      Attacker;                                                 // 0x0064(0x0008)
};

// ScriptStruct OLGame.OLHero.WaveAnimatedDataConfig
// 0x0048
struct FWaveAnimatedDataConfig
{
	float                                              AnimatedRaftMinZOffsetTime;                               // 0x0000(0x0004)
	float                                              AnimatedRaftMaxZOffsetTime;                               // 0x0004(0x0004)
	float                                              AnimatedRaftNegativeMinZOffsetRange;                      // 0x0008(0x0004)
	float                                              AnimatedRaftNegativeMaxZOffsetRange;                      // 0x000C(0x0004)
	float                                              AnimatedRaftPositiveMinZOffsetRange;                      // 0x0010(0x0004)
	float                                              AnimatedRaftPositiveMaxZOffsetRange;                      // 0x0014(0x0004)
	float                                              AnimatedRaftMinPitchOffsetTime;                           // 0x0018(0x0004)
	float                                              AnimatedRaftMaxPitchOffsetTime;                           // 0x001C(0x0004)
	float                                              AnimatedRaftNegativeMinPitchOffsetRange;                  // 0x0020(0x0004)
	float                                              AnimatedRaftNegativeMaxPitchOffsetRange;                  // 0x0024(0x0004)
	float                                              AnimatedRaftPositiveMinPitchOffsetRange;                  // 0x0028(0x0004)
	float                                              AnimatedRaftPositiveMaxPitchOffsetRange;                  // 0x002C(0x0004)
	float                                              AnimatedRaftMinRollOffsetTime;                            // 0x0030(0x0004)
	float                                              AnimatedRaftMaxRollOffsetTime;                            // 0x0034(0x0004)
	float                                              AnimatedRaftNegativeMinRollOffsetRange;                   // 0x0038(0x0004)
	float                                              AnimatedRaftNegativeMaxRollOffsetRange;                   // 0x003C(0x0004)
	float                                              AnimatedRaftPositiveMinRollOffsetRange;                   // 0x0040(0x0004)
	float                                              AnimatedRaftPositiveMaxRollOffsetRange;                   // 0x0044(0x0004)
};

// ScriptStruct OLGame.OLHero.WaveAnimatedData
// 0x0018
struct FWaveAnimatedData
{
	float                                              ValueAmplification;                                       // 0x0000(0x0004)
	float                                              TimeAmplification;                                        // 0x0004(0x0004)
	float                                              LastTime;                                                 // 0x0008(0x0004)
	float                                              NextTime;                                                 // 0x000C(0x0004)
	float                                              CurrentValue;                                             // 0x0010(0x0004)
	float                                              NextValue;                                                // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLHero.RaftData
// 0x0160
struct FRaftData
{
	class AOLRiverMarker*                              ActiveRiverMarker;                                        // 0x0000(0x0008)
	float                                              RiverSpeed;                                               // 0x0008(0x0004)
	class AOLRaftLimitSplineMarker*                    ActiveRaftLimitMarker;                                    // 0x000C(0x0008)
	class UOLSeqAct_HeroPlayRiverAnim*                 ActivePlayAnim;                                           // 0x0014(0x0008)
	unsigned long                                      bAttachmentAttached : 1;                                  // 0x001C(0x0004)
	struct FVector                                     CurrentRaftAttachmentOffset;                              // 0x0020(0x000C)
	struct FVector                                     StartRaftAttachmentOffset;                                // 0x002C(0x000C)
	struct FVector                                     DesiredRaftAttachmentOffset;                              // 0x0038(0x000C)
	float                                              RaftAttachmentOffsetDuration;                             // 0x0044(0x0004)
	float                                              RaftAttachmentOffsetTimeLeft;                             // 0x0048(0x0004)
	struct FVector                                     DesiredRotationForward;                                   // 0x004C(0x000C)
	float                                              RotationCorrectionRate;                                   // 0x0058(0x0004)
	unsigned long                                      bIgnoreAccelerationForCamcorder : 1;                      // 0x005C(0x0004)
	unsigned long                                      bIgnoreCamcorderForAcceleration : 1;                      // 0x005C(0x0004)
	struct FVector                                     IgnoreCamcorderAcceleration;                              // 0x0060(0x000C)
	float                                              NoInputDuration;                                          // 0x006C(0x0004)
	float                                              YawVelocity;                                              // 0x0070(0x0004)
	float                                              LastYawVelocityInputTime;                                 // 0x0074(0x0004)
	float                                              VelocityRotation;                                         // 0x0078(0x0004)
	struct FVector                                     Velocity;                                                 // 0x007C(0x000C)
	unsigned long                                      bMovementDisallowed : 1;                                  // 0x0088(0x0004)
	float                                              MovementEnabledRatio;                                     // 0x008C(0x0004)
	class ASkeletalMeshActor*                          ActiveRaft;                                               // 0x0090(0x0008)
	class ADynamicSMActor*                             ActivePaddle;                                             // 0x0098(0x0008)
	unsigned long                                      bIsCloseToScraping : 1;                                   // 0x00A0(0x0004)
	unsigned long                                      bIsScraping : 1;                                          // 0x00A0(0x0004)
	unsigned long                                      bIsScrapingRight : 1;                                     // 0x00A0(0x0004)
	struct FVector                                     CollisionPosition;                                        // 0x00A4(0x000C)
	struct FVector                                     ScrapingPosition;                                         // 0x00B0(0x000C)
	float                                              ScrapingVelocity;                                         // 0x00BC(0x0004)
	TEnumAsByte<ERaftIdleAnimationType>                RaftAnimationType;                                        // 0x00C0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              BaseValueAmplification;                                   // 0x00C4(0x0004)
	float                                              BaseTimeAmplification;                                    // 0x00C8(0x0004)
	float                                              AnimatedBaseValueAmplification;                           // 0x00CC(0x0004)
	struct FWaveAnimatedData                           AnimatedZOffset;                                          // 0x00D0(0x0018)
	struct FWaveAnimatedData                           AnimatedRoll;                                             // 0x00E8(0x0018)
	struct FWaveAnimatedData                           AnimatedPitch;                                            // 0x0100(0x0018)
	struct FWaveAnimatedData                           RaftAnimatedZOffset;                                      // 0x0118(0x0018)
	struct FWaveAnimatedData                           RaftAnimatedRoll;                                         // 0x0130(0x0018)
	struct FWaveAnimatedData                           RaftAnimatedPitch;                                        // 0x0148(0x0018)
};

// ScriptStruct OLGame.OLHero.UnderwaterData
// 0x0014
struct FUnderwaterData
{
	unsigned long                                      bUnderwaterExitEffectDesired : 1;                         // 0x0000(0x0004)
	unsigned long                                      bUnderwaterBloodExitEffectDesired : 1;                    // 0x0000(0x0004)
	float                                              LastUnderwaterExitEffectActiveTime;                       // 0x0004(0x0004)
	unsigned long                                      bWasUnderwater : 1;                                       // 0x0008(0x0004)
	unsigned long                                      bIsUnderwater : 1;                                        // 0x0008(0x0004)
	TEnumAsByte<EUnderwaterHidingType>                 UnderwaterHidingType;                                     // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              PeekRatio;                                                // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLHero.SwimmingParticlesData
// 0x0018
struct FSwimmingParticlesData
{
	unsigned long                                      bLeftHandOverWater : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bLeftElbowOverWater : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bRightHandOverWater : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bRightElbowOverWater : 1;                                 // 0x0000(0x0004)
	int                                                CurrentLeftHandIdx;                                       // 0x0004(0x0004)
	int                                                CurrentLeftElbowIdx;                                      // 0x0008(0x0004)
	int                                                CurrentRightHandIdx;                                      // 0x000C(0x0004)
	int                                                CurrentRightElbowIdx;                                     // 0x0010(0x0004)
	unsigned long                                      bWaterEntryLeftLegOverWater : 1;                          // 0x0014(0x0004)
	unsigned long                                      bWaterEntryRightLegOverWater : 1;                         // 0x0014(0x0004)
	unsigned long                                      bWaterEntryLeftKneeOverWater : 1;                         // 0x0014(0x0004)
	unsigned long                                      bWaterEntryRightKneeOverWater : 1;                        // 0x0014(0x0004)
	unsigned long                                      bWaterEntryLeftHandOverWater : 1;                         // 0x0014(0x0004)
	unsigned long                                      bWaterEntryRightHandOverWater : 1;                        // 0x0014(0x0004)
	unsigned long                                      bWaterEntryHeadOverWater : 1;                             // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLHero.InventoryData
// 0x001C
struct FInventoryData
{
	unsigned long                                      bLookingAtBatteries : 1;                                  // 0x0000(0x0004)
	float                                              TriedUsingBatteryUnsuccesfulTime;                         // 0x0004(0x0004)
	unsigned long                                      bLookingAtBandages : 1;                                   // 0x0008(0x0004)
	float                                              TriedUsingBandageUnsuccesfulTime;                         // 0x000C(0x0004)
	unsigned long                                      bLookingAtCamcorder : 1;                                  // 0x0010(0x0004)
	unsigned long                                      bShowCameraAfterBandage : 1;                              // 0x0010(0x0004)
	unsigned long                                      bWantsToOpenInventory : 1;                                // 0x0010(0x0004)
	float                                              WantsToOpenInventoryTimeStamp;                            // 0x0014(0x0004)
	unsigned long                                      bInCamcorderHUD : 1;                                      // 0x0018(0x0004)
	unsigned long                                      bInCameraSpaceCamcorderHUD : 1;                           // 0x0018(0x0004)
	unsigned long                                      bWaitingForMovementRelease : 1;                           // 0x0018(0x0004)
	unsigned long                                      bQuickRecordedMomentView : 1;                             // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLHero.LookatObjectData
// 0x001C
struct FLookatObjectData
{
	unsigned long                                      bShouldTriggerCameraState : 1;                            // 0x0000(0x0004)
	unsigned long                                      bShouldLowerCameraOnExit : 1;                             // 0x0000(0x0004)
	unsigned long                                      bShouldHaveNightVisionOnExit : 1;                         // 0x0000(0x0004)
	float                                              WaitingForSnapshot;                                       // 0x0004(0x0004)
	float                                              PutdownWaitTime;                                          // 0x0008(0x0004)
	struct FVector                                     CameraOffsetDir;                                          // 0x000C(0x000C)
	float                                              CameraOffsetLength;                                       // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLHero.GameplayItemDefinition
// 0x0015
struct FGameplayItemDefinition
{
	struct FName                                       ItemName;                                                 // 0x0000(0x0008)
	int                                                ItemMeshIndex;                                            // 0x0008(0x0004)
	struct FName                                       AttachSocketName;                                         // 0x000C(0x0008)
	TEnumAsByte<EGameplayItemShape>                    Shape;                                                    // 0x0014(0x0001)
};

// ScriptStruct OLGame.OLHero.QTEMatineeData
// 0x0018
struct FQTEMatineeData
{
	class UOLSeqAct_QTEDrivenMatinee*                  ActiveQTEMatineeSeq;                                      // 0x0000(0x0008)
	float                                              QTEInitialDurationLeft;                                   // 0x0008(0x0004)
	float                                              QTEInputForce;                                            // 0x000C(0x0004)
	float                                              DesiredQTEValue;                                          // 0x0010(0x0004)
	float                                              CurrentQTEValue;                                          // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLHero.CornerData
// 0x0038
struct FCornerData
{
	unsigned long                                      bDisabled : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      bSkipSpatialCheck : 1;                                    // 0x0000(0x0004) (Edit)
	class AActor*                                      BaseActor;                                                // 0x0004(0x0008)
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (Edit)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (Edit)
	unsigned long                                      b3Sided : 1;                                              // 0x0024(0x0004) (Edit)
	unsigned long                                      bRoundedCorner : 1;                                       // 0x0024(0x0004) (Edit)
	unsigned long                                      bIgnorePreciseHeightForIK : 1;                            // 0x0024(0x0004) (Edit)
	float                                              AllowedMinRangeUp;                                        // 0x0028(0x0004) (Edit)
	float                                              AllowedMaxRangeUp;                                        // 0x002C(0x0004) (Edit)
	float                                              WallThickness;                                            // 0x0030(0x0004) (Edit)
	unsigned long                                      bCanPeekFromLeft : 1;                                     // 0x0034(0x0004) (Edit)
	unsigned long                                      bCanPeekFromRight : 1;                                    // 0x0034(0x0004) (Edit)
	unsigned long                                      bCanPeekFromLeftValid : 1;                                // 0x0034(0x0004) (Transient)
	unsigned long                                      bCanPeekFromRightValid : 1;                               // 0x0034(0x0004) (Transient)
};

// ScriptStruct OLGame.OLWorld.DoorCheckpointData
// 0x0018
struct FDoorCheckpointData
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010)
	float                                              OpenRatio;                                                // 0x0010(0x0004)
	unsigned long                                      bBrokenFwd : 1;                                           // 0x0014(0x0004)
	unsigned long                                      bBrokenBack : 1;                                          // 0x0014(0x0004)
	unsigned long                                      bLocked : 1;                                              // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLWorld.WindowCheckpointData
// 0x0014
struct FWindowCheckpointData
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010)
	unsigned long                                      bPartiallyOpened : 1;                                     // 0x0010(0x0004)
	unsigned long                                      bOpened : 1;                                              // 0x0010(0x0004)
	unsigned long                                      bBroken : 1;                                              // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLWorld.PushableCheckpointData
// 0x001C
struct FPushableCheckpointData
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010)
	struct FVector                                     Displacement;                                             // 0x0010(0x000C)
};

// ScriptStruct OLGame.OLWorld.WorldStateData
// 0x0030
struct FWorldStateData
{
	TArray<struct FDoorCheckpointData>                 DoorStates;                                               // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FWindowCheckpointData>               WindowStates;                                             // 0x0010(0x0010) (NeedCtorLink)
	TArray<struct FPushableCheckpointData>             PushableStates;                                           // 0x0020(0x0010) (NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.VolatileCheckpointData
// 0x008C
struct FVolatileCheckpointData
{
	int                                                NumBatteries;                                             // 0x0000(0x0004)
	int                                                NumBandages;                                              // 0x0004(0x0004)
	float                                              BatteryEnergy;                                            // 0x0008(0x0004)
	float                                              RecordingTimeSeconds;                                     // 0x000C(0x0004)
	unsigned long                                      bUsedHidingSpot : 1;                                      // 0x0010(0x0004)
	unsigned long                                      bReloadedBatteries : 1;                                   // 0x0010(0x0004)
	int                                                NumUsedBandages;                                          // 0x0014(0x0004)
	float                                              TotalTimeUnderwater;                                      // 0x0018(0x0004)
	float                                              MicrophoneUsedTime;                                       // 0x001C(0x0004)
	float                                              TotalCrawlDistance;                                       // 0x0020(0x0004)
	TArray<struct FVector>                             CollectedBatteries;                                       // 0x0024(0x0010) (NeedCtorLink)
	TArray<struct FVector>                             CollectedBandages;                                        // 0x0034(0x0010) (NeedCtorLink)
	TArray<struct FName>                               ActivatedGameState;                                       // 0x0044(0x0010) (NeedCtorLink)
	float                                              SegmentEndGameTime;                                       // 0x0054(0x0004)
	float                                              GameTimeTotalSeconds;                                     // 0x0058(0x0004)
	struct FWorldStateData                             WorldState;                                               // 0x005C(0x0030) (NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.CheckpointRecord
// 0x00D4
struct AOLPlayerController_FCheckpointRecord
{
	int                                                CheckpointRecordVersion;                                  // 0x0000(0x0004)
	struct FPersistentCheckpointData                   PersistentData;                                           // 0x0004(0x0044) (NeedCtorLink)
	struct FVolatileCheckpointData                     VolatileData;                                             // 0x0048(0x008C) (NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.DigitalInputs
// 0x0004
struct FDigitalInputs
{
	unsigned long                                      bPerformedUseAction : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bPressedUseButton : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bReleasedUseButton : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bPressedToggleCamcorder : 1;                              // 0x0000(0x0004)
	unsigned long                                      bPressedToggleNightVision : 1;                            // 0x0000(0x0004)
	unsigned long                                      bPressedZoomIn : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bPressedZoomOut : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bPressedJump : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bPressedReloadBatteries : 1;                              // 0x0000(0x0004)
	unsigned long                                      bReleasedReloadBatteries : 1;                             // 0x0000(0x0004)
	unsigned long                                      bPressedUseBandage : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bStartedActiveZoom : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bPressedPrototypeActionA : 1;                             // 0x0000(0x0004)
	unsigned long                                      bPressedPrototypeActionB : 1;                             // 0x0000(0x0004)
	unsigned long                                      bPressedPrototypeActionC : 1;                             // 0x0000(0x0004)
	unsigned long                                      bPressedPrototypeActionD : 1;                             // 0x0000(0x0004)
	unsigned long                                      bPressedPrototypeActionE : 1;                             // 0x0000(0x0004)
	unsigned long                                      bPressedToggleCrawl : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bPressedToggleRun : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bPressedToggleMicrophone : 1;                             // 0x0000(0x0004)
	unsigned long                                      bPressedToggleInventory : 1;                              // 0x0000(0x0004)
};

// ScriptStruct OLGame.OLPlayerController.CamcorderShot
// 0x0018
struct FCamcorderShot
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	class UTexture2D*                                  ThumbnailImage;                                           // 0x0008(0x0008)
	class UTexture*                                    LargeImage;                                               // 0x0010(0x0008)
};

// ScriptStruct OLGame.OLPlayerController.TouchZoomData
// 0x0014
struct FTouchZoomData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              SmoothedPosition;                                         // 0x0004(0x0004)
	TEnumAsByte<EZoomMovementType>                     CurrentDirection;                                         // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              LastPosition;                                             // 0x000C(0x0004)
	float                                              LastInputTime;                                            // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLTypes.StruggleConfig
// 0x007C
struct FStruggleConfig
{
	struct FName                                       InitIdleAnimEnemy;                                        // 0x0000(0x0008) (Edit)
	struct FName                                       EntryAnimPlayer;                                          // 0x0008(0x0008) (Edit)
	struct FName                                       EntryAnimEnemy;                                           // 0x0010(0x0008) (Edit)
	struct FName                                       CycleAnimPlayer;                                          // 0x0018(0x0008) (Edit)
	struct FName                                       CycleAnimEnemy;                                           // 0x0020(0x0008) (Edit)
	struct FName                                       ExitAnimPlayer;                                           // 0x0028(0x0008) (Edit)
	struct FName                                       ExitAnimEnemy;                                            // 0x0030(0x0008) (Edit)
	struct FName                                       KilledAnimPlayer;                                         // 0x0038(0x0008) (Edit)
	struct FName                                       KillAnimEnemy;                                            // 0x0040(0x0008) (Edit)
	float                                              EntryPlayerBlendInTime;                                   // 0x0048(0x0004) (Edit)
	float                                              ExitPlayerBlendOutTime;                                   // 0x004C(0x0004) (Edit)
	float                                              CycleTime;                                                // 0x0050(0x0004) (Edit)
	unsigned long                                      bNoFail : 1;                                              // 0x0054(0x0004) (Edit)
	float                                              MinRate;                                                  // 0x0058(0x0004) (Edit)
	float                                              MaxRateStart;                                             // 0x005C(0x0004) (Edit)
	float                                              MaxRateEnd;                                               // 0x0060(0x0004) (Edit)
	float                                              SuccessPctForMinRate;                                     // 0x0064(0x0004) (Edit)
	float                                              SuccessPctForMaxRate;                                     // 0x0068(0x0004) (Edit)
	TArray<class UAnimSet*>                            HeroAnimSets;                                             // 0x006C(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.StruggleData
// 0x00CC
struct FStruggleData
{
	class UOLSeqAct_Struggle*                          StruggleAct;                                              // 0x0000(0x0008)
	class ASkeletalMeshActor*                          Enemy;                                                    // 0x0008(0x0008)
	struct FVector                                     RefLocation;                                              // 0x0010(0x000C)
	struct FVector                                     RefDirection;                                             // 0x001C(0x000C)
	struct FStruggleConfig                             Config;                                                   // 0x0028(0x007C) (NeedCtorLink)
	class UOLAnimEnemyStruggle*                        EnemyAnimNode;                                            // 0x00A4(0x0008)
	unsigned long                                      bActiveStrugging : 1;                                     // 0x00AC(0x0004)
	unsigned long                                      bSucceeded : 1;                                           // 0x00AC(0x0004)
	float                                              CycleStartedTime;                                         // 0x00B0(0x0004)
	float                                              NbShakes;                                                 // 0x00B4(0x0004)
	TEnumAsByte<EGamepadShakeDirection>                CurrentInputDirection;                                    // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              TotalDeltas;                                              // 0x00BC(0x0004)
	float                                              LastMouseX;                                               // 0x00C0(0x0004)
	float                                              SmoothedDirection;                                        // 0x00C4(0x0004)
	float                                              SmoothedAnimPlayRate;                                     // 0x00C8(0x0004)
};

// ScriptStruct OLGame.OLPlayerController.ObjectiveData
// 0x0024
struct FObjectiveData
{
	struct FName                                       CheckpointStart;                                          // 0x0000(0x0008)
	struct FName                                       CheckpointEnd;                                            // 0x0008(0x0008)
	struct FName                                       TextId;                                                   // 0x0010(0x0008) (Edit)
	struct FName                                       VoiceOverEventPath;                                       // 0x0018(0x0008) (Edit)
	unsigned long                                      bKeepAfterDeath : 1;                                      // 0x0020(0x0004)
};

// ScriptStruct OLGame.OLCheatManager.DebugTrajectoryPoint
// 0x0018
struct FDebugTrajectoryPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	float                                              Speed;                                                    // 0x000C(0x0004)
	TEnumAsByte<EDebugTrajectoryType>                  PointType;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              TimeStamp;                                                // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLCheatManager.DebugClearanceCheck
// 0x0028
struct FDebugClearanceCheck
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C)
	struct FVector                                     EndPos;                                                   // 0x000C(0x000C)
	float                                              Width;                                                    // 0x0018(0x0004)
	float                                              Height;                                                   // 0x001C(0x0004)
	unsigned long                                      bNavMesh : 1;                                             // 0x0020(0x0004)
	unsigned long                                      bPassed : 1;                                              // 0x0020(0x0004)
	float                                              TimeStamp;                                                // 0x0024(0x0004)
};

// ScriptStruct OLGame.OLCheatManager.DebugNoiseData
// 0x0010
struct FDebugNoiseData
{
	float                                              Time;                                                     // 0x0000(0x0004)
	TEnumAsByte<ENoiseChannelType>                     NoiseType;                                                // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              Loudness;                                                 // 0x0008(0x0004)
	float                                              MaxChannelLoudness;                                       // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLCheatManager.DebugSoundMeterData
// 0x0030
struct FDebugSoundMeterData
{
	unsigned long                                      bHasFL : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bHasFR : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bHasFC : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bHasBL : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bHasBR : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bHasBC : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bHasSL : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bHasSR : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bHasLFE : 1;                                              // 0x0000(0x0004)
	float                                              VolumeFL;                                                 // 0x0004(0x0004)
	float                                              VolumeFR;                                                 // 0x0008(0x0004)
	float                                              VolumeFC;                                                 // 0x000C(0x0004)
	float                                              VolumeBL;                                                 // 0x0010(0x0004)
	float                                              VolumeBR;                                                 // 0x0014(0x0004)
	float                                              VolumeBC;                                                 // 0x0018(0x0004)
	float                                              VolumeSL;                                                 // 0x001C(0x0004)
	float                                              VolumeSR;                                                 // 0x0020(0x0004)
	float                                              VolumeLFE;                                                // 0x0024(0x0004)
	float                                              TotalVolumeLeft;                                          // 0x0028(0x0004)
	float                                              TotalVolumeRight;                                         // 0x002C(0x0004)
};

// ScriptStruct OLGame.OLCheatManager.KismetLogData
// 0x0020
struct FKismetLogData
{
	float                                              Time;                                                     // 0x0000(0x0004)
	struct FName                                       LevelName;                                                // 0x0004(0x0008)
	TEnumAsByte<EKismetLogEventType>                   EventType;                                                // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     DebugMsg;                                                 // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct OLGame.OLCheatManager.LineCheckLogData
// 0x000C
struct FLineCheckLogData
{
	int                                                FrameId;                                                  // 0x0000(0x0004)
	unsigned char                                      Type;                                                     // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              DurationMS;                                               // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLTypes.GameTime
// 0x000C
struct FGameTime
{
	int                                                Hours;                                                    // 0x0000(0x0004) (Edit)
	int                                                Minutes;                                                  // 0x0004(0x0004) (Edit)
	int                                                Seconds;                                                  // 0x0008(0x0004) (Edit)
};

// ScriptStruct OLGame.OLCheckpoint.DynamicDifficulty
// 0x0010
struct FDynamicDifficulty
{
	unsigned long                                      ResetDynamicDifficulty : 1;                               // 0x0000(0x0004) (Edit)
	unsigned long                                      ParTimeCanIncreaseDifficulty : 1;                         // 0x0000(0x0004) (Edit)
	float                                              LowParTime;                                               // 0x0004(0x0004) (Edit)
	float                                              HighParTime;                                              // 0x0008(0x0004)
	unsigned long                                      ParTimeCanLowerDifficulty : 1;                            // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLCheckpointList.CheckpointRedirectItem
// 0x0010
struct FCheckpointRedirectItem
{
	struct FName                                       OldName;                                                  // 0x0000(0x0008) (Edit)
	struct FName                                       NewName;                                                  // 0x0008(0x0008) (Edit)
};

// ScriptStruct OLGame.OLDifficultyConfig.IntByDifficulty
// 0x0034
struct FIntByDifficulty
{
	int                                                DefaultValue;                                             // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_EasyValue : 1;                                  // 0x0004(0x0004)
	int                                                EasyValue;                                                // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_NormalValue : 1;                                // 0x000C(0x0004)
	int                                                NormalValue;                                              // 0x0010(0x0004) (Edit)
	unsigned long                                      bOverride_NormalPlusValue : 1;                            // 0x0014(0x0004)
	int                                                NormalPlusValue;                                          // 0x0018(0x0004) (Edit)
	unsigned long                                      bOverride_HardValue : 1;                                  // 0x001C(0x0004)
	int                                                HardValue;                                                // 0x0020(0x0004) (Edit)
	unsigned long                                      bOverride_HardPlusValue : 1;                              // 0x0024(0x0004)
	int                                                HardPlusValue;                                            // 0x0028(0x0004) (Edit)
	unsigned long                                      bOverride_NightmareValue : 1;                             // 0x002C(0x0004)
	int                                                NightmareValue;                                           // 0x0030(0x0004) (Edit)
};

// ScriptStruct OLGame.OLDoor.DoorShakeData
// 0x0040
struct FDoorShakeData
{
	float                                              Rate;                                                     // 0x0000(0x0004) (Edit)
	float                                              RateVariation;                                            // 0x0004(0x0004) (Edit)
	float                                              Intensity;                                                // 0x0008(0x0004) (Edit)
	float                                              IntensityVariation;                                       // 0x000C(0x0004) (Edit)
	float                                              TotalDuration;                                            // 0x0010(0x0004) (Edit)
	float                                              AmplitudeYaw;                                             // 0x0014(0x0004) (Edit)
	float                                              AmplitudeTrans;                                           // 0x0018(0x0004) (Edit)
	float                                              FrequencyYaw;                                             // 0x001C(0x0004) (Edit)
	float                                              FrequencyTrans;                                           // 0x0020(0x0004) (Edit)
	float                                              ShakeDuration;                                            // 0x0024(0x0004) (Edit)
	float                                              FadeExp;                                                  // 0x0028(0x0004) (Edit)
	unsigned long                                      bShakeCamera : 1;                                         // 0x002C(0x0004) (Edit)
	unsigned long                                      bActive : 1;                                              // 0x002C(0x0004) (Transient)
	float                                              GlobalStartedTime;                                        // 0x0030(0x0004) (Transient)
	float                                              ShakeStartedTime;                                         // 0x0034(0x0004) (Transient)
	float                                              NextShakeStartTime;                                       // 0x0038(0x0004) (Transient)
	float                                              OriginalTranslationX;                                     // 0x003C(0x0004) (Transient)
};

// ScriptStruct OLGame.OLDoor.GameFlowDoorRule
// 0x0014
struct FGameFlowDoorRule
{
	TEnumAsByte<EGameFlowDoorAction>                   Action;                                                   // 0x0000(0x0001) (Edit)
	TEnumAsByte<EGameFlowCondition>                    Condition;                                                // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       ControlName;                                              // 0x0004(0x0008) (Edit)
	struct FName                                       RangeEndCheckpoint;                                       // 0x000C(0x0008) (Edit)
};

// ScriptStruct OLGame.OLDoor.DoorAttachmentData
// 0x0050
struct FDoorAttachmentData
{
	class AActor*                                      AttachedActor;                                            // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     RelativeTransform;                                        // 0x0010(0x0040)
};

// ScriptStruct OLGame.OLDoorData.DoorMeshDirData
// 0x0028
struct FDoorMeshDirData
{
	class UStaticMesh*                                 MainMesh;                                                 // 0x0000(0x0008)
	class USkeletalMesh*                               ForwardBreakingMesh;                                      // 0x0008(0x0008)
	class USkeletalMesh*                               ForwardBrokenMesh;                                        // 0x0010(0x0008)
	class USkeletalMesh*                               BackwardBreakingMesh;                                     // 0x0018(0x0008)
	class USkeletalMesh*                               BackwardBrokenMesh;                                       // 0x0020(0x0008)
};

// ScriptStruct OLGame.OLDoorData.DoorMeshTypeData
// 0x0068
struct FDoorMeshTypeData
{
	struct FDoorMeshDirData                            NormalData;                                               // 0x0000(0x0028)
	struct FDoorMeshDirData                            ReversedData;                                             // 0x0028(0x0028)
	TArray<class UMaterialInstance*>                   Materials;                                                // 0x0050(0x0010) (NeedCtorLink)
	TEnumAsByte<EDoorMaterial>                         DoorMaterialForSound;                                     // 0x0060(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              OcclusionFactor;                                          // 0x0064(0x0004)
};

// ScriptStruct OLGame.OLDoorData.DoorSoundEvents
// 0x0038
struct FDoorSoundEvents
{
	class UAkEvent*                                    SndLocked;                                                // 0x0000(0x0008) (Const)
	class UAkEvent*                                    SndPush;                                                  // 0x0008(0x0008) (Const)
	class UAkEvent*                                    SndInstantOpen;                                           // 0x0010(0x0008) (Const)
	class UAkEvent*                                    SndStartOpening;                                          // 0x0018(0x0008) (Const)
	class UAkEvent*                                    SndClosing;                                               // 0x0020(0x0008) (Const)
	class UAkEvent*                                    SndSlowClose;                                             // 0x0028(0x0008) (Const)
	class UAkEvent*                                    SndBash;                                                  // 0x0030(0x0008) (Const)
};

// ScriptStruct OLGame.OLEngine.CheckpointTime
// 0x0010
struct FCheckpointTime
{
	int                                                SecondsSinceMidnight;                                     // 0x0000(0x0004)
	int                                                Day;                                                      // 0x0004(0x0004)
	int                                                Month;                                                    // 0x0008(0x0004)
	int                                                Year;                                                     // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLEngine.SaveFileInfo
// 0x002C
struct FSaveFileInfo
{
	struct FString                                     Filename;                                                 // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       CheckpointName;                                           // 0x0010(0x0008)
	struct FCheckpointTime                             Time;                                                     // 0x0018(0x0010)
	int                                                Difficulty;                                               // 0x0028(0x0004)
};

// ScriptStruct OLGame.OLLantern.HandleData
// 0x0018
struct FHandleData
{
	struct FVector                                     PrevLocation;                                             // 0x0000(0x000C)
	float                                              PrevLinearVel;                                            // 0x000C(0x0004)
	float                                              AngularVel;                                               // 0x0010(0x0004)
	float                                              CurrentAngle;                                             // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLLantern.HingeData
// 0x0004
struct FHingeData
{
	float                                              RelativeAngle;                                            // 0x0000(0x0004)
};

// ScriptStruct OLGame.OLFloatingObjectBase.BobbingConfigData
// 0x0020
struct FBobbingConfigData
{
	float                                              MinFrequency;                                             // 0x0000(0x0004) (Edit)
	float                                              MaxFrequency;                                             // 0x0004(0x0004) (Edit)
	float                                              MinZ;                                                     // 0x0008(0x0004) (Edit)
	float                                              MaxZ;                                                     // 0x000C(0x0004) (Edit)
	float                                              MinPitch;                                                 // 0x0010(0x0004) (Edit)
	float                                              MaxPitch;                                                 // 0x0014(0x0004) (Edit)
	float                                              MinRoll;                                                  // 0x0018(0x0004) (Edit)
	float                                              MaxRoll;                                                  // 0x001C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLFloatingObjectBase.BobbingData
// 0x0014
struct FBobbingData
{
	float                                              CycleStartTime;                                           // 0x0000(0x0004)
	float                                              CycleEndTime;                                             // 0x0004(0x0004)
	float                                              OffsetZ;                                                  // 0x0008(0x0004)
	float                                              Pitch;                                                    // 0x000C(0x0004)
	float                                              Roll;                                                     // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLFXManager.InnerDemonEffectSensitiveActor
// 0x0028
struct FInnerDemonEffectSensitiveActor
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (ExportObject, Component, EditInline)
	float                                              Intensity;                                                // 0x0008(0x0004)
	struct FVector                                     Location;                                                 // 0x000C(0x000C)
	float                                              ActivationRadius;                                         // 0x0018(0x0004)
	struct FVector                                     SrcActivationLocation;                                    // 0x001C(0x000C)
};

// ScriptStruct OLGame.OLFXManager.HaarpEffectData
// 0x0014
struct FHaarpEffectData
{
	unsigned long                                      bKismetDriven : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bSystemicActive : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bEffectVisible : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bSchoolEffectScheduled : 1;                               // 0x0000(0x0004)
	float                                              CurrentEffectIntensity;                                   // 0x0004(0x0004)
	float                                              KismetEffectIntensity;                                    // 0x0008(0x0004)
	float                                              EffectStartedTime;                                        // 0x000C(0x0004)
	float                                              NextEffectStartTime;                                      // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLFXManager.RandomHaarpEffectKey
// 0x0008
struct FRandomHaarpEffectKey
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit)
	float                                              StartTime;                                                // 0x0004(0x0004) (Edit)
};

// ScriptStruct OLGame.OLFXManager.RandomHaarpEffectConfig
// 0x0028
struct FRandomHaarpEffectConfig
{
	unsigned long                                      bValid : 1;                                               // 0x0000(0x0004)
	float                                              MinDelay;                                                 // 0x0004(0x0004) (Edit)
	float                                              MaxDelay;                                                 // 0x0008(0x0004) (Edit)
	float                                              MinIntensity;                                             // 0x000C(0x0004) (Edit)
	float                                              MaxIntensity;                                             // 0x0010(0x0004) (Edit)
	int                                                MinNumKeys;                                               // 0x0014(0x0004) (Edit)
	int                                                MaxNumKeys;                                               // 0x0018(0x0004) (Edit)
	float                                              MinKeyDuration;                                           // 0x001C(0x0004) (Edit)
	float                                              MaxKeyDuration;                                           // 0x0020(0x0004) (Edit)
	float                                              OffKeyProbability;                                        // 0x0024(0x0004) (Edit)
};

// ScriptStruct OLGame.OLFXManager.DamageColumn
// 0x0010
struct FDamageColumn
{
	float                                              CurrentAmount;                                            // 0x0000(0x0004)
	float                                              DesiredAmount;                                            // 0x0004(0x0004)
	float                                              TimeLeft;                                                 // 0x0008(0x0004)
	float                                              Angle;                                                    // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLFXManager.PPSParamAnim
// 0x0020
struct FPPSParamAnim
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit)
	struct FName                                       RTPCName;                                                 // 0x0008(0x0008) (Edit)
	class UDistributionFloatConstantCurve*             IntensityInterpCurve;                                     // 0x0010(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              InitialValue;                                             // 0x0018(0x0004) (Transient)
	float                                              ValueWhenCancelled;                                       // 0x001C(0x0004) (Transient)
};

// ScriptStruct OLGame.OLFXManager.PPSEffectConfig
// 0x004C
struct FPPSEffectConfig
{
	struct FName                                       PresetName;                                               // 0x0000(0x0008) (Edit)
	class UMaterialInstanceConstant*                   EffectMaterial;                                           // 0x0008(0x0008) (Edit)
	struct FName                                       EffectName;                                               // 0x0010(0x0008) (Edit)
	class UAkEvent*                                    StartAkEvent;                                             // 0x0018(0x0008) (Edit)
	class UAkEvent*                                    StopAkEvent;                                              // 0x0020(0x0008) (Edit)
	TArray<struct FPPSParamAnim>                       ParamAnims;                                               // 0x0028(0x0010) (Edit, Component, AlwaysInit, NeedCtorLink)
	class UDistributionFloatConstantCurve*             AdditiveFOVInterpCurve;                                   // 0x0038(0x0008) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bAnimateBlur : 1;                                         // 0x0040(0x0004) (Edit)
	class UDistributionFloatConstantCurve*             BlurAmountInterpCurve;                                    // 0x0044(0x0008) (Edit, ExportObject, Component, EditInline)
};

// ScriptStruct OLGame.OLFXManager.GenericPPSData
// 0x0030
struct FGenericPPSData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bFrozen : 1;                                              // 0x0000(0x0004)
	float                                              StartedTime;                                              // 0x0004(0x0004)
	float                                              CancelledTime;                                            // 0x0008(0x0004)
	float                                              CancelBlendOutTime;                                       // 0x000C(0x0004)
	unsigned long                                      bHasAdditiveFOV : 1;                                      // 0x0010(0x0004)
	float                                              CurrentAdditiveFOV;                                       // 0x0014(0x0004)
	float                                              AdditiveFOVWhenCancelled;                                 // 0x0018(0x0004)
	unsigned long                                      bHasAnimatedBlur : 1;                                     // 0x001C(0x0004)
	float                                              CurrentAnimatedBlur;                                      // 0x0020(0x0004)
	float                                              AnimatedBlurWhenCancelled;                                // 0x0024(0x0004)
	class UOLSeqAct_PostProcessEffect*                 PPSSeqAct;                                                // 0x0028(0x0008)
};

// ScriptStruct OLGame.OLFXManager.BlurData
// 0x001C
struct FBlurData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bWasActive : 1;                                           // 0x0000(0x0004)
	float                                              Amount;                                                   // 0x0004(0x0004)
	float                                              Duration;                                                 // 0x0008(0x0004)
	float                                              BlendInTime;                                              // 0x000C(0x0004)
	float                                              BlendOutTime;                                             // 0x0010(0x0004)
	float                                              Desaturation;                                             // 0x0014(0x0004)
	float                                              StartTime;                                                // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLGame.ChapterDefinition
// 0x000C
struct FChapterDefinition
{
	int                                                SectionIndex;                                             // 0x0000(0x0004)
	struct FName                                       CPName;                                                   // 0x0004(0x0008)
};

// ScriptStruct OLGame.OLSlidingSlopeMarker.GameFlowRuleSlidingSlope
// 0x0014
struct FGameFlowRuleSlidingSlope
{
	TEnumAsByte<EGameFlowSlidingSlopeAction>           Action;                                                   // 0x0000(0x0001) (Edit)
	TEnumAsByte<EGameFlowCondition>                    Condition;                                                // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       ControlName;                                              // 0x0004(0x0008) (Edit)
	struct FName                                       RangeEndCheckpoint;                                       // 0x000C(0x0008) (Edit)
};

// ScriptStruct OLGame.OLMartaStreetVolume.VolumeConnection
// 0x0010
struct FVolumeConnection
{
	class AOLMartaStreetVolume*                        OtherVolume;                                              // 0x0000(0x0008) (Edit)
	class AOLBashableObject*                           ConditionalWall;                                          // 0x0008(0x0008) (Edit)
};

// ScriptStruct OLGame.OLGameStateList.OLGameState
// 0x0014
struct FOLGameState
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
	struct FName                                       AutoActivateOnCheckpointReached;                          // 0x0008(0x0008) (Edit)
	unsigned long                                      bPersistAfterDeath : 1;                                   // 0x0010(0x0004) (Edit)
	unsigned long                                      bActivated : 1;                                           // 0x0010(0x0004) (Transient)
};

// ScriptStruct OLGame.OLHints.OLHintList
// 0x0018
struct FOLHintList
{
	struct FName                                       CheckpointName;                                           // 0x0000(0x0008) (Config)
	TArray<struct FName>                               HintTextIdList;                                           // 0x0008(0x0010) (Config, NeedCtorLink)
};

// ScriptStruct OLGame.OLHUD.SubtitleData
// 0x0034
struct FSubtitleData
{
	struct FString                                     Text;                                                     // 0x0000(0x0010) (NeedCtorLink)
	class AActor*                                      Speaker;                                                  // 0x0010(0x0008)
	class UAkEvent*                                    SoundEvent;                                               // 0x0018(0x0008)
	float                                              SubtitleScore;                                            // 0x0020(0x0004)
	float                                              TimeFired;                                                // 0x0024(0x0004)
	float                                              TimeShown;                                                // 0x0028(0x0004)
	float                                              MaxLifetime;                                              // 0x002C(0x0004)
	struct FColor                                      TextColor;                                                // 0x0030(0x0004)
};

// ScriptStruct OLGame.OLHUD.GenericMessage
// 0x0016
struct FGenericMessage
{
	struct FString                                     MessageText;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              RemainingTime;                                            // 0x0010(0x0004)
	TEnumAsByte<EHUDMessagePriority>                   MessagePriority;                                          // 0x0014(0x0001)
	TEnumAsByte<EHUDMessageType>                       MessageType;                                              // 0x0015(0x0001)
};

// ScriptStruct OLGame.OLHUD.SubtitleColorOverrideData
// 0x0014
struct FSubtitleColorOverrideData
{
	struct FString                                     Prefix;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FColor                                      Color;                                                    // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLInnerDemonEffectActor.InnerDemonEffectsData
// 0x0028
struct FInnerDemonEffectsData
{
	unsigned long                                      bEmitterActive : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bDeformActive : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bPPSActive : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bDecalsActive : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bUpdateDecals : 1;                                        // 0x0000(0x0004)
	float                                              DeformationIntensity;                                     // 0x0004(0x0004)
	float                                              PPSIntensity;                                             // 0x0008(0x0004)
	float                                              DeformApproachCoeffUp;                                    // 0x000C(0x0004) (Edit)
	float                                              DeformApproachCoeffDown;                                  // 0x0010(0x0004) (Edit)
	float                                              PPSApproachCoeffUp;                                       // 0x0014(0x0004) (Edit)
	float                                              PPSApproachCoeffDown;                                     // 0x0018(0x0004) (Edit)
	float                                              DecalApproachCoeffUp;                                     // 0x001C(0x0004) (Edit)
	float                                              DecalApproachCoeffDown;                                   // 0x0020(0x0004) (Edit)
	float                                              DecalActivationRadius;                                    // 0x0024(0x0004) (Edit)
};

// ScriptStruct OLGame.OLMainHud.MainHudObjects
// 0x0018
struct FMainHudObjects
{
	class UGFxObject*                                  NotificationIcons;                                        // 0x0000(0x0008)
	class UGFxObject*                                  NotificationIcons2;                                       // 0x0008(0x0008)
	class UGFxObject*                                  SavingMessage;                                            // 0x0010(0x0008)
};

// ScriptStruct OLGame.OLMainHud.MainHudState
// 0x0004
struct FMainHudState
{
	unsigned long                                      bDocumentNotificationIconVisible : 1;                     // 0x0000(0x0004)
	unsigned long                                      bRecordingNotificationIconVisible : 1;                    // 0x0000(0x0004)
	unsigned long                                      bCheckpointNotificationIconVisible : 1;                   // 0x0000(0x0004)
};

// ScriptStruct OLGame.OLGameplayItemPickup.GameFlowRulePickup
// 0x0014
struct FGameFlowRulePickup
{
	TEnumAsByte<EGameFlowPickupAction>                 Action;                                                   // 0x0000(0x0001) (Edit)
	TEnumAsByte<EGameFlowCondition>                    Condition;                                                // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       ControlName;                                              // 0x0004(0x0008) (Edit)
	struct FName                                       RangeEndCheckpoint;                                       // 0x000C(0x0008) (Edit)
};

// ScriptStruct OLGame.OLPushableObject.AlignmentData
// 0x0010
struct FAlignmentData
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit)
	float                                              Length;                                                   // 0x000C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLPushableObject.PushablePhysicsConfig
// 0x000C
struct FPushablePhysicsConfig
{
	unsigned long                                      bEnableGravity : 1;                                       // 0x0000(0x0004) (Edit)
	float                                              TrackFriction;                                            // 0x0004(0x0004) (Edit)
	float                                              MaxPhysicsSpeed;                                          // 0x0008(0x0004) (Edit)
};

// ScriptStruct OLGame.OLPushableObject.GameFlowPushableRule
// 0x0014
struct FGameFlowPushableRule
{
	TEnumAsByte<EGameFlowPushableAction>               Action;                                                   // 0x0000(0x0001) (Edit)
	TEnumAsByte<EGameFlowCondition>                    Condition;                                                // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       ControlName;                                              // 0x0004(0x0008) (Edit)
	struct FName                                       RangeEndCheckpoint;                                       // 0x000C(0x0008) (Edit)
};

// ScriptStruct OLGame.OLSplineGameplayMarker.SplinePositionDescriptor
// 0x0010
struct FSplinePositionDescriptor
{
	class AOLSplineGameplayMarker*                     SegmentStartMarker;                                       // 0x0000(0x0008)
	float                                              SegmentRatio;                                             // 0x0008(0x0004)
	float                                              OutsideOffset;                                            // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLPushableObject.PushableAttachmentData
// 0x006C
struct FPushableAttachmentData
{
	class AActor*                                      AttachedActor;                                            // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     RelativeTransform;                                        // 0x0010(0x0040)
	struct FVector                                     InitialPosition;                                          // 0x0050(0x000C)
	unsigned long                                      bRestrictMovement : 1;                                    // 0x005C(0x0004)
	struct FVector                                     RestrictedAxis;                                           // 0x0060(0x000C)
};

// ScriptStruct OLGame.OLSoundEmitter.SoundEnvVolumeData
// 0x001C
struct FSoundEnvVolumeData
{
	class AOLSoundEnvironmentVolume*                   SoundEnvVolume;                                           // 0x0000(0x0008) (Transient)
	unsigned long                                      bActive : 1;                                              // 0x0008(0x0004)
	unsigned long                                      bFadeFromBorder : 1;                                      // 0x0008(0x0004)
	struct FVector                                     BorderPoint;                                              // 0x000C(0x000C)
	float                                              LastActiveEnvContrib;                                     // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLSoundEmitter.VirtualizationNode
// 0x0014
struct FVirtualizationNode
{
	class UOLSoundConnectorComponent*                  Connector;                                                // 0x0000(0x0008) (ExportObject, Transient, Component, EditInline)
	float                                              VirtualizableDistance;                                    // 0x0008(0x0004)
	float                                              DistToListener;                                           // 0x000C(0x0004)
	int                                                Level;                                                    // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLSoundEmitter.AuxBusInfo
// 0x0014
struct FAuxBusInfo
{
	struct FString                                     BusName;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              BusValue;                                                 // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLSoundEmitter.EmitterDebugInfo
// 0x0048
struct FEmitterDebugInfo
{
	struct FString                                     ReverbA;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              ReverbAContrib;                                           // 0x0010(0x0004)
	struct FString                                     ReverbB;                                                  // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              ReverbBContrib;                                           // 0x0024(0x0004)
	struct FVector                                     VirtualizationPivot;                                      // 0x0028(0x000C)
	float                                              DirectDistToListener;                                     // 0x0034(0x0004)
	float                                              VirtualizedDist;                                          // 0x0038(0x0004)
	float                                              MicrophoneOcclusionMultiplier;                            // 0x003C(0x0004)
	float                                              MicrophoneObstructionMultiplier;                          // 0x0040(0x0004)
	float                                              MicrophoneDistanceFactor;                                 // 0x0044(0x0004)
};

// ScriptStruct OLGame.OLSoundEnvironmentManager.MultiPositionGroup
// 0x0020
struct FMultiPositionGroup
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UOLSoundEmitter*>                     Members;                                                  // 0x0010(0x0010) (Native, AlwaysInit)
};

// ScriptStruct OLGame.OLSoundEnvironmentManager.HQOcclusionSettingsData
// 0x0028
struct FHQOcclusionSettingsData
{
	float                                              MinAbsCollWidth;                                          // 0x0000(0x0004) (Config)
	float                                              MaxAbsCollWidth;                                          // 0x0004(0x0004) (Config)
	float                                              MinRelCollWidth;                                          // 0x0008(0x0004) (Config)
	float                                              MaxRelCollWidth;                                          // 0x000C(0x0004) (Config)
	float                                              MinAbsDistToSrc;                                          // 0x0010(0x0004) (Config)
	float                                              MaxAbsDistToSrc;                                          // 0x0014(0x0004) (Config)
	float                                              MinRelDistToSrc;                                          // 0x0018(0x0004) (Config)
	float                                              MaxRelDistToSrc;                                          // 0x001C(0x0004) (Config)
	float                                              ThinMaxOcclusion;                                         // 0x0020(0x0004) (Config)
	float                                              MinOcclusion;                                             // 0x0024(0x0004) (Config)
};

// ScriptStruct OLGame.OLThrowable.ThrowableSettings
// 0x004C
struct FThrowableSettings
{
	float                                              MeshScale;                                                // 0x0000(0x0004) (Edit)
	float                                              Speed;                                                    // 0x0004(0x0004) (Edit)
	unsigned long                                      bNoPlayerHit : 1;                                         // 0x0008(0x0004) (Edit)
	unsigned long                                      bGuaranteedPlayerHit : 1;                                 // 0x0008(0x0004) (Edit)
	unsigned long                                      bFollowTarget : 1;                                        // 0x0008(0x0004) (Edit)
	float                                              MinDistForFollowTarget;                                   // 0x000C(0x0004) (Edit)
	float                                              MinRollVelocity;                                          // 0x0010(0x0004) (Edit)
	float                                              MaxRollVelocity;                                          // 0x0014(0x0004) (Edit)
	float                                              MinPitchVelocity;                                         // 0x0018(0x0004) (Edit)
	float                                              MaxPitchVelocity;                                         // 0x001C(0x0004) (Edit)
	float                                              MinYawVelocity;                                           // 0x0020(0x0004) (Edit)
	float                                              MaxYawVelocity;                                           // 0x0024(0x0004) (Edit)
	float                                              HitDamage;                                                // 0x0028(0x0004) (Edit)
	unsigned long                                      bEnableRigidBody : 1;                                     // 0x002C(0x0004) (Edit)
	class UAkEvent*                                    WaterSplashSound;                                         // 0x0030(0x0008) (Edit)
	unsigned long                                      bEnableRandomInaccuracy : 1;                              // 0x0038(0x0004) (Edit)
	float                                              DistanceForAccurate;                                      // 0x003C(0x0004) (Edit)
	float                                              DistanceForMaxInaccuracy;                                 // 0x0040(0x0004) (Edit)
	float                                              MaxInaccuracy;                                            // 0x0044(0x0004) (Edit)
	float                                              VelocityPredictionFactor;                                 // 0x0048(0x0004) (Edit)
};

// ScriptStruct OLGame.OLThrowable.ThrowablePreciseTravelData
// 0x0034
struct FThrowablePreciseTravelData
{
	float                                              TotalAirDuration;                                         // 0x0000(0x0004)
	float                                              InitialVelZ;                                              // 0x0004(0x0004)
	struct FVector                                     StartPos;                                                 // 0x0008(0x000C)
	struct FVector                                     TargetPos;                                                // 0x0014(0x000C)
	struct FVector                                     Inaccuracy;                                               // 0x0020(0x000C)
	class AActor*                                      TargetActor;                                              // 0x002C(0x0008)
};

// ScriptStruct OLGame.OLUberPostProcessEffect.EyeAdaptationSettings
// 0x0014
struct FEyeAdaptationSettings
{
	float                                              AdaptationSpeedDown;                                      // 0x0000(0x0004)
	float                                              AdaptationSpeedUp;                                        // 0x0004(0x0004)
	float                                              ManualExposure;                                           // 0x0008(0x0004)
	float                                              AdaptationMin;                                            // 0x000C(0x0004)
	float                                              AdaptationMax;                                            // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLVoiceManager.VOLine
// 0x0038
struct FVOLine
{
	class UAkEvent*                                    Line;                                                     // 0x0000(0x0008)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008)
	float                                              TimeFired;                                                // 0x0010(0x0004)
	float                                              ExpirationTime;                                           // 0x0014(0x0004)
	float                                              EndOfLineBuffer;                                          // 0x0018(0x0004)
	int                                                PlayingID;                                                // 0x001C(0x0004)
	unsigned long                                      bSkipForPaused : 1;                                       // 0x0020(0x0004)
	int                                                CallbackFlags;                                            // 0x0024(0x0004)
	struct FPointer                                    CallbackFunction;                                         // 0x0028(0x0008) (Native)
	struct FPointer                                    CallbackCookie;                                           // 0x0030(0x0008) (Native)
};

// ScriptStruct OLGame.OLVoiceManager.LineQueue
// 0x001C
struct FLineQueue
{
	class AActor*                                      Talker;                                                   // 0x0000(0x0008)
	TArray<struct FVOLine>                             Lines;                                                    // 0x0008(0x0010) (Native, AlwaysInit)
	unsigned long                                      IsPlaying : 1;                                            // 0x0018(0x0004)
	unsigned long                                      IsWaiting : 1;                                            // 0x0018(0x0004)
	unsigned long                                      CancelWait : 1;                                           // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLVoiceManager.QueueTimer
// 0x000C
struct FQueueTimer
{
	class AActor*                                      QueueActor;                                               // 0x0000(0x0008)
	float                                              TimeRemaining;                                            // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLVoiceManager.EndOfEventInfo
// 0x000C
struct FEndOfEventInfo
{
	class AActor*                                      QueueActor;                                               // 0x0000(0x0008)
	int                                                PlayingID;                                                // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLVoiceManager.MarkerInfo
// 0x0018
struct FMarkerInfo
{
	class AActor*                                      QueueActor;                                               // 0x0000(0x0008)
	struct FString                                     MarkerText;                                               // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct OLGame.OLVoiceManager.PlayedVOInfo
// 0x0014
struct FPlayedVOInfo
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (NeedCtorLink)
	float                                              LastTimePlayed;                                           // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLVoiceManager.VOEventData
// 0x0040
struct FVOEventData
{
	float                                              Time;                                                     // 0x0000(0x0004)
	class AOLBot*                                      Bot;                                                      // 0x0004(0x0008)
	struct FName                                       BotName;                                                  // 0x000C(0x0008)
	TEnumAsByte<EVOContext>                            VOContext;                                                // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                ResultType;                                               // 0x0018(0x0004)
	unsigned long                                      bSkipBecauseInUse : 1;                                    // 0x001C(0x0004)
	unsigned long                                      bSkippedAlreadyActive : 1;                                // 0x001C(0x0004)
	unsigned long                                      bSkippedExpired : 1;                                      // 0x001C(0x0004)
	struct FString                                     AkEventName;                                              // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Subtitle;                                                 // 0x0030(0x0010) (NeedCtorLink)
};

// ScriptStruct OLGame.OLVoiceManager.DialogueData
// 0x0010
struct FDialogueData
{
	class UOLSeqAct_Dialogue*                          Dialog;                                                   // 0x0000(0x0008)
	class UOLVoiceManager*                             Manager;                                                  // 0x0008(0x0008)
};

// ScriptStruct OLGame.OLWindow.GameFlowWindowRule
// 0x0014
struct FGameFlowWindowRule
{
	TEnumAsByte<EGameFlowWindowAction>                 Action;                                                   // 0x0000(0x0001) (Edit)
	TEnumAsByte<EGameFlowCondition>                    Condition;                                                // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       ControlName;                                              // 0x0004(0x0008) (Edit)
	struct FName                                       RangeEndCheckpoint;                                       // 0x000C(0x0008) (Edit)
};

// ScriptStruct OLGame.ActorFactoryOLAI.RenderingOverrideFlags
// 0x0068
struct FRenderingOverrideFlags
{
	class USkeletalMesh*                               MeshOverride;                                             // 0x0000(0x0008) (Edit)
	class USkeletalMesh*                               HeadMeshOverride;                                         // 0x0008(0x0008) (Edit)
	class UPhysicsAsset*                               PhysAssetOverride;                                        // 0x0010(0x0008) (Edit)
	unsigned long                                      bOverride_CastStaticShadow : 1;                           // 0x0018(0x0004)
	unsigned long                                      bCastStaticShadow : 1;                                    // 0x0018(0x0004) (Edit)
	unsigned long                                      bOverride_CastDynamicShadow : 1;                          // 0x0018(0x0004)
	unsigned long                                      bCastDynamicShadow : 1;                                   // 0x0018(0x0004) (Edit)
	unsigned long                                      bOverride_SelfShadowOnly : 1;                             // 0x0018(0x0004)
	unsigned long                                      bSelfShadowOnly : 1;                                      // 0x0018(0x0004) (Edit)
	unsigned long                                      bOverride_CastShadowInNightVision : 1;                    // 0x0018(0x0004)
	unsigned long                                      bCastShadowInNightVision : 1;                             // 0x0018(0x0004) (Edit)
	unsigned long                                      bOverride_UniformColor : 1;                               // 0x0018(0x0004)
	struct FLinearColor                                UniformColor;                                             // 0x001C(0x0010) (Edit)
	struct FName                                       UniformColorName;                                         // 0x002C(0x0008) (Const)
	unsigned long                                      bOverride_LightingChannels : 1;                           // 0x0034(0x0004)
	struct FLightingChannelContainer                   LightingChannelsOverride;                                 // 0x0038(0x0004) (Edit)
	unsigned long                                      bOverride_LightEnvEnabled : 1;                            // 0x003C(0x0004)
	unsigned long                                      LightEnvEnabledOverride : 1;                              // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_LightEnvIntensity : 1;                          // 0x003C(0x0004)
	float                                              LightEnvStaticIntensityOverride;                          // 0x0040(0x0004) (Edit)
	unsigned long                                      bOverride_LightEnvCastShadow : 1;                         // 0x0044(0x0004)
	unsigned long                                      LightEnvCastShadow : 1;                                   // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_ReflectionDistanceFactorOverride : 1;           // 0x0044(0x0004)
	float                                              ReflectionDistanceFactorOverride;                         // 0x0048(0x0004) (Edit)
	unsigned long                                      bOverride_ForcedLodModel : 1;                             // 0x004C(0x0004)
	int                                                ForcedLodModel;                                           // 0x0050(0x0004) (Edit)
	unsigned long                                      bOverride_DisableApexClothing : 1;                        // 0x0054(0x0004)
	unsigned long                                      bDisableApexClothing : 1;                                 // 0x0054(0x0004) (Edit)
	TArray<class UMaterialInstance*>                   MaterialOverrides;                                        // 0x0058(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct OLGame.OLAIAnimMapping.AIAnimMapping
// 0x0040
struct FAIAnimMapping
{
	struct FName                                       Idle;                                                     // 0x0000(0x0008) (Edit)
	struct FName                                       FacialUnaware;                                            // 0x0008(0x0008) (Edit)
	struct FName                                       FacialAware;                                              // 0x0010(0x0008) (Edit)
	struct FName                                       FacialChase;                                              // 0x0018(0x0008) (Edit)
	struct FName                                       FacialSurprised;                                          // 0x0020(0x0008) (Edit)
	struct FName                                       FacialInvestigate;                                        // 0x0028(0x0008) (Edit)
	struct FName                                       EyesLookLeftRight;                                        // 0x0030(0x0008) (Edit)
	struct FName                                       EyesLookUpDown;                                           // 0x0038(0x0008) (Edit)
};

// ScriptStruct OLGame.OLEnemyPawn.WeaponData
// 0x0018
struct FWeaponData
{
	TEnumAsByte<EWeapon>                               CurrentWeapon;                                            // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bAnimated : 1;                                            // 0x0004(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0004(0x0004)
	float                                              HiddenUntilTime;                                          // 0x0008(0x0004)
	float                                              ShownUntilTime;                                           // 0x000C(0x0004)
	unsigned long                                      bTemporarilyHidden : 1;                                   // 0x0010(0x0004)
	unsigned long                                      bOverrideAttachType : 1;                                  // 0x0010(0x0004)
	unsigned long                                      bOverrideAttachedToBone : 1;                              // 0x0010(0x0004)
	unsigned long                                      bOverrideDetachedFromPawn : 1;                            // 0x0010(0x0004)
	float                                              OverrideEndTime;                                          // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.WeaponTypeData
// 0x0014
struct FWeaponTypeData
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008)
	class USkeletalMesh*                               SkelMesh;                                                 // 0x0008(0x0008)
	float                                              WeaponRange;                                              // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.FlashlightData
// 0x005C
struct FFlashlightData
{
	unsigned long                                      bFlashlightEquipped : 1;                                  // 0x0000(0x0004)
	struct FVector                                     FlashlightDirection;                                      // 0x0004(0x000C)
	struct FVector                                     FlashlightPosition;                                       // 0x0010(0x000C)
	float                                              SmoothedLocalYaw;                                         // 0x001C(0x0004)
	float                                              SmoothedLocalPitch;                                       // 0x0020(0x0004)
	float                                              SwayTargetYaw;                                            // 0x0024(0x0004)
	float                                              SwayTargetPitch;                                          // 0x0028(0x0004)
	float                                              SwayStartedTime;                                          // 0x002C(0x0004)
	float                                              SwayNextRndTime;                                          // 0x0030(0x0004)
	float                                              FlashlightDisabledEndTime;                                // 0x0034(0x0004)
	float                                              SmartActivationExpirationTime;                            // 0x0038(0x0004)
	unsigned long                                      bAttachedToAuxBone : 1;                                   // 0x003C(0x0004)
	unsigned long                                      bTransitionningAttachPoint : 1;                           // 0x003C(0x0004)
	float                                              TransitionStartTime;                                      // 0x0040(0x0004)
	struct FVector                                     TransitionStartLoc;                                       // 0x0044(0x000C)
	struct FVector                                     TransitionStartDir;                                       // 0x0050(0x000C)
};

// ScriptStruct OLGame.OLEnemyPawn.CatmullRomPathData
// 0x002C
struct FCatmullRomPathData
{
	TArray<struct FVector2D>                           CRPathSegments;                                           // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FVector2D>                           CRPathSubSegments;                                        // 0x0010(0x0010) (NeedCtorLink)
	float                                              CRPathSubSegmentsLength;                                  // 0x0020(0x0004)
	float                                              CRBendApproxFactor;                                       // 0x0024(0x0004)
	int                                                CRPathLastIndex;                                          // 0x0028(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.LocoModeParameters
// 0x0040
struct FLocoModeParameters
{
	struct FGameplayParams                             GP;                                                       // 0x0000(0x0040)
};

// ScriptStruct OLGame.OLEnemyPawn.TurningMoveData
// 0x002C
struct FTurningMoveData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              StartTime;                                                // 0x0004(0x0004)
	float                                              StartYaw;                                                 // 0x0008(0x0004)
	float                                              StartSpeed;                                               // 0x000C(0x0004)
	float                                              InitialDeltaYaw;                                          // 0x0010(0x0004)
	float                                              Duration;                                                 // 0x0014(0x0004)
	float                                              SmoothedTargetYaw;                                        // 0x0018(0x0004)
	float                                              CurrentDesiredYaw;                                        // 0x001C(0x0004)
	struct FVector                                     FocalPoint;                                               // 0x0020(0x000C)
};

// ScriptStruct OLGame.OLEnemyPawn.StartTransitionData
// 0x0010
struct FStartTransitionData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              StartTime;                                                // 0x0004(0x0004)
	float                                              DeltaYaw;                                                 // 0x0008(0x0004)
	float                                              InitialTargetYaw;                                         // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.StopTransitionData
// 0x0018
struct FStopTransitionData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              StartTime;                                                // 0x0004(0x0004)
	unsigned long                                      bStopCompleted : 1;                                       // 0x0008(0x0004)
	unsigned long                                      bImmediateStop : 1;                                       // 0x0008(0x0004)
	struct FVector                                     CompletedStopPosition;                                    // 0x000C(0x000C)
};

// ScriptStruct OLGame.OLEnemyPawn.StairsData
// 0x0024
struct FStairsData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	class AOLStairsMarker*                             BottomMarker;                                             // 0x0004(0x0008)
	TEnumAsByte<EStairsStyle>                          Style;                                                    // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned long                                      bGoingUp : 1;                                             // 0x0010(0x0004)
	unsigned long                                      bSmallStairs : 1;                                         // 0x0010(0x0004)
	float                                              AnimRate;                                                 // 0x0014(0x0004)
	int                                                NumberOfSteps;                                            // 0x0018(0x0004)
	float                                              EntryAnimDistance;                                        // 0x001C(0x0004)
	unsigned long                                      bEntryBlendingIn : 1;                                     // 0x0020(0x0004)
	unsigned long                                      bEntering : 1;                                            // 0x0020(0x0004)
	unsigned long                                      bExitBlendingOut : 1;                                     // 0x0020(0x0004)
	unsigned long                                      bOffPhaseTransition : 1;                                  // 0x0020(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemySplineData
// 0x0010
struct FEnemySplineData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bGoingForward : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bStayInPlace : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bExiting : 1;                                             // 0x0000(0x0004)
	float                                              SplineEnteredTime;                                        // 0x0004(0x0004)
	class AOLSplineGameplayMarker*                     CurrentMarker;                                            // 0x0008(0x0008)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyCrawlData
// 0x008C
struct FEnemyCrawlData
{
	unsigned long                                      bCrouchStance : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bScramble : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bCrawlEngaged : 1;                                        // 0x0000(0x0004)
	int                                                NextMarkerIdx;                                            // 0x0004(0x0004)
	unsigned long                                      bValidNextIntersectionPrediction : 1;                     // 0x0008(0x0004)
	int                                                NextIntersectionIdx;                                      // 0x000C(0x0004)
	unsigned long                                      bNextIntersectionForward : 1;                             // 0x0010(0x0004)
	unsigned long                                      bValidPrevIntersection : 1;                               // 0x0010(0x0004)
	int                                                PrevIntersectionIdx;                                      // 0x0014(0x0004)
	unsigned long                                      bPrevIntersectionForward : 1;                             // 0x0018(0x0004)
	struct FVector                                     AdjustedLocation;                                         // 0x001C(0x000C)
	struct FVector                                     AdjustedForward;                                          // 0x0028(0x000C)
	unsigned long                                      bValidAdjustedData : 1;                                   // 0x0034(0x0004)
	unsigned long                                      bExitInvestigatingToLocation : 1;                         // 0x0034(0x0004)
	struct FVector                                     ExitInvestigationLocation;                                // 0x0038(0x000C)
	class AActor*                                      ExitInvestigationActor;                                   // 0x0044(0x0008)
	unsigned long                                      bExitToScriptedPatrol : 1;                                // 0x004C(0x0004)
	unsigned long                                      bForceGroundCheck : 1;                                    // 0x004C(0x0004)
	float                                              LastGroundPitch;                                          // 0x0050(0x0004)
	float                                              LastGroundRoll;                                           // 0x0054(0x0004)
	float                                              LastGroundCheckYaw;                                       // 0x0058(0x0004)
	struct FVector                                     LastGroundCheckPosition;                                  // 0x005C(0x000C)
	struct FVector                                     LastGroundPosFeet;                                        // 0x0068(0x000C)
	struct FVector                                     LastGroundPosLeft;                                        // 0x0074(0x000C)
	struct FVector                                     LastGroundPosRight;                                       // 0x0080(0x000C)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyBeamData
// 0x0008
struct FEnemyBeamData
{
	class UOLSeqAct_AIBeam*                            BeamSeqAct;                                               // 0x0000(0x0008)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyJumpData
// 0x0028
struct FEnemyJumpData
{
	struct FVector                                     Destination;                                              // 0x0000(0x000C)
	unsigned long                                      bInAir : 1;                                               // 0x000C(0x0004)
	unsigned long                                      bToBeam : 1;                                              // 0x000C(0x0004)
	unsigned long                                      bFast : 1;                                                // 0x000C(0x0004)
	float                                              StartTime;                                                // 0x0010(0x0004)
	float                                              Duration;                                                 // 0x0014(0x0004)
	float                                              HorzDist;                                                 // 0x0018(0x0004)
	float                                              InitialVelZ;                                              // 0x001C(0x0004)
	class UOLSeqAct_AIJump*                            JumpSeqAct;                                               // 0x0020(0x0008)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyPairedWalkData
// 0x006C
struct FEnemyPairedWalkData
{
	TEnumAsByte<EPairedWalkType>                       Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bBotIsDriving : 1;                                        // 0x0004(0x0004)
	float                                              BotTargetSpeedOverride;                                   // 0x0008(0x0004)
	float                                              BotTargetSpeedBlendBase;                                  // 0x000C(0x0004)
	float                                              BotTargetSpeedBlendStartTime;                             // 0x0010(0x0004)
	float                                              BotTargetSpeedBlendDuration;                              // 0x0014(0x0004)
	float                                              HeroDesiredSpeed;                                         // 0x0018(0x0004)
	float                                              TargetBotSideOffset;                                      // 0x001C(0x0004)
	float                                              TargetHeroSideOffset;                                     // 0x0020(0x0004)
	struct FVector                                     TargetHeroPos;                                            // 0x0024(0x000C)
	struct FVector                                     TargetHeroDir;                                            // 0x0030(0x000C)
	struct FVector                                     TargetHandIKPos;                                          // 0x003C(0x000C)
	struct FRotator                                    TargetHandIKRot;                                          // 0x0048(0x000C)
	unsigned long                                      bHeroDataInitialized : 1;                                 // 0x0054(0x0004)
	unsigned long                                      bInitialSynching : 1;                                     // 0x0054(0x0004)
	struct FVector                                     InitialNPCPos;                                            // 0x0058(0x000C)
	float                                              InitialSyncAlpha;                                         // 0x0064(0x0004)
	float                                              InitalHeroSideOffset;                                     // 0x0068(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyRandomSpeedData
// 0x000C
struct FEnemyRandomSpeedData
{
	float                                              CurrentSpeedTargetPct;                                    // 0x0000(0x0004)
	float                                              CurrentSpeedPct;                                          // 0x0004(0x0004)
	float                                              NextShuffleTime;                                          // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyAnimNodes
// 0x0130
struct FEnemyAnimNodes
{
	class UOLAnimCustomBlend*                          TopHalfBlend;                                             // 0x0000(0x0008)
	class USkelControlLookAt*                          HeadTrackingLookAt;                                       // 0x0008(0x0008)
	class USkelControlLookAt*                          HeadTrackingLookAtNic;                                    // 0x0010(0x0008)
	class UOLAnimEyeLookAt*                            EyeLookAt;                                                // 0x0018(0x0008)
	class UOLAnimLocomotion*                           LocomotionAnim;                                           // 0x0020(0x0008)
	class UOLAnimFaceOff*                              FaceOffAnim;                                              // 0x0028(0x0008)
	class UOLAnimPoseFreeze*                           PoseFreezeAnim;                                           // 0x0030(0x0008)
	class UOLAnimScrubbable*                           DeathGripAnim;                                            // 0x0038(0x0008)
	class UAnimNodeSequence*                           DeathGripShake;                                           // 0x0040(0x0008)
	class UOLAnimScrubbableBlend*                      DemonicAnim;                                              // 0x0048(0x0008)
	class UOLAnimAIStairs*                             StairsAnim;                                               // 0x0050(0x0008)
	class UOLAnimDisturbed*                            DisturbedAnim;                                            // 0x0058(0x0008)
	class UAnimNodeSlot*                               FacialAnimSlot;                                           // 0x0060(0x0008)
	class UAnimNodeAdditiveBlending*                   BreathingControl;                                         // 0x0068(0x0008)
	class UAnimNodeSequence*                           Breathing;                                                // 0x0070(0x0008)
	class UAnimNodeBlend*                              AnticipateAttack;                                         // 0x0078(0x0008)
	class UOLAnimDirectionalAttack*                    DirectionalAttack;                                        // 0x0080(0x0008)
	class UAnimNodeSequence*                           Ambush;                                                   // 0x0088(0x0008)
	class UOLAnimPairedWalk*                           PairedWalk;                                               // 0x0090(0x0008)
	class UAnimNodeBlend*                              InnerDemonArmsControl;                                    // 0x0098(0x0008)
	class UAnimNodeBlend*                              InnerDemonArms;                                           // 0x00A0(0x0008)
	class UAnimNodeBlend*                              CrawlerState;                                             // 0x00A8(0x0008)
	class UOLAnimCustomBlend*                          LairdCustomBlend;                                         // 0x00B0(0x0008)
	class UOLAnimSelectByAILocoMode*                   SelectByLocoMode;                                         // 0x00B8(0x0008)
	class UAnimNodeBlendPerBone*                       HereticTorchHand;                                         // 0x00C0(0x0008)
	class UAnimNodeBlendPerBone*                       ClosedWeaponHand;                                         // 0x00C8(0x0008)
	class UOLAnimGenericPoseBlend*                     GenericPoseBlend;                                         // 0x00D0(0x0008)
	class UAnimNodeSequence*                           ConstrainedCrouch;                                        // 0x00D8(0x0008)
	class UAnimNodeBlend*                              SkullFixer;                                               // 0x00E0(0x0008)
	class UOLAnimPoseKeeper*                           PoseKeeper;                                               // 0x00E8(0x0008)
	class USkelControlLimb*                            LeftHandIK;                                               // 0x00F0(0x0008)
	class USkelControlSingleBone*                      LeftShoulderIK;                                           // 0x00F8(0x0008)
	class USkelControlBase*                            LeftForeTwistControl;                                     // 0x0100(0x0008)
	class USkelControlBase*                            LeftForeTwist1Control;                                    // 0x0108(0x0008)
	class USkelControlBase*                            LeftUpArmTwistControl;                                    // 0x0110(0x0008)
	class USkelControlLookAt*                          LeftEyeLookAtControl;                                     // 0x0118(0x0008)
	class USkelControlLookAt*                          RightEyeLookAtControl;                                    // 0x0120(0x0008)
	class USkelControlSingleBone*                      RightHandIK;                                              // 0x0128(0x0008)
};

// ScriptStruct OLGame.OLEnemyPawn.FollowGroundData
// 0x001C
struct FFollowGroundData
{
	unsigned long                                      bFollowGroundRotation : 1;                                // 0x0000(0x0004)
	unsigned long                                      bForceCheck : 1;                                          // 0x0000(0x0004)
	struct FVector                                     LastCheckPosition;                                        // 0x0004(0x000C)
	float                                              LastCheckYaw;                                             // 0x0010(0x0004)
	float                                              LastPitch;                                                // 0x0014(0x0004)
	float                                              LastRoll;                                                 // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.TurnOnSpotData
// 0x0010
struct FTurnOnSpotData
{
	float                                              AnimTargetYaw;                                            // 0x0000(0x0004)
	float                                              AppliedExtraCorrection;                                   // 0x0004(0x0004)
	class AActor*                                      LookAtActor;                                              // 0x0008(0x0008)
};

// ScriptStruct OLGame.OLEnemyPawn.DelayedVO
// 0x0005
struct FDelayedVO
{
	float                                              TimeRemaining;                                            // 0x0000(0x0004)
	TEnumAsByte<EVOContext>                            VOContext;                                                // 0x0004(0x0001)
};

// ScriptStruct OLGame.OLEnemyPawn.ConversationData
// 0x0024
struct FConversationData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bAnswerPending : 1;                                       // 0x0000(0x0004)
	float                                              TimeActivated;                                            // 0x0004(0x0004)
	class AOLEnemyPawn*                                OtherPawn;                                                // 0x0008(0x0008)
	TEnumAsByte<EVOContext>                            CurrentContext;                                           // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	class UAkEvent*                                    CurrentLine;                                              // 0x0014(0x0008)
	int                                                QuestionIdx;                                              // 0x001C(0x0004)
	unsigned long                                      bAnswering : 1;                                           // 0x0020(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.LookAtNoiseData
// 0x0040
struct FLookAtNoiseData
{
	unsigned long                                      bNoiseActive : 1;                                         // 0x0000(0x0004)
	float                                              CycleStartTime;                                           // 0x0004(0x0004)
	float                                              CycleEndTime;                                             // 0x0008(0x0004)
	float                                              PrevYaw;                                                  // 0x000C(0x0004)
	float                                              PrevPitch;                                                // 0x0010(0x0004)
	float                                              CurrentYaw;                                               // 0x0014(0x0004)
	float                                              CurrentPitch;                                             // 0x0018(0x0004)
	float                                              CurrentYawMicroOffset;                                    // 0x001C(0x0004)
	float                                              TargetYawMicroOffset;                                     // 0x0020(0x0004)
	float                                              CurrentPitchMicroOffset;                                  // 0x0024(0x0004)
	float                                              TargetPitchMicroOffset;                                   // 0x0028(0x0004)
	float                                              MicroOffsetNextChangeTime;                                // 0x002C(0x0004)
	float                                              YawDriftTargetSpeed;                                      // 0x0030(0x0004)
	float                                              YawDriftCurrentSpeed;                                     // 0x0034(0x0004)
	float                                              PitchDriftTargetSpeed;                                    // 0x0038(0x0004)
	float                                              PitchDriftCurrentSpeed;                                   // 0x003C(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.LookAtData
// 0x00B0
struct FLookAtData
{
	unsigned long                                      bHasValidTarget : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bHasValidEyesTarget : 1;                                  // 0x0000(0x0004)
	struct FVector                                     LookAtLocation;                                           // 0x0004(0x000C)
	struct FVector                                     EyesLookAtLocation;                                       // 0x0010(0x000C)
	float                                              FlashlightBaseYaw;                                        // 0x001C(0x0004)
	float                                              FlashlightBasePitch;                                      // 0x0020(0x0004)
	float                                              FlashlightNoiseYaw;                                       // 0x0024(0x0004)
	float                                              FlashlightNoisePitch;                                     // 0x0028(0x0004)
	float                                              DisabledUntilTime;                                        // 0x002C(0x0004)
	unsigned long                                      PatrolInterestActive : 1;                                 // 0x0030(0x0004)
	struct FVector                                     PatrolInterestPoint;                                      // 0x0034(0x000C)
	float                                              DisturbanceInterestLastTime;                              // 0x0040(0x0004)
	struct FVector                                     DisturbanceInterestLocation;                              // 0x0044(0x000C)
	unsigned long                                      ScriptedLookAtActive : 1;                                 // 0x0050(0x0004)
	class UOLSeqAct_AILookAt*                          LookAtSeqAct;                                             // 0x0054(0x0008)
	class AActor*                                      ScriptedLookAtTarget;                                     // 0x005C(0x0008)
	unsigned long                                      ScriptedLookAtFullBody : 1;                               // 0x0064(0x0004)
	unsigned long                                      ScriptedLookAtEyesOnly : 1;                               // 0x0064(0x0004)
	float                                              ScriptedLookAtMaxDistance;                                // 0x0068(0x0004)
	unsigned long                                      bScriptedLookTurnTowardsTarget : 1;                       // 0x006C(0x0004)
	struct FLookAtNoiseData                            Noise;                                                    // 0x0070(0x0040)
};

// ScriptStruct OLGame.OLDifficultyConfig.FloatByDifficulty
// 0x0034
struct FFloatByDifficulty
{
	float                                              DefaultValue;                                             // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_EasyValue : 1;                                  // 0x0004(0x0004)
	float                                              EasyValue;                                                // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_NormalValue : 1;                                // 0x000C(0x0004)
	float                                              NormalValue;                                              // 0x0010(0x0004) (Edit)
	unsigned long                                      bOverride_NormalPlusValue : 1;                            // 0x0014(0x0004)
	float                                              NormalPlusValue;                                          // 0x0018(0x0004) (Edit)
	unsigned long                                      bOverride_HardValue : 1;                                  // 0x001C(0x0004)
	float                                              HardValue;                                                // 0x0020(0x0004) (Edit)
	unsigned long                                      bOverride_HardPlusValue : 1;                              // 0x0024(0x0004)
	float                                              HardPlusValue;                                            // 0x0028(0x0004) (Edit)
	unsigned long                                      bOverride_NightmareValue : 1;                             // 0x002C(0x0004)
	float                                              NightmareValue;                                           // 0x0030(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.SpeedConfig
// 0x0328
struct FSpeedConfig
{
	unsigned long                                      bOverride_BaseSpeedByDifficulty : 1;                      // 0x0000(0x0004)
	struct FFloatByDifficulty                          BaseSpeedByDifficulty;                                    // 0x0004(0x0034) (Edit)
	unsigned long                                      bOverride_InvestigationSpeedByDifficulty : 1;             // 0x0038(0x0004)
	struct FFloatByDifficulty                          InvestigationSpeedByDifficulty;                           // 0x003C(0x0034) (Edit)
	unsigned long                                      bOverride_ChaseSpeedByDifficulty : 1;                     // 0x0070(0x0004)
	struct FFloatByDifficulty                          ChaseSpeedByDifficulty;                                   // 0x0074(0x0034) (Edit)
	unsigned long                                      bOverride_CrawlSpeedByDifficulty : 1;                     // 0x00A8(0x0004)
	struct FFloatByDifficulty                          CrawlSpeedByDifficulty;                                   // 0x00AC(0x0034) (Edit)
	unsigned long                                      bOverride_CrouchSpeedByDifficulty : 1;                    // 0x00E0(0x0004)
	struct FFloatByDifficulty                          CrouchSpeedByDifficulty;                                  // 0x00E4(0x0034) (Edit)
	unsigned long                                      bOverride_BeamSpeedByDifficulty : 1;                      // 0x0118(0x0004)
	struct FFloatByDifficulty                          BeamSpeedByDifficulty;                                    // 0x011C(0x0034) (Edit)
	unsigned long                                      bOverride_BushChaseSpeedByDifficulty : 1;                 // 0x0150(0x0004)
	struct FFloatByDifficulty                          BushChaseSpeedByDifficulty;                               // 0x0154(0x0034) (Edit)
	unsigned long                                      bOverride_WaterSpeedMultiplier : 1;                       // 0x0188(0x0004)
	float                                              WaterSpeedMultiplier;                                     // 0x018C(0x0004) (Edit)
	unsigned long                                      bOverride_BehaviorAccelRate : 1;                          // 0x0190(0x0004)
	float                                              BehaviorAccelRate;                                        // 0x0194(0x0004) (Edit)
	unsigned long                                      bOverride_BehaviorDecelRate : 1;                          // 0x0198(0x0004)
	float                                              BehaviorDecelRate;                                        // 0x019C(0x0004) (Edit)
	unsigned long                                      bOverride_DarknessFactorByDifficulty : 1;                 // 0x01A0(0x0004)
	struct FFloatByDifficulty                          DarknessFactorByDifficulty;                               // 0x01A4(0x0034) (Edit)
	unsigned long                                      bOverride_AttackMercyFactor : 1;                          // 0x01D8(0x0004)
	struct FFloatByDifficulty                          AttackMercyFactor;                                        // 0x01DC(0x0034) (Edit)
	unsigned long                                      bOverride_AttackMercyDuration : 1;                        // 0x0210(0x0004)
	float                                              AttackMercyDuration;                                      // 0x0214(0x0004) (Edit)
	unsigned long                                      bOverride_ChaseNoVisibilityFactorByDifficulty : 1;        // 0x0218(0x0004)
	struct FFloatByDifficulty                          ChaseNoVisibilityFactorByDifficulty;                      // 0x021C(0x0034) (Edit)
	unsigned long                                      bOverride_bNoVisibleRubberBandingSlowDown : 1;            // 0x0250(0x0004)
	unsigned long                                      bNoVisibleRubberBandingSlowDown : 1;                      // 0x0250(0x0004) (Edit)
	unsigned long                                      bOverride_bRubberBandingRequiresPlayerRun : 1;            // 0x0250(0x0004)
	unsigned long                                      bRubberBandingRequiresPlayerRun : 1;                      // 0x0250(0x0004) (Edit)
	unsigned long                                      bOverride_RubberBandingDelay : 1;                         // 0x0250(0x0004)
	float                                              RubberBandingDelay;                                       // 0x0254(0x0004) (Edit)
	unsigned long                                      bOverride_RubberBandingMinDist : 1;                       // 0x0258(0x0004)
	float                                              RubberBandingMinDist;                                     // 0x025C(0x0004) (Edit)
	unsigned long                                      bOverride_RubberBandingMaxDist : 1;                       // 0x0260(0x0004)
	float                                              RubberBandingMaxDist;                                     // 0x0264(0x0004) (Edit)
	unsigned long                                      bOverride_RubberBandingFactorMinDistByDifficulty : 1;     // 0x0268(0x0004)
	struct FFloatByDifficulty                          RubberBandingFactorMinDistByDifficulty;                   // 0x026C(0x0034) (Edit)
	unsigned long                                      bOverride_RubberBandingFactorMaxDistByDifficulty : 1;     // 0x02A0(0x0004)
	struct FFloatByDifficulty                          RubberBandingFactorMaxDistByDifficulty;                   // 0x02A4(0x0034) (Edit)
	unsigned long                                      bOverride_bEnableCrouchCrawlRubberBanding : 1;            // 0x02D8(0x0004)
	unsigned long                                      bEnableCrouchCrawlRubberBanding : 1;                      // 0x02D8(0x0004) (Edit)
	unsigned long                                      bOverride_CrouchCrawlRubberBandingMinDist : 1;            // 0x02D8(0x0004)
	float                                              CrouchCrawlRubberBandingMinDist;                          // 0x02DC(0x0004) (Edit)
	unsigned long                                      bOverride_CrouchCrawlRubberBandingMaxDist : 1;            // 0x02E0(0x0004)
	float                                              CrouchCrawlRubberBandingMaxDist;                          // 0x02E4(0x0004) (Edit)
	unsigned long                                      bOverride_CrouchCrawlRubberBandingFactorMinDist : 1;      // 0x02E8(0x0004)
	float                                              CrouchCrawlRubberBandingFactorMinDist;                    // 0x02EC(0x0004) (Edit)
	unsigned long                                      bOverride_CrouchCrawlRubberBandingFactorMaxDist : 1;      // 0x02F0(0x0004)
	float                                              CrouchCrawlRubberBandingFactorMaxDist;                    // 0x02F4(0x0004) (Edit)
	unsigned long                                      bOverride_SightlessChaseSlowdownDuration : 1;             // 0x02F8(0x0004)
	float                                              SightlessChaseSlowdownDuration;                           // 0x02FC(0x0004) (Edit)
	unsigned long                                      bOverride_bExponentialAccel : 1;                          // 0x0300(0x0004)
	unsigned long                                      bExponentialAccel : 1;                                    // 0x0300(0x0004) (Edit)
	unsigned long                                      bOverride_ExponentialAccelStartDelay : 1;                 // 0x0300(0x0004)
	float                                              ExponentialAccelStartDelay;                               // 0x0304(0x0004) (Edit)
	unsigned long                                      bOverride_ExponentialAccelDuration : 1;                   // 0x0308(0x0004)
	float                                              ExponentialAccelDuration;                                 // 0x030C(0x0004) (Edit)
	unsigned long                                      bOverride_ExponentialAccelPower : 1;                      // 0x0310(0x0004)
	float                                              ExponentialAccelPower;                                    // 0x0314(0x0004) (Edit)
	unsigned long                                      bOverride_bNoAdjustmentForSlopes : 1;                     // 0x0318(0x0004)
	unsigned long                                      bNoAdjustmentForSlopes : 1;                               // 0x0318(0x0004) (Edit)
	unsigned long                                      bOverride_MaxSpeedPenaltyForUpSlope : 1;                  // 0x0318(0x0004)
	float                                              MaxSpeedPenaltyForUpSlope;                                // 0x031C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxSpeedGainForDownSlope : 1;                   // 0x0320(0x0004)
	float                                              MaxSpeedGainForDownSlope;                                 // 0x0324(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.VisionCone
// 0x00E0
struct FVisionCone
{
	unsigned long                                      bOverride_DistanceByDifficulty : 1;                       // 0x0000(0x0004)
	struct FFloatByDifficulty                          DistanceByDifficulty;                                     // 0x0004(0x0034) (Edit)
	unsigned long                                      bOverride_PeekingDistanceByDifficulty : 1;                // 0x0038(0x0004)
	struct FFloatByDifficulty                          PeekingDistanceByDifficulty;                              // 0x003C(0x0034) (Edit)
	unsigned long                                      bOverride_HorizontalAngleByDifficulty : 1;                // 0x0070(0x0004)
	struct FFloatByDifficulty                          HorizontalAngleByDifficulty;                              // 0x0074(0x0034) (Edit)
	unsigned long                                      bOverride_VerticalAngleByDifficulty : 1;                  // 0x00A8(0x0004)
	struct FFloatByDifficulty                          VerticalAngleByDifficulty;                                // 0x00AC(0x0034) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.VisionParameters
// 0x0228
struct FVisionParameters
{
	unsigned long                                      bOverride_LoseTargetTimeByDifficulty : 1;                 // 0x0000(0x0004)
	struct FFloatByDifficulty                          LoseTargetTimeByDifficulty;                               // 0x0004(0x0034) (Edit)
	unsigned long                                      bOverride_CloseDistanceStand : 1;                         // 0x0038(0x0004)
	float                                              CloseDistanceStand;                                       // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_CloseDistanceCrouch : 1;                        // 0x0040(0x0004)
	float                                              CloseDistanceCrouch;                                      // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_CloseDistanceCrawl : 1;                         // 0x0048(0x0004)
	float                                              CloseDistanceCrawl;                                       // 0x004C(0x0004) (Edit)
	unsigned long                                      bOverride_CrouchMultiplier : 1;                           // 0x0050(0x0004)
	float                                              CrouchMultiplier;                                         // 0x0054(0x0004) (Edit)
	unsigned long                                      bOverride_CrawlMultiplier : 1;                            // 0x0058(0x0004)
	float                                              CrawlMultiplier;                                          // 0x005C(0x0004) (Edit)
	unsigned long                                      bOverride_CloseFacingDistance : 1;                        // 0x0060(0x0004)
	float                                              CloseFacingDistance;                                      // 0x0064(0x0004) (Edit)
	struct FVisionCone                                 NarrowCone;                                               // 0x0068(0x00E0) (Edit)
	struct FVisionCone                                 WideCone;                                                 // 0x0148(0x00E0) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.PerceptionParameters
// 0x0708
struct FPerceptionParameters
{
	unsigned long                                      bOverride_bCanSeePlayer : 1;                              // 0x0000(0x0004)
	unsigned long                                      bCanSeePlayer : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bCanHearPlayer : 1;                             // 0x0000(0x0004)
	unsigned long                                      bCanHearPlayer : 1;                                       // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysSeePlayer : 1;                           // 0x0000(0x0004)
	unsigned long                                      bAlwaysSeePlayer : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bNoDisturbed : 1;                               // 0x0000(0x0004)
	unsigned long                                      bNoDisturbed : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bIgnoreDarkness : 1;                            // 0x0000(0x0004)
	unsigned long                                      bIgnoreDarkness : 1;                                      // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_HearingThreshold : 1;                           // 0x0000(0x0004)
	struct FFloatByDifficulty                          HearingThreshold;                                         // 0x0004(0x0034) (Edit)
	unsigned long                                      bOverride_MinDistanceForReactionNormal : 1;               // 0x0038(0x0004)
	float                                              MinDistanceForReactionNormal;                             // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_MinDistanceForReactionDarkness : 1;             // 0x0040(0x0004)
	float                                              MinDistanceForReactionDarkness;                           // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_MinDisturbanceForReaction : 1;                  // 0x0048(0x0004)
	float                                              MinDisturbanceForReaction;                                // 0x004C(0x0004) (Edit)
	unsigned long                                      bOverride_MinDisturbanceForStop : 1;                      // 0x0050(0x0004)
	float                                              MinDisturbanceForStop;                                    // 0x0054(0x0004) (Edit)
	unsigned long                                      bOverride_MinDisturbanceForGoto : 1;                      // 0x0058(0x0004)
	float                                              MinDisturbanceForGoto;                                    // 0x005C(0x0004) (Edit)
	unsigned long                                      bOverride_MinResidualVisualForGoto : 1;                   // 0x0060(0x0004)
	float                                              MinResidualVisualForGoto;                                 // 0x0064(0x0004) (Edit)
	unsigned long                                      bOverride_MinResidualAudioForGoto : 1;                    // 0x0068(0x0004)
	float                                              MinResidualAudioForGoto;                                  // 0x006C(0x0004) (Edit)
	unsigned long                                      bOverride_MinVisualForChaseUnaware : 1;                   // 0x0070(0x0004)
	float                                              MinVisualForChaseUnaware;                                 // 0x0074(0x0004) (Edit)
	unsigned long                                      bOverride_MinVisualForChaseAware : 1;                     // 0x0078(0x0004)
	float                                              MinVisualForChaseAware;                                   // 0x007C(0x0004) (Edit)
	unsigned long                                      bOverride_MinAudioForChaseUnaware : 1;                    // 0x0080(0x0004)
	float                                              MinAudioForChaseUnaware;                                  // 0x0084(0x0004) (Edit)
	unsigned long                                      bOverride_MinAudioForChaseAware : 1;                      // 0x0088(0x0004)
	float                                              MinAudioForChaseAware;                                    // 0x008C(0x0004) (Edit)
	unsigned long                                      bOverride_MinSightClearanceForAudioDisturbance : 1;       // 0x0090(0x0004)
	float                                              MinSightClearanceForAudioDisturbance;                     // 0x0094(0x0004) (Edit)
	unsigned long                                      bOverride_MaxDistToInvestigateDisturbance : 1;            // 0x0098(0x0004)
	float                                              MaxDistToInvestigateDisturbance;                          // 0x009C(0x0004) (Edit)
	unsigned long                                      bOverride_MinDelayBetweenDisturbances : 1;                // 0x00A0(0x0004)
	float                                              MinDelayBetweenDisturbances;                              // 0x00A4(0x0004) (Edit)
	unsigned long                                      bOverride_MinDelayBetweenIgnoredDist : 1;                 // 0x00A8(0x0004)
	float                                              MinDelayBetweenIgnoredDist;                               // 0x00AC(0x0004) (Edit)
	unsigned long                                      bOverride_DisturbanceWaitTime : 1;                        // 0x00B0(0x0004)
	float                                              DisturbanceWaitTime;                                      // 0x00B4(0x0004) (Edit)
	unsigned long                                      bOverride_AudioPerceptionScalingByDifficulty : 1;         // 0x00B8(0x0004)
	struct FFloatByDifficulty                          AudioPerceptionScalingByDifficulty;                       // 0x00BC(0x0034) (Edit)
	unsigned long                                      bOverride_VisualPerceptionScalingByDifficulty : 1;        // 0x00F0(0x0004)
	struct FFloatByDifficulty                          VisualPerceptionScalingByDifficulty;                      // 0x00F4(0x0034) (Edit)
	unsigned long                                      bOverride_AudioCooldownSpeedByDifficulty : 1;             // 0x0128(0x0004)
	struct FFloatByDifficulty                          AudioCooldownSpeedByDifficulty;                           // 0x012C(0x0034) (Edit)
	unsigned long                                      bOverride_VisualCooldownSpeedByDifficulty : 1;            // 0x0160(0x0004)
	struct FFloatByDifficulty                          VisualCooldownSpeedByDifficulty;                          // 0x0164(0x0034) (Edit)
	unsigned long                                      bOverride_VisualVeryCloseStartDist : 1;                   // 0x0198(0x0004)
	float                                              VisualVeryCloseStartDist;                                 // 0x019C(0x0004) (Edit)
	unsigned long                                      bOverride_VisualVeryCloseEndDist : 1;                     // 0x01A0(0x0004)
	float                                              VisualVeryCloseEndDist;                                   // 0x01A4(0x0004) (Edit)
	unsigned long                                      bOverride_VisualVeryCloseMultiplier : 1;                  // 0x01A8(0x0004)
	float                                              VisualVeryCloseMultiplier;                                // 0x01AC(0x0004) (Edit)
	unsigned long                                      bOverride_VisualCrouchMultiplier : 1;                     // 0x01B0(0x0004)
	float                                              VisualCrouchMultiplier;                                   // 0x01B4(0x0004) (Edit)
	unsigned long                                      bOverride_VisualCrawlMultiplier : 1;                      // 0x01B8(0x0004)
	float                                              VisualCrawlMultiplier;                                    // 0x01BC(0x0004) (Edit)
	unsigned long                                      bOverride_VisualOnlyWideConeMultiplier : 1;               // 0x01C0(0x0004)
	float                                              VisualOnlyWideConeMultiplier;                             // 0x01C4(0x0004) (Edit)
	unsigned long                                      bOverride_VisualBarelyVisibleInDarknessMultiplier : 1;    // 0x01C8(0x0004)
	float                                              VisualBarelyVisibleInDarknessMultiplier;                  // 0x01CC(0x0004) (Edit)
	unsigned long                                      bOverride_VisualThroughWindowMultiplier : 1;              // 0x01D0(0x0004)
	float                                              VisualThroughWindowMultiplier;                            // 0x01D4(0x0004) (Edit)
	unsigned long                                      bOverride_VisualLitByFlashlightMultiplier : 1;            // 0x01D8(0x0004)
	float                                              VisualLitByFlashlightMultiplier;                          // 0x01DC(0x0004) (Edit)
	unsigned long                                      bOverride_VisualPeekFromSpecialLocationMultiplier : 1;    // 0x01E0(0x0004)
	float                                              VisualPeekFromSpecialLocationMultiplier;                  // 0x01E4(0x0004) (Edit)
	unsigned long                                      bOverride_VisualPeekingUnderwaterMultiplier : 1;          // 0x01E8(0x0004)
	float                                              VisualPeekingUnderwaterMultiplier;                        // 0x01EC(0x0004) (Edit)
	unsigned long                                      bOverride_VisualCloseFacingMultiplier : 1;                // 0x01F0(0x0004)
	float                                              VisualCloseFacingMultiplier;                              // 0x01F4(0x0004) (Edit)
	unsigned long                                      bOverride_BushesVisualMaxDistanceByDifficulty : 1;        // 0x01F8(0x0004)
	struct FFloatByDifficulty                          BushesVisualMaxDistanceByDifficulty;                      // 0x01FC(0x0034) (Edit)
	unsigned long                                      bOverride_BushesVisualMultiplier : 1;                     // 0x0230(0x0004)
	float                                              BushesVisualMultiplier;                                   // 0x0234(0x0004) (Edit)
	unsigned long                                      bOverride_BushesAudioMultiplier : 1;                      // 0x0238(0x0004)
	float                                              BushesAudioMultiplier;                                    // 0x023C(0x0004) (Edit)
	unsigned long                                      bOverride_BushesMaxDistanceForChase : 1;                  // 0x0240(0x0004)
	float                                              BushesMaxDistanceForChase;                                // 0x0244(0x0004) (Edit)
	unsigned long                                      bOverride_UnderwaterVisualMaxDistanceByDifficulty : 1;    // 0x0248(0x0004)
	struct FFloatByDifficulty                          UnderwaterVisualMaxDistanceByDifficulty;                  // 0x024C(0x0034) (Edit)
	unsigned long                                      bOverride_UnderwaterVisualMultiplier : 1;                 // 0x0280(0x0004)
	float                                              UnderwaterVisualMultiplier;                               // 0x0284(0x0004) (Edit)
	unsigned long                                      bOverride_AudioImprecisionDist : 1;                       // 0x0288(0x0004)
	float                                              AudioImprecisionDist;                                     // 0x028C(0x0004) (Edit)
	unsigned long                                      bOverride_MinAudioImprecisionDist : 1;                    // 0x0290(0x0004)
	float                                              MinAudioImprecisionDist;                                  // 0x0294(0x0004) (Edit)
	unsigned long                                      bOverride_AudioImprecisionAngle : 1;                      // 0x0298(0x0004)
	float                                              AudioImprecisionAngle;                                    // 0x029C(0x0004) (Edit)
	unsigned long                                      bOverride_BarelyVisibleNarrowRangeFactor : 1;             // 0x02A0(0x0004)
	float                                              BarelyVisibleNarrowRangeFactor;                           // 0x02A4(0x0004) (Edit)
	unsigned long                                      bOverride_BarelyVisibleWideRangeFactor : 1;               // 0x02A8(0x0004)
	float                                              BarelyVisibleWideRangeFactor;                             // 0x02AC(0x0004) (Edit)
	unsigned long                                      bOverride_MinVisualForEnterHidingAwareness : 1;           // 0x02B0(0x0004)
	float                                              MinVisualForEnterHidingAwareness;                         // 0x02B4(0x0004) (Edit)
	struct FVisionParameters                           NormalVisionParameters;                                   // 0x02B8(0x0228) (Edit)
	struct FVisionParameters                           DarknessVisionParameters;                                 // 0x04E0(0x0228) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.InvestigationParameters
// 0x0100
struct FInvestigationParameters
{
	unsigned long                                      bOverride_bNoInvestigation : 1;                           // 0x0000(0x0004)
	unsigned long                                      bNoInvestigation : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bInvestigateOnIdleFallback : 1;                 // 0x0000(0x0004)
	unsigned long                                      bInvestigateOnIdleFallback : 1;                           // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bInvestigateLockers : 1;                        // 0x0000(0x0004)
	unsigned long                                      bInvestigateLockers : 1;                                  // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bInvestigateBeds : 1;                           // 0x0000(0x0004)
	unsigned long                                      bInvestigateBeds : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bInvestigateCrawlSpaces : 1;                    // 0x0000(0x0004)
	unsigned long                                      bInvestigateCrawlSpaces : 1;                              // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bInvestigateWindows : 1;                        // 0x0000(0x0004)
	unsigned long                                      bInvestigateWindows : 1;                                  // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bInvestigateBarrels : 1;                        // 0x0000(0x0004)
	unsigned long                                      bInvestigateBarrels : 1;                                  // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bInvestigateWardrobes : 1;                      // 0x0000(0x0004)
	unsigned long                                      bInvestigateWardrobes : 1;                                // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_NumPointsToCheckAware : 1;                      // 0x0000(0x0004)
	int                                                NumPointsToCheckAware;                                    // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_NumPointsToCheckUnaware : 1;                    // 0x0008(0x0004)
	int                                                NumPointsToCheckUnaware;                                  // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_MinPointsToGenerate : 1;                        // 0x0010(0x0004)
	int                                                MinPointsToGenerate;                                      // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_GeneratedPointsMinRadius : 1;                   // 0x0018(0x0004)
	float                                              GeneratedPointsMinRadius;                                 // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_GeneratedPointsMaxRadius : 1;                   // 0x0020(0x0004)
	float                                              GeneratedPointsMaxRadius;                                 // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_MaxPointSearchDistance : 1;                     // 0x0028(0x0004)
	float                                              MaxPointSearchDistance;                                   // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxPathDistance : 1;                            // 0x0030(0x0004)
	float                                              MaxPathDistance;                                          // 0x0034(0x0004) (Edit)
	unsigned long                                      bOverride_LockerWeight : 1;                               // 0x0038(0x0004)
	float                                              LockerWeight;                                             // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_BedWeight : 1;                                  // 0x0040(0x0004)
	float                                              BedWeight;                                                // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_WindowWeight : 1;                               // 0x0048(0x0004)
	float                                              WindowWeight;                                             // 0x004C(0x0004) (Edit)
	unsigned long                                      bOverride_CrawlWeight : 1;                                // 0x0050(0x0004)
	float                                              CrawlWeight;                                              // 0x0054(0x0004) (Edit)
	unsigned long                                      bOverride_BarrelWeight : 1;                               // 0x0058(0x0004)
	float                                              BarrelWeight;                                             // 0x005C(0x0004) (Edit)
	unsigned long                                      bOverride_WardrobeWeight : 1;                             // 0x0060(0x0004)
	float                                              WardrobeWeight;                                           // 0x0064(0x0004) (Edit)
	unsigned long                                      bOverride_PointWeight : 1;                                // 0x0068(0x0004)
	float                                              PointWeight;                                              // 0x006C(0x0004) (Edit)
	unsigned long                                      bOverride_DoorOpenedByPlayerWeight : 1;                   // 0x0070(0x0004)
	float                                              DoorOpenedByPlayerWeight;                                 // 0x0074(0x0004) (Edit)
	unsigned long                                      bOverride_WindowOpenedByPlayerWeight : 1;                 // 0x0078(0x0004)
	float                                              WindowOpenedByPlayerWeight;                               // 0x007C(0x0004) (Edit)
	unsigned long                                      bOverride_AutoGeneratedWeight : 1;                        // 0x0080(0x0004)
	float                                              AutoGeneratedWeight;                                      // 0x0084(0x0004) (Edit)
	unsigned long                                      bOverride_InvestigateBedAlternateChance : 1;              // 0x0088(0x0004)
	float                                              InvestigateBedAlternateChance;                            // 0x008C(0x0004) (Edit)
	unsigned long                                      bOverride_FindHiddenPlayerProbability : 1;                // 0x0090(0x0004)
	float                                              FindHiddenPlayerProbability;                              // 0x0094(0x0004) (Edit)
	unsigned long                                      bOverride_BiasTowardsPlayerContrib : 1;                   // 0x0098(0x0004)
	float                                              BiasTowardsPlayerContrib;                                 // 0x009C(0x0004) (Edit)
	unsigned long                                      bOverride_BiasTowardsLastPlayerDirectionContrib : 1;      // 0x00A0(0x0004)
	float                                              BiasTowardsLastPlayerDirectionContrib;                    // 0x00A4(0x0004) (Edit)
	unsigned long                                      bOverride_BiasNearPlayerDistance : 1;                     // 0x00A8(0x0004)
	float                                              BiasNearPlayerDistance;                                   // 0x00AC(0x0004) (Edit)
	unsigned long                                      bOverride_BiasNearPlayerContrib : 1;                      // 0x00B0(0x0004)
	float                                              BiasNearPlayerContrib;                                    // 0x00B4(0x0004) (Edit)
	unsigned long                                      bOverride_BiasIdealDistanceFromBot : 1;                   // 0x00B8(0x0004)
	float                                              BiasIdealDistanceFromBot;                                 // 0x00BC(0x0004) (Edit)
	unsigned long                                      bOverride_BiasIdealDistanceFromBotContrib : 1;            // 0x00C0(0x0004)
	float                                              BiasIdealDistanceFromBotContrib;                          // 0x00C4(0x0004) (Edit)
	unsigned long                                      bOverride_BiasHorizontalityContrib : 1;                   // 0x00C8(0x0004)
	float                                              BiasHorizontalityContrib;                                 // 0x00CC(0x0004) (Edit)
	unsigned long                                      bOverride_BiasSameVolumeContrib : 1;                      // 0x00D0(0x0004)
	float                                              BiasSameVolumeContrib;                                    // 0x00D4(0x0004) (Edit)
	unsigned long                                      bOverride_BiasInSearchDistanceContrib : 1;                // 0x00D8(0x0004)
	float                                              BiasInSearchDistanceContrib;                              // 0x00DC(0x0004) (Edit)
	unsigned long                                      bOverride_BiasSeparationFromOthersDistance : 1;           // 0x00E0(0x0004)
	float                                              BiasSeparationFromOthersDistance;                         // 0x00E4(0x0004) (Edit)
	unsigned long                                      bOverride_BiasSeparationFromOthersContrib : 1;            // 0x00E8(0x0004)
	float                                              BiasSeparationFromOthersContrib;                          // 0x00EC(0x0004) (Edit)
	unsigned long                                      bOverride_BiasRandomContrib : 1;                          // 0x00F0(0x0004)
	float                                              BiasRandomContrib;                                        // 0x00F4(0x0004) (Edit)
	unsigned long                                      bOverride_BiasCleanPathContrib : 1;                       // 0x00F8(0x0004)
	float                                              BiasCleanPathContrib;                                     // 0x00FC(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.AttackParameters
// 0x01A8
struct FAttackParameters
{
	unsigned long                                      bOverride_AttackRange : 1;                                // 0x0000(0x0004)
	float                                              AttackRange;                                              // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_GrabUnderAttackRange : 1;                       // 0x0008(0x0004)
	float                                              GrabUnderAttackRange;                                     // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_bNoFail : 1;                                    // 0x0010(0x0004)
	unsigned long                                      bNoFail : 1;                                              // 0x0010(0x0004) (Edit)
	unsigned long                                      bOverride_bShowWeaponOnDemand : 1;                        // 0x0010(0x0004)
	unsigned long                                      bShowWeaponOnDemand : 1;                                  // 0x0010(0x0004) (Edit)
	unsigned long                                      bOverride_AttackStandardDamage : 1;                       // 0x0010(0x0004)
	struct FFloatByDifficulty                          AttackStandardDamage;                                     // 0x0014(0x0034) (Edit)
	unsigned long                                      bOverride_AttackSpecialDamage : 1;                        // 0x0048(0x0004)
	struct FFloatByDifficulty                          AttackSpecialDamage;                                      // 0x004C(0x0034) (Edit)
	unsigned long                                      bOverride_AttackCrawlDamage : 1;                          // 0x0080(0x0004)
	struct FFloatByDifficulty                          AttackCrawlDamage;                                        // 0x0084(0x0034) (Edit)
	unsigned long                                      bOverride_AttackStandardRecovery : 1;                     // 0x00B8(0x0004)
	struct FFloatByDifficulty                          AttackStandardRecovery;                                   // 0x00BC(0x0034) (Edit)
	unsigned long                                      bOverride_AttackDeathGripRecovery : 1;                    // 0x00F0(0x0004)
	float                                              AttackDeathGripRecovery;                                  // 0x00F4(0x0004) (Edit)
	unsigned long                                      bOverride_AttackNormalKnockbackPower : 1;                 // 0x00F8(0x0004)
	float                                              AttackNormalKnockbackPower;                               // 0x00FC(0x0004) (Edit)
	unsigned long                                      bOverride_AttackPushKnockbackPower : 1;                   // 0x0100(0x0004)
	float                                              AttackPushKnockbackPower;                                 // 0x0104(0x0004) (Edit)
	unsigned long                                      bOverride_DoorBashDamage : 1;                             // 0x0108(0x0004)
	float                                              DoorBashDamage;                                           // 0x010C(0x0004) (Edit)
	unsigned long                                      bOverride_DoorBashKnockbackPower : 1;                     // 0x0110(0x0004)
	float                                              DoorBashKnockbackPower;                                   // 0x0114(0x0004) (Edit)
	unsigned long                                      bOverride_VaultDamage : 1;                                // 0x0118(0x0004)
	float                                              VaultDamage;                                              // 0x011C(0x0004) (Edit)
	unsigned long                                      bOverride_VaultKnockbackPower : 1;                        // 0x0120(0x0004)
	float                                              VaultKnockbackPower;                                      // 0x0124(0x0004) (Edit)
	unsigned long                                      bOverride_AttackSqueezeInsideRange : 1;                   // 0x0128(0x0004)
	float                                              AttackSqueezeInsideRange;                                 // 0x012C(0x0004) (Edit)
	unsigned long                                      bOverride_AttackSqueezeRetryDelay : 1;                    // 0x0130(0x0004)
	float                                              AttackSqueezeRetryDelay;                                  // 0x0134(0x0004) (Edit)
	unsigned long                                      bOverride_AttackIdleTimeAfterGrab : 1;                    // 0x0138(0x0004)
	float                                              AttackIdleTimeAfterGrab;                                  // 0x013C(0x0004) (Edit)
	unsigned long                                      bOverride_AnticipationDistance : 1;                       // 0x0140(0x0004)
	float                                              AnticipationDistance;                                     // 0x0144(0x0004) (Edit)
	unsigned long                                      bOverride_AnticipationDistanceSecondary : 1;              // 0x0148(0x0004)
	float                                              AnticipationDistanceSecondary;                            // 0x014C(0x0004) (Edit)
	unsigned long                                      bOverride_MinAnticipationVelocity : 1;                    // 0x0150(0x0004)
	float                                              MinAnticipationVelocity;                                  // 0x0154(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysAnticipate : 1;                          // 0x0158(0x0004)
	unsigned long                                      bAlwaysAnticipate : 1;                                    // 0x0158(0x0004) (Edit)
	unsigned long                                      bOverride_bAttackUseQuickAttack : 1;                      // 0x0158(0x0004)
	unsigned long                                      bAttackUseQuickAttack : 1;                                // 0x0158(0x0004) (Edit)
	unsigned long                                      bOverride_AttackQuickSpeedThreshold : 1;                  // 0x0158(0x0004)
	float                                              AttackQuickSpeedThreshold;                                // 0x015C(0x0004) (Edit)
	unsigned long                                      bOverride_AttackQuickAngleThreshold : 1;                  // 0x0160(0x0004)
	float                                              AttackQuickAngleThreshold;                                // 0x0164(0x0004) (Edit)
	unsigned long                                      bOverride_AttackQuickDistanceThreshold : 1;               // 0x0168(0x0004)
	float                                              AttackQuickDistanceThreshold;                             // 0x016C(0x0004) (Edit)
	unsigned long                                      bOverride_bNoGrabCrawlingPlayer : 1;                      // 0x0170(0x0004)
	unsigned long                                      bNoGrabCrawlingPlayer : 1;                                // 0x0170(0x0004) (Edit)
	unsigned long                                      bOverride_bNoGrabFromUnder : 1;                           // 0x0170(0x0004)
	unsigned long                                      bNoGrabFromUnder : 1;                                     // 0x0170(0x0004) (Edit)
	unsigned long                                      bOverride_bTryPuntHero : 1;                               // 0x0170(0x0004)
	unsigned long                                      bTryPuntHero : 1;                                         // 0x0170(0x0004) (Edit)
	unsigned long                                      bOverride_PuntDesiredDistance : 1;                        // 0x0170(0x0004)
	float                                              PuntDesiredDistance;                                      // 0x0174(0x0004) (Edit)
	unsigned long                                      bOverride_PuntDesiredAirDuration : 1;                     // 0x0178(0x0004)
	float                                              PuntDesiredAirDuration;                                   // 0x017C(0x0004) (Edit)
	unsigned long                                      bOverride_PuntGroundDuration : 1;                         // 0x0180(0x0004)
	float                                              PuntGroundDuration;                                       // 0x0184(0x0004) (Edit)
	unsigned long                                      bOverride_PuntDizzinessDuration : 1;                      // 0x0188(0x0004)
	float                                              PuntDizzinessDuration;                                    // 0x018C(0x0004) (Edit)
	unsigned long                                      bOverride_AfterPuntSlowWalkDuration : 1;                  // 0x0190(0x0004)
	float                                              AfterPuntSlowWalkDuration;                                // 0x0194(0x0004) (Edit)
	unsigned long                                      bOverride_AfterPuntSlowWalkSpeed : 1;                     // 0x0198(0x0004)
	float                                              AfterPuntSlowWalkSpeed;                                   // 0x019C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxPlayerPushBeforeKill : 1;                    // 0x01A0(0x0004)
	int                                                MaxPlayerPushBeforeKill;                                  // 0x01A4(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.FaceOffParameters
// 0x0030
struct FFaceOffParameters
{
	unsigned long                                      bOverride_bEnabled : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_MinRangeForEnter : 1;                           // 0x0000(0x0004)
	float                                              MinRangeForEnter;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_MaxRangeForEnter : 1;                           // 0x0008(0x0004)
	float                                              MaxRangeForEnter;                                         // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_MinRangeForExit : 1;                            // 0x0010(0x0004)
	float                                              MinRangeForExit;                                          // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_MaxRangeForExit : 1;                            // 0x0018(0x0004)
	float                                              MaxRangeForExit;                                          // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_EnterDelay : 1;                                 // 0x0020(0x0004)
	float                                              EnterDelay;                                               // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_CancelDelay : 1;                                // 0x0028(0x0004)
	float                                              CancelDelay;                                              // 0x002C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.DeathGripParameters
// 0x00D0
struct FDeathGripParameters
{
	unsigned long                                      bOverride_bEnabled : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysQTE : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bAlwaysQTE : 1;                                           // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysShake : 1;                               // 0x0000(0x0004)
	unsigned long                                      bAlwaysShake : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bCanBeJoinedForMultiKill : 1;                   // 0x0000(0x0004)
	unsigned long                                      bCanBeJoinedForMultiKill : 1;                             // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bCanJoinForMultiKill : 1;                       // 0x0000(0x0004)
	unsigned long                                      bCanJoinForMultiKill : 1;                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysUseWhenInRange : 1;                      // 0x0000(0x0004)
	unsigned long                                      bAlwaysUseWhenInRange : 1;                                // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_ForceVariantId : 1;                             // 0x0000(0x0004)
	int                                                ForceVariantId;                                           // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_bConsiderProbabilityForAlwaysUse : 1;           // 0x0008(0x0004)
	unsigned long                                      bConsiderProbabilityForAlwaysUse : 1;                     // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_bInactiveAnimAfterEscape : 1;                   // 0x0008(0x0004)
	unsigned long                                      bInactiveAnimAfterEscape : 1;                             // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_bReturnToSpawnLocationAfterEscape : 1;          // 0x0008(0x0004)
	unsigned long                                      bReturnToSpawnLocationAfterEscape : 1;                    // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_MaxRangeFwd : 1;                                // 0x0008(0x0004)
	float                                              MaxRangeFwd;                                              // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxRangeSide : 1;                               // 0x0010(0x0004)
	float                                              MaxRangeSide;                                             // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_Probability : 1;                                // 0x0018(0x0004)
	float                                              Probability;                                              // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_RetryDelay : 1;                                 // 0x0020(0x0004)
	float                                              RetryDelay;                                               // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_ReEnterDelay : 1;                               // 0x0028(0x0004)
	float                                              ReEnterDelay;                                             // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxDuration : 1;                                // 0x0030(0x0004)
	float                                              MaxDuration;                                              // 0x0034(0x0004) (Edit)
	unsigned long                                      bOverride_MinChasingTimeForActivation : 1;                // 0x0038(0x0004)
	float                                              MinChasingTimeForActivation;                              // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_FastInputCoeff : 1;                             // 0x0040(0x0004)
	float                                              FastInputCoeff;                                           // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_SlowInputWinCoeff : 1;                          // 0x0048(0x0004)
	float                                              SlowInputWinCoeff;                                        // 0x004C(0x0004) (Edit)
	unsigned long                                      bOverride_SlowInputLoseCoeff : 1;                         // 0x0050(0x0004)
	float                                              SlowInputLoseCoeff;                                       // 0x0054(0x0004) (Edit)
	unsigned long                                      bOverride_NoInputCoeff : 1;                               // 0x0058(0x0004)
	float                                              NoInputCoeff;                                             // 0x005C(0x0004) (Edit)
	unsigned long                                      bOverride_TooLateCoeff : 1;                               // 0x0060(0x0004)
	float                                              TooLateCoeff;                                             // 0x0064(0x0004) (Edit)
	unsigned long                                      bOverride_SlowInputTargetRatio : 1;                       // 0x0068(0x0004)
	float                                              SlowInputTargetRatio;                                     // 0x006C(0x0004) (Edit)
	unsigned long                                      bOverride_PlayerRampUpTime : 1;                           // 0x0070(0x0004)
	float                                              PlayerRampUpTime;                                         // 0x0074(0x0004) (Edit)
	unsigned long                                      bOverride_NPCRampUpTime : 1;                              // 0x0078(0x0004)
	float                                              NPCRampUpTime;                                            // 0x007C(0x0004) (Edit)
	unsigned long                                      bOverride_SafeDuration : 1;                               // 0x0080(0x0004)
	float                                              SafeDuration;                                             // 0x0084(0x0004) (Edit)
	unsigned long                                      bOverride_QTEInputWindow : 1;                             // 0x0088(0x0004)
	struct FFloatByDifficulty                          QTEInputWindow;                                           // 0x008C(0x0034) (Edit)
	unsigned long                                      bOverride_QTEKillRate : 1;                                // 0x00C0(0x0004)
	float                                              QTEKillRate;                                              // 0x00C4(0x0004) (Edit)
	unsigned long                                      bOverride_QTEWinRate : 1;                                 // 0x00C8(0x0004)
	float                                              QTEWinRate;                                               // 0x00CC(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.FlashlightParameters
// 0x0044
struct FFlashlightParameters
{
	unsigned long                                      bOverride_bHasFlashlight : 1;                             // 0x0000(0x0004)
	unsigned long                                      bHasFlashlight : 1;                                       // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bFlashlightActive : 1;                          // 0x0000(0x0004)
	unsigned long                                      bFlashlightActive : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bSmartActivation : 1;                           // 0x0000(0x0004)
	unsigned long                                      bSmartActivation : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_SmartActivationDist : 1;                        // 0x0000(0x0004)
	float                                              SmartActivationDist;                                      // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_bAutoEquip : 1;                                 // 0x0008(0x0004)
	unsigned long                                      bAutoEquip : 1;                                           // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_AutoEquipDelay : 1;                             // 0x0008(0x0004)
	float                                              AutoEquipDelay;                                           // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_VisualDistance : 1;                             // 0x0010(0x0004)
	float                                              VisualDistance;                                           // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_LogicalDistance : 1;                            // 0x0018(0x0004)
	float                                              LogicalDistance;                                          // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_VisualConeAngle : 1;                            // 0x0020(0x0004)
	float                                              VisualConeAngle;                                          // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_LogicalConeAngle : 1;                           // 0x0028(0x0004)
	float                                              LogicalConeAngle;                                         // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_OverriddenMaxDrawDistance : 1;                  // 0x0030(0x0004)
	float                                              OverriddenMaxDrawDistance;                                // 0x0034(0x0004) (Edit)
	unsigned long                                      bOverride_OverriddenVolumetricsIntensity : 1;             // 0x0038(0x0004)
	float                                              OverriddenVolumetricsIntensity;                           // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_bNoCastShadow : 1;                              // 0x0040(0x0004)
	unsigned long                                      bNoCastShadow : 1;                                        // 0x0040(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.SpecialParameters
// 0x0014
struct FSpecialParameters
{
	unsigned long                                      bOverride_bInvisible : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bInvisible : 1;                                           // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bNoFootsteps : 1;                               // 0x0000(0x0004)
	unsigned long                                      bNoFootsteps : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bShadowScare : 1;                               // 0x0000(0x0004)
	unsigned long                                      bShadowScare : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bNVEyes : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bNVEyes : 1;                                              // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bNoSimplePhysics : 1;                           // 0x0000(0x0004)
	unsigned long                                      bNoSimplePhysics : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_MarthaMaceGlowSpeedThreshold : 1;               // 0x0000(0x0004)
	float                                              MarthaMaceGlowSpeedThreshold;                             // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysCrawling : 1;                            // 0x0008(0x0004)
	unsigned long                                      bAlwaysCrawling : 1;                                      // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysFaceHero : 1;                            // 0x0008(0x0004)
	unsigned long                                      bAlwaysFaceHero : 1;                                      // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_FoliageExtraWidth : 1;                          // 0x0008(0x0004)
	float                                              FoliageExtraWidth;                                        // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_bHurtingPregnantLynn : 1;                       // 0x0010(0x0004)
	unsigned long                                      bHurtingPregnantLynn : 1;                                 // 0x0010(0x0004) (Edit)
	unsigned long                                      bOverride_bPregnantLynn : 1;                              // 0x0010(0x0004)
	unsigned long                                      bPregnantLynn : 1;                                        // 0x0010(0x0004) (Edit)
	unsigned long                                      bOverride_bAllowCrawlNoFlashlight : 1;                    // 0x0010(0x0004)
	unsigned long                                      bAllowCrawlNoFlashlight : 1;                              // 0x0010(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.VOParameters
// 0x0038
struct FVOParameters
{
	unsigned long                                      bOverride_bPlayContinuousSound : 1;                       // 0x0000(0x0004)
	unsigned long                                      bPlayContinuousSound : 1;                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bPlayContinuousSoundMicrophoneOnly : 1;         // 0x0000(0x0004)
	unsigned long                                      bPlayContinuousSoundMicrophoneOnly : 1;                   // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_ConversationRange : 1;                          // 0x0000(0x0004)
	float                                              ConversationRange;                                        // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_PatrolMinTimeForRandomVO : 1;                   // 0x0008(0x0004)
	float                                              PatrolMinTimeForRandomVO;                                 // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_PatrolMaxTimeForRandomVO : 1;                   // 0x0010(0x0004)
	float                                              PatrolMaxTimeForRandomVO;                                 // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_InvestigateMinTimeForRandomVO : 1;              // 0x0018(0x0004)
	float                                              InvestigateMinTimeForRandomVO;                            // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_InvestigateMaxTimeForRandomVO : 1;              // 0x0020(0x0004)
	float                                              InvestigateMaxTimeForRandomVO;                            // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_ChaseMinTimeForRandomVO : 1;                    // 0x0028(0x0004)
	float                                              ChaseMinTimeForRandomVO;                                  // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_ChaseMaxTimeForRandomVO : 1;                    // 0x0030(0x0004)
	float                                              ChaseMaxTimeForRandomVO;                                  // 0x0034(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.PathfindingParameters
// 0x0088
struct FPathfindingParameters
{
	unsigned long                                      bOverride_bCanOpenDoors : 1;                              // 0x0000(0x0004)
	unsigned long                                      bCanOpenDoors : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bCanBashDoors : 1;                              // 0x0000(0x0004)
	unsigned long                                      bCanBashDoors : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bCanTraverseWindows : 1;                        // 0x0000(0x0004)
	unsigned long                                      bCanTraverseWindows : 1;                                  // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bCanPathThroughCrawl : 1;                       // 0x0000(0x0004)
	unsigned long                                      bCanPathThroughCrawl : 1;                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_OpenDoorCostMultiplier : 1;                     // 0x0000(0x0004)
	float                                              OpenDoorCostMultiplier;                                   // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_ClosedDoorCostMultiplier : 1;                   // 0x0008(0x0004)
	float                                              ClosedDoorCostMultiplier;                                 // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_MustUnlockDoorCostMultiplier : 1;               // 0x0010(0x0004)
	float                                              MustUnlockDoorCostMultiplier;                             // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_MustBashDoorCostMultiplier : 1;                 // 0x0018(0x0004)
	float                                              MustBashDoorCostMultiplier;                               // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_DoorExtraBotCostMultiplier : 1;                 // 0x0020(0x0004)
	float                                              DoorExtraBotCostMultiplier;                               // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_OpenWindowCostMultiplier : 1;                   // 0x0028(0x0004)
	float                                              OpenWindowCostMultiplier;                                 // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_OpenableWindowCostMultiplier : 1;               // 0x0030(0x0004)
	float                                              OpenableWindowCostMultiplier;                             // 0x0034(0x0004) (Edit)
	unsigned long                                      bOverride_BreakingWindowCostMultiplier : 1;               // 0x0038(0x0004)
	float                                              BreakingWindowCostMultiplier;                             // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_WindowExtraBotCostMultiplier : 1;               // 0x0040(0x0004)
	float                                              WindowExtraBotCostMultiplier;                             // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_WindowUnawareAdditionalCost : 1;                // 0x0048(0x0004)
	float                                              WindowUnawareAdditionalCost;                              // 0x004C(0x0004) (Edit)
	unsigned long                                      bOverride_VaultNormalCostMultiplier : 1;                  // 0x0050(0x0004)
	float                                              VaultNormalCostMultiplier;                                // 0x0054(0x0004) (Edit)
	unsigned long                                      bOverride_VaultChaseCostMultiplier : 1;                   // 0x0058(0x0004)
	float                                              VaultChaseCostMultiplier;                                 // 0x005C(0x0004) (Edit)
	unsigned long                                      bOverride_JumpNormalCostMultiplier : 1;                   // 0x0060(0x0004)
	float                                              JumpNormalCostMultiplier;                                 // 0x0064(0x0004) (Edit)
	unsigned long                                      bOverride_JumpChaseCostMultiplier : 1;                    // 0x0068(0x0004)
	float                                              JumpChaseCostMultiplier;                                  // 0x006C(0x0004) (Edit)
	unsigned long                                      bOverride_LedgeNormalCostMultiplier : 1;                  // 0x0070(0x0004)
	float                                              LedgeNormalCostMultiplier;                                // 0x0074(0x0004) (Edit)
	unsigned long                                      bOverride_LedgeChaseCostMultiplier : 1;                   // 0x0078(0x0004)
	float                                              LedgeChaseCostMultiplier;                                 // 0x007C(0x0004) (Edit)
	unsigned long                                      bOverride_bSpawnWithNavMeshObstacle : 1;                  // 0x0080(0x0004)
	unsigned long                                      bSpawnWithNavMeshObstacle : 1;                            // 0x0080(0x0004) (Edit)
	unsigned long                                      bOverride_PathEdgeSpacing : 1;                            // 0x0080(0x0004)
	float                                              PathEdgeSpacing;                                          // 0x0084(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.AnimationParameters
// 0x000C
struct FAnimationParameters
{
	unsigned long                                      bOverride_bForceUnawareAnimStyle : 1;                     // 0x0000(0x0004)
	unsigned long                                      bForceUnawareAnimStyle : 1;                               // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bForceAlertAnimStyle : 1;                       // 0x0000(0x0004)
	unsigned long                                      bForceAlertAnimStyle : 1;                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bCanReturnToUnaware : 1;                        // 0x0000(0x0004)
	unsigned long                                      bCanReturnToUnaware : 1;                                  // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_MinLocomotionIdleBlendTime : 1;                 // 0x0000(0x0004)
	float                                              MinLocomotionIdleBlendTime;                               // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_bUseSkullFixer : 1;                             // 0x0008(0x0004)
	unsigned long                                      bUseSkullFixer : 1;                                       // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_bUseIdleBreakers : 1;                           // 0x0008(0x0004)
	unsigned long                                      bUseIdleBreakers : 1;                                     // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_bUseCycleBreakers : 1;                          // 0x0008(0x0004)
	unsigned long                                      bUseCycleBreakers : 1;                                    // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_bNoAnimLOD : 1;                                 // 0x0008(0x0004)
	unsigned long                                      bNoAnimLOD : 1;                                           // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_bEnableProceduralEyeLookAt : 1;                 // 0x0008(0x0004)
	unsigned long                                      bEnableProceduralEyeLookAt : 1;                           // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverride_bNoFootstepEffects : 1;                         // 0x0008(0x0004)
	unsigned long                                      bNoFootstepEffects : 1;                                   // 0x0008(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.IndirectWalkParameters
// 0x0030
struct FIndirectWalkParameters
{
	unsigned long                                      bOverride_bEnableWhenInvestigating : 1;                   // 0x0000(0x0004)
	unsigned long                                      bEnableWhenInvestigating : 1;                             // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_MinRandomizeTime : 1;                           // 0x0000(0x0004)
	float                                              MinRandomizeTime;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_MaxRandomizeTime : 1;                           // 0x0008(0x0004)
	float                                              MaxRandomizeTime;                                         // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_MinSpeedPct : 1;                                // 0x0010(0x0004)
	float                                              MinSpeedPct;                                              // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_MaxSpeedPct : 1;                                // 0x0018(0x0004)
	float                                              MaxSpeedPct;                                              // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_SpeedApproachCoeff : 1;                         // 0x0020(0x0004)
	float                                              SpeedApproachCoeff;                                       // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_MaxDeviationRatio : 1;                          // 0x0028(0x0004)
	float                                              MaxDeviationRatio;                                        // 0x002C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.InnerDemonParameters
// 0x00FC
struct FInnerDemonParameters
{
	unsigned long                                      bOverride_bDemonic : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bDemonic : 1;                                             // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicBackEnterDistance : 1;                   // 0x0000(0x0004)
	float                                              DemonicBackEnterDistance;                                 // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicLookBackEnterDistance : 1;               // 0x0008(0x0004)
	float                                              DemonicLookBackEnterDistance;                             // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicFrontAttackDistance : 1;                 // 0x0010(0x0004)
	float                                              DemonicFrontAttackDistance;                               // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicAttackYawThresh : 1;                     // 0x0018(0x0004)
	float                                              DemonicAttackYawThresh;                                   // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicMinRunningSpeed : 1;                     // 0x0020(0x0004)
	float                                              DemonicMinRunningSpeed;                                   // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicPosOffset : 1;                           // 0x0028(0x0004)
	float                                              DemonicPosOffset;                                         // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicLookbackOffset : 1;                      // 0x0030(0x0004)
	float                                              DemonicLookbackOffset;                                    // 0x0034(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicYawCorrectionRate : 1;                   // 0x0038(0x0004)
	float                                              DemonicYawCorrectionRate;                                 // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_bDemonicForceField : 1;                         // 0x0040(0x0004)
	unsigned long                                      bDemonicForceField : 1;                                   // 0x0040(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicForceFieldStrength : 1;                  // 0x0040(0x0004)
	float                                              DemonicForceFieldStrength;                                // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_DemonicForceFieldRadius : 1;                    // 0x0048(0x0004)
	float                                              DemonicForceFieldRadius;                                  // 0x004C(0x0004) (Edit)
	unsigned long                                      bOverride_bDemonicNoKill : 1;                             // 0x0050(0x0004)
	unsigned long                                      bDemonicNoKill : 1;                                       // 0x0050(0x0004) (Edit)
	unsigned long                                      bOverride_bChargePlayerIfLooking : 1;                     // 0x0050(0x0004)
	unsigned long                                      bChargePlayerIfLooking : 1;                               // 0x0050(0x0004) (Edit)
	unsigned long                                      bOverride_bPauseBeforeCharge : 1;                         // 0x0050(0x0004)
	unsigned long                                      bPauseBeforeCharge : 1;                                   // 0x0050(0x0004) (Edit)
	unsigned long                                      bOverride_ChargeSpeed : 1;                                // 0x0050(0x0004)
	struct FFloatByDifficulty                          ChargeSpeed;                                              // 0x0054(0x0034) (Edit)
	unsigned long                                      bOverride_VisibleDurationBeforeCharge : 1;                // 0x0088(0x0004)
	struct FFloatByDifficulty                          VisibleDurationBeforeCharge;                              // 0x008C(0x0034) (Edit)
	unsigned long                                      bOverride_VisibleMeterCooldownRate : 1;                   // 0x00C0(0x0004)
	float                                              VisibleMeterCooldownRate;                                 // 0x00C4(0x0004) (Edit)
	unsigned long                                      bOverride_ChargeMinimumDuration : 1;                      // 0x00C8(0x0004)
	float                                              ChargeMinimumDuration;                                    // 0x00CC(0x0004) (Edit)
	unsigned long                                      bOverride_bEnableMagnetLook : 1;                          // 0x00D0(0x0004)
	unsigned long                                      bEnableMagnetLook : 1;                                    // 0x00D0(0x0004) (Edit)
	unsigned long                                      bOverride_MagnetLookInnerDist : 1;                        // 0x00D0(0x0004)
	float                                              MagnetLookInnerDist;                                      // 0x00D4(0x0004) (Edit)
	unsigned long                                      bOverride_MagnetLookOuterDist : 1;                        // 0x00D8(0x0004)
	float                                              MagnetLookOuterDist;                                      // 0x00DC(0x0004) (Edit)
	unsigned long                                      bOverride_MagnetLookInnerMaxRate : 1;                     // 0x00E0(0x0004)
	float                                              MagnetLookInnerMaxRate;                                   // 0x00E4(0x0004) (Edit)
	unsigned long                                      bOverride_MagnetLookOuterMaxRate : 1;                     // 0x00E8(0x0004)
	float                                              MagnetLookOuterMaxRate;                                   // 0x00EC(0x0004) (Edit)
	unsigned long                                      bOverride_MagnetLookSmoothingRange : 1;                   // 0x00F0(0x0004)
	float                                              MagnetLookSmoothingRange;                                 // 0x00F4(0x0004) (Edit)
	unsigned long                                      bOverride_bMagnetLookRequiresLineCheck : 1;               // 0x00F8(0x0004)
	unsigned long                                      bMagnetLookRequiresLineCheck : 1;                         // 0x00F8(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.CrawlingSyphiliticsParameters
// 0x007C
struct FCrawlingSyphiliticsParameters
{
	unsigned long                                      bOverride_AttackRangeFacing : 1;                          // 0x0000(0x0004)
	float                                              AttackRangeFacing;                                        // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_AttackRangeBack : 1;                            // 0x0008(0x0004)
	float                                              AttackRangeBack;                                          // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_FollowDistanceSeen : 1;                         // 0x0010(0x0004)
	float                                              FollowDistanceSeen;                                       // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_FollowDistanceUnseen : 1;                       // 0x0018(0x0004)
	float                                              FollowDistanceUnseen;                                     // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_CrawlSpeedUnseen : 1;                           // 0x0020(0x0004)
	float                                              CrawlSpeedUnseen;                                         // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_CrawlSpeedRunningPlayer : 1;                    // 0x0028(0x0004)
	float                                              CrawlSpeedRunningPlayer;                                  // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_MinDistanceForStop : 1;                         // 0x0030(0x0004)
	float                                              MinDistanceForStop;                                       // 0x0034(0x0004) (Edit)
	unsigned long                                      bOverride_MaxPlayerDistanceForBackOff : 1;                // 0x0038(0x0004)
	float                                              MaxPlayerDistanceForBackOff;                              // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxBackOffDistance : 1;                         // 0x0040(0x0004)
	float                                              MaxBackOffDistance;                                       // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_VisibleWaitTimeBeforeChase : 1;                 // 0x0048(0x0004)
	float                                              VisibleWaitTimeBeforeChase;                               // 0x004C(0x0004) (Edit)
	unsigned long                                      bOverride_ClosingInDuration : 1;                          // 0x0050(0x0004)
	float                                              ClosingInDuration;                                        // 0x0054(0x0004) (Edit)
	unsigned long                                      bOverride_MinClosingInDistRatio : 1;                      // 0x0058(0x0004)
	float                                              MinClosingInDistRatio;                                    // 0x005C(0x0004) (Edit)
	unsigned long                                      bOverride_ChaseTime : 1;                                  // 0x0060(0x0004)
	float                                              ChaseTime;                                                // 0x0064(0x0004) (Edit)
	unsigned long                                      bOverride_MinNumProximityCrawlersForAttack : 1;           // 0x0068(0x0004)
	int                                                MinNumProximityCrawlersForAttack;                         // 0x006C(0x0004) (Edit)
	unsigned long                                      bOverride_PlayerProximityRange : 1;                       // 0x0070(0x0004)
	float                                              PlayerProximityRange;                                     // 0x0074(0x0004) (Edit)
	unsigned long                                      bOverride_bForceAlertStance : 1;                          // 0x0078(0x0004)
	unsigned long                                      bForceAlertStance : 1;                                    // 0x0078(0x0004) (Edit)
	unsigned long                                      bOverride_bForceCrawlStance : 1;                          // 0x0078(0x0004)
	unsigned long                                      bForceCrawlStance : 1;                                    // 0x0078(0x0004) (Edit)
	unsigned long                                      bOverride_bDeathGripRunningPlayer : 1;                    // 0x0078(0x0004)
	unsigned long                                      bDeathGripRunningPlayer : 1;                              // 0x0078(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.RepulsionParameters
// 0x0050
struct FRepulsionParameters
{
	unsigned long                                      bOverride_bDisableRepulsion : 1;                          // 0x0000(0x0004)
	unsigned long                                      bDisableRepulsion : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bDisableSynchronizedAvoidance : 1;              // 0x0000(0x0004)
	unsigned long                                      bDisableSynchronizedAvoidance : 1;                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_MagneticRepulsionDistance : 1;                  // 0x0000(0x0004)
	float                                              MagneticRepulsionDistance;                                // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_LinearRepulsionDistance : 1;                    // 0x0008(0x0004)
	float                                              LinearRepulsionDistance;                                  // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_RepulsionForce : 1;                             // 0x0010(0x0004)
	float                                              RepulsionForce;                                           // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_MinRelativeVelocity : 1;                        // 0x0018(0x0004)
	float                                              MinRelativeVelocity;                                      // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxRelativeVelocity : 1;                        // 0x0020(0x0004)
	float                                              MaxRelativeVelocity;                                      // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_RelativeVelocityRepulsionScale : 1;             // 0x0028(0x0004)
	float                                              RelativeVelocityRepulsionScale;                           // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxRelVelForMovingRepulsion : 1;                // 0x0030(0x0004)
	float                                              MaxRelVelForMovingRepulsion;                              // 0x0034(0x0004) (Edit)
	unsigned long                                      bOverride_MinVelForMovingRepulsion : 1;                   // 0x0038(0x0004)
	float                                              MinVelForMovingRepulsion;                                 // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverride_MovingRepulsionMaxSlowdown : 1;                 // 0x0040(0x0004)
	float                                              MovingRepulsionMaxSlowdown;                               // 0x0044(0x0004) (Edit)
	unsigned long                                      bOverride_MaxMovingRepulsionDist : 1;                     // 0x0048(0x0004)
	float                                              MaxMovingRepulsionDist;                                   // 0x004C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.ArrowParameters
// 0x0080
struct FArrowParameters
{
	unsigned long                                      bOverride_bEnableForNormalAttack : 1;                     // 0x0000(0x0004)
	unsigned long                                      bEnableForNormalAttack : 1;                               // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysAiming : 1;                              // 0x0000(0x0004)
	unsigned long                                      bAlwaysAiming : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bShootWheneverPossible : 1;                     // 0x0000(0x0004)
	unsigned long                                      bShootWheneverPossible : 1;                               // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_Speed : 1;                                      // 0x0000(0x0004)
	float                                              Speed;                                                    // 0x0004(0x0004) (Edit)
	unsigned long                                      bOverride_MinAttackDistance : 1;                          // 0x0008(0x0004)
	float                                              MinAttackDistance;                                        // 0x000C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxAttackDistance : 1;                          // 0x0010(0x0004)
	float                                              MaxAttackDistance;                                        // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverride_MinRepeatDelay : 1;                             // 0x0018(0x0004)
	float                                              MinRepeatDelay;                                           // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride_bFollowTarget : 1;                              // 0x0020(0x0004)
	unsigned long                                      bFollowTarget : 1;                                        // 0x0020(0x0004) (Edit)
	unsigned long                                      bOverride_MinDistForFollowTarget : 1;                     // 0x0020(0x0004)
	float                                              MinDistForFollowTarget;                                   // 0x0024(0x0004) (Edit)
	unsigned long                                      bOverride_bFollowTargetOnlyWithLoS : 1;                   // 0x0028(0x0004)
	unsigned long                                      bFollowTargetOnlyWithLoS : 1;                             // 0x0028(0x0004) (Edit)
	unsigned long                                      bOverride_VelocityPredictionFactor : 1;                   // 0x0028(0x0004)
	float                                              VelocityPredictionFactor;                                 // 0x002C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxInaccuracy : 1;                              // 0x0030(0x0004)
	float                                              MaxInaccuracy;                                            // 0x0034(0x0004) (Edit)
	unsigned long                                      bOverride_HitDamage : 1;                                  // 0x0038(0x0004)
	struct FFloatByDifficulty                          HitDamage;                                                // 0x003C(0x0034) (Edit)
	unsigned long                                      bOverride_bArrowsOnFire : 1;                              // 0x0070(0x0004)
	unsigned long                                      bArrowsOnFire : 1;                                        // 0x0070(0x0004) (Edit)
	unsigned long                                      bOverride_FireStopDuration : 1;                           // 0x0070(0x0004)
	float                                              FireStopDuration;                                         // 0x0074(0x0004) (Edit)
	unsigned long                                      bOverride_bNoPlayerHit : 1;                               // 0x0078(0x0004)
	unsigned long                                      bNoPlayerHit : 1;                                         // 0x0078(0x0004) (Edit)
	unsigned long                                      bOverride_MinDistToTargetToDisableCollisions : 1;         // 0x0078(0x0004)
	float                                              MinDistToTargetToDisableCollisions;                       // 0x007C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.LookAtParameters
// 0x00C0
struct FLookAtParameters
{
	unsigned long                                      bOverride_EyesOnlyLookAtNoisePreset : 1;                  // 0x0000(0x0004)
	TEnumAsByte<ELookAtNoisePreset>                    EyesOnlyLookAtNoisePreset;                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bOverride_EyesOnlyLookAtCustomNoise : 1;                  // 0x0008(0x0004)
	struct FLookAtNoiseConfig                          EyesOnlyLookAtCustomNoise;                                // 0x000C(0x0014) (Edit)
	unsigned long                                      bOverride_EyesOnlyIdleNoisePreset : 1;                    // 0x0020(0x0004)
	TEnumAsByte<ELookAtNoisePreset>                    EyesOnlyIdleNoisePreset;                                  // 0x0024(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	unsigned long                                      bOverride_EyesOnlyIdleCustomNoise : 1;                    // 0x0028(0x0004)
	struct FLookAtNoiseConfig                          EyesOnlyIdleCustomNoise;                                  // 0x002C(0x0014) (Edit)
	unsigned long                                      bOverride_FlashlightLookAtNoisePreset : 1;                // 0x0040(0x0004)
	TEnumAsByte<ELookAtNoisePreset>                    FlashlightLookAtNoisePreset;                              // 0x0044(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	unsigned long                                      bOverride_FlashlightLookAtCustomNoise : 1;                // 0x0048(0x0004)
	struct FLookAtNoiseConfig                          FlashlightLookAtCustomNoise;                              // 0x004C(0x0014) (Edit)
	unsigned long                                      bOverride_FlashlightIdleNoisePreset : 1;                  // 0x0060(0x0004)
	TEnumAsByte<ELookAtNoisePreset>                    FlashlightIdleNoisePreset;                                // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	unsigned long                                      bOverride_FlashlightIdleCustomNoise : 1;                  // 0x0068(0x0004)
	struct FLookAtNoiseConfig                          FlashlightIdleCustomNoise;                                // 0x006C(0x0014) (Edit)
	unsigned long                                      bOverride_EyesOnlyMinYaw : 1;                             // 0x0080(0x0004)
	float                                              EyesOnlyMinYaw;                                           // 0x0084(0x0004) (Edit)
	unsigned long                                      bOverride_EyesOnlyMaxYaw : 1;                             // 0x0088(0x0004)
	float                                              EyesOnlyMaxYaw;                                           // 0x008C(0x0004) (Edit)
	unsigned long                                      bOverride_EyesOnlyMinPitch : 1;                           // 0x0090(0x0004)
	float                                              EyesOnlyMinPitch;                                         // 0x0094(0x0004) (Edit)
	unsigned long                                      bOverride_EyesOnlyMaxPitch : 1;                           // 0x0098(0x0004)
	float                                              EyesOnlyMaxPitch;                                         // 0x009C(0x0004) (Edit)
	unsigned long                                      bOverride_FlashlightMinYaw : 1;                           // 0x00A0(0x0004)
	float                                              FlashlightMinYaw;                                         // 0x00A4(0x0004) (Edit)
	unsigned long                                      bOverride_FlashlightMaxYaw : 1;                           // 0x00A8(0x0004)
	float                                              FlashlightMaxYaw;                                         // 0x00AC(0x0004) (Edit)
	unsigned long                                      bOverride_FlashlightMinPitch : 1;                         // 0x00B0(0x0004)
	float                                              FlashlightMinPitch;                                       // 0x00B4(0x0004) (Edit)
	unsigned long                                      bOverride_FlashlightMaxPitch : 1;                         // 0x00B8(0x0004)
	float                                              FlashlightMaxPitch;                                       // 0x00BC(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.AIConfigData
// 0x12A4
struct FAIConfigData
{
	unsigned long                                      bOverride_bIgnorePlayer : 1;                              // 0x0000(0x0004)
	unsigned long                                      bIgnorePlayer : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bChasePlayer : 1;                               // 0x0000(0x0004)
	unsigned long                                      bChasePlayer : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bAttackPlayer : 1;                              // 0x0000(0x0004)
	unsigned long                                      bAttackPlayer : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bAlwaysChase : 1;                               // 0x0000(0x0004)
	unsigned long                                      bAlwaysChase : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_bNoReaction : 1;                                // 0x0000(0x0004)
	unsigned long                                      bNoReaction : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_WeaponToUse : 1;                                // 0x0000(0x0004)
	TEnumAsByte<EWeapon>                               WeaponToUse;                                              // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FSpeedConfig                                MovementSpeed;                                            // 0x0008(0x0328) (Edit)
	struct FPerceptionParameters                       Perception;                                               // 0x0330(0x0708) (Edit)
	struct FInvestigationParameters                    Investigation;                                            // 0x0A38(0x0100) (Edit)
	struct FAttackParameters                           Attack;                                                   // 0x0B38(0x01A8) (Edit)
	struct FFaceOffParameters                          FaceOffParams;                                            // 0x0CE0(0x0030) (Edit)
	struct FDeathGripParameters                        DeathGripParams;                                          // 0x0D10(0x00D0) (Edit)
	struct FFlashlightParameters                       FlashlightParams;                                         // 0x0DE0(0x0044) (Edit)
	struct FSpecialParameters                          Special;                                                  // 0x0E24(0x0014) (Edit)
	struct FVOParameters                               VO;                                                       // 0x0E38(0x0038) (Edit)
	struct FPathfindingParameters                      Pathfinding;                                              // 0x0E70(0x0088) (Edit)
	struct FAnimationParameters                        Animation;                                                // 0x0EF8(0x000C) (Edit)
	struct FIndirectWalkParameters                     IndirectWalk;                                             // 0x0F04(0x0030) (Edit)
	struct FInnerDemonParameters                       InnerDemon;                                               // 0x0F34(0x00FC) (Edit)
	struct FCrawlingSyphiliticsParameters              CrawlingSyphilitics;                                      // 0x1030(0x007C) (Edit)
	struct FRepulsionParameters                        Repulsion;                                                // 0x10AC(0x0050) (Edit)
	struct FArrowParameters                            Arrow;                                                    // 0x10FC(0x0080) (Edit)
	struct FLookAtParameters                           LookAt;                                                   // 0x117C(0x00C0) (Edit)
	unsigned long                                      bOverride_bAlwaysLookAtPlayer : 1;                        // 0x123C(0x0004)
	unsigned long                                      bAlwaysLookAtPlayer : 1;                                  // 0x123C(0x0004) (Edit)
	unsigned long                                      bOverride_bMonitorSeenByPlayer : 1;                       // 0x123C(0x0004)
	unsigned long                                      bMonitorSeenByPlayer : 1;                                 // 0x123C(0x0004) (Edit)
	unsigned long                                      bOverride_bDisableKnockbackFromPlayer : 1;                // 0x123C(0x0004)
	unsigned long                                      bDisableKnockbackFromPlayer : 1;                          // 0x123C(0x0004) (Edit)
	unsigned long                                      bOverride_bUseForMusic : 1;                               // 0x123C(0x0004)
	unsigned long                                      bUseForMusic : 1;                                         // 0x123C(0x0004) (Edit)
	unsigned long                                      bOverride_bInterruptVOOnDisturbance : 1;                  // 0x123C(0x0004)
	unsigned long                                      bInterruptVOOnDisturbance : 1;                            // 0x123C(0x0004) (Edit)
	unsigned long                                      bOverride_bForceUseForStressBreath : 1;                   // 0x123C(0x0004)
	unsigned long                                      bForceUseForStressBreath : 1;                             // 0x123C(0x0004) (Edit)
	unsigned long                                      bOverride_bHighQualitySoundObstruction : 1;               // 0x123C(0x0004)
	unsigned long                                      bHighQualitySoundObstruction : 1;                         // 0x123C(0x0004) (Edit)
	unsigned long                                      bOverride_MaxDistanceToPlayerForFirstChase : 1;           // 0x123C(0x0004)
	float                                              MaxDistanceToPlayerForFirstChase;                         // 0x1240(0x0004) (Edit)
	unsigned long                                      bOverride_MaxDistanceForAlarmByOther : 1;                 // 0x1244(0x0004)
	float                                              MaxDistanceForAlarmByOther;                               // 0x1248(0x0004) (Edit)
	unsigned long                                      bOverride_MaxDistanceToAlarmOthers : 1;                   // 0x124C(0x0004)
	float                                              MaxDistanceToAlarmOthers;                                 // 0x1250(0x0004) (Edit)
	unsigned long                                      bOverride_NumOfDoorBashLoopsByDifficulty : 1;             // 0x1254(0x0004)
	struct FIntByDifficulty                            NumOfDoorBashLoopsByDifficulty;                           // 0x1258(0x0034) (Edit)
	unsigned long                                      bOverride_DoorClosingBehavior : 1;                        // 0x128C(0x0004)
	TEnumAsByte<EDoorClosingBehavior>                  DoorClosingBehavior;                                      // 0x1290(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1291(0x0003) MISSED OFFSET
	unsigned long                                      bOverride_ProbabilityCloseDoorBehind : 1;                 // 0x1294(0x0004)
	float                                              ProbabilityCloseDoorBehind;                               // 0x1298(0x0004) (Edit)
	unsigned long                                      bOverride_ProbabilityCloseOpenDoors : 1;                  // 0x129C(0x0004)
	float                                              ProbabilityCloseOpenDoors;                                // 0x12A0(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIConfig.LookAtNoiseConfig
// 0x0014
struct FLookAtNoiseConfig
{
	TEnumAsByte<ELookAtNoiseType>                      NoiseType;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinCycleDuration;                                         // 0x0004(0x0004) (Edit)
	float                                              MaxCycleDuration;                                         // 0x0008(0x0004) (Edit)
	float                                              MinDriftSpeed;                                            // 0x000C(0x0004) (Edit)
	float                                              MaxDriftSpeed;                                            // 0x0010(0x0004) (Edit)
};

// ScriptStruct OLGame.OLEnemyPawn.IKParamsData
// 0x0054
struct FIKParamsData
{
	float                                              IKTargetLeftOffsetLeft;                                   // 0x0000(0x0004) (Edit)
	float                                              IKTargetLeftOffsetFwd;                                    // 0x0004(0x0004) (Edit)
	float                                              IKTargetLeftOffsetRight;                                  // 0x0008(0x0004) (Edit)
	float                                              IKTargetFwdOffsetLeft;                                    // 0x000C(0x0004) (Edit)
	float                                              IKTargetFwdOffsetFwd;                                     // 0x0010(0x0004) (Edit)
	float                                              IKTargetFwdOffsetRight;                                   // 0x0014(0x0004) (Edit)
	float                                              IKTargetDirectionalOffsetLeft;                            // 0x0018(0x0004) (Edit)
	float                                              IKTargetDirectionalOffsetFwd;                             // 0x001C(0x0004) (Edit)
	float                                              IKTargetDirectionalOffsetRight;                           // 0x0020(0x0004) (Edit)
	float                                              IKTargetHeightLeft;                                       // 0x0024(0x0004) (Edit)
	float                                              IKTargetHeightFwd;                                        // 0x0028(0x0004) (Edit)
	float                                              IKTargetHeightRight;                                      // 0x002C(0x0004) (Edit)
	float                                              JointTargetBackOffsetLeft;                                // 0x0030(0x0004) (Edit)
	float                                              JointTargetBackOffsetFwd;                                 // 0x0034(0x0004) (Edit)
	float                                              JointTargetBackOffsetRight;                               // 0x0038(0x0004) (Edit)
	float                                              JointTargetLeftOffsetLeft;                                // 0x003C(0x0004) (Edit)
	float                                              JointTargetLeftOffsetFwd;                                 // 0x0040(0x0004) (Edit)
	float                                              JointTargetLeftOffsetRight;                               // 0x0044(0x0004) (Edit)
	float                                              JointTargetHeightLeft;                                    // 0x0048(0x0004) (Edit)
	float                                              JointTargetHeightFwd;                                     // 0x004C(0x0004) (Edit)
	float                                              JointTargetHeightRight;                                   // 0x0050(0x0004) (Edit)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyHandIKData
// 0x0008
struct FEnemyHandIKData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              IKStrength;                                               // 0x0004(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.ShoulderIKData
// 0x0018
struct FShoulderIKData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              IKStrength;                                               // 0x0004(0x0004)
	float                                              StartedTime;                                              // 0x0008(0x0004)
	float                                              BlendInTime;                                              // 0x000C(0x0004)
	float                                              BlendOutTime;                                             // 0x0010(0x0004)
	float                                              Duration;                                                 // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyCapabilities
// 0x0008
struct FEnemyCapabilities
{
	unsigned long                                      bCanBeDisturbed : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bCanVault : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bCanJump : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bCanBeam : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bCanCrawl : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bCanCrouch : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bCanDeathgrip : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bCanFaceOff : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bCanBeKnockedback : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bCanOpenDoors : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bCanCloseDoors : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bCanBashDoors : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bCanBashWindows : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bCanAnticipateAttack : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bCanUseQuickAttack : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bCanUseBlendedDirectionalAttack : 1;                      // 0x0000(0x0004)
	unsigned long                                      bCanSlamDoors : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bCanGrabFromBarrel : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bCanGrabFromWardrobe : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bCanGrabFromSqueeze : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bCanGrabUnderwater : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bCanGrabFromLocker : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bCanInvestigate : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bCanInvestigateLockers : 1;                               // 0x0000(0x0004)
	unsigned long                                      bCanInvestigateBeds : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bCanInvestigateCrawlSpaces : 1;                           // 0x0000(0x0004)
	unsigned long                                      bCanInvestigateWindows : 1;                               // 0x0000(0x0004)
	unsigned long                                      bCanInvestigateBarrels : 1;                               // 0x0000(0x0004)
	unsigned long                                      bCanInvestigateWardrobes : 1;                             // 0x0000(0x0004)
	unsigned long                                      bCanUseStairAnims : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bCanShootArrows : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bCanPlayStartAndStop : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bCanPlayTurningMove : 1;                                  // 0x0004(0x0004)
	unsigned long                                      bCanPlayBanks : 1;                                        // 0x0004(0x0004)
	unsigned long                                      bCanEyeLookAt : 1;                                        // 0x0004(0x0004)
	unsigned long                                      bCanEyeLookAtProcedural : 1;                              // 0x0004(0x0004)
	unsigned long                                      bCanAttackCrawlingPlayer : 1;                             // 0x0004(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.InvestigationAnimData
// 0x0014
struct FInvestigationAnimData
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008)
	TEnumAsByte<EInvestigationAnimType>                Type;                                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MinRequiredClearance;                                     // 0x000C(0x0004)
	unsigned long                                      bRequiresFlashlight : 1;                                  // 0x0010(0x0004)
	unsigned long                                      bRequiresAlert : 1;                                       // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.DeathGripAnimSet
// 0x0030
struct FDeathGripAnimSet
{
	struct FName                                       Enter;                                                    // 0x0000(0x0008) (Const)
	struct FName                                       Kill;                                                     // 0x0008(0x0008) (Const)
	struct FName                                       Escape;                                                   // 0x0010(0x0008) (Const)
	struct FName                                       Struggle;                                                 // 0x0018(0x0008) (Const)
	struct FName                                       Shake;                                                    // 0x0020(0x0008) (Const)
	struct FName                                       Inactive;                                                 // 0x0028(0x0008) (Const)
};

// ScriptStruct OLGame.OLEnemyPawn.MiscTuningData
// 0x0020
struct FMiscTuningData
{
	float                                              AdjustDurationBD;                                         // 0x0000(0x0004) (Const)
	float                                              EarlyBlendOutBD;                                          // 0x0004(0x0004) (Const)
	float                                              LateBlendOutBD;                                           // 0x0008(0x0004) (Const)
	float                                              ForwardNudgeMinDist;                                      // 0x000C(0x0004) (Const)
	float                                              ForwardNudgeMaxDist;                                      // 0x0010(0x0004) (Const)
	float                                              ForwardNudgeMaxVel;                                       // 0x0014(0x0004) (Const)
	float                                              AttackDirectionalShortDist;                               // 0x0018(0x0004) (Const)
	float                                              AttackDirectionalFarDist;                                 // 0x001C(0x0004) (Const)
};

// ScriptStruct OLGame.OLEnemyPawn.ContextualVOConfig
// 0x0028
struct FContextualVOConfig
{
	class UAkEvent*                                    Line;                                                     // 0x0000(0x0008) (Edit)
	TArray<class UOLBotCondition*>                     Conditions;                                               // 0x0008(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              MinDelayBeforeRepeatOnPawn;                               // 0x0018(0x0004) (Edit)
	float                                              MinDelayBeforeRepeatGlobal;                               // 0x001C(0x0004) (Edit)
	float                                              ProbabilityWeight;                                        // 0x0020(0x0004) (Edit)
	float                                              LastTimePlayed;                                           // 0x0024(0x0004) (Transient)
};

// ScriptStruct OLGame.OLEnemyPawn.VOMapping
// 0x001C
struct FVOMapping
{
	TEnumAsByte<EVOContext>                            VOContext;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FContextualVOConfig>                 VOOptions;                                                // 0x0004(0x0010) (Edit, NeedCtorLink)
	float                                              MinDelayAfterAnySimilarVO;                                // 0x0014(0x0004) (Edit)
	float                                              MinDelayAfterAnyVO;                                       // 0x0018(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAIAnimConfig.LocomotionAnimConfig
// 0x0128
struct FLocomotionAnimConfig
{
	float                                              LocoMinSpeed;                                             // 0x0000(0x0004) (Edit)
	float                                              LocoMedSpeed;                                             // 0x0004(0x0004) (Edit)
	float                                              LocoMaxSpeed;                                             // 0x0008(0x0004) (Edit)
	float                                              LocoRunSpeed;                                             // 0x000C(0x0004) (Edit)
	float                                              BwdMinSpeed;                                              // 0x0010(0x0004) (Edit)
	float                                              BwdMedSpeed;                                              // 0x0014(0x0004) (Edit)
	float                                              BwdMaxSpeed;                                              // 0x0018(0x0004) (Edit)
	float                                              BwdRunSpeed;                                              // 0x001C(0x0004) (Edit)
	float                                              ArmedMinSpeed;                                            // 0x0020(0x0004) (Edit)
	float                                              ArmedMedSpeed;                                            // 0x0024(0x0004) (Edit)
	float                                              ArmedMaxSpeed;                                            // 0x0028(0x0004) (Edit)
	float                                              ArmedRunSpeed;                                            // 0x002C(0x0004) (Edit)
	float                                              ArmedBwdMinSpeed;                                         // 0x0030(0x0004) (Edit)
	float                                              ArmedBwdMedSpeed;                                         // 0x0034(0x0004) (Edit)
	float                                              ArmedBwdMaxSpeed;                                         // 0x0038(0x0004) (Edit)
	float                                              ArmedBwdRunSpeed;                                         // 0x003C(0x0004) (Edit)
	float                                              AlertMinSpeed;                                            // 0x0040(0x0004) (Edit)
	float                                              AlertMedSpeed;                                            // 0x0044(0x0004) (Edit)
	float                                              AlertMaxSpeed;                                            // 0x0048(0x0004) (Edit)
	float                                              AlertRunSpeed;                                            // 0x004C(0x0004) (Edit)
	float                                              AlertBwdMinSpeed;                                         // 0x0050(0x0004) (Edit)
	float                                              AlertBwdMedSpeed;                                         // 0x0054(0x0004) (Edit)
	float                                              AlertBwdMaxSpeed;                                         // 0x0058(0x0004) (Edit)
	float                                              AlertBwdRunSpeed;                                         // 0x005C(0x0004) (Edit)
	float                                              AlertArmedMinSpeed;                                       // 0x0060(0x0004) (Edit)
	float                                              AlertArmedMedSpeed;                                       // 0x0064(0x0004) (Edit)
	float                                              AlertArmedMaxSpeed;                                       // 0x0068(0x0004) (Edit)
	float                                              AlertArmedRunSpeed;                                       // 0x006C(0x0004) (Edit)
	float                                              AlertArmedBwdMinSpeed;                                    // 0x0070(0x0004) (Edit)
	float                                              AlertArmedBwdMedSpeed;                                    // 0x0074(0x0004) (Edit)
	float                                              AlertArmedBwdMaxSpeed;                                    // 0x0078(0x0004) (Edit)
	float                                              AlertArmedBwdRunSpeed;                                    // 0x007C(0x0004) (Edit)
	float                                              StartUnawareSlowSpeed;                                    // 0x0080(0x0004) (Edit)
	float                                              StartUnawareFastSpeed;                                    // 0x0084(0x0004) (Edit)
	float                                              StartAlertSlowSpeed;                                      // 0x0088(0x0004) (Edit)
	float                                              StartAlertFastSpeed;                                      // 0x008C(0x0004) (Edit)
	float                                              StopUnawareSlowSpeed;                                     // 0x0090(0x0004) (Edit)
	float                                              StopUnawareFastSpeed;                                     // 0x0094(0x0004) (Edit)
	float                                              StopAlertSlowSpeed;                                       // 0x0098(0x0004) (Edit)
	float                                              StopAlertFastSpeed;                                       // 0x009C(0x0004) (Edit)
	float                                              StartSpeedThreshold;                                      // 0x00A0(0x0004) (Edit)
	float                                              StopSpeedThreshold;                                       // 0x00A4(0x0004) (Edit)
	float                                              ImmediateStopSpeedThreshold;                              // 0x00A8(0x0004) (Edit)
	float                                              TurnMinMovingContribUnder90;                              // 0x00AC(0x0004) (Edit)
	float                                              TurnMinMovingContribOver90;                               // 0x00B0(0x0004) (Edit)
	float                                              TurnBlendTimePct;                                         // 0x00B4(0x0004) (Edit)
	float                                              DistForStopUnawareSlowFwd;                                // 0x00B8(0x0004) (Edit)
	float                                              DistForStopAlertSlowFwd;                                  // 0x00BC(0x0004) (Edit)
	float                                              DistForStopUnawareSlow90L;                                // 0x00C0(0x0004) (Edit)
	float                                              DistForStopAlertSlow90L;                                  // 0x00C4(0x0004) (Edit)
	float                                              DistForStopUnawareSlow90R;                                // 0x00C8(0x0004) (Edit)
	float                                              DistForStopAlertSlow90R;                                  // 0x00CC(0x0004) (Edit)
	float                                              DistForStopUnawareSlow180L;                               // 0x00D0(0x0004) (Edit)
	float                                              DistForStopAlertSlow180L;                                 // 0x00D4(0x0004) (Edit)
	float                                              DistForStopUnawareSlow180R;                               // 0x00D8(0x0004) (Edit)
	float                                              DistForStopAlertSlow180R;                                 // 0x00DC(0x0004) (Edit)
	float                                              DistForStopUnawareFastFwd;                                // 0x00E0(0x0004) (Edit)
	float                                              DistForStopAlertFastFwd;                                  // 0x00E4(0x0004) (Edit)
	float                                              DistForStopUnawareFast90L;                                // 0x00E8(0x0004) (Edit)
	float                                              DistForStopAlertFast90L;                                  // 0x00EC(0x0004) (Edit)
	float                                              DistForStopUnawareFast90R;                                // 0x00F0(0x0004) (Edit)
	float                                              DistForStopAlertFast90R;                                  // 0x00F4(0x0004) (Edit)
	float                                              DistForStopUnawareFast180L;                               // 0x00F8(0x0004) (Edit)
	float                                              DistForStopAlertFast180L;                                 // 0x00FC(0x0004) (Edit)
	float                                              DistForStopUnawareFast180R;                               // 0x0100(0x0004) (Edit)
	float                                              DistForStopAlertFast180R;                                 // 0x0104(0x0004) (Edit)
	float                                              StairsEntryDistBottomL;                                   // 0x0108(0x0004) (Edit)
	float                                              StairsEntryDistBottomR;                                   // 0x010C(0x0004) (Edit)
	float                                              StairsEntryDistBottomRunL;                                // 0x0110(0x0004) (Edit)
	float                                              StairsEntryDistBottomRunR;                                // 0x0114(0x0004) (Edit)
	float                                              StairsEntryDistTopL;                                      // 0x0118(0x0004) (Edit)
	float                                              StairsEntryDistTopR;                                      // 0x011C(0x0004) (Edit)
	float                                              StairsEntryDistTopRunL;                                   // 0x0120(0x0004) (Edit)
	float                                              StairsEntryDistTopRunR;                                   // 0x0124(0x0004) (Edit)
};

// ScriptStruct OLGame.OLBot.MovementData
// 0x0035
struct FMovementData
{
	class AActor*                                      DestinationActor;                                         // 0x0000(0x0008)
	struct FVector                                     DestinationPoint;                                         // 0x0008(0x000C)
	struct FVector                                     ValidatedMovePoint;                                       // 0x0014(0x000C)
	float                                              DestinationBuffer;                                        // 0x0020(0x0004)
	unsigned long                                      bIsInvestigation : 1;                                     // 0x0024(0x0004)
	unsigned long                                      bFocusOnActor : 1;                                        // 0x0024(0x0004)
	unsigned long                                      bWillStopAtDestination : 1;                               // 0x0024(0x0004)
	unsigned long                                      bTurnOnStop : 1;                                          // 0x0024(0x0004)
	unsigned long                                      bReachOnZeroAnimPhase : 1;                                // 0x0024(0x0004)
	unsigned long                                      bEarlyReachOnEnterZone : 1;                               // 0x0024(0x0004)
	unsigned long                                      bEarlyBlendOutOfStop : 1;                                 // 0x0024(0x0004)
	unsigned long                                      bPreciseDestination : 1;                                  // 0x0024(0x0004)
	unsigned long                                      bAllowIndirectWalk : 1;                                   // 0x0024(0x0004)
	float                                              TargetEndSpeed;                                           // 0x0028(0x0004)
	float                                              DestinationYaw;                                           // 0x002C(0x0004)
	int                                                NumUnstucks;                                              // 0x0030(0x0004)
	TEnumAsByte<EMoveType>                             Type;                                                     // 0x0034(0x0001)
};

// ScriptStruct OLGame.OLBot.AIEnvironment
// 0x001C
struct FAIEnvironment
{
	unsigned long                                      bInDarkness : 1;                                          // 0x0000(0x0004)
	class AOLStairsMarker*                             StairsMarker;                                             // 0x0004(0x0008)
	float                                              LastVisibleByPlayerUpdateTime;                            // 0x000C(0x0004)
	unsigned long                                      bVisibleByPlayer : 1;                                     // 0x0010(0x0004)
	unsigned long                                      bMonitorSeenByPlayer : 1;                                 // 0x0010(0x0004)
	class AOLBushesVolume*                             BushesVolume;                                             // 0x0014(0x0008)
};

// ScriptStruct OLGame.OLBot.FaceOffData
// 0x000C
struct FFaceOffData
{
	float                                              ActivateTime;                                             // 0x0000(0x0004)
	float                                              DeactivateTime;                                           // 0x0004(0x0004)
	unsigned long                                      bAttackOnRight : 1;                                       // 0x0008(0x0004)
	unsigned long                                      bSteppedRight : 1;                                        // 0x0008(0x0004)
	unsigned long                                      bSteppedLeft : 1;                                         // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLBot.ChaseData
// 0x0040
struct FChaseData
{
	TEnumAsByte<EChaseMoveDestination>                 MoveDest;                                                 // 0x0000(0x0001)
	TEnumAsByte<EAttackStrategyType>                   AttackStrategy;                                           // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              OutsideLeashStartTime;                                    // 0x0004(0x0004)
	class AOLSqueezeMarker*                            TargetSqueeze;                                            // 0x0008(0x0008)
	float                                              TimeLeftUntilNextRandomVO;                                // 0x0010(0x0004)
	unsigned long                                      bPlayerUnreacheable : 1;                                  // 0x0014(0x0004)
	unsigned long                                      bPlayerNotOnNavmesh : 1;                                  // 0x0014(0x0004)
	struct FVector                                     PlayerUnreacheableLastLocation;                           // 0x0018(0x000C)
	float                                              PlayerUnreacheableLastTime;                               // 0x0024(0x0004)
	int                                                PlayerUnreacheableLoops;                                  // 0x0028(0x0004)
	float                                              EnteredIdleStateTime;                                     // 0x002C(0x0004)
	unsigned long                                      bOtherDestUnreacheable : 1;                               // 0x0030(0x0004)
	unsigned long                                      bOtherDestNotOnNavmesh : 1;                               // 0x0030(0x0004)
	float                                              OtherDestUnreacheableLastTime;                            // 0x0034(0x0004)
	float                                              OtherDestUnreacheableNextCheck;                           // 0x0038(0x0004)
	unsigned long                                      bToCrawlForCrouchedPlayer : 1;                            // 0x003C(0x0004)
	unsigned long                                      bToCrawlForFreeCrawlingPlayer : 1;                        // 0x003C(0x0004)
};

// ScriptStruct OLGame.OLBot.PatrolData
// 0x0038
struct FPatrolData
{
	unsigned long                                      bAtWaypoint : 1;                                          // 0x0000(0x0004)
	int                                                WaypointActionIdx;                                        // 0x0004(0x0004)
	struct FName                                       WaypointAnimName;                                         // 0x0008(0x0008)
	unsigned long                                      bPlayingWaypointAnim : 1;                                 // 0x0010(0x0004)
	unsigned long                                      bLoopingWaypointAnim : 1;                                 // 0x0010(0x0004)
	float                                              WaypointWaitEndTime;                                      // 0x0014(0x0004)
	unsigned long                                      bInFormation : 1;                                         // 0x0018(0x0004)
	unsigned long                                      bWaitingForUnspawnConditions : 1;                         // 0x0018(0x0004)
	unsigned long                                      bWaitForMoveAbilityCancellation : 1;                      // 0x0018(0x0004)
	struct FVector                                     DynamicTargetLastLocation;                                // 0x001C(0x000C)
	float                                              DynamicTargetLastUpdateTime;                              // 0x0028(0x0004)
	float                                              TargetSlowDown;                                           // 0x002C(0x0004)
	float                                              SlowDownFactor;                                           // 0x0030(0x0004)
	float                                              TimeLeftUntilNextRandomVO;                                // 0x0034(0x0004)
};

// ScriptStruct OLGame.OLBot.InvestigationPoint
// 0x00B4
struct FInvestigationPoint
{
	TEnumAsByte<EOLInvestigationPointType>             Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     SimpleLocation;                                           // 0x0004(0x000C)
	class AOLAIInvestigationPoint*                     InvPoint;                                                 // 0x0010(0x0008)
	class AOLHidingSpot*                               Locker;                                                   // 0x0018(0x0008)
	class AOLBed*                                      Bed;                                                      // 0x0020(0x0008)
	class AOLWindow*                                   Window;                                                   // 0x0028(0x0008)
	class AOLDoor*                                     door;                                                     // 0x0030(0x0008)
	class AOLCrawlMarker*                              CrawlMarker;                                              // 0x0038(0x0008)
	class AOLHidingBarrel*                             Barrel;                                                   // 0x0040(0x0008)
	class AOLWardrobe*                                 Wardrobe;                                                 // 0x0048(0x0008)
	float                                              WeightOverride;                                           // 0x0050(0x0004)
	unsigned long                                      bHasPathObstacles : 1;                                    // 0x0054(0x0004)
	struct FVector                                     CachedLocation;                                           // 0x0058(0x000C)
	struct FVector                                     CachedDirection;                                          // 0x0064(0x000C)
	unsigned long                                      bCacheValid : 1;                                          // 0x0070(0x0004)
	class AOLAIInvestigationVolume*                    InvVolume;                                                // 0x0074(0x0008)
	unsigned long                                      bRelevant : 1;                                            // 0x007C(0x0004)
	TEnumAsByte<EInvestigationPointIrrelevanceReason>  IrrelevanceReason;                                        // 0x0080(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              SearchDistancePoints;                                     // 0x0084(0x0004)
	float                                              SeparationFromOthersPoints;                               // 0x0088(0x0004)
	float                                              TowardsPlayerPoints;                                      // 0x008C(0x0004)
	float                                              NearPlayerPoints;                                         // 0x0090(0x0004)
	float                                              TowardsLastPlayerDirPoints;                               // 0x0094(0x0004)
	float                                              IdealDistancePoints;                                      // 0x0098(0x0004)
	float                                              HorizontalityPoints;                                      // 0x009C(0x0004)
	float                                              SameVolumePoints;                                         // 0x00A0(0x0004)
	float                                              RandomPoints;                                             // 0x00A4(0x0004)
	float                                              CleanPathPoints;                                          // 0x00A8(0x0004)
	float                                              CurrentPointWeight;                                       // 0x00AC(0x0004)
	float                                              UnweightedScore;                                          // 0x00B0(0x0004)
};

// ScriptStruct OLGame.OLBot.InvestigationData
// 0x0130
struct FInvestigationData
{
	unsigned long                                      bValid : 1;                                               // 0x0000(0x0004)
	class UOLSeqAct_AIInvestigatePoint*                InvestigationSeqAct;                                      // 0x0004(0x0008)
	unsigned long                                      bAwareOfPlayer : 1;                                       // 0x000C(0x0004)
	unsigned long                                      bIsIdleFallback : 1;                                      // 0x000C(0x0004)
	float                                              StartedTime;                                              // 0x0010(0x0004)
	struct FVector                                     InvestigationOrigin;                                      // 0x0014(0x000C)
	int                                                NbPointsToCheck;                                          // 0x0020(0x0004)
	unsigned long                                      bAtInvestigationPoint : 1;                                // 0x0024(0x0004)
	struct FName                                       AnimName;                                                 // 0x0028(0x0008)
	unsigned long                                      bPlayingAnim : 1;                                         // 0x0030(0x0004)
	unsigned long                                      bLoopingAnim : 1;                                         // 0x0030(0x0004)
	float                                              InvestigationWaitEndTime;                                 // 0x0034(0x0004)
	int                                                NbPointsChecked;                                          // 0x0038(0x0004)
	unsigned long                                      bInvestigatingObject : 1;                                 // 0x003C(0x0004)
	struct FVector                                     InvestigateStartLocation;                                 // 0x0040(0x000C)
	struct FVector                                     InvestigateStartRotation;                                 // 0x004C(0x000C)
	struct FInvestigationPoint                         CurrentInvestigationPoint;                                // 0x0058(0x00B4)
	TArray<struct FInvestigationPoint>                 InvestigationPoints;                                      // 0x010C(0x0010) (NeedCtorLink)
	float                                              TimeLeftUntilNextRandomVO;                                // 0x011C(0x0004)
	unsigned long                                      bInvestigatingDisturbance : 1;                            // 0x0120(0x0004)
	float                                              LastPointSelectionTime;                                   // 0x0124(0x0004)
	class AOLAIInvestigationVolume*                    CurrentInvestigationVolume;                               // 0x0128(0x0008)
};

// ScriptStruct OLGame.OLBot.DeathGripData
// 0x0030
struct FDeathGripData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bQuickTime : 1;                                           // 0x0000(0x0004)
	TEnumAsByte<EDeathGripVariantType>                 VariantType;                                              // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              StruggleStartedTime;                                      // 0x0008(0x0004)
	TEnumAsByte<EDeathGripPhase>                       CurrentPhase;                                             // 0x000C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              CurrentKillRatio;                                         // 0x0010(0x0004)
	float                                              AvgPlayerInput;                                           // 0x0014(0x0004)
	float                                              PlayerEscapeProgress;                                     // 0x0018(0x0004)
	class UOLSeqAct_AIGuard*                           GuardSeqAct;                                              // 0x001C(0x0008)
	class AActor*                                      GuardStageMark;                                           // 0x0024(0x0008)
	unsigned long                                      bStartedNearSpawnPos : 1;                                 // 0x002C(0x0004)
};

// ScriptStruct OLGame.OLBot.ScriptedBehaviorData
// 0x0058
struct FScriptedBehaviorData
{
	TEnumAsByte<EScriptedBehaviorState>                ScriptedState;                                            // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bDisableCollision : 1;                                    // 0x0004(0x0004)
	unsigned long                                      bDisablePhysics : 1;                                      // 0x0004(0x0004)
	unsigned long                                      bDisableRootMotion : 1;                                   // 0x0004(0x0004)
	float                                              MoveSpeedOverride;                                        // 0x0008(0x0004)
	unsigned long                                      AmbiantLookingActive : 1;                                 // 0x000C(0x0004)
	unsigned long                                      AmbiantLookingOffside : 1;                                // 0x000C(0x0004)
	unsigned long                                      AmbiantLookingExited : 1;                                 // 0x000C(0x0004)
	unsigned long                                      AmbiantLookingForcedActive : 1;                           // 0x000C(0x0004)
	float                                              AmbiantLookingSmoothedTargetAngle;                        // 0x0010(0x0004)
	unsigned long                                      AmbiantAntiLookActive : 1;                                // 0x0014(0x0004)
	unsigned long                                      AmbiantAntiLookWasActivated : 1;                          // 0x0014(0x0004)
	unsigned long                                      AmbiantAntiLookForcedActive : 1;                          // 0x0014(0x0004)
	unsigned long                                      AmbiantAntiLookLeftSide : 1;                              // 0x0014(0x0004)
	TEnumAsByte<EWaitAndReactState>                    WaitAndReactState;                                        // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              WaitAndReactLastReactionTime;                             // 0x001C(0x0004)
	int                                                WaitAndReactBackToUnawareCount;                           // 0x0020(0x0004)
	struct FVector                                     WaitAndReactDisturbanceLocation;                          // 0x0024(0x000C)
	TEnumAsByte<EGuardState>                           GuardState;                                               // 0x0030(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     GuardOriginalPos;                                         // 0x0034(0x000C)
	struct FRotator                                    GuardOriginalRot;                                         // 0x0040(0x000C)
	float                                              GuardSmoothedTargetAngle;                                 // 0x004C(0x0004)
	class AActor*                                      ArrowTarget;                                              // 0x0050(0x0008)
};

// ScriptStruct OLGame.OLBot.CrawlerData
// 0x0048
struct FCrawlerData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	TEnumAsByte<ECrawlerState>                         State;                                                    // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bFollowingUnseen : 1;                                     // 0x0008(0x0004)
	struct FVector                                     BackOffStartPos;                                          // 0x000C(0x000C)
	struct FVector                                     LastPlayerPos;                                            // 0x0018(0x000C)
	float                                              GradualChaseStartedTime;                                  // 0x0024(0x0004)
	float                                              VisibleWaitStartedTime;                                   // 0x0028(0x0004)
	float                                              WaitStartedTime;                                          // 0x002C(0x0004)
	float                                              ClosingInStartedTime;                                     // 0x0030(0x0004)
	float                                              BackOffStartedTime;                                       // 0x0034(0x0004)
	unsigned long                                      bBackOffNoClearance : 1;                                  // 0x0038(0x0004)
	float                                              ChaseStartedTime;                                         // 0x003C(0x0004)
	float                                              LastVisibilityTime;                                       // 0x0040(0x0004)
	unsigned long                                      bLastVisibilityResult : 1;                                // 0x0044(0x0004)
};

// ScriptStruct OLGame.OLBot.InnerDemonData
// 0x000C
struct FInnerDemonData
{
	unsigned long                                      bCharging : 1;                                            // 0x0000(0x0004)
	float                                              PlayerLookMeter;                                          // 0x0004(0x0004)
	float                                              ChargeStartedTime;                                        // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLBot.ScriptedConfigData
// 0x0058
struct FScriptedConfigData
{
	unsigned long                                      bScriptedActionPendingResume : 1;                         // 0x0000(0x0004)
	class UOLSeqAct_AIPlayAnim*                        ScriptedAnimSeqAct;                                       // 0x0004(0x0008)
	class UOLSeqAct_AIAmbiantLooking*                  AmbiantLookingSeqAct;                                     // 0x000C(0x0008)
	class UOLSeqAct_AIAmbiantAntiLook*                 AmbiantAntiLookSeqAct;                                    // 0x0014(0x0008)
	class UOLSeqAct_WaitAndReact*                      WaitAndReactSeqAct;                                       // 0x001C(0x0008)
	class USequenceAction*                             CommandSeqAct;                                            // 0x0024(0x0008)
	class UOLSeqAct_AIPlayerContact*                   PlayerContactSeqAct;                                      // 0x002C(0x0008)
	class UOLSeqAct_AIGuard*                           GuardSeqAct;                                              // 0x0034(0x0008)
	class UOLSeqAct_Arrow*                             ArrowSeqAct;                                              // 0x003C(0x0008)
	unsigned long                                      bForcedChasedActive : 1;                                  // 0x0044(0x0004)
	float                                              ForcedChaseEndTime;                                       // 0x0048(0x0004)
	unsigned long                                      ForcedChaseSkipReaction : 1;                              // 0x004C(0x0004)
	unsigned long                                      bCanLoseSightAfterChasing : 1;                            // 0x004C(0x0004)
	class AActor*                                      StageMark;                                                // 0x0050(0x0008)
};

// ScriptStruct OLGame.OLBot.PatrolConfigData
// 0x0084
struct FPatrolConfigData
{
	TEnumAsByte<EPatrolType>                           Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SpeedOverride;                                            // 0x0004(0x0004)
	unsigned long                                      bGroupMove : 1;                                           // 0x0008(0x0004)
	unsigned long                                      bForced : 1;                                              // 0x0008(0x0004)
	class ARoute*                                      PatrolRoute;                                              // 0x000C(0x0008)
	int                                                PatrolRouteIndex;                                         // 0x0014(0x0004)
	unsigned long                                      bReversePatrolRoute : 1;                                  // 0x0018(0x0004)
	unsigned long                                      bRouteCompleted : 1;                                      // 0x0018(0x0004)
	class UOLSeqAct_AIStartPatrol*                     StartPatrolSeqAct;                                        // 0x001C(0x0008)
	class AOLWaypoint*                                 DestinationWaypoint;                                      // 0x0024(0x0008)
	struct FVector                                     DestinationPoint;                                         // 0x002C(0x000C)
	unsigned long                                      bTurnToRotation : 1;                                      // 0x0038(0x0004)
	unsigned long                                      bPreciseDestination : 1;                                  // 0x0038(0x0004)
	float                                              DestinationHeading;                                       // 0x003C(0x0004)
	float                                              DestinationBuffer;                                        // 0x0040(0x0004)
	class UOLSeqAct_AIGotoPoint*                       GotoPointSeqAct;                                          // 0x0044(0x0008)
	class AActor*                                      MovingTarget;                                             // 0x004C(0x0008)
	float                                              FollowDistance;                                           // 0x0054(0x0004)
	float                                              FollowBufferZone;                                         // 0x0058(0x0004)
	class UOLSeqAct_AIFollowActor*                     FollowActorSeqAct;                                        // 0x005C(0x0008)
	class UOLSeqAct_AIGroupMove*                       GroupMoveSeqAct;                                          // 0x0064(0x0008)
	class AOLAmbushMarker*                             SelectedAmbushMarker;                                     // 0x006C(0x0008)
	class UOLSeqAct_AIUnspawnAtLocation*               UnspawnAtLocSeqAct;                                       // 0x0074(0x0008)
	class AActor*                                      SelectedUnspawnMarker;                                    // 0x007C(0x0008)
};

// ScriptStruct OLGame.OLBot.InvestigationConfigData
// 0x000C
struct FInvestigationConfigData
{
	class UOLSeqAct_AIInvestigatePoint*                PendingInvestigationSeqAct;                               // 0x0000(0x0008)
	float                                              MinResumeInvestigationTime;                               // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLBot.AttackStrategyData
// 0x0020
struct FAttackStrategyData
{
	TEnumAsByte<EAttackStrategyType>                   Strategy;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     DestPoint;                                                // 0x0004(0x000C)
	struct FVector                                     DestOffsetFromPlayer;                                     // 0x0010(0x000C)
	float                                              SpeedRatio;                                               // 0x001C(0x0004)
};

// ScriptStruct OLGame.OLBot.BotPairedWalkData
// 0x0014
struct FBotPairedWalkData
{
	class UOLSeqAct_AIGotoPoint*                       GotoPointSeqAct;                                          // 0x0000(0x0008)
	class UOLSeqAct_AIStartPatrol*                     PatrolSeqAct;                                             // 0x0008(0x0008)
	int                                                PatrolRouteIndex;                                         // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLBot.MemoryData
// 0x00B8
struct FMemoryData
{
	struct FVector                                     SpawnLocation;                                            // 0x0000(0x000C)
	float                                              LastPlayerSightTime;                                      // 0x000C(0x0004)
	float                                              LastPlayerClearlyVisibleTime;                             // 0x0010(0x0004)
	struct FVector                                     LastPlayerSightPos;                                       // 0x0014(0x000C)
	struct FVector                                     LastPlayerSeenVelocity;                                   // 0x0020(0x000C)
	float                                              LastKnownPosUpdateTime;                                   // 0x002C(0x0004)
	struct FVector                                     LastKnownPos;                                             // 0x0030(0x000C)
	float                                              LastAlertTime;                                            // 0x003C(0x0004)
	struct FVector                                     LastAlertLocation;                                        // 0x0040(0x000C)
	float                                              LastAttackActiveTime;                                     // 0x004C(0x0004)
	float                                              LastDealtDamageTime;                                      // 0x0050(0x0004)
	float                                              LastChaseActiveTime;                                      // 0x0054(0x0004)
	float                                              LastDeathGripActiveTime;                                  // 0x0058(0x0004)
	float                                              LastDisturbanceTime;                                      // 0x005C(0x0004)
	float                                              LastIgnoredDisturbanceTime;                               // 0x0060(0x0004)
	float                                              LastSeenByPlayerTime;                                     // 0x0064(0x0004)
	float                                              CurrentActivityStartedTime;                               // 0x0068(0x0004)
	float                                              LastDarknessStateChangedTime;                             // 0x006C(0x0004)
	float                                              LastPlayerSeenInSpecialLocationTime;                      // 0x0070(0x0004)
	float                                              LastFailedSqueezeAttackTime;                              // 0x0074(0x0004)
	float                                              LastLostSightAfterChaseTime;                              // 0x0078(0x0004)
	float                                              LastStoppedChasingTime;                                   // 0x007C(0x0004)
	float                                              LastArrowAttackTime;                                      // 0x0080(0x0004)
	float                                              LastPuntTime;                                             // 0x0084(0x0004)
	float                                              LastConsideredDeathGripTime;                              // 0x0088(0x0004)
	float                                              LastPlayerContactTime;                                    // 0x008C(0x0004)
	float                                              LastStartedIdleTime;                                      // 0x0090(0x0004)
	float                                              LastTriedArrowShootTime;                                  // 0x0094(0x0004)
	float                                              LastLKPUnreacheableTime;                                  // 0x0098(0x0004)
	float                                              LastChaseDestUnreacheableTime;                            // 0x009C(0x0004)
	float                                              LastUpdatedDestWithDisturbanceInfo;                       // 0x00A0(0x0004)
	float                                              LastTargetNotOnNavmeshTime;                               // 0x00A4(0x0004)
	float                                              LastStartedFollowActorMoveTime;                           // 0x00A8(0x0004)
	float                                              ChaseLastRepathedFromIdleTime;                            // 0x00AC(0x0004)
	float                                              LastTriedPushingOutPlayerTime;                            // 0x00B0(0x0004)
	int                                                NumRepeatPlayerPush;                                      // 0x00B4(0x0004)
};

// ScriptStruct OLGame.OLBot.AnimationData
// 0x003C
struct FAnimationData
{
	struct FName                                       AnimationName;                                            // 0x0000(0x0008)
	unsigned long                                      bLoop : 1;                                                // 0x0008(0x0004)
	unsigned long                                      bOnWaypoint : 1;                                          // 0x0008(0x0004)
	float                                              Rate;                                                     // 0x000C(0x0004)
	float                                              BlendInTime;                                              // 0x0010(0x0004)
	float                                              BlendOutTime;                                             // 0x0014(0x0004)
	float                                              StartTime;                                                // 0x0018(0x0004)
	float                                              EndTime;                                                  // 0x001C(0x0004)
	unsigned long                                      bAlign : 1;                                               // 0x0020(0x0004)
	struct FVector                                     AlignLocation;                                            // 0x0024(0x000C)
	struct FVector                                     AlignRotation;                                            // 0x0030(0x000C)
};

// ScriptStruct OLGame.OLBot.DelayedNoise
// 0x001C
struct FDelayedNoise
{
	TEnumAsByte<ENoiseChannelType>                     ChannelType;                                              // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Loudness;                                                 // 0x0004(0x0004)
	float                                              MaxLoudness;                                              // 0x0008(0x0004)
	struct FVector                                     Location;                                                 // 0x000C(0x000C)
	float                                              NoiseTriggerTime;                                         // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLBot.DisturbanceSource
// 0x0020
struct FDisturbanceSource
{
	struct FVector                                     LastLocation;                                             // 0x0000(0x000C)
	struct FVector                                     LastPerceivedLocation;                                    // 0x000C(0x000C)
	float                                              LastTimeTriggered;                                        // 0x0018(0x0004)
	float                                              AccumulatedValue;                                         // 0x001C(0x0004)
};

// ScriptStruct OLGame.OLBot.DisturbanceData
// 0x0048
struct FDisturbanceData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	TEnumAsByte<EDisturbanceType>                      Type;                                                     // 0x0004(0x0001)
	TEnumAsByte<EDisturbanceReactionType>              ReactionType;                                             // 0x0005(0x0001)
	TEnumAsByte<EDisturbanceReactionPhase>             ReactionPhase;                                            // 0x0006(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	struct FVector                                     DisturbanceLocation;                                      // 0x0008(0x000C)
	float                                              RegistrationTime;                                         // 0x0014(0x0004)
	float                                              ActivationTime;                                           // 0x0018(0x0004)
	float                                              WaitStartedTime;                                          // 0x001C(0x0004)
	float                                              ExitStartedTime;                                          // 0x0020(0x0004)
	unsigned long                                      bShootArrowWhenDone : 1;                                  // 0x0024(0x0004)
	unsigned long                                      bReactingBeforeChase : 1;                                 // 0x0024(0x0004)
	float                                              SlowDownFactor;                                           // 0x0028(0x0004)
	struct FVector                                     LastAudioDisturbanceTraceBotLocation;                     // 0x002C(0x000C)
	struct FVector                                     LastAudioDisturbanceTraceSoundLocation;                   // 0x0038(0x000C)
	unsigned long                                      LastAudioDisturbanceTraceClear : 1;                       // 0x0044(0x0004)
};

// ScriptStruct OLGame.OLBot.ScriptedDisturbanceData
// 0x001C
struct FScriptedDisturbanceData
{
	unsigned long                                      bValid : 1;                                               // 0x0000(0x0004)
	float                                              TriggeredTime;                                            // 0x0004(0x0004)
	TEnumAsByte<EDisturbanceType>                      Type;                                                     // 0x0008(0x0001)
	TEnumAsByte<EDisturbanceReactionType>              ForcedReaction;                                           // 0x0009(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              DisturbanceValue;                                         // 0x000C(0x0004)
	struct FVector                                     Location;                                                 // 0x0010(0x000C)
};

// ScriptStruct OLGame.OLBot.AIEventCondition
// 0x0024
struct FAIEventCondition
{
	TEnumAsByte<EAIEvent>                              EventType;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AActor*                                      RelevantActor;                                            // 0x0004(0x0008) (Edit)
	TArray<class UOLBotCondition*>                     Conditions;                                               // 0x000C(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              DebugLastCheckTime;                                       // 0x001C(0x0004) (Transient)
	unsigned long                                      DebugLastCheckResult : 1;                                 // 0x0020(0x0004) (Transient)
};

// ScriptStruct OLGame.OLBot.AIPerceptionRules
// 0x0070
struct FAIPerceptionRules
{
	TArray<class UOLBotCondition*>                     AlwaysSeePlayer;                                          // 0x0000(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UOLBotCondition*>                     NeverSeePlayer;                                           // 0x0010(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UOLBotCondition*>                     OnlySeePlayer;                                            // 0x0020(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UOLBotCondition*>                     AlwaysHearPlayer;                                         // 0x0030(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UOLBotCondition*>                     NeverHearPlayer;                                          // 0x0040(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UOLBotCondition*>                     OnlyHearPlayer;                                           // 0x0050(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<class UOLBotCondition*>                     IgnorePlayer;                                             // 0x0060(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
};

// ScriptStruct OLGame.OLBot.MovingStateVars
// 0x0020
struct FMovingStateVars
{
	struct FVector                                     MoveTempDest;                                             // 0x0000(0x000C)
	TArray<struct FVector>                             MoveTempPath;                                             // 0x000C(0x0010) (NeedCtorLink)
	unsigned long                                      bMoveCancelled : 1;                                       // 0x001C(0x0004)
};

// ScriptStruct OLGame.OLBot.AttackData
// 0x0038
struct FAttackData
{
	float                                              AttackStartedTime;                                        // 0x0000(0x0004)
	struct FVector                                     StartLocation;                                            // 0x0004(0x000C)
	struct FVector                                     StartRotation;                                            // 0x0010(0x000C)
	unsigned long                                      bForceKill : 1;                                           // 0x001C(0x0004)
	unsigned long                                      bUseQuickAttack : 1;                                      // 0x001C(0x0004)
	unsigned long                                      bStationary : 1;                                          // 0x001C(0x0004)
	unsigned long                                      bForcePush : 1;                                           // 0x001C(0x0004)
	unsigned long                                      bDealtDamage : 1;                                         // 0x001C(0x0004)
	unsigned long                                      bAttackCycling : 1;                                       // 0x001C(0x0004)
	unsigned long                                      bPunchRH : 1;                                             // 0x001C(0x0004)
	unsigned long                                      bPunchLH : 1;                                             // 0x001C(0x0004)
	unsigned long                                      bKickRight : 1;                                           // 0x001C(0x0004)
	unsigned long                                      bHeadButt : 1;                                            // 0x001C(0x0004)
	float                                              SmoothedAttackAngle;                                      // 0x0020(0x0004)
	float                                              AttackPlayrate;                                           // 0x0024(0x0004)
	struct FVector                                     AttackNudgeVelocity;                                      // 0x0028(0x000C)
	float                                              AttackRotationCorrectionVel;                              // 0x0034(0x0004)
};

// ScriptStruct OLGame.OLBot.DebugConditionResult
// 0x0018
struct FDebugConditionResult
{
	struct FString                                     Desc;                                                     // 0x0000(0x0010) (NeedCtorLink)
	unsigned long                                      bResult : 1;                                              // 0x0010(0x0004)
	float                                              Time;                                                     // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLBot.ErrorInfo
// 0x001C
struct FErrorInfo
{
	TEnumAsByte<EBotErrorType>                         ErrorType;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     Desc;                                                     // 0x0004(0x0010) (NeedCtorLink)
	float                                              Time;                                                     // 0x0014(0x0004)
	int                                                RepeatCount;                                              // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLBot.EventInfo
// 0x0028
struct FEventInfo
{
	struct FString                                     ShortDesc;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     LongDesc;                                                 // 0x0010(0x0010) (NeedCtorLink)
	float                                              Time;                                                     // 0x0020(0x0004)
	int                                                RepeatCount;                                              // 0x0024(0x0004)
};

// ScriptStruct OLGame.OLBot.AILogInfo
// 0x0014
struct FAILogInfo
{
	struct FString                                     Text;                                                     // 0x0000(0x0010) (NeedCtorLink)
	float                                              Time;                                                     // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLAICoordinator.BotCollisionInfo
// 0x0028
struct FBotCollisionInfo
{
	TEnumAsByte<EBotCollisionType>                     CollisionType;                                            // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AOLBot*                                      Collider;                                                 // 0x0004(0x0008)
	class AOLBot*                                      Collidee;                                                 // 0x000C(0x0008)
	class AOLBot*                                      ExtraParticipant;                                         // 0x0014(0x0008)
	float                                              DistToImpact;                                             // 0x001C(0x0004)
	unsigned long                                      bHeadToHeadPassRight : 1;                                 // 0x0020(0x0004)
	unsigned long                                      bValidated : 1;                                           // 0x0020(0x0004)
	float                                              CreatedTime;                                              // 0x0024(0x0004)
};

// ScriptStruct OLGame.OLNavigationHandle.MovePoint
// 0x001C
struct FMovePoint
{
	struct FVector                                     Destination;                                              // 0x0000(0x000C)
	TArray<struct FPointer>                            RelevantEdges;                                            // 0x000C(0x0010) (Native, AlwaysInit)
};

// ScriptStruct OLGame.OLWaypoint.WaypointAction
// 0x0034
struct FWaypointAction
{
	float                                              Probability;                                              // 0x0000(0x0004) (Edit)
	TArray<class UOLBotCondition*>                     Conditions;                                               // 0x0004(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	float                                              WaitTime;                                                 // 0x0014(0x0004) (Edit)
	struct FName                                       AnimToPlay;                                               // 0x0018(0x0008) (Edit)
	unsigned long                                      bLoopAnimation : 1;                                       // 0x0020(0x0004) (Edit)
	unsigned long                                      bTurnToRotation : 1;                                      // 0x0020(0x0004) (Edit)
	unsigned long                                      bAlignAnimToWaypoint : 1;                                 // 0x0020(0x0004) (Edit)
	class AActor*                                      FocusActor;                                               // 0x0024(0x0008) (Edit)
	float                                              FocusInfluenceDist;                                       // 0x002C(0x0004) (Edit)
	float                                              SlowDownFactor;                                           // 0x0030(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAnimCustomBlend.AngleBlendAnimDesc
// 0x0010
struct FAngleBlendAnimDesc
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008)
	float                                              AnimAngle;                                                // 0x0008(0x0004)
	unsigned long                                      bCCWOnly : 1;                                             // 0x000C(0x0004)
	unsigned long                                      bCWOnly : 1;                                              // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLAnimCycleBreaker.CycleBreaker
// 0x004C
struct FCycleBreaker
{
	float                                              MinWeight;                                                // 0x0000(0x0004) (Edit)
	float                                              MaxWeight;                                                // 0x0004(0x0004) (Edit)
	unsigned long                                      bPlayStartToEnd : 1;                                      // 0x0008(0x0004) (Edit)
	float                                              MinDuration;                                              // 0x000C(0x0004) (Edit)
	float                                              MaxDuration;                                              // 0x0010(0x0004) (Edit)
	float                                              MinRate;                                                  // 0x0014(0x0004) (Edit)
	float                                              MaxRate;                                                  // 0x0018(0x0004) (Edit)
	float                                              BlendInSpeed;                                             // 0x001C(0x0004) (Edit)
	float                                              BlendOutSpeed;                                            // 0x0020(0x0004) (Edit)
	float                                              Probability;                                              // 0x0024(0x0004) (Edit)
	float                                              LayerProbability;                                         // 0x0028(0x0004) (Edit)
	unsigned long                                      bIsAPause : 1;                                            // 0x002C(0x0004) (Edit)
	TArray<class UClass*>                              SpecificClasses;                                          // 0x0030(0x0010) (Edit, NeedCtorLink)
	float                                              CurrentWeight;                                            // 0x0040(0x0004) (Transient)
	float                                              TargetWeight;                                             // 0x0044(0x0004) (Transient)
	float                                              LocalRate;                                                // 0x0048(0x0004) (Transient)
};

// ScriptStruct OLGame.OLAnimFeatheredBlend.FeatheredBlendBone
// 0x000C
struct FFeatheredBlendBone
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	float                                              BoneWeigth;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct OLGame.OLAnimLocomotion.AnimTurningData
// 0x001C
struct FAnimTurningData
{
	int                                                AnimIdxOne;                                               // 0x0000(0x0004)
	int                                                AnimIdxTwo;                                               // 0x0004(0x0004)
	float                                              WeightRatio;                                              // 0x0008(0x0004)
	float                                              StartTime;                                                // 0x000C(0x0004)
	float                                              InitialDeltaYaw;                                          // 0x0010(0x0004)
	float                                              TurningWeight;                                            // 0x0014(0x0004)
	float                                              Duration;                                                 // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLAnimLocomotion.AnimStartingData
// 0x0028
struct FAnimStartingData
{
	unsigned long                                      bPhaseTwoActive : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bFast : 1;                                                // 0x0000(0x0004)
	unsigned long                                      bAlert : 1;                                               // 0x0000(0x0004)
	int                                                AnimIdxOne;                                               // 0x0004(0x0004)
	int                                                AnimIdxTwo;                                               // 0x0008(0x0004)
	float                                              WeightRatio;                                              // 0x000C(0x0004)
	float                                              StartTime;                                                // 0x0010(0x0004)
	float                                              PhaseTwoStartTime;                                        // 0x0014(0x0004)
	float                                              PhaseOneUnscaledDuration;                                 // 0x0018(0x0004)
	float                                              PhaseTwoUnscaledDuration;                                 // 0x001C(0x0004)
	float                                              PhaseOneRateOne;                                          // 0x0020(0x0004)
	float                                              PhaseOneRateTwo;                                          // 0x0024(0x0004)
};

// ScriptStruct OLGame.OLAnimLocomotion.AnimStoppingData
// 0x0024
struct FAnimStoppingData
{
	unsigned long                                      bImmediate : 1;                                           // 0x0000(0x0004)
	int                                                AnimIdxOne;                                               // 0x0004(0x0004)
	int                                                AnimIdxTwo;                                               // 0x0008(0x0004)
	float                                              WeightRatio;                                              // 0x000C(0x0004)
	float                                              StartTime;                                                // 0x0010(0x0004)
	float                                              Duration;                                                 // 0x0014(0x0004)
	float                                              InitialRate;                                              // 0x0018(0x0004)
	float                                              BaseRateOne;                                              // 0x001C(0x0004)
	float                                              BaseRateTwo;                                              // 0x0020(0x0004)
};

// ScriptStruct OLGame.OLAnimRelativeBranch.BranchRelativeBone
// 0x0010
struct FBranchRelativeBone
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	struct FName                                       VirtualParent;                                            // 0x0008(0x0008) (Edit)
};

// ScriptStruct OLGame.OLAnimRiver.RowingAnimData
// 0x0014
struct FRowingAnimData
{
	int                                                IntroAnimIdx;                                             // 0x0000(0x0004)
	int                                                LoopAnimIdx;                                              // 0x0004(0x0004)
	unsigned long                                      bLoopOnce : 1;                                            // 0x0008(0x0004)
	int                                                OutroAnimIdx;                                             // 0x000C(0x0004)
	float                                              OutroRate;                                                // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLSeqAct_AIPlayerContact.PlayerContactInfo
// 0x0020
struct FPlayerContactInfo
{
	struct FName                                       AnimFacing;                                               // 0x0000(0x0008) (Edit)
	struct FName                                       AnimBack;                                                 // 0x0008(0x0008) (Edit)
	float                                              AnimBlendInTime;                                          // 0x0010(0x0004) (Edit)
	float                                              AnimBlendOutTime;                                         // 0x0014(0x0004) (Edit)
	float                                              AnimPositionningBlendTime;                                // 0x0018(0x0004) (Edit)
	unsigned long                                      bDisableCollision : 1;                                    // 0x001C(0x0004) (Edit)
	unsigned long                                      bDisablePhysics : 1;                                      // 0x001C(0x0004) (Edit)
	unsigned long                                      bDisableRootMotion : 1;                                   // 0x001C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLSeqAct_ConditionalAIConfig.ConditionalConfigData
// 0x12B8
struct FConditionalConfigData
{
	TArray<class UOLBotCondition*>                     Conditions;                                               // 0x0000(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
	struct FAIConfigData                               ConfigOverrides;                                          // 0x0010(0x12A4) (Edit)
	unsigned long                                      bStayActivated : 1;                                       // 0x12B4(0x0004) (Edit)
};

// ScriptStruct OLGame.OLSeqAct_Dialogue.DialogueLine
// 0x001C
struct FDialogueLine
{
	TEnumAsByte<EDialogueSpeaker>                      Speaker;                                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UAkEvent*                                    Event;                                                    // 0x0004(0x0008) (Edit)
	unsigned long                                      WaitUntilFinished : 1;                                    // 0x000C(0x0004) (Edit)
	float                                              StartDelay;                                               // 0x0010(0x0004) (Edit)
	float                                              Delay;                                                    // 0x0014(0x0004) (Transient)
	int                                                PlayingID;                                                // 0x0018(0x0004) (Transient)
};

// ScriptStruct OLGame.OLSeqAct_Dialogue.PlayingDialogue
// 0x000C
struct FPlayingDialogue
{
	class AActor*                                      Speaker;                                                  // 0x0000(0x0008) (Transient)
	int                                                PlayingID;                                                // 0x0008(0x0004) (Transient)
};

// ScriptStruct OLGame.OLSeqAct_FishRecycler.FloaterData
// 0x000C
struct FFloaterData
{
	class AOLFloatingObjectBase*                       Floater;                                                  // 0x0000(0x0008)
	unsigned long                                      bSinking : 1;                                             // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLSeqAct_FlyingFish.RainingAnimalData
// 0x0010
struct FRainingAnimalData
{
	class ASkeletalMeshActor*                          Actor;                                                    // 0x0000(0x0008)
	float                                              TriggerDelay;                                             // 0x0008(0x0004)
	unsigned long                                      bTriggered : 1;                                           // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLSeqAct_HaarpEffect.HaarpEffect_IntensityValue
// 0x0008
struct FHaarpEffect_IntensityValue
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit)
};

// ScriptStruct OLGame.OLSeqAct_InvisibleFootsteps.InvisibleFootstepData
// 0x0010
struct FInvisibleFootstepData
{
	class UDecalComponent*                             DecalComp;                                                // 0x0000(0x0008) (ExportObject, Component, EditInline)
	float                                              SpawnedTime;                                              // 0x0008(0x0004)
	float                                              SimulatedDepthPct;                                        // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLSeqAct_MartaStreet.MartaStreetUnspawnConditions
// 0x0020
struct FMartaStreetUnspawnConditions
{
	float                                              MinDelayAfterSpawn;                                       // 0x0000(0x0004) (Edit)
	float                                              MinDelayAfterPressure;                                    // 0x0004(0x0004) (Edit)
	float                                              MinDelayAfterLastSeen;                                    // 0x0008(0x0004) (Edit)
	float                                              MinTimeInInvestigate;                                     // 0x000C(0x0004) (Edit)
	TArray<class UOLBotCondition*>                     OtherConditions;                                          // 0x0010(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
};

// ScriptStruct OLGame.OLSeqAct_MartaStreet.MartaStreetRespawnConditions
// 0x0018
struct FMartaStreetRespawnConditions
{
	float                                              MinDelayAfterUnspawn;                                     // 0x0000(0x0004) (Edit)
	float                                              VolumeHeatDuration;                                       // 0x0004(0x0004) (Edit)
	TArray<class UOLBotCondition*>                     OtherConditions;                                          // 0x0008(0x0010) (Edit, ExportObject, NeedCtorLink, EditInline)
};

// ScriptStruct OLGame.OLSeqAct_MartaStreet.MartaStreetState
// 0x004C
struct FMartaStreetState
{
	unsigned long                                      bSpawned : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bUnspawnReady : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bUnspawnSemiReady : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bRespawnReady : 1;                                        // 0x0000(0x0004)
	int                                                PressureCount;                                            // 0x0004(0x0004)
	int                                                NumBashedWalls;                                           // 0x0008(0x0004)
	unsigned long                                      bBashingWalls : 1;                                        // 0x000C(0x0004)
	float                                              StartedTime;                                              // 0x0010(0x0004)
	float                                              LastUnspawnedTime;                                        // 0x0014(0x0004)
	float                                              LastRespawnedTime;                                        // 0x0018(0x0004)
	float                                              PressureAppliedTime;                                      // 0x001C(0x0004)
	float                                              LastBashTime;                                             // 0x0020(0x0004)
	struct FVector                                     LastUnspawnedLocation;                                    // 0x0024(0x000C)
	class AOLMartaStreetVolume*                        LastUnspawnedMartaVolume;                                 // 0x0030(0x0008)
	class AOLMartaStreetVolume*                        PlayerVol;                                                // 0x0038(0x0008)
	class AOLMartaStreetVolume*                        MartaVol;                                                 // 0x0040(0x0008)
	unsigned long                                      bDisconnectedVolumes : 1;                                 // 0x0048(0x0004)
};

// ScriptStruct OLGame.OLSeqAct_OutOfSight.PendingOutOfSightOp
// 0x000C
struct FPendingOutOfSightOp
{
	TEnumAsByte<EOoSOp>                                Op;                                                       // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0004(0x0008)
};

// ScriptStruct OLGame.OLSeqAct_SkelMeshAnimControl.SkelMeshAnimParams
// 0x0018
struct FSkelMeshAnimParams
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x0008(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x000C(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0010(0x0004) (Edit)
	unsigned long                                      bPlayNextWhenDone : 1;                                    // 0x0014(0x0004) (Edit)
};

// ScriptStruct OLGame.OLTypes.BlendSpaceNode
// 0x0010
struct FBlendSpaceNode
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	struct FVector2D                                   Coords;                                                   // 0x0008(0x0008) (Edit)
};

// ScriptStruct OLGame.OLHero.RaftCollisionData
// 0x002C
struct FRaftCollisionData
{
	struct FVector                                     CollisionPoint;                                           // 0x0000(0x000C)
	struct FVector                                     PotentialContactPoint;                                    // 0x000C(0x000C)
	struct FVector                                     PotentialContactNormal;                                   // 0x0018(0x000C)
	float                                              DistToContactPoint;                                       // 0x0024(0x0004)
	unsigned long                                      bHit : 1;                                                 // 0x0028(0x0004)
	unsigned long                                      bHitAffectsYaw : 1;                                       // 0x0028(0x0004)
	unsigned long                                      bScraping : 1;                                            // 0x0028(0x0004)
	unsigned long                                      bCloseToScraping : 1;                                     // 0x0028(0x0004)
	unsigned long                                      bCanHitAffectYaw : 1;                                     // 0x0028(0x0004)
};

// ScriptStruct OLGame.OLSplineGameplayMarker.SplineDescriptor
// 0x0014
struct FSplineDescriptor
{
	TArray<class AOLSplineGameplayMarker*>             SegmentMarkers;                                           // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bLooping : 1;                                             // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLDifficultyConfig.BoolByDifficulty
// 0x0004
struct FBoolByDifficulty
{
	unsigned long                                      DefaultValue : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_EasyValue : 1;                                  // 0x0000(0x0004)
	unsigned long                                      EasyValue : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_NormalValue : 1;                                // 0x0000(0x0004)
	unsigned long                                      NormalValue : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_NormalPlusValue : 1;                            // 0x0000(0x0004)
	unsigned long                                      NormalPlusValue : 1;                                      // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_HardValue : 1;                                  // 0x0000(0x0004)
	unsigned long                                      HardValue : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_HardPlusValue : 1;                              // 0x0000(0x0004)
	unsigned long                                      HardPlusValue : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bOverride_NightmareValue : 1;                             // 0x0000(0x0004)
	unsigned long                                      NightmareValue : 1;                                       // 0x0000(0x0004) (Edit)
};

// ScriptStruct OLGame.OLGame.GameplayDataLocation
// 0x0038
struct FGameplayDataLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FVector                                     EyeDirection;                                             // 0x000C(0x000C)
	float                                              Speed;                                                    // 0x0018(0x0004)
	unsigned long                                      bNVOn : 1;                                                // 0x001C(0x0004)
	int                                                LocomotionMode;                                           // 0x0020(0x0004)
	int                                                NumberOfBatteries;                                        // 0x0024(0x0004)
	int                                                NumberOfBandages;                                         // 0x0028(0x0004)
	unsigned long                                      bIsBleeding : 1;                                          // 0x002C(0x0004)
	float                                              Stamina;                                                  // 0x0030(0x0004)
	float                                              Health;                                                   // 0x0034(0x0004)
};

// ScriptStruct OLGame.OLGame.GameplayData
// 0x0044
struct FGameplayData
{
	TEnumAsByte<EGameplayDataType>                     DataType;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       LevelName;                                                // 0x0004(0x0008)
	struct FName                                       CheckpointName;                                           // 0x000C(0x0008)
	int                                                DataSequenceForCheckpoint;                                // 0x0014(0x0004)
	float                                              TimeInCheckpoint;                                         // 0x0018(0x0004)
	int                                                NumberOfBatteries;                                        // 0x001C(0x0004)
	int                                                SubType;                                                  // 0x0020(0x0004)
	struct FVector                                     SubLocation;                                              // 0x0024(0x000C)
	TArray<struct FGameplayDataLocation>               DataLocations;                                            // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      Written : 1;                                              // 0x0040(0x0004) (Transient)
};

// ScriptStruct OLGame.OLUIFrontEnd.ViewInfo
// 0x0028
struct FViewInfo
{
	struct FName                                       ViewName;                                                 // 0x0000(0x0008)
	struct FString                                     SWFName;                                                  // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FName>                               DependantViews;                                           // 0x0018(0x0010) (NeedCtorLink)
};

// ScriptStruct OLGame.OLInteractiveSkeletalFoliageActor.FolliageCollider
// 0x002C
struct FFolliageCollider
{
	class AOLPawn*                                     Owner;                                                    // 0x0000(0x0008)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C)
	float                                              Height;                                                   // 0x0020(0x0004)
	float                                              Radius;                                                   // 0x0024(0x0004)
	unsigned long                                      bContinuousPush : 1;                                      // 0x0028(0x0004)
};

// ScriptStruct OLGame.OLUIFrontEnd_Options.OptionInfo
// 0x003C
struct FOptionInfo
{
	unsigned long                                      bInProfile : 1;                                           // 0x0000(0x0004)
	int                                                ProfileSettingId;                                         // 0x0004(0x0004)
	TEnumAsByte<ENonProfileOption>                     NonProfileId;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       SettingDescriptionTextId;                                 // 0x000C(0x0008)
	TEnumAsByte<EOptionSelectorType>                   Type;                                                     // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	unsigned long                                      bUsesRawValue : 1;                                        // 0x0018(0x0004)
	float                                              Slider_Minimum;                                           // 0x001C(0x0004)
	float                                              Slider_Maximum;                                           // 0x0020(0x0004)
	int                                                CurrentValueInt;                                          // 0x0024(0x0004) (Transient)
	float                                              CurrentValueFloat;                                        // 0x0028(0x0004) (Transient)
	struct FString                                     CurrentValueString;                                       // 0x002C(0x0010) (Transient, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
