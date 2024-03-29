#pragma once

#include <windows.h>

//Just for vector and matrix shit (im lazy)
#include <d3d9.h>
#include <d3dx9.h>

//SHIT
typedef struct {
	float Matrix[3][4];
} Matrix3x4_t;

//Entity class IDs (GetClientClasssID())
enum ClassID
{
	CAI_BaseNPC,
	CAK47,
	CBaseAnimating,
	CBaseAnimatingOverlay,
	CBaseAttributableItem,
	CBaseButton,
	CBaseCombatCharacter,
	CBaseCombatWeapon,
	CBaseCSGrenade,
	CBaseCSGrenadeProjectile,
	CBaseDoor,
	CBaseEntity,
	CBaseFlex,
	CBaseGrenade,
	CBaseParticleEntity,
	CBasePlayer,
	CBasePropDoor,
	CBaseTeamObjectiveResource,
	CBaseTempEntity,
	CBaseToggle,
	CBaseTrigger,
	CBaseViewModel,
	CBaseVPhysicsTrigger,
	CBaseWeaponWorldModel,
	CBeam,
	CBeamSpotlight,
	CBoneFollower,
	CBreakableProp,
	CBreakableSurface,
	CC4,
	CCascadeLight,
	CChicken,
	CColorCorrection,
	CColorCorrectionVolume,
	CCSGameRulesProxy,
	CCSPlayer,
	CCSPlayerResource,
	CCSRagdoll,
	CCSTeam,
	CDEagle,
	CDecoyGrenade,
	CDecoyProjectile,
	CDynamicLight,
	CDynamicProp,
	CEconEntity,
	CEconWearable,
	CEmbers,
	CEntityDissolve,
	CEntityFlame,
	CEntityFreezing,
	CEntityParticleTrail,
	CEnvAmbientLight,
	CEnvDetailController,
	CEnvDOFController,
	CEnvParticleScript,
	CEnvProjectedTexture,
	CEnvQuadraticBeam,
	CEnvScreenEffect,
	CEnvScreenOverlay,
	CEnvTonemapController,
	CEnvWind,
	CFEPlayerDecal,
	CFireCrackerBlast,
	CFireSmoke,
	CFireTrail,
	CFish,
	CFlashbang,
	CFogController,
	CFootstepControl,
	CFunc_Dust,
	CFunc_LOD,
	CFuncAreaPortalWindow,
	CFuncBrush,
	CFuncConveyor,
	CFuncLadder,
	CFuncMonitor,
	CFuncMoveLinear,
	CFuncOccluder,
	CFuncReflectiveGlass,
	CFuncRotating,
	CFuncSmokeVolume,
	CFuncTrackTrain,
	CGameRulesProxy,
	CHandleTest,
	CHEGrenade,
	CHostage,
	CHostageCarriableProp,
	CIncendiaryGrenade,
	CInferno,
	CInfoLadderDismount,
	CInfoOverlayAccessor,
	CItem_Healthshot,
	CItemDogtags,
	CKnife,
	CKnifeGG,
	CLightGlow,
	CMaterialModifyControl,
	CMolotovGrenade,
	CMolotovProjectile,
	CMovieDisplay,
	CParticleFire,
	CParticlePerformanceMonitor,
	CParticleSystem,
	CPhysBox,
	CPhysBoxMultiplayer,
	CPhysicsProp,
	CPhysicsPropMultiplayer,
	CPhysMagnet,
	CPlantedC4,
	CPlasma,
	CPlayerResource,
	CPointCamera,
	CPointCommentaryNode,
	CPointWorldText,
	CPoseController,
	CPostProcessController,
	CPrecipitation,
	CPrecipitationBlocker,
	CPredictedViewModel,
	CProp_Hallucination,
	CPropDoorRotating,
	CPropJeep,
	CPropVehicleDriveable,
	CRagdollManager,
	CRagdollProp,
	CRagdollPropAttached,
	CRopeKeyframe,
	CSCAR17,
	CSceneEntity,
	CSensorGrenade,
	CSensorGrenadeProjectile,
	CShadowControl,
	CSlideshowDisplay,
	CSmokeGrenade,
	CSmokeGrenadeProjectile,
	CSmokeStack,
	CSpatialEntity,
	CSpotlightEnd,
	CSprite,
	CSpriteOriented,
	CSpriteTrail,
	CStatueProp,
	CSteamJet,
	CSun,
	CSunlightShadowControl,
	CTeam,
	CTeamplayRoundBasedRulesProxy,
	CTEArmorRicochet,
	CTEBaseBeam,
	CTEBeamEntPoint,
	CTEBeamEnts,
	CTEBeamFollow,
	CTEBeamLaser,
	CTEBeamPoints,
	CTEBeamRing,
	CTEBeamRingPoint,
	CTEBeamSpline,
	CTEBloodSprite,
	CTEBloodStream,
	CTEBreakModel,
	CTEBSPDecal,
	CTEBubbles,
	CTEBubbleTrail,
	CTEClientProjectile,
	CTEDecal,
	CTEDust,
	CTEDynamicLight,
	CTEEffectDispatch,
	CTEEnergySplash,
	CTEExplosion,
	CTEFireBullets,
	CTEFizz,
	CTEFootprintDecal,
	CTEFoundryHelpers,
	CTEGaussExplosion,
	CTEGlowSprite,
	CTEImpact,
	CTEKillPlayerAttachments,
	CTELargeFunnel,
	CTEMetalSparks,
	CTEMuzzleFlash,
	CTEParticleSystem,
	CTEPhysicsProp,
	CTEPlantBomb,
	CTEPlayerAnimEvent,
	CTEPlayerDecal,
	CTEProjectedDecal,
	CTERadioIcon,
	CTEShatterSurface,
	CTEShowLine,
	CTesla,
	CTESmoke,
	CTESparks,
	CTESprite,
	CTESpriteSpray,
	CTest_ProxyToggle_Networkable,
	CTestTraceline,
	CTEWorldDecal,
	CTriggerPlayerMovement,
	CTriggerSoundOperator,
	CVGuiScreen,
	CVoteController,
	CWaterBullet,
	CWaterLODControl,
	CWeaponAug,
	CWeaponAWP,
	CWeaponBaseItem,
	CWeaponBizon,
	CWeaponCSBase,
	CWeaponCSBaseGun,
	CWeaponCycler,
	CWeaponElite,
	CWeaponFamas,
	CWeaponFiveSeven,
	CWeaponG3SG1,
	CWeaponGalil,
	CWeaponGalilAR,
	CWeaponGlock,
	CWeaponHKP2000,
	CWeaponM249,
	CWeaponM3,
	CWeaponM4A1,
	CWeaponMAC10,
	CWeaponMag7,
	CWeaponMP5Navy,
	CWeaponMP7,
	CWeaponMP9,
	CWeaponNegev,
	CWeaponNOVA,
	CWeaponP228,
	CWeaponP250,
	CWeaponP90,
	CWeaponSawedoff,
	CWeaponSCAR20,
	CWeaponScout,
	CWeaponSG550,
	CWeaponSG552,
	CWeaponSG556,
	CWeaponSSG08,
	CWeaponTaser,
	CWeaponTec9,
	CWeaponTMP,
	CWeaponUMP45,
	CWeaponUSP,
	CWeaponXM1014,
	CWorld,
	CWorldVguiText,
	DustTrail,
	MovieExplosion,
	ParticleSmokeGrenade,
	RocketTrail,
	SmokeTrail,
	SporeExplosion,
	SporeTrail,
};

