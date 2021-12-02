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
				class 155mm_WP
				{
					name = "WP 155mm Howitzer";
					value = "Sh_155mm_WP_Module";
				};
				class 230mm_WP
				{
					name = "WP 230mm Rocket";
					value = "R_230mm_WP_Module";
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
class ModuleOrdnanceWPHowitzer_F: ModuleOrdnanceWPMortar_F
{
	_generalMacro = "ModuleOrdnanceWPHowitzer_F";
	displayName = "WP 155mm Howitzer";
	ammo = "Sh_155mm_WP_Module";
	portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceHowitzer_ca.paa";
};
class ModuleOrdnanceWPRocket_F: ModuleOrdnanceWPMortar_F
{
	_generalMacro = "ModuleOrdnanceWPRocket_F";
	displayName = "WP 230mm Rocket";
	ammo = "R_230mm_WP_Module";
	portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceRocket_ca.paa";
};