class CfgPatches
{
	class ADtionRksECMVC
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"ADtionRksECM",
			"A3_Air_F_EPC_Plane_CAS_01",
			"A3_Air_F_EPC_Plane_CAS_02",
			"A3_Air_F_Heli_Light_01",
			"A3_Air_F_Heli_Light_02",
			"A3_Air_F_EPB_Heli_Light_03",
			"A3_Air_F_Beta_Heli_Attack_01",
			"A3_Air_F_Beta_Heli_Attack_02",
			"A3_Air_F_Beta_Heli_Transport_01",
			"A3_Air_F_Beta_Heli_Transport_02",
			"A3_Air_F_Heli_Heli_Transport_03",
			"A3_Air_F_Heli_Heli_Transport_04",
			"A3_Drones_F_Air_F_Gamma_UAV_02",
			"A3_Air_F_Exp_UAV_03",
			"A3_Air_F_Jets_UAV_05",
			"A3_Air_F_Exp_VTOL_01",
			"A3_Air_F_Exp_VTOL_02",
			"A3_Air_F_Jets_Plane_Fighter_01",
			"A3_Air_F_Jets_Plane_Fighter_02",
			"A3_Air_F_Gamma_Plane_Fighter_03",
			"A3_Air_F_Jets_Plane_Fighter_04"
		};
	};
};
class CfgVehicles
{
	class Plane;
	class Plane_Base_F: Plane
	{
		class Components;
	};
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_GBU12"};
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 12;
						maxweight = 300;
						UIposition[] = {0.6,0.45};
					};
					class pylon2: pylon1
					{
						UIposition[] = {0.05,0.45};
						mirroredMissilePos = 1;
					};
					class pylon3
					{
						hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_AGM65_DUAL_RAIL","B_GBU12","B_GBU12_DUAL_RAIL","B_HARM_RAIL","B_SDB_QUAD_RAIL"};
						priority = 11;
						attachment = "PylonRack_Missile_AGM_02_x2";
						maxweight = 1050;
						UIposition[] = {0.55,0.35};
					};
					class pylon4: pylon3
					{
						UIposition[] = {0.1,0.35};
						mirroredMissilePos = 3;
					};
					class pylonBayRight1
					{
						hardpoints[] = {"B_BIM9X"};
						priority = 10;
						attachment = "PylonMissile_Missile_BIM9X_x1";
						maxweight = 1200;
						UIposition[] = {0.5,0.25};
						bay = 2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[] = {0.16,0.25};
						mirroredMissilePos = 5;
						bay = 1;
					};
					class pylonBayCenter1
					{
						hardpoints[] = {"B_AMRAAM_D_INT"};
						priority = 9;
						attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
						maxweight = 1200;
						UIposition[] = {0.33,0.3};
						bay = 3;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 7;
					};
					class pylonBayCenter3
					{
						hardpoints[] = {"B_AMRAAM_D_INT","B_SDB_QUAD_RAIL"};
						priority = 7;
						attachment = "";
						maxweight = 1200;
						UIposition[] = {0.33,0.4};
						bay = 3;
					};
					class pylonBayCenter4: pylonBayCenter3
					{
						UIposition[] = {0.33,0.45};
						mirroredMissilePos = 9;
					};
					class pylonBayCenter5
					{
						hardpoints[] = {"B_AMRAAM_D_INT","B_GBU12"};
						priority = 5;
						attachment = "PylonMissile_Bomb_GBU12_x1";
						maxweight = 1200;
						UIposition[] = {0.33,0.5};
						bay = 3;
					};
					class pylonBayCenter6: pylonBayCenter5
					{
						UIposition[] = {0.33,0.55};
						mirroredMissilePos = 11;
					};
					#include "CM_Config_P.hpp"
				};
			};
		};
	};
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					class pylonDummy1
					{
						attachment = "";
						UIposition[] = {10.0,10.0};
					};
					class pylonDummy2: pylonDummy1{};
					class pylonDummy3: pylonDummy1{};
					class pylonDummy4: pylonDummy1{};
					class pylonBayRight1
					{
						hardpoints[] = {"B_BIM9X"};
						priority = 10;
						attachment = "PylonMissile_Missile_BIM9X_x1";
						maxweight = 1200;
						UIposition[] = {0.5,0.25};
						bay = 2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[] = {0.16,0.25};
						mirroredMissilePos = 5;
						bay = 1;
					};
					class pylonBayCenter1
					{
						hardpoints[] = {"B_AMRAAM_D_INT"};
						priority = 9;
						attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
						maxweight = 1200;
						UIposition[] = {0.33,0.3};
						bay = 3;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 7;
					};
					class pylonBayCenter3
					{
						hardpoints[] = {"B_AMRAAM_D_INT","B_SDB_QUAD_RAIL"};
						priority = 7;
						attachment = "";
						maxweight = 1200;
						UIposition[] = {0.33,0.4};
						bay = 3;
					};
					class pylonBayCenter4: pylonBayCenter3
					{
						UIposition[] = {0.33,0.45};
						mirroredMissilePos = 9;
					};
					class pylonBayCenter5
					{
						hardpoints[] = {"B_AMRAAM_D_INT","B_GBU12"};
						priority = 5;
						attachment = "PylonMissile_Bomb_GBU12_x1";
						maxweight = 1200;
						UIposition[] = {0.33,0.5};
						bay = 3;
					};
					class pylonBayCenter6: pylonBayCenter5
					{
						UIposition[] = {0.33,0.55};
						mirroredMissilePos = 11;
					};
					#include "CM_Config_P.hpp"
				};
			};
		};
	};
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"O_R73","O_R77"};
						attachment = "PylonMissile_Missile_AA_R73_x1";
						priority = 13;
						maxweight = 300;
						UIposition[] = {0.6,0.45};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.05,0.45};
						mirroredMissilePos = 1;
					};
					class pylons3
					{
						hardpoints[] = {"O_R73","O_R77","O_KH25","O_KAB250_BOMB"};
						attachment = "PylonMissile_Missile_AA_R77_x1";
						priority = 11;
						maxweight = 1050;
						UIposition[] = {0.55,0.35};
					};
					class pylons4: pylons3
					{
						UIposition[] = {0.1,0.35};
						mirroredMissilePos = 3;
					};
					class pylons5
					{
						hardpoints[] = {"O_R73","O_R77","O_KH25","O_KAB250_BOMB","O_KH58"};
						attachment = "PylonMissile_Bomb_KAB250_x1";
						priority = 9;
						maxweight = 1200;
						UIposition[] = {0.5,0.25};
					};
					class pylons6: pylons5
					{
						UIposition[] = {0.15,0.25};
						mirroredMissilePos = 5;
					};
					class pylonBayRight1
					{
						hardpoints[] = {"O_R73"};
						priority = 7;
						attachment = "PylonMissile_Missile_AA_R73_x1";
						maxweight = 300;
						UIposition[] = {0.45,0.15};
						bay = 2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[] = {0.2,0.15};
						mirroredMissilePos = 7;
						bay = 1;
					};
					class pylonBayRight2
					{
						hardpoints[] = {"O_R77"};
						priority = 5;
						attachment = "PylonMissile_Missile_AA_R77_x1";
						maxweight = 750;
						UIposition[] = {0.33,0.3};
						bay = 4;
					};
					class pylonBayLeft2: pylonBayRight2
					{
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 9;
						bay = 3;
					};
					class pylonBayCenter1
					{
						hardpoints[] = {"O_R77_INT"};
						priority = 2;
						attachment = "PylonMissile_Missile_AA_R77_INT_x1";
						maxweight = 750;
						UIposition[] = {0.33,0.45};
						bay = 5;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						UIposition[] = {0.33,0.5};
						mirroredMissilePos = 11;
					};
					class pylonBayCenter3
					{
						hardpoints[] = {"O_R77_INT","O_KH25_INT","O_KAB250_BOMB","O_KH58_INT"};
						priority = 1;
						attachment = "PylonMissile_Bomb_KAB250_x1";
						maxweight = 1200;
						UIposition[] = {0.33,0.55};
						bay = 5;
					};
					#include "CM_Config_P.hpp"
				};
			};
		};
	};
	class O_Plane_Fighter_02_Stealth_F: Plane_Fighter_02_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class pylons
				{
					class pylonDummy1
					{
						attachment = "";
						UIposition[] = {10.0,10.0};
					};
					class pylonDummy2: pylonDummy1{};
					class pylonDummy3: pylonDummy1{};
					class pylonDummy4: pylonDummy1{};
					class pylonDummy5: pylonDummy1{};
					class pylonDummy6: pylonDummy1{};
					class pylonBayRight1
					{
						hardpoints[] = {"O_R73"};
						priority = 7;
						attachment = "PylonMissile_Missile_AA_R73_x1";
						maxweight = 300;
						UIposition[] = {0.45,0.15};
						bay = 2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[] = {0.2,0.15};
						mirroredMissilePos = 7;
						bay = 1;
					};
					class pylonBayRight2
					{
						hardpoints[] = {"O_R77"};
						priority = 5;
						attachment = "PylonMissile_Missile_AA_R77_x1";
						maxweight = 750;
						UIposition[] = {0.33,0.3};
						bay = 4;
					};
					class pylonBayLeft2: pylonBayRight2
					{
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 9;
						bay = 3;
					};
					class pylonBayCenter1
					{
						hardpoints[] = {"O_R77_INT"};
						priority = 2;
						attachment = "PylonMissile_Missile_AA_R77_INT_x1";
						maxweight = 750;
						UIposition[] = {0.33,0.45};
						bay = 5;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						UIposition[] = {0.33,0.5};
						mirroredMissilePos = 11;
					};
					class pylonBayCenter3
					{
						hardpoints[] = {"O_R77_INT","O_KH25_INT","O_KAB250_BOMB","O_KH58_INT"};
						priority = 1;
						attachment = "PylonMissile_Bomb_KAB250_x1";
						maxweight = 1200;
						UIposition[] = {0.33,0.55};
						bay = 5;
					};
					#include "CM_Config_P.hpp"
				};
			};
		};
	};
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_04\Data\UI\Fighter_04_3DEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[] = {"I_BIM9X","I_AMRAAM_C_RAIL"};
						attachment = "PylonMissile_Missile_BIM9X_x1";
						priority = 5;
						maxweight = 300;
						UIposition[] = {0.55,0.4};
					};
					class pylon2: pylon1
					{
						UIposition[] = {0.1,0.4};
						mirroredMissilePos = 1;
					};
					class pylon3
					{
						hardpoints[] = {"I_BIM9X_RAIL","I_AMRAAM_C_RAIL","I_AGM65_RAIL"};
						priority = 4;
						attachment = "PylonRack_Missile_AGM_02_x1";
						maxweight = 750;
						UIposition[] = {0.5,0.35};
					};
					class Pylon4: pylon3
					{
						UIposition[] = {0.15,0.35};
						mirroredMissilePos = 3;
					};
					class pylon5
					{
						hardpoints[] = {"I_BIM9X_RAIL","I_BIM9X_DUAL_RAIL","I_AMRAAM_C_RAIL","I_AMRAAM_C_DUAL_RAIL","I_AGM65_RAIL","I_AGM65_DUAL_RAIL","I_GBU12"};
						priority = 3;
						attachment = "PylonRack_Missile_AMRAAM_C_x1";
						maxweight = 1200;
						UIposition[] = {0.45,0.3};
					};
					class Pylon6: pylon5
					{
						UIposition[] = {0.2,0.3};
						mirroredMissilePos = 5;
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"VaECM_cm"
						};
						priority=1;
						attachment="VaECM_mag";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
			};
		};
	};
	class Plane_CAS_01_base_F: Plane_Base_F
	{
		class Components;
	};
	class B_Plane_CAS_01_F: Plane_CAS_01_base_F
	{
		weapons[] = 
		{
			"Gatling_30mm_Plane_CAS_01_F",
			"Missile_AA_04_Plane_CAS_01_F",
			"Missile_AGM_02_Plane_CAS_01_F",
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"Bomb_04_Plane_CAS_01_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			"VaECM_weap"
		};
		magazines[] = 
		{
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine",
			"VaECM_mag"
		};
	};
	class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					#include "CM_Config_P.hpp"
				};
			};
		};
	};
	class Plane_CAS_02_base_F: Plane_Base_F
	{
		class Components;
	};
	class Plane_CAS_02_dynamicLoadout_base_F: Plane_CAS_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] = {"O_MISSILE_PYLON","UNI_SCALPEL"};
						attachment = "PylonRack_1Rnd_Missile_AA_03_F";
						priority = 5;
						maxweight = 150;
						UIposition[] = {0.35,0.0};
					};
					class Pylons2: Pylons1
					{
						priority = 4;
						attachment = "PylonRack_1Rnd_Missile_AGM_01_F";
						maxweight = 500;
						UIposition[] = {0.345,0.05};
					};
					class Pylons3: Pylons1
					{
						hardpoints[] = {"O_BOMB_PYLON","O_MISSILE_PYLON","UNI_SCALPEL"};
						priority = 3;
						attachment = "PylonRack_20Rnd_Rocket_03_HE_F";
						maxweight = 1050;
						UIposition[] = {0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						hardpoints[] = {"O_BOMB_PYLON","O_MISSILE_PYLON","UNI_SCALPEL"};
						priority = 2;
						attachment = "PylonRack_1Rnd_Missile_AGM_01_F";
						maxweight = 1200;
						UIposition[] = {0.33,0.2};
					};
					class Pylons5: Pylons1
					{
						hardpoints[] = {"O_BOMB_PYLON","O_MISSILE_PYLON","UNI_SCALPEL"};
						priority = 1;
						attachment = "PylonMissile_1Rnd_Bomb_03_F";
						maxweight = 1200;
						UIposition[] = {0.33,0.25};
					};
					class Pylons6: Pylons5
					{
						UIposition[] = {0.33,0.3};
						mirroredMissilePos = 5;
					};
					class Pylons7: Pylons4
					{
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 4;
					};
					class Pylons8: Pylons3
					{
						UIposition[] = {0.34,0.45};
						mirroredMissilePos = 3;
						attachment = "PylonRack_20Rnd_Rocket_03_AP_F";
					};
					class Pylons9: Pylons2
					{
						UIposition[] = {0.345,0.5};
						mirroredMissilePos = 2;
					};
					class Pylons10: Pylons1
					{
						UIposition[] = {0.35,0.55};
						mirroredMissilePos = 1;
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"VaECM_cm"
						};
						priority=1;
						attachment="VaECM_mag";
						maxweight=800;
						UIposition[] = {0.6,0.45};
					};
					class Illuminate
					{
						hardpoints[]=
						{
							"VaIUT_cm"
						};
						priority=1;
						attachment="VaIUT_mag";
						maxweight=800;
						UIposition[]={0.6,0.2};
					};
				};
			};
		};
	};
	class UAV: Plane
	{
		class Components;
	};
	class UAV_02_base_F: UAV
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";
				class pylons
				{
					#include "CM_Config_P.hpp"
				};
				class presets
				{
					class empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class default
					{
						displayName = "Default";
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","VaECM_mag","VaIUT_cm"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","VaECM_mag","VaIUT_cm"};
					};
				};
			};
		};
	};
	class UAV_02_CAS_base_F: UAV_02_base_F{};
	class UAV_02_dynamicLoadout_base_F: UAV_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";
				class pylons
				{
					#include "CM_Config_P.hpp"
				};
				class presets
				{
					class empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class default
					{
						displayName = "Default";
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","VaECM_mag","VaIUT_cm"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","VaECM_mag","VaIUT_cm"};
					};
				};
			};
		};
	};
	class O_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";
				class pylons
				{
					#include "CM_Config_P.hpp"
				};
				class presets
				{
					class empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class default
					{
						displayName = "Default";
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","VaECM_mag","VaIUT_cm"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","VaECM_mag","VaIUT_cm"};
					};
				};
			};
		};
	};
	class UAV_05_Base_F: UAV
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_Jets\UAV_05\Data\UI\UAV_05_3DEN_CA.paa";
				class pylons
				{
					#include "CM_Config_P.hpp"
				};
				class Presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonMissile_Bomb_GBU12_x1","PylonMissile_Bomb_GBU12_x1","VaECM_mag","VaIUT_mag"};
					};
					class AT
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonMissile_Missile_AGM_02_x2","PylonMissile_Missile_AGM_02_x2","VaECM_mag","VaIUT_mag"};
					};
				};
			};
		};
	};
	/*class B_UAV_05_F: UAV_05_Base_F
	{
		
	};*/
	
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Components;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Components;
	};
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		weapons[] = {"VaECM_weap_H"};
		magazines[] = {"VaECM_mag_H"};
	};
	class Heli_Light_01_armed_base_F: Heli_Light_01_base_F
	{
		class Components;
	};
	class Heli_Light_01_dynamicLoadout_base_F: Heli_Light_01_armed_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F\Heli_Light_01\Data\UI\Heli_Light_01_3DEN_CA.paa";
				class Pylons
				{
					class cmDispenser
					{
						hardpoints[]=
						{
							"VaECM_cm_H"
						};
						priority=1;
						attachment="VaECM_mag_H";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
					class Illuminate
					{
						hardpoints[]=
						{
							"VaIUT_cm"
						};
						priority=2;
						attachment="VaIUT_mag";
						maxweight=800;
						UIposition[]={0.6,0.2};
					};
				};
				class Presets
				{
					class Default
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
					class AT
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
				};
			};
		};
	};
	
	class Heli_Light_02_base_F: Helicopter_Base_F
	{
		class Components;
	};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class cmDispenser
					{
						hardpoints[]=
						{
							"VaECM_cm_H"
						};
						priority=1;
						attachment="VaECM_mag_H";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
					class Illuminate
					{
						hardpoints[]=
						{
							"VaIUT_cm"
						};
						priority=2;
						attachment="VaIUT_mag";
						maxweight=800;
						UIposition[]={0.6,0.2};
					};
				};
				class Presets
				{
					class Default
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
					class AT
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
					class CAS
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
				};
			};
		};
	};
	
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Components;
	};
	class Heli_Attack_01_dynamicLoadout_base_F: Heli_Attack_01_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
			};
		};
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class Components;
	};
	class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
			};
		};
	};
	
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_3DEN_CA.paa";
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
			};
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_3DEN_CA.paa";
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
			};
		};
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_3DEN_CA.paa";
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
			};
		};
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_3DEN_CA.paa";
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
			};
		};
	};
	
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		class Components;
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
				class Presets
				{
					class Default
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
					class AT
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
				};
			};
		};
	};
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_EPB\Heli_Light_03\data\UI\Heli_Light_03_3DEN_CA.paa";
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
				class Presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"VaECM_mag_H","VaIUT_mag"};
					};
				};
			};
		};
	};
	
	class UAV_03_base_F: Helicopter_Base_F
	{
		class Components;
	};
	class UAV_03_dynamicLoadout_base_F: UAV_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
				class Presets
				{
					class Default
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
					class AT
					{
						attachment[] += {"VaECM_mag_H","VaIUT_mag"};
					};
				};
			};
		};
	};
	class VTOL_Base_F: Plane_Base_F
	{
		class Components;
	};
	class VTOL_01_base_F: VTOL_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					#include "CM_Config_H.hpp"
				};
				class Presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"VaECM_mag","VaIUT_mag"};
					};
				};
			};
		};
	};
	class VTOL_02_base_F: VTOL_Base_F
	{
		class Components;
	};
	class VTOL_02_vehicle_base_F: VTOL_02_base_F
	{
		class Components: Components{};
	};
	class VTOL_02_infantry_base_F: VTOL_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						turret[] = {0};
						UIposition[] = {0.35,0.16};
					};
					class PylonRight2: PylonRight1
					{
						attachment = "PylonRack_19Rnd_Rocket_Skyfire";
						priority = 4;
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						UIposition[] = {0.33,0.21};
					};
					class PylonLeft2: PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.33,0.34};
					};
					class PylonLeft1: PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.39};
					};
					#include "CM_Config_P.hpp"
				};
				class Presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_4Rnd_LG_scalpel","VaECM_mag","VaIUT_mag"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","VaECM_mag","VaIUT_mag"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonRack_19Rnd_Rocket_Skyfire","PylonMissile_1Rnd_Bomb_03_F","PylonMissile_1Rnd_Bomb_03_F","PylonRack_19Rnd_Rocket_Skyfire","VaECM_mag","VaIUT_mag"};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_4Rnd_LG_scalpel","VaECM_mag","VaIUT_mag"};
					};
				};
			};
		};
	};
	class VTOL_02_infantry_dynamicLoadout_base_F: VTOL_02_infantry_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					#include "CM_Config_P.hpp"
				};
				class presets
				{
					class Default
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class AT
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class CAS
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class HAT
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
				};
			};
		};
	};
	class VTOL_02_vehicle_dynamicLoadout_base_F: VTOL_02_vehicle_base_F
	{
		class TransportPylonsComponent
			{
				class Pylons
				{
					#include "CM_Config_P.hpp"
				};
				class presets
				{
					class Default
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class AT
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class CAS
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class HAT
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
				};
			};
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class Components;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					#include "CM_Config_P.hpp"
				};
				class Presets
				{
					class Default
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class AA
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class AT
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class CAS
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
				};
			};
		};
	};
};