class SensorTemplateLaser;
class SensorTemplateIR;
class CfgAmmo
{
	class FlareBase;
	class BulletBase;
	class MissileBase;
	class SubmunitionBase;
	class M_PG_AT;
	class SmokeShell;
	class Mo_cluster_AP;
	class PH_Cluster_Mother;
	class Rocket_04_HE_F;
	class Rocket_04_AP_F;
	class Bomb_04_F;
	class ammo_Penetrator_Base;
	
	class ammo_Missile_MediumRangeAABase: MissileBase
	{
		cmimmunity = 0.92;
	};
	class ammo_Penetrator_big_AP: ammo_Penetrator_Base
	{
		caliber = 40;
		hit = 1000;
	};
	class ammo_Penetrator_small_AP: ammo_Penetrator_Base
	{
		caliber = 12.7;
		hit = 200;
	};
	
	#include "Mothers.hpp"
	class RK_Cluster_FG: BulletBase
	{
		hit = 15;
		indirectHit = 20;
		indirectHitRange = 0.1;
		caliber = 0.869565;
	};
	/////////////////////////////////////////////////////////////////////////////////////////////
	class M_PG_Flare: M_PG_AT
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		warheadName = "Flare";
		CraterEffects = "";
		submunitionDirectionType = "SubmunitionTargetDirection";
		explosionEffects = "";
		simulation = "shotMissile";
		triggerDistance = 400;
		triggerSpeedCoef[] = {0.8,1};
		submunitionParentSpeedCoef = 0.0;
		submunitionInitSpeed = 300;
		submunitionConeAngle = 1;
		submunitionAmmo[] = {"AAW_Flare_Mother",1};
		submunitionConeType[] = {"randomcenter",1};
		weaponLockSystem = "4 + 16";
		aiAmmoUsageFlags = "4";
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
		laserLock = 1;
		cost = 200;
		airFriction = 0;
		muzzleEffect = "";
		hit = 1;
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 500.0;
			descendDistance = 200.0;
			minDistance	= 150.0;
			ascendAngle = 45.0;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
					};
				};
			};
		};
	};
	class M_PG_AP: M_PG_AT
	{
		hit = 95;
		indirectHit = 25;
		indirectHitRange = 2.5;
		triggerOnImpact = 1;
		laserLock = 1;
		irLock = 1;
		nvLock = 1;
		//submunitionAmmo[] = {"ammo_Penetrator_small_AP",0.05,"ammo_Penetrator_big_AP",0.95};
		submunitionAmmo = "ammo_Penetrator_Rocket_04_AP";
	};
	class RK_Smoke_White: SmokeShell
	{
		deflectionSlowDown = 0;
		simulation = "shotSmoke";
		effectsSmoke = "SmokeShellWhiteSmall";
		model = "\A3\weapons_f\ammo\shell_smoke";
		EffectFly = "ClusterEffectFly";
		airFriction = -0.01;
	};
	class RK_Cluster_AP: Mo_cluster_AP
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		deflectionSlowDown = 0;
		airFriction = 8;
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		effectsSmoke = "";
		EffectFly = "";
	};
	class RK_Cluster_WP: MissileBase
	{
		model = "\A3\weapons_f\ammo\shell";
		simulation = "shotMissile";
		deflectionSlowDown = 1;
		initTime = 0;
		//sideAirFriction = 0.1;
		timeToLive = 30;
		thrustTime = 30;
		thrust = 20;
		maxSpeed = 100;
		deflecting = 40;
		airFriction = 4;
		explosionEffects = "AAW_WP_Explosion_Smoke";
		CraterEffects = "AAW_WP_Crater";
		EffectsFire = "EmptyEffect";
		effectsMissile = "AAW_WP_Fly_Effect";
		hit = 70;
		indirectHit = 17;
		indirectHitRange = 10;
		explosive = 1;
		audibleFire = 20;
		EffectFly = "EmptyEffect";
		soundHit1[] = {"A3\Sounds_F\debugsound",1,1,10};
		multiSoundHit[] = {"soundHit1",1};
		SoundSetExplosion[] = {""};
		class HitEffects
		{
		};
	};
	class BM_Cluster_WP: RK_Cluster_WP
	{
		airFriction = 2.5;
	};
	class RK_Cluster_NP: MissileBase
	{
		model = "\A3\weapons_f\ammo\shell";
		deflectionSlowDown = 0;
		airFriction = 5;
		simulation = "shotMissile";
		effectsMissile = "EmptyEffect";
		effectFlare = "EmptyEffect";
		aiAmmoUsageFlags = "1 + 64 + 128";
		hit = 45;
		indirectHit = 40;
		indirectHitRange = 8;
		timeToLive = 20;
		explosive = 0.8;
		ExplosionEffects = "AAW_NP_Explosion";
		CraterEffects = "AAW_NPSmokeCrater";
		audibleFire = 20;
		SoundSetExplosion[] = {"ClusterBomb_Exp_SoundSet","ClusterBomb_Debris_SoundSet"};
	};
	/////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////Hydra////////////////////////////////////////////
	class Rocket_04_Cluster_F: Rocket_04_HE_F
	{
		explosive = 0;
		warheadName = "Cluster";
		triggerDistance = 50;
		submunitionInitSpeed = 50;
		simulation = "shotMissile";
		submunitionAmmo[] = {"AAW_Cluster_RK_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissonDisc",1};
		SoundSetExplosion[]={};
	};
	class Rocket_04_APM_F: Rocket_04_Cluster_F
	{
		warheadName = "AP";
		submunitionAmmo[] = {"AAW_APM_RK_Mother",1};
	};
	class Rocket_04_ATM_F: Rocket_04_Cluster_F
	{
		warheadName = "AT";
		submunitionAmmo[] = {"AAW_ATM_RK_Mother",1};
	};
	class Rocket_04_XM_F: Rocket_04_Cluster_F
	{
		warheadName = "APT";
		submunitionAmmo[] = {"AAW_XM_RK_Mother",1};
	};
	class Rocket_04_SW_F: Rocket_04_Cluster_F
	{
		warheadName = "Smoke";
		submunitionAmmo[] = {"AAW_SW_RK_Mother",1};
		airFriction = 0;
	};
	class Rocket_04_WP_F: Rocket_04_Cluster_F
	{
		warheadName = "Phosphorus";
		triggerDistance = 150;
		submunitionInitSpeed = 5;
		submunitionAmmo[] = {"AAW_WP_RK_Mother",1};
	};
	class Rocket_04_NP_F: Rocket_04_WP_F
	{
		warheadName = "Napalm";
		submunitionAmmo[] = {"AAW_NP_RK_Mother",1};
	};
	class Rocket_04_FG_F: Rocket_04_Cluster_F
	{
		warheadName = "AirBurst";
		triggerDistance = 100;
		submunitionAmmo[] = {"AAW_FG_RK_Mother",1};
	};
	class Rocket_04_SWP_F: Rocket_04_HE_F
	{
		warheadName = "Phosphorus";
		explosionEffects = "AAW_SWP_Explosion";
		CraterEffects = "AAW_SWP_Crater";
	};
	class Rocket_04_SNP_F: Rocket_04_HE_F
	{
		warheadName = "Napalm";
		explosionEffects = "AAW_SNP_Explosion";
		CraterEffects = "AAW_SNPSmokeCrater";
	};
	////////////////////////////////////////////DAR////////////////////////////////////////////
	class DAR_AP: Rocket_04_AP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		hit = 100;
		//submunitionAmmo[] = {"ammo_Penetrator_small_AP",0.05,"ammo_Penetrator_big_AP",0.95};
		submunitionAmmo = "ammo_Penetrator_Rocket_04_AP";
	};
	class DAR_Cluster: Rocket_04_Cluster_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		triggerDistance = 50;
	};
	class DAR_APM: Rocket_04_APM_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		triggerDistance = 50;
	};
	class DAR_ATM: Rocket_04_ATM_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		triggerDistance = 50;
	};
	class DAR_XM: Rocket_04_XM_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		triggerDistance = 50;
	};
	class DAR_SW: Rocket_04_SW_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
	};
	class DAR_WP: Rocket_04_WP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
	};
	class DAR_NP: Rocket_04_NP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
	};
	class DAR_FG: Rocket_04_FG_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
	};
	class DAR_SWP: Rocket_04_SWP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
	};
	class DAR_SNP: Rocket_04_SNP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
	};
	////////////////////////////////////////////Tratnyr////////////////////////////////////////////
	class Rocket_03_Cluster_F: Rocket_04_Cluster_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		triggerDistance = 50;
	};
	class Rocket_03_APM_F: Rocket_04_APM_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		triggerDistance = 50;
	};
	class Rocket_03_ATM_F: Rocket_04_ATM_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		triggerDistance = 50;
	};
	class Rocket_03_XM_F: Rocket_04_XM_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		triggerDistance = 50;
	};
	class Rocket_03_SW_F: Rocket_04_SW_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	class Rocket_03_WP_F: Rocket_04_WP_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	class Rocket_03_NP_F: Rocket_04_NP_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	class Rocket_03_FG_F: Rocket_04_FG_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	class Rocket_03_SWP_F: Rocket_04_SWP_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	class Rocket_03_SNP_F: Rocket_04_SNP_F
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	////////////////////////////////////////////SkyFire////////////////////////////////////////////
	class R_80mm_AP: DAR_AP
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_Cluster: Rocket_04_Cluster_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_APM: Rocket_04_APM_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_ATM: Rocket_04_ATM_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_XM: Rocket_04_XM_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_SW: Rocket_04_SW_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_WP: Rocket_04_WP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_NP: Rocket_04_NP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_FG: Rocket_04_FG_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_SWP: Rocket_04_SWP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
	class R_80mm_SNP: Rocket_04_SNP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
	};
};