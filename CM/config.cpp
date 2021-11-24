class CfgPatches
{
	class ADtionRksECM
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class Mode_Burst;
class CfgWeapons
{
	class MGun;
	class VaECM_weap: MGun
	{
		scope=2;
		displayName="LWIRCM";
		magazines[]=
		{
			"VaECM_mag",
			"VaECM_mag_H"
		};
		magazineReloadTime=20;
		simulation="cmlauncher";
		modes[]=
		{
			"Burst1"
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\dummysound",
			2,
			1,
			5
		};
		class Burst1: Mode_Burst
		{
			displayName="ECM-5sec";
			reloadTime = 0.2;
			burst=25;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"MG8\AdtionRks\CM\start",
					0.8,
					1
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="";
			};
			showToPlayer=1;
			multiplier=1;
			minRange=0;
			maxRange=200;
			soundContinuos=1;
		};
	};
	class VaECM_weap_H: VaECM_weap
	{
		magazines[]=
		{
			"VaECM_mag",
			"VaECM_mag_H"
		};
		class Burst1: Burst1
		{
			displayName="ECM-10sec";
			burst=50;
			class StandardSound
			{
				begin1[]=
				{
					"MG8\AdtionRks\CM\start",
					1,
					1
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="";
			};
		};
	};
	class VaIUT_weap: VaECM_weap
	{
		magazines[]=
		{
			"VaIUT_mag"
		};
		displayName="AIA";
		class Burst1: Burst1
		{
			displayName="Flare-2Burst";
			reloadTime = 0.5;
			burst=2;
			maxRange=0;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class VaECM_mag: CA_Magazine
	{
		displayname="ECM";
		count=250;
		ammo="VaECM_ammo";
		initSpeed=30;
		weight=0;
		hardpoints[]=
		{
			"VaECM_cm"
		};
		pylonweapon="VaECM_weap";
	};
	class VaECM_mag_H: VaECM_mag
	{
		count=500;
		hardpoints[]=
		{
			"VaECM_cm_H"
		};
		pylonweapon="VaECM_weap_H";
	};
	class VaIUT_mag: CA_Magazine
	{
		displayname="Flare";
		count=30;
		ammo="VaIUT_ammo";
		initSpeed=30;
		weight=0;
		hardpoints[]=
		{
			"VaIUT_cm"
		};
		pylonweapon="VaIUT_weap";
	};
};
class CfgAmmo
{
	class BulletBase;
	class VaECM_ammo: BulletBase
	{
		cost=1;
		visibleFire=0;
		audibleFire=0;
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		timeToLive=2.25;
		thrustTime=3;
		airFriction=-0.0099999998;
		simulation="shotCM";
		weaponLockSystem = "2 + 8";
		model="\A3\weapons_f\empty";
		maxControlRange=-1;
		initTime=0;
		aiAmmoUsageFlags=1;
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			0.1,
			1
		};
		supersonicCrackNear[]=
		{
			"A3\sounds_f\dummysound",
			0,
			1,
			0
		};
		supersonicCrackFar[]=
		{
			"A3\sounds_f\dummysound",
			0,
			1,
			0
		};
		soundImpactDefault1[] = 
		{
			"A3\sounds_f\dummysound",
			0,
			1,
			0
		};
		effectsSmoke="EmptyEffect";
	};
	class F_40mm_White;
	class CMflareAmmo;
	class VaIUT_ammo: CMflareAmmo
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		simulation="shotCM";
		weaponLockSystem = 2;
		initTime = 2;
		timeToLive = 30;
		airFriction = -0.2;
		effectsSmoke = "AWS_CM_Flare";
		deflecting = 30;
	};
};