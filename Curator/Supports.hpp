class CfgVehicles
{
	class Module_F;
	class ModuleOrdnance_F: Module_F
	{
		class Arguments
		{
			class Type
			{
				class values
				{
					class 82mm_WP
					{
						name = "WP 82mm Mortar";
						value = "Sh_82mm_WP_Module";
					};
				};
			};
		};
	};
	class ModuleOrdnanceMortar_F: ModuleOrdnance_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ModuleOrdnanceMortar_F";
		scope = 1;
		scopeCurator = 2;
		isGlobal = 1;
		category = "Ordnance";
		displayName = "$STR_A3_CfgVehicles_ModuleOrdnanceMortar_F";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = "ModuleOrdnanceMortar_F_Ammo";
		delete Arguments;
		simulation = "house";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceMortar.p3d";
		curatorCost = 1;
	};
	class ModuleOrdnanceRocket_F;
	class ModuleOrdnanceWPMortar_F: ModuleOrdnanceRocket_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Aaren";
		_generalMacro = "ModuleOrdnanceWPMortar_F";
		displayName = "WP 82mm Mortar";
		ammo = "Sh_82mm_WP_Module";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		curatorCost = 10;
	};
};
class CfgAmmo
{
	class Sh_155mm_WP;
	class Sh_155mm_WP_Module: Sh_155mm_WP
	{
		simulation = "shotSubmunitions";
	};
	class Sh_82mm_WP;
	class Sh_82mm_WP_Module: Sh_82mm_WP
	{
		simulation = "shotSubmunitions";
		submunitionAmmo[] = {"Sh_82mm_WP_Mother_Module",1};
	};
	class R_230mm_WP;
	class R_230mm_WP_Module: R_230mm_WP
	{
		simulation = "shotSubmunitions";
	};
	class Sh_155mm_NP;
	class Sh_155mm_NP_Module: Sh_155mm_NP
	{
		simulation = "shotSubmunitions";
	};
	class Sh_82mm_NP;
	class Sh_82mm_NP_Module: Sh_82mm_NP
	{
		simulation = "shotSubmunitions";
	};
	class R_230mm_NP;
	class R_230mm_NP_Module: R_230mm_NP
	{
		simulation = "shotSubmunitions";
	};
	
	//Shell
	class Sh_82mm_WP_Mother;
	class Sh_82mm_WP_Mother_Module: Sh_82mm_WP_Mother
	{
		submunitionAmmo[] = {"RK_Cluster_WP_Module",1};
	};
	class RK_Cluster_WP;
	class RK_Cluster_WP_Module: RK_Cluster_WP
	{
		thrust = 0;
	};
};