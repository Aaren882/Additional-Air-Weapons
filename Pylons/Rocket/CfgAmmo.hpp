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
		hit = 200;
		triggerOnImpact = 1;
		laserLock = 1;
		irLock = 1;
		nvLock = 1;
		submunitionConeAngle = 30;
		submunitionAmmo[] = {"ammo_Penetrator_small_AP",0.05,"ammo_Penetrator_big_AP",0.95};
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionConeType[] = {"poissonDisc",10};
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
		//sideAirFriction = 0.1;
		timeToLive = 30;
		thrustTime = 30;
		thrust = 20;
		maxSpeed = 100;
		deflecting = 40;
		airFriction = 2;
		explosionEffects = "WPSmokeBurst";
		CraterEffects = "WP_Crater";
		EffectsFire = "EmptyEffect";
		effectsMissile = "AAW_WP_Effect";
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
	class Cluster_WP_SideEffect: RK_Cluster_WP
	{
		timeToLive = 0.1;
		airFriction = 4;
		explosionEffects = "AAW_Side_Busrt_Effect";
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
		CraterEffects = "AAW_NPSmokeBurst";
		audibleFire = 20;
		SoundSetExplosion[] = {""};
	};
	/////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////Hydra////////////////////////////////////////////
	class Rocket_04_Cluster_F: Rocket_04_HE_F
	{
		warheadName = "Cluster";
		triggerDistance = 50;
		submunitionInitSpeed =50;
		simulation = "shotMissile";
		submunitionAmmo[] = {"AAW_Cluster_RK_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissonDisc",1};
	};
	class Rocket_04_APM_F: Rocket_04_HE_F
	{
		warheadName = "AP";
		simulation = "shotMissile";
		triggerDistance = 50;
		submunitionInitSpeed =50;
		submunitionAmmo[] = {"AAW_APM_RK_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissonDisc",1};
	};
	class Rocket_04_ATM_F: Rocket_04_HE_F
	{
		warheadName = "AT";
		simulation = "shotMissile";
		triggerDistance = 50;
		submunitionInitSpeed =50;
		submunitionAmmo[] = {"AAW_ATM_RK_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissonDisc",1};
	};
	class Rocket_04_XM_F: Rocket_04_HE_F
	{
		warheadName = "APT";
		simulation = "shotMissile";
		triggerDistance = 50;
		submunitionInitSpeed =50;
		submunitionAmmo[] = {"AAW_XM_RK_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissonDisc",1};
	};
	class Rocket_04_SW_F: Rocket_04_HE_F
	{
		warheadName = "Smoke";
		simulation = "shotMissile";
		submunitionAmmo[] = {"AAW_SW_RK_Mother",1};
		submunitionConeType[] = {"randomcenter",1};
		submunitionConeAngle = 1;
		triggerDistance = 50;
		cost = 200;
		airFriction = 0;
		muzzleEffect = "";
		hit = 1;
	};
	class Rocket_04_WP_F: Rocket_04_HE_F
	{
		warheadName = "Phosphorus";
		simulation = "shotMissile";
		triggerDistance = 150;
		submunitionInitSpeed =50;
		submunitionAmmo[] = {"AAW_WP_RK_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter",1};
	};
	class Rocket_04_NP_F: Rocket_04_HE_F
	{
		warheadName = "Napalm";
		simulation = "shotMissile";
		triggerDistance = 150;
		submunitionInitSpeed =50;
		submunitionAmmo[] = {"AAW_NP_RK_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter",1};
	};
	////////////////////////////////////////////DAR////////////////////////////////////////////
	class DAR_AP: Rocket_04_AP_F
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		hit = 200;
		/*triggerOnImpact = 1;
		laserLock = 1;
		irLock = 1;
		nvLock = 1;*/
		submunitionConeAngle = 30;
		submunitionAmmo[] = {"ammo_Penetrator_small_AP",0.05,"ammo_Penetrator_big_AP",0.95};
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionConeType[] = {"poissonDisc",5};
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
};