//iItemDefinitionIndex
enum CSGO_Weapon_ID
{
	weapon_none,
	weapon_deagle,
	weapon_elite,
	weapon_fiveseven,
	weapon_glock,
	weapon_p228,
	weapon_usp,
	weapon_ak47,
	weapon_aug,
	weapon_awp,
	weapon_famas,
	weapon_g3sg1,
	weapon_galil,
	weapon_galilar,
	weapon_m249,
	weapon_m3,
	weapon_m4a1,
	weapon_mac10,
	weapon_mp5navy,
	weapon_p90,
	weapon_scout,
	weapon_sg550,
	weapon_sg552,
	weapon_tmp,
	weapon_ump45,
	weapon_xm1014,
	weapon_bizon,
	weapon_mag7,
	weapon_negev,
	weapon_sawedoff,
	weapon_tec9,
	weapon_taser,
	weapon_hkp2000,
	weapon_mp7,
	weapon_mp9,
	weapon_nova,
	weapon_p250,
	weapon_scar17,
	weapon_scar20,
	weapon_sg556,
	weapon_ssg08,
	weapon_knifegg,
	weapon_knife,
	weapon_flashbang,
	weapon_hegrenade,
	weapon_smokegrenade,
	weapon_molotov,
	weapon_decoy,
	weapon_incgrenade,
	weapon_c4,
	weapon_revolver,
	weapon_cz,
	weapon_knife_t
};

