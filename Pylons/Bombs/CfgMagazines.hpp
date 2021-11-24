class CfgMagazines
{
	class magazine_Bomb_SDB_x1;
	class 2Rnd_Mk82;
	class PylonMissile_1Rnd_BombCluster_01_F;
	class PylonRack_2Rnd_BombCluster_01_F;
	class PylonMissile_1Rnd_BombCluster_02_F;
	class PylonMissile_1Rnd_BombCluster_03_F;
	class PylonRack_2Rnd_BombCluster_03_F;
	class PylonRack_Bomb_SDB_x4: magazine_Bomb_SDB_x1
	{
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class PylonMissile_1Rnd_Mk82_F: 2Rnd_Mk82
	{
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		#include "..\Pylons\West_Bombs_1.hpp"
		pylonWeapon = "Mk82BombLauncher";
	};
	//1
	class DSCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_DS_F";
		displayName = "CBU-85 Cluster DS Bomb";
		displayNameShort = "Cluster DS";
		pylonWeapon = "DSBombCluster_01_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class PHCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_PH_F";
		displayName = "CBU-85 Cluster SFW Bomb";
		displayNameShort = "SFW";
		pylonWeapon = "PHBombCluster_01_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class APCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_AP_F";
		displayName = "CBU-85 AP Mines Cluster Bomb";
		displayNameShort = "AP Mines";
		pylonWeapon = "APBombCluster_01_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class ATCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_AT_F";
		displayName = "CBU-85 AT Mines Cluster Bomb";
		displayNameShort = "AT Mines";
		pylonWeapon = "ATBombCluster_01_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class MXCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_MX_F";
		displayName = "CBU-85 Mix Mines Cluster Bomb";
		displayNameShort = "Mix Mines";
		pylonWeapon = "MXBombCluster_01_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class SWCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_SW_F";
		displayName = "CBU-85 Smoke Cluster Bomb";
		displayNameShort = "Smoke";
		pylonWeapon = "SWBombCluster_01_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class WPCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_WP_F";
		displayName = "CBU-85 Phosphorus Cluster Bomb";
		displayNameShort = "Phosphorus";
		pylonWeapon = "WPBombCluster_01_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class NPCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_NP_F";
		displayName = "CBU-85 Napalm Cluster Bomb";
		displayNameShort = "Napalm";
		pylonWeapon = "NPBombCluster_01_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	//2Rnd
	class 2Rnd_DSCluster_01_F: PylonRack_2Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_DS_F";
		displayName = "CBU-85 Cluster DS Bomb x2";
		displayNameShort = "Cluster DS";
		pylonWeapon = "DSBombCluster_01_F";
		
	};
	class 2Rnd_PHCluster_01_F: PylonRack_2Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_PH_F";
		displayName = "CBU-85 Cluster SFW Bomb x2";
		displayNameShort = "SFW";
		pylonWeapon = "PHBombCluster_01_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_APCluster_01_F: PylonRack_2Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_AP_F";
		displayName = "CBU-85 AP Mines Cluster Bomb x2";
		displayNameShort = "AP Mines";
		pylonWeapon = "APBombCluster_01_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_ATCluster_01_F: PylonRack_2Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_AT_F";
		displayName = "CBU-85 AT Mines Cluster Bomb x2";
		displayNameShort = "AT Mines";
		pylonWeapon = "ATBombCluster_01_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_MXCluster_01_F: PylonRack_2Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_MX_F";
		displayName = "CBU-85 Mix Mines Cluster Bomb x2";
		displayNameShort = "Mix Mines";
		pylonWeapon = "MXBombCluster_01_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_SWCluster_01_F: PylonRack_2Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_SW_F";
		displayName = "CBU-85 Smoke Cluster Bomb x2";
		displayNameShort = "Smoke";
		pylonWeapon = "SWBombCluster_01_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_WPCluster_01_F: PylonRack_2Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_WP_F";
		displayName = "CBU-85 Phosphorus Cluster Bomb x2";
		displayNameShort = "Phosphorus";
		pylonWeapon = "WPBombCluster_01_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_NPCluster_01_F: PylonRack_2Rnd_BombCluster_01_F
	{
		ammo = "BombCluster_01_NP_F";
		displayName = "CBU-85 Napalm Cluster Bomb x2";
		displayNameShort = "Napalm";
		pylonWeapon = "NPBombCluster_01_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	//2
	class DSCluster_02_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		ammo = "BombCluster_02_DS_F";
		displayName = "RBK-500F Cluster DS Bomb";
		displayNameShort = "Cluster DS";
		pylonWeapon = "DSBombCluster_02_F";
		#include "..\Pylons\East_Bombs.hpp"
	};
	class PHCluster_02_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		ammo = "BombCluster_02_PH_F";
		displayName = "RBK-500F Cluster SFW Bomb";
		displayNameShort = "SFW";
		pylonWeapon = "PHBombCluster_02_F";
		#include "..\Pylons\East_Bombs.hpp"
	};
	class APCluster_02_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		ammo = "BombCluster_02_AP_F";
		displayName = "RBK-500F AP Mines Cluster Bomb";
		displayNameShort = "AP Mines";
		pylonWeapon = "APBombCluster_02_F";
		#include "..\Pylons\East_Bombs.hpp"
	};
	class ATCluster_02_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		ammo = "BombCluster_02_AT_F";
		displayName = "RBK-500F AT Mines Cluster Bomb";
		displayNameShort = "AT Mines";
		pylonWeapon = "ATBombCluster_02_F";
		#include "..\Pylons\East_Bombs.hpp"
	};
	class MXCluster_02_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		ammo = "BombCluster_02_MX_F";
		displayName = "RBK-500F Mix Mines Cluster Bomb";
		displayNameShort = "Mix Mines";
		pylonWeapon = "MXBombCluster_02_F";
		#include "..\Pylons\East_Bombs.hpp"
	};
	class SWCluster_02_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		ammo = "BombCluster_02_SW_F";
		displayName = "RBK-500F Smoke Cluster Bomb";
		displayNameShort = "Smoke";
		pylonWeapon = "SWBombCluster_02_F";
		#include "..\Pylons\East_Bombs.hpp"
	};
	class WPCluster_02_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		ammo = "BombCluster_02_WP_F";
		displayName = "RBK-500F Phosphorus Cluster Bomb";
		displayNameShort = "Phosphorus";
		pylonWeapon = "WPBombCluster_02_F";
		#include "..\Pylons\East_Bombs.hpp"
	};
	class NPCluster_02_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		ammo = "BombCluster_02_NP_F";
		displayName = "RBK-500F Napalm Cluster Bomb";
		displayNameShort = "Napalm";
		pylonWeapon = "NPBombCluster_02_F";
		#include "..\Pylons\East_Bombs.hpp"
	};
	//3
	class DSCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_DS_F";
		displayName = "BL778 Cluster DS Bomb";
		displayNameShort = "Cluster DS";
		pylonWeapon = "DSBombCluster_03_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class PHCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_PH_F";
		displayName = "BL778 Cluster SFW Bomb";
		displayNameShort = "SFW";
		pylonWeapon = "PHBombCluster_03_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class APCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_AP_F";
		displayName = "BL778 AP Mines Cluster Bomb";
		displayNameShort = "AP Mines";
		pylonWeapon = "APBombCluster_03_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class ATCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_AT_F";
		displayName = "BL778 AT Mines Cluster Bomb";
		displayNameShort = "AT Mines";
		pylonWeapon = "ATBombCluster_03_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class MXCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_MX_F";
		displayName = "BL778 Mix Mines Cluster Bomb";
		displayNameShort = "Mix Mines";
		pylonWeapon = "MXBombCluster_03_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class SWCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_SW_F";
		displayName = "BL778 Smoke Cluster Bomb";
		displayNameShort = "Smoke";
		pylonWeapon = "SWBombCluster_03_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class WPCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_WP_F";
		displayName = "BL778 Phosphorus Cluster Bomb";
		displayNameShort = "Phosphorus";
		pylonWeapon = "WPBombCluster_03_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	class NPCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_NP_F";
		displayName = "BL778 Napalm Cluster Bomb";
		displayNameShort = "Napalm";
		pylonWeapon = "NPBombCluster_03_F";
		#include "..\Pylons\West_Bombs_1.hpp"
	};
	//2Rnd
	class 2Rnd_DSCluster_03_F: PylonRack_2Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_DS_F";
		displayName = "BL778 Cluster DS Bomb x2";
		displayNameShort = "Cluster DS";
		pylonWeapon = "DSBombCluster_03_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_PHCluster_03_F: PylonRack_2Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_PH_F";
		displayName = "BL778 Cluster SFW Bomb x2";
		displayNameShort = "SFW";
		pylonWeapon = "PHBombCluster_03_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_APCluster_03_F: PylonRack_2Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_AP_F";
		displayName = "BL778 AP Mines Cluster Bomb x2";
		displayNameShort = "AP Mines";
		pylonWeapon = "APBombCluster_03_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_ATCluster_03_F: PylonRack_2Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_AT_F";
		displayName = "BL778 AT Mines Cluster Bomb x2";
		displayNameShort = "AT Mines";
		pylonWeapon = "ATBombCluster_03_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_MXCluster_03_F: PylonRack_2Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_MX_F";
		displayName = "BL778 Mix Mines Cluster Bomb x2";
		displayNameShort = "Mix Mines";
		pylonWeapon = "MXBombCluster_03_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_SWCluster_03_F: PylonRack_2Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_SW_F";
		displayName = "BL778 Smoke Cluster Bomb x2";
		displayNameShort = "Smoke";
		pylonWeapon = "SWBombCluster_03_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_WPCluster_03_F: PylonRack_2Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_WP_F";
		displayName = "BL778 Phosphorus Cluster Bomb x2";
		displayNameShort = "Phosphorus";
		pylonWeapon = "WPBombCluster_03_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
	class 2Rnd_NPCluster_03_F: PylonRack_2Rnd_BombCluster_03_F
	{
		ammo = "BombCluster_03_NP_F";
		displayName = "BL778 Napalm Cluster Bomb x2";
		displayNameShort = "Napalm";
		pylonWeapon = "NPBombCluster_03_F";
		#include "..\Pylons\West_Bombs_2.hpp"
	};
};