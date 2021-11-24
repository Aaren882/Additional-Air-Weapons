class CfgMagazines
{
	//////////////////////////////////////////////////////////////DAGR////////////////////////////////////////////////////////////
	class 24Rnd_PG_missiles;
	class PylonRack_12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		#include "..\Pylons\West_Rockets_DAGR.hpp"
	};
	
	class 12Rnd_Flare_missiles: PylonRack_12Rnd_PG_missiles
	{
		displayName="DAGR Flare Missile";
		pylonWeapon="Missiles_DAGR_Flare";
		ammo="M_PG_Flare";
		displayNameShort="Flare";
		#include "..\Pylons\West_Rockets_DAGR.hpp"
	};
	class 12Rnd_AP_missiles: PylonRack_12Rnd_PG_missiles
	{
		displayName="DAGR AP Missile";
		pylonWeapon="Missiles_DAGR_AP";
		ammo="M_PG_AP";
		displayNameShort="AP";
		#include "..\Pylons\West_Rockets_DAR.hpp"
	};
	//////////////////////////////////////////////////////////////Hydra//////////////////////////////////////////////////////////////
	class 7Rnd_Rocket_04_HE_F;
	class 7Rnd_Rocket_04_AP_F;
	class PylonRack_7Rnd_Rocket_04_HE_F: 7Rnd_Rocket_04_HE_F
	{
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		#include "MFD\Hydra.hpp"
	};
	class PylonRack_7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_AP_F
	{
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		#include "MFD\Hydra.hpp"
		pylonWeapon="Missiles_DAGR_AP";
	};
	
	class 7Rnd_Rocket_04_Cluster_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Cluster Rocket";
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		ammo = "Rocket_04_Cluster_F";
		displayNameShort = "Cluster";
		#include "MFD\Hydra.hpp"
		pylonWeapon="Rocket_04_Cluster_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_APM_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra AP Mines Rocket";
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		ammo = "Rocket_04_APM_F";
		displayNameShort = "AP Mines";
		#include "MFD\Hydra.hpp"
		pylonWeapon="Rocket_04_APM_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_ATM_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra AT Mines Rocket";
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		ammo = "Rocket_04_ATM_F";
		displayNameShort = "AT Mines";
		#include "MFD\Hydra.hpp"
		pylonWeapon="Rocket_04_ATM_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_XM_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Mix Mines Rocket";
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		ammo = "Rocket_04_XM_F";
		displayNameShort = "Mix";
		#include "MFD\Hydra.hpp"
		pylonWeapon="Rocket_04_XM_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_SW_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Smoke Rocket";
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		ammo = "Rocket_04_SW_F";
		displayNameShort = "Smoke";
		#include "MFD\Hydra.hpp"
		pylonWeapon="Rocket_04_SW_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_WP_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Phosphorus Rocket";
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		ammo = "Rocket_04_WP_F";
		displayNameShort = "Phosphorus";
		#include "MFD\Hydra.hpp"
		pylonWeapon="Rocket_04_WP_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_NP_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Napalm Rocket";
		#include "..\Pylons\West_Rockets_Hydra.hpp"
		ammo = "Rocket_04_NP_F";
		displayNameShort = "Napalm";
		#include "MFD\Hydra.hpp"
		pylonWeapon="Rocket_04_NP_Plane_CAS_01_F";
	};
	//////////////////////////////////////////////////////////////DAR//////////////////////////////////////////////////////////////
	class 12Rnd_missiles;
	class PylonRack_12Rnd_missiles: 12Rnd_missiles
	{
		#include "..\Pylons\West_Rockets_DAR.hpp"
	};
	
	class PylonRack_12Rnd_missiles_AP: PylonRack_12Rnd_missiles
	{
		#include "..\Pylons\West_Rockets_DAR.hpp"
		pylonWeapon="missiles_DAR_AP";
		//#include "MFD\DAR.hpp"
	};
	class 12Rnd_missiles_Cluster: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Cluster Rocket";
		#include "..\Pylons\West_Rockets_DAR.hpp"
		pylonWeapon="missiles_DAR_Cluster";
		ammo = "DAR_Cluster";
		displayNameShort = "Cluster";
		//#include "MFD\DAR.hpp"
	};
	class 12Rnd_missiles_APM: PylonRack_12Rnd_missiles
	{
		displayName = "DAR AP Mines Rocket";
		#include "..\Pylons\West_Rockets_DAR.hpp"
		pylonWeapon="missiles_DAR_APM";
		ammo = "DAR_APM";
		displayNameShort = "AP Mines";
		//#include "MFD\DAR.hpp"
	};
	class 12Rnd_missiles_ATM: PylonRack_12Rnd_missiles
	{
		displayName = "DAR AT Mines Rocket";
		#include "..\Pylons\West_Rockets_DAR.hpp"
		pylonWeapon="missiles_DAR_ATM";
		ammo = "DAR_ATM";
		displayNameShort = "AT Mines";
		//#include "MFD\DAR.hpp"
	};
	class 12Rnd_missiles_XM: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Mix Mines Rocket";
		#include "..\Pylons\West_Rockets_DAR.hpp"
		pylonWeapon="missiles_DAR_XM";
		ammo = "DAR_XM";
		displayNameShort = "Mix";
		//#include "MFD\DAR.hpp"
	};
	class 12Rnd_missiles_SW: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Smoke Rocket";
		#include "..\Pylons\West_Rockets_DAR.hpp"
		pylonWeapon="missiles_DAR_SW";
		ammo = "DAR_SW";
		displayNameShort = "Smoke";
		//#include "MFD\DAR.hpp"
	};
	class 12Rnd_missiles_WP: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Phosphorus Rocket";
		#include "..\Pylons\West_Rockets_DAR.hpp"
		pylonWeapon="missiles_DAR_WP";
		ammo = "DAR_WP";
		displayNameShort = "Phosphorus";
		//#include "MFD\DAR.hpp"
	};
	class 12Rnd_missiles_NP: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Napalm Rocket";
		#include "..\Pylons\West_Rockets_DAR.hpp"
		pylonWeapon="missiles_DAR_NP";
		ammo = "DAR_NP";
		displayNameShort = "Napalm";
		//#include "MFD\DAR.hpp"
	};
	//////////////////////////////////////////////////////////////Tratnyr//////////////////////////////////////////////////////////////
	class 20Rnd_Rocket_03_HE_F;
	class 20Rnd_Rocket_03_AP_F;
	class PylonRack_20Rnd_Rocket_03_HE_F: 20Rnd_Rocket_03_HE_F
	{
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		#include "MFD\Tratnyr.hpp"
	};
	class PylonRack_20Rnd_Rocket_03_AP_F: 20Rnd_Rocket_03_AP_F
	{
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		#include "MFD\Tratnyr.hpp"
	};
	
	class 20Rnd_Rocket_03_Cluster_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Cluster Rocket";
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		ammo = "Rocket_03_Cluster_F";
		displayNameShort = "Cluster";
		#include "MFD\Tratnyr.hpp"
		pylonWeapon="Rocket_03_Cluster_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_APM_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr AP Mines Rocket";
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		ammo = "Rocket_03_APM_F";
		displayNameShort = "AP Mines";
		#include "MFD\Tratnyr.hpp"
		pylonWeapon="Rocket_03_APM_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_ATM_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr AT Mines Rocket";
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		ammo = "Rocket_03_ATM_F";
		displayNameShort = "AT Mines";
		#include "MFD\Tratnyr.hpp"
		pylonWeapon="Rocket_03_ATM_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_XM_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Mix Mines Rocket";
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		ammo = "Rocket_03_XM_F";
		displayNameShort = "Mix Mines";
		#include "MFD\Tratnyr.hpp"
		pylonWeapon="Rocket_03_XM_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_SW_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Smoke Rocket";
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		ammo = "Rocket_03_SW_F";
		displayNameShort = "Smoke";
		#include "MFD\Tratnyr.hpp"
		pylonWeapon="Rocket_03_SW_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_WP_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Phosphorus Rocket";
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		ammo = "Rocket_03_WP_F";
		displayNameShort = "Phosphorus";
		#include "MFD\Tratnyr.hpp"
		pylonWeapon="Rocket_03_WP_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_NP_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Napalm Rocket";
		#include "..\Pylons\East_Rockets_Tratnyr.hpp"
		ammo = "Rocket_03_NP_F";
		displayNameShort = "Napalm";
		pylonWeapon="Rocket_03_NP_Plane_CAS_02_F";
		#include "MFD\Tratnyr.hpp"
	};
	//////////////////////////////////////////////////////////////SkyFire//////////////////////////////////////////////////////////////
	class 38Rnd_80mm_rockets;
	class PylonRack_19Rnd_Rocket_Skyfire: 38Rnd_80mm_rockets
	{
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		#include "MFD\SkyFire.hpp"
	};
	class PylonRack_19Rnd_Rocket_Skyfire_AP: PylonRack_19Rnd_Rocket_Skyfire
	{
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		#include "MFD\SkyFire.hpp"
		pylonWeapon="rockets_Skyfire_AP";
	};
	
	class 19Rnd_Rocket_Skyfire_Cluster: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Cluster Rocket";
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		ammo = "R_80mm_Cluster";
		displayNameShort = "Cluster";
		#include "MFD\SkyFire.hpp"
		pylonWeapon="rockets_Skyfire_Cluster";
	};
	class 19Rnd_Rocket_Skyfire_APM: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire AP Mines Rocket";
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		ammo = "R_80mm_APM";
		displayNameShort = "AP Mines";
		#include "MFD\SkyFire.hpp"
		pylonWeapon="rockets_Skyfire_APM";
	};
	class 19Rnd_Rocket_Skyfire_ATM: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire AT Mines Rocket";
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		ammo = "R_80mm_ATM";
		displayNameShort = "AT Mines";
		#include "MFD\SkyFire.hpp"
		pylonWeapon="rockets_Skyfire_ATM";
	};
	class 19Rnd_Rocket_Skyfire_XM: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Mix Mines Rocket";
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		ammo = "R_80mm_XM";
		displayNameShort = "Mix";
		#include "MFD\SkyFire.hpp"
		pylonWeapon="rockets_Skyfire_XM";
	};
	class 19Rnd_Rocket_Skyfire_SW: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Smoke Rocket";
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		ammo = "R_80mm_SW";
		displayNameShort = "Smoke";
		#include "MFD\SkyFire.hpp"
		pylonWeapon="rockets_Skyfire_SW";
	};
	class 19Rnd_Rocket_Skyfire_WP: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Phosphorus Rocket";
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		ammo = "R_80mm_WP";
		displayNameShort = "Phosphorus";
		#include "MFD\SkyFire.hpp"
		pylonWeapon="rockets_Skyfire_WP";
	};
	class 19Rnd_Rocket_Skyfire_NP: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Napalm Rocket";
		#include "..\Pylons\East_Rockets_Skyfire.hpp"
		ammo = "R_80mm_NP";
		displayNameShort = "Napalm";
		#include "MFD\SkyFire.hpp"
		pylonWeapon="rockets_Skyfire_NP";
	};
};