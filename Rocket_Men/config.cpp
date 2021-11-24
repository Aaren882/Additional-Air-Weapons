class CfgPatches
{
	class ADtionRksMn
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Tank_Launchers_MRAWS",
			"A3_Weapons_F_Exp_Launchers_RPG32",
			"A3_Weapons_F_Exp_Launchers_RPG7"
		};
		requiredVersion=0.1;
		author="Aaren ";
		authors[]=
		{
			"Aaren"
		};
	};
};
class CfgWeapons
{
	class Launcher_Base_F;
	class launch_RPG32_F: Launcher_Base_F
	{
		magazines[] = {"RPG32_F","RPG32_HE_F","RPG32_Cluster_F"};
		magazineWell[] = {"RPG32"};
	};
	class launch_RPG7_F: Launcher_Base_F
	{
		magazines[] = {"RPG7_F","RPG7_Cluster_F"};
		magazineWell[] = {"RPG7"};
	};
	class launch_MRAWS_base_F: Launcher_Base_F
	{
		magazines[] = {"MRAWS_HEAT_F","MRAWS_HE_F","MRAWS_HEAT55_F","MRAWS_Cluster_F"};
	};
	class launch_RPG32_ghex_F: launch_RPG32_F
	{
		magazines[] = {"RPG32_F","RPG32_HE_F","RPG32_Cluster_F"};
	};
};
class CfgVehicles
{
	class Launcher_Base_F;
	class Weapon_launch_RPG32_F: Launcher_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_launch_LAW0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Launchers";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class launch_RPG32_F
			{
				weapon = "launch_RPG32_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class RPG32_F
			{
				magazine = "RPG32_F";
				count = 1;
			};
		};
	};
	class Weapon_launch_RPG7_F: Launcher_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_launch_RPG7_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Launchers";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class launch_RPG7_F
			{
				weapon = "launch_RPG7_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class RPG7_F
			{
				magazine = "RPG7_F";
				count = 1;
			};
		};
	};
	class Weapon_launch_MRAWS_olive_F: Launcher_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_launch_MRAWS_olive_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Launchers";
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
		{
			class launch_MRAWS_olive_F
			{
				weapon = "launch_MRAWS_olive_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class MRAWS_HEAT_F
			{
				magazine = "MRAWS_HEAT_F";
				count = 1;
			};
		};
	};
};
class CfgMagazineWells
{
	class RPG32
	{
		BI_Magazines[] = {"RPG32_F","RPG32_HE_F","RPG32_Cluster_F"};
	};
	class RPG7
	{
		BI_Magazines[] = {"RPG7_F","RPG7_Cluster_F"};
	};
};
class CfgMagazines
{
	class RPG32_F;
	class RPG7_F;
	class MRAWS_HEAT_F;
	class RPG32_Cluster_F: RPG32_F
	{
		author = "Aaren";
		displayName = "RPG-42 Cluster Rocket";
		ammo = "R_PG32V_Cluster_F";
		displaynameshort = "Cluster Rocket";
	};
	class RPG7_Cluster_F: RPG7_F
	{
		author = "Aaren";
		displayName = "PG7-VM Cluster Rocket";
		ammo = "R_PG7_Cluster_F";
		displaynameshort = "Cluster Rocket";
	};
	class MRAWS_Cluster_F: MRAWS_HEAT_F
	{
		author = "Aaren";
		displayName = "MRAAWS Cluster Rocket";
		displaynameshort = "Cluster Rocket";
		descriptionShort = "$STR_A3_CfgMagazines_MRAWS_HEAT_descriptionshort0";
		model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F_item.p3d";
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT55_F_ca.paa";
		initSpeed = 350;
		ammo = "R_MRAAWS_Cluster_F";
		mass = 50;
	};
};

class CfgAmmo
{
	class Mo_cluster_AP;
	class R_PG32V_F;
	class R_PG7_F;
	class R_MRAAWS_HEAT_F;
	class RK_Cluster_RG: Mo_cluster_AP
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		deflectionSlowDown = 0;
		airFriction = 3;
		hit = 10;
		indirectHit = 5;
		indirectHitRange = 8;
		submunitionDirectionType = "submunitionAutoleveling";
		CraterEffects = "ClusterCraterEffects";
		CraterWaterEffects = "ClusterCraterWaterEffects";
		EffectFly = "ClusterEffectFly";
		ExplosionEffects = "ClusterExplosionEffects";
		effectsSmoke = "";
	};
	class R_PG32V_Cluster_F: R_PG32V_F
	{
		warheadName = "Cluster";
		CraterEffects = "EmptyEffect";
		explosionEffects = "EmptyEffect";
		simulation = "shotMissile";
		triggerDistance = 30;
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionAmmo[] = {"AWS_Men_Rocket_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissonDisc",1};
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
	};
	class R_PG7_Cluster_F: R_PG7_F
	{
		warheadName = "Cluster";
		CraterEffects = "EmptyEffect";
		explosionEffects = "EmptyEffect";
		simulation = "shotMissile";
		triggerDistance = 30;
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionAmmo[] = {"AWS_Men_Rocket_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissonDisc",1};
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
	};
	class R_MRAAWS_Cluster_F: R_MRAAWS_HEAT_F
	{
		warheadName = "Cluster";
		CraterEffects = "EmptyEffect";
		explosionEffects = "EmptyEffect";
		simulation = "shotMissile";
		triggerDistance = 30;
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionAmmo[] = {"AWS_Men_Rocket_Mother",1};
		submunitionConeAngle = 1;
		submunitionConeType[] = {"poissonDisc",1};
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 1;
	};
};