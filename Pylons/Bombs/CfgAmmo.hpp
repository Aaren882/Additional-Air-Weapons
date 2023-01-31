class SensorTemplateMan;
class SensorTemplateIR;
class SensorTemplateVisual;
class CfgAmmo
{
	class Bomb_04_F;
	class Mo_cluster_AP;
	class BulletBase;
	class RK_Cluster_WP;
	class B_30mm_MP;
	class Mo_cluster_Bomb_01_F;
	class MissileBase;
	class SubmunitionBase;
	class BombCore;
	//Sound Effects
	class AAW_Cluster_BM_Effect: BombCore
	{
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		sideAirFriction = 30;
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 0.1;
		simulation = "shotGrenade";
		muzzleEffect = "";
		CraterEffects = "EmptyEffect";
		explosionEffects = "AAW_Bomb_Burst";
		explosionSoundEffect = "";
		
		deflectionSlowDown = 0;
		explosionTime = 0.01;
		
		SoundSetExplosion[]=
		{
			"AAW_Shell_Explosion_SoundSet"
		};
	};
	class AAW_Cluster_RK_Effect: AAW_Cluster_BM_Effect
	{
		explosionEffects = "AAW_Rocket_Burst";
	};
	class PH_Cluster_Effect: AAW_Cluster_BM_Effect
	{
		explosionEffects = "AAW_SFW_Effect";
		SoundSetExplosion[]=
		{
			"AAW_SFW_Explosion_SoundSet"
		};
	};
	//Clusters
	class DS_Cluster_AP: Mo_cluster_AP
	{
		model = "\A3\Weapons_f\ammo\shell";
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		deflectionSlowDown = 0;
		CraterWaterEffects = "ClusterCraterWaterEffects";
		EffectFly = "ClusterEffectFly";
		ExplosionEffects = "DS_Exp_Effect";
		CraterEffects = "GrenadeCrater";
		effectsSmoke = "";
	};
	class BM_Cluster_WP: RK_Cluster_WP
	{
		airFriction = 3;
	};
	/////////////////////////SFW Main Base/////////////////////////////////
	class BombCluster_01_PH_F: Bomb_04_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_F";
		simulation = "shotMissile";
		triggerDistance = 150;
		triggerSpeedCoef[] = {0.8,1.8};
		submunitionAmmo[] = {"PH_Cluster_IR",1};
		submunitionConeAngle = 20;
		submunitionConeType[] = {"poissonDisc",18};
		submunitionDirectionType = "SubmunitionAutoLeveling";
	};
	class PH_Cluster_IR: Bomb_04_F
	{
		model = "\A3\Weapons_f\ammo\shell";
		AirFriction = 2;
		hit = 1;
		simulation = "shotMissile";
		explosive = 0;
		EffectFly = "EmptyEffect";
		muzzleEffect = "EmptyEffect";
		CraterEffects = "EmptyEffect";
		explosionSoundEffect = "EmptyEffect";
		explosionEffects = "EmptyEffect";
		
		SoundSetExplosion[]=
		{
			""
		};
		soundFly[]={"",1,1,50};
		submunitionAmmo[] ={"PH_Cluster_Mother",1};
		submunitionConeAngle = 30;
		submunitionConeType[] = {"randomcenter",1};
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitSpeed = 1000;
		triggerDistance = 80;
		//LockSys
		/*canLock = 2;
		trackOversteer = 1;
		lockType = 0;
		lockSeekRadius = 300;
		manualControl = 0;*/
		autoSeekTarget = 1;
		lockAcquire = 1;
		missileLockCone = 300;
		missileKeepLockedCone = 300;
		missileLockMaxDistance = 200;
		missileLockMinDistance = 1;
		missileLockMaxSpeed = 60;
		weaponLockSystem = "0 + 1 + 16"; //RWR ,Lock ,and Counter Measure Types
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 20;
			descendDistance = 30;
			minDistance = 1;
			ascendAngle = 70;
		};
		////////////////////////////////////////////
		#include "Components.hpp"
	};
	class PH_Cluster_Mother: SubmunitionBase
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		CraterEffects = "EmptyEffect";
		triggerTime = 0.01;
		submunitionAmmo[] = {"PH_Cluster_AP",1};
		submunitionConeAngle = 5;
		deleteParentWhenTriggered=1;
		submunitionConeType[] = {"poissondisc",8};
		submunitionDirectionType = "SubmunitionModelDirection";
		EffectFly = "AAW_Sound_SFW_Effect";
	};
	class PH_Cluster_AP: BulletBase
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		warheadName = "AP";
		hit = 90;
		indirectHit = 50;
		indirectHitRange = 20;
		caliber = 7;
		muzzleEffect = "";
		deflectionSlowDown = 0;
		allowAgainstInfantry = 1;
		EffectFly = "";
		
		explosive = 0;
		explosionEffectsRadius = 20;
		typicalspeed = 60;
		CraterEffects = "";
		CraterWaterEffects = "";
		
		////////////////////////////////////////////////////
		/*submunitionAmmo = "ammo_Penetrator_AGM_01";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;*/
		////////////////////////////////////////////////////
	};
	///////////////////////////////////////////
	////////////////Cluster_01/////////////////
	class BombCluster_01_DS_F: Bomb_04_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_F";
		simulation = "shotMissile";
		triggerDistance = 250;
		submunitionAmmo[] = {"Cluster_01_DS_Mother",1};
		submunitionConeAngle = 10;
		submunitionConeType[] = {"randomcenter",3};
	};
	class BombCluster_01_AP_F: BombCluster_01_DS_F
	{
		submunitionAmmo[] = {"Cluster_01_APM_Mother",1};
	};
	class BombCluster_01_AT_F: BombCluster_01_DS_F
	{
		submunitionAmmo[] = {"Cluster_01_ATM_Mother",1};
	};
	class BombCluster_01_MX_F: BombCluster_01_DS_F
	{
		submunitionAmmo[] = {"Cluster_01_XM_Mother",1};
	};
	class BombCluster_01_SW_F: BombCluster_01_DS_F
	{
		submunitionAmmo[] = {"Cluster_01_SW_Mother",1};
	};
	class BombCluster_01_WP_F: BombCluster_01_DS_F
	{
		submunitionAmmo[] = {"Cluster_01_WP_Mother",1};
	};
	class BombCluster_01_NP_F: BombCluster_01_DS_F
	{
		submunitionAmmo[] = {"Cluster_01_NP_Mother",1};
	};
	////////////////Cluster_02/////////////////
	class BombCluster_02_DS_F: BombCluster_01_DS_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionConeAngle = 15;
		maverickWeaponIndexOffset = 6;
		submunitionAmmo[] = {"Cluster_02_DS_Mother",1};
	};
	class BombCluster_02_PH_F: BombCluster_01_PH_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		maverickWeaponIndexOffset = 6;
	};
	class BombCluster_02_AP_F: BombCluster_01_AP_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionConeAngle = 15;
		maverickWeaponIndexOffset = 6;
		submunitionAmmo[] = {"Cluster_02_APM_Mother",1};
	};
	class BombCluster_02_AT_F: BombCluster_01_AT_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionConeAngle = 15;
		maverickWeaponIndexOffset = 6;
		submunitionAmmo[] = {"Cluster_02_ATM_Mother",1};
	};
	class BombCluster_02_XM_F: BombCluster_01_MX_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionConeAngle = 15;
		maverickWeaponIndexOffset = 6;
		submunitionAmmo[] = {"Cluster_02_XM_Mother",1};
	};
	class BombCluster_02_SW_F: BombCluster_01_SW_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionConeAngle = 15;
		maverickWeaponIndexOffset = 6;
		submunitionAmmo[] = {"Cluster_02_SW_Mother",1};
	};
	class BombCluster_02_WP_F: BombCluster_01_WP_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionConeAngle = 15;
		maverickWeaponIndexOffset = 6;
		submunitionAmmo[] = {"Cluster_02_WP_Mother",1};
	};
	class BombCluster_02_NP_F: BombCluster_01_NP_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionConeAngle = 15;
		maverickWeaponIndexOffset = 6;
		submunitionAmmo[] = {"Cluster_02_NP_Mother",1};
	};
	////////////////Cluster_03/////////////////
	class BombCluster_03_DS_F: BombCluster_01_DS_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionConeAngle=10;
		submunitionAmmo[] = {"Cluster_01_DS_Mother",1};
	};
	class BombCluster_03_PH_F: BombCluster_01_PH_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
	};
	class BombCluster_03_AP_F: BombCluster_01_AP_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionConeAngle = 10;
		submunitionAmmo[] = {"Cluster_03_APM_Mother",1};
	};
	class BombCluster_03_AT_F: BombCluster_01_AT_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionConeAngle = 10;
		submunitionAmmo[] = {"Cluster_03_ATM_Mother",1};
	};
	class BombCluster_03_XM_F: BombCluster_01_MX_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionConeAngle = 10;
		submunitionAmmo[] = {"Cluster_03_XM_Mother",1};
	};
	class BombCluster_03_SW_F: BombCluster_01_SW_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionConeAngle = 10;
		submunitionAmmo[] = {"Cluster_03_SW_Mother",1};
	};
	class BombCluster_03_WP_F: BombCluster_01_WP_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionConeAngle = 10;
		submunitionAmmo[] = {"Cluster_03_WP_Mother",1};
	};
	class BombCluster_03_NP_F: BombCluster_01_NP_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionConeAngle = 10;
		submunitionAmmo[] = {"Cluster_03_NP_Mother",1};
	};
};