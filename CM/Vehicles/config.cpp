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
			"A3_Air_F_Jets_Plane_Fighter_04",
			"A3_Air_F_Orange"
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
				class pylons
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
						attachment[] = {"PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_AMRAAM_D_x2","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","VaECM_mag","VaIUT_mag"};
					};
					class CAS
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class Cluster
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
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
				class pylons
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
						attachment[] = {"","","","","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","VaECM_mag","VaIUT_mag"};
					};
					class Cluster
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
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
				class pylons
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
					class CAS
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class Cluster
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
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
				class pylons
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
					class CAS
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
					class Cluster
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
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
				class pylons
				{
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
				class Presets
				{
					class Default
					{
						attachment[] += {"VaECM_mag"};
					};
					class AA
					{
						attachment[] += {"VaECM_mag"};
					};
					class AT
					{
						attachment[] += {"VaECM_mag"};
					};
					class CAS
					{
						attachment[] += {"VaECM_mag"};
					};
					class Cluster
					{
						attachment[] += {"VaECM_mag"};
					};
				};
			};
		};
	};
	class Plane_CAS_01_base_F: Plane_Base_F
	{
		class Components;
		weapons[] += 
		{
			"VaECM_weap",
			"VaIUT_weap"
		};
		magazines[] += 
		{
			"VaECM_mag",
			"VaIUT_mag"
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
					class Cluster
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
					};
				};
			};
		};
	};
	class Plane_CAS_02_base_F: Plane_Base_F
	{
		class Components;
		weapons[] += 
		{
			"VaECM_weap",
			"VaIUT_weap"
		};
		magazines[] += 
		{
			"VaECM_mag",
			"VaIUT_mag"
		};
	};
	class Plane_CAS_02_dynamicLoadout_base_F: Plane_CAS_02_base_F
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
					class Cluster
					{
						attachment[] += {"VaECM_mag","VaIUT_mag"};
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
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","VaECM_mag","VaIUT_mag"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","VaECM_mag","VaIUT_mag"};
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
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","VaECM_mag","VaIUT_mag"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","VaECM_mag","VaIUT_mag"};
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
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","VaECM_mag","VaIUT_mag"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","VaECM_mag","VaIUT_mag"};
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