//Actual shit
namespace Entity
{
	//Entity void function
	extern void				setSpotted(DWORD playerBase, bool val);							//Set the spotted bool (Red dot on radar, its a bool so True (1) = Spotted and False (0) = Not spotted)
	extern void				glowEsp(DWORD glowObj, int glowInd,
									float r, float g, float b, float a);					//Sets the glow on desired object with given colour

	//Entity return functions
	extern DWORD			getEntBase(int index);											//Get the base address of the entity at provided index
	extern bool				isAlive(DWORD playerBase);										//Check if entity is alive 
	extern bool				isValid(DWORD playerBase);										//Checks if entity is a player
	extern int				getEntHp(DWORD playerBase);										//Return the health of the entity
	extern int				getEntTeam(DWORD playerBase);									//Get the team ID of the entity
	extern bool				getSpotted(DWORD playerBase);									//Get the spotted bool (Red dot on radar, its a bool so 1 = Spotted and 0 = Not spotted)
	extern int				getGlowIndex(DWORD playerBase);									//Get the glow index of the entity
	extern DWORD			getGlowObj();													//Get the pointer to glow object
	extern D3DXVECTOR3		getEntPos(DWORD playerBase);									//Get the entity pos
	extern char*			getEntName(DWORD playerBase);									//Get the entity name
	extern D3DXVECTOR3		getEntEyePos(DWORD playerBase);									//Get the entity bone pos
	extern DWORD		    getEntBoneMatrix(DWORD playerBase);								//Get the entity bone matrix
	extern bool				getEntScoped(DWORD playerBase);									//Get the entity scope state - true if they are scoped
	extern bool				getEntDefusing(DWORD playerBase);								//Get the entity defusing state - true if they are defusing
	extern bool				getEntReloading(DWORD playerBase);								//Get the entity reloading state - true if they are reloading
	extern bool				getEntHelmet(DWORD playerBase);									//Get the entity helmet state - true if they have one
	extern bool				getEntDefuser(DWORD playerBase);								//Get the entity defuser state - true if they have one
	extern bool				getEntImmunity(DWORD playerBase);								//Get the entity immunity state - true if they are in gun game immunity
	extern DWORD			getActiveWeapon(DWORD playerBase);								//Get the base address of their active weapon entity
	extern bool				isWeaponPistol(int classID);									//Get the weapon id and see if it is a pistol
	extern bool				isWeaponSniper(int iWeaponID);									//Get the weapon id and see if it is a sniper
	extern bool				isWeaponNonAim(int iWeaponID);									//Get the weapon id and see if it is aimbot worthy
	extern bool				isWeaponNonAim2(int iWeaponID);									//Get the weapon id and see if it is aimbot worthy
	extern int				getEntClassID(DWORD entity);									//Get the entity class id
	extern D3DXVECTOR3		getEntBonePos(DWORD playerBase, int boneID);					//Get the position of the desired bone of the entity
	extern int				getEntAmmo(DWORD playerBase);
	extern bool				getSpottedByMask(DWORD playerBase);
}