class CfgPatches
{
	class ADtionRksArty
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Static_F_Mortar_01",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Soft_F_Gamma_Truck_02",
			"A3_Armor_F_Gamma_MBT_02"
		};
		requiredVersion=0.1;
	};
};
class NewTurret;
class RCWSOptics;
class Optics_Armored;
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class LandVehicle;
	class Tank_F;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] += 
				{
					"8Rnd_82mm_WP_shells",
					"8Rnd_82mm_NP_shells"
				};
			};
		};	
	};
	class MBT_01_base_F: Tank_F
	{
		class Turrets
		{
			class MainTurret
			{
				class Turrets;
			};
		};
	};
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] += 
				{
					"6Rnd_155mm_Mo_WP",
					"6Rnd_155mm_Mo_NP"
				};
			};
		};
	};
	class MBT_01_mlrs_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] += 
				{
					"12Rnd_230mm_rockets_WP",
					"12Rnd_230mm_rockets_NP"
				};
			};
		};
	};
	class MBT_02_base_F: Tank_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] +=
				{
					"6Rnd_155mm_Mo_WP",
					"6Rnd_155mm_Mo_NP"
				};
			};
		};
	};
	class Truck_02_base_F;
	class Truck_02_MRL_base_F: Truck_02_base_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				magazines[] += 
				{
					"12Rnd_230mm_rockets_WP",
					"12Rnd_230mm_rockets_NP"
				};
			};
		};
	};
};
class CfgWeapons
{
	class CannonCore;
	class RocketPods;
	class mortar_82mm: CannonCore
	{
		magazines[] += 
		{
			"8Rnd_82mm_WP_shells",
			"8Rnd_82mm_NP_shells"
		};
	};
	class mortar_155mm_AMOS: CannonCore
	{
		magazines[] += 
		{
			"6Rnd_155mm_Mo_WP",
			"6Rnd_155mm_Mo_WP_O",
			"6Rnd_155mm_Mo_NP",
			"6Rnd_155mm_Mo_NP_O"
		};
	};
	class rockets_230mm_GAT: RocketPods
	{
		magazines[] += 
		{
			"12Rnd_230mm_rockets_WP",
			"12Rnd_230mm_rockets_NP"
		};
	};
};
class CfgMagazines
{
	class 6Rnd_155mm_Mo_smoke;
	class 12Rnd_230mm_rockets;
	class 8Rnd_82mm_Mo_shells;
	class 6Rnd_155mm_Mo_WP: 6Rnd_155mm_Mo_smoke
	{
		count = 6;
		ammo = "Sh_155mm_WP";
		displayName = "155mm Phosphorus Shell";
		displayNameShort = "Phosphorus";
		displayNameMFDFormat = "WP";
	};
	class 6Rnd_155mm_Mo_WP_O: 6Rnd_155mm_Mo_WP
	{
		displayNameMFDFormat = "WP";
	};
	class 6Rnd_155mm_Mo_NP: 6Rnd_155mm_Mo_smoke
	{
		count = 6;
		ammo = "Sh_155mm_NP";
		displayName = "155mm Napalm Shell";
		displayNameShort = "Napalm";
		displayNameMFDFormat = "NP";
	};
	class 6Rnd_155mm_Mo_NP_O: 6Rnd_155mm_Mo_NP
	{
	};
	class 12Rnd_230mm_rockets_WP: 12Rnd_230mm_rockets
	{
		displayName = "230mm Phosphorus Rocket";
		displayNameShort = "Phosphorus";
		displayNameMFDFormat = "WP";
		ammo = "R_230mm_WP";
	};
	class 12Rnd_230mm_rockets_NP: 12Rnd_230mm_rockets
	{
		displayName = "230mm Napalm Rocket";
		displayNameShort = "Napalm";
		displayNameMFDFormat = "NP";
		ammo = "R_230mm_NP";
	};
	class 8Rnd_82mm_WP_shells: 8Rnd_82mm_Mo_shells
	{
		displayName = "82mm Phosphorus Rocket";
		displayNameShort = "Phosphorus";
		ammo = "Sh_82mm_WP";
	};
	class 8Rnd_82mm_NP_shells: 8Rnd_82mm_Mo_shells
	{
		displayName = "82mm Napalm Rocket";
		displayNameShort = "Napalm";
		ammo = "Sh_82mm_NP";
	};
};
class CfgAmmo
{
	class Cluster_155mm_AMOS;
	class R_230mm_Cluster;
	class Sh_82mm_AMOS;
	class Sh_155mm_WP: Cluster_155mm_AMOS
	{
		submunitionAmmo[] = {"Sh_155mm_WP_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter",1};
	};
	class Sh_82mm_WP: Sh_82mm_AMOS
	{
		triggerDistance = 150;
		submunitionAmmo[] = {"Sh_82mm_WP_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter",1};
		triggerSpeedCoef[] = {0.2,0.5,0.8,1};
	};
	class R_230mm_WP: R_230mm_Cluster
	{
		triggerDistance = 150;
		submunitionAmmo[] = {"Sh_82mm_WP_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter",1};
	};
	class Sh_155mm_NP: Cluster_155mm_AMOS
	{
		submunitionAmmo[] = {"Sh_155mm_NP_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter",1};
	};
	class Sh_82mm_NP: Sh_82mm_AMOS
	{
		triggerDistance = 150;
		submunitionAmmo[] = {"Sh_82mm_NP_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter",1};
	};
	class R_230mm_NP: R_230mm_Cluster
	{
		triggerDistance = 150;
		submunitionAmmo[] = {"R_230mm_NP_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter",1};
	};
};