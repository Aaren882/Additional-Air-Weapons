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
	};
	
	class 7Rnd_Rocket_04_Cluster_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Cluster Rocket";
		ammo = "Rocket_04_Cluster_F";
		displayNameShort = "Cluster";
		pylonWeapon="Rocket_04_Cluster_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_APM_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra AP Mines Rocket";
		ammo = "Rocket_04_APM_F";
		displayNameShort = "AP Mines";
		pylonWeapon="Rocket_04_APM_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_ATM_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra AT Mines Rocket";
		ammo = "Rocket_04_ATM_F";
		displayNameShort = "AT Mines";
		pylonWeapon="Rocket_04_ATM_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_XM_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Mix Mines Rocket";
		ammo = "Rocket_04_XM_F";
		displayNameShort = "Mix";
		pylonWeapon="Rocket_04_XM_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_SW_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Smoke Rocket";
		ammo = "Rocket_04_SW_F";
		displayNameShort = "Smoke";
		pylonWeapon="Rocket_04_SW_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_WP_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Phosphorus Rocket (Cluster)";
		ammo = "Rocket_04_WP_F";
		displayNameShort = "Cluster";
		pylonWeapon="Rocket_04_WP_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_NP_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Napalm Rocket (Cluster)";
		ammo = "Rocket_04_NP_F";
		displayNameShort = "Cluster";
		pylonWeapon="Rocket_04_NP_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_FG_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra AirBurst Rocket";
		ammo = "Rocket_04_FG_F";
		displayNameShort = "AirBurst";
		pylonWeapon="Rocket_04_FG_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_SWP_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Phosphorus Rocket (Single)";
		ammo = "Rocket_04_SWP_F";
		displayNameShort = "Phosphorus";
		pylonWeapon="Rocket_04_SWP_Plane_CAS_01_F";
	};
	class 7Rnd_Rocket_04_SNP_F: PylonRack_7Rnd_Rocket_04_HE_F
	{
		displayName = "Hydra Napalm Rocket (Single)";
		ammo = "Rocket_04_SNP_F";
		displayNameShort = "Napalm";
		pylonWeapon="Rocket_04_SNP_Plane_CAS_01_F";
	};
	//////////////////////////////////////////////////////////////DAR//////////////////////////////////////////////////////////////
	class 12Rnd_missiles;
	class PylonRack_12Rnd_missiles: 12Rnd_missiles
	{
		#include "..\Pylons\West_Rockets_DAR.hpp"
	};
	
	class PylonRack_12Rnd_missiles_AP: PylonRack_12Rnd_missiles
	{
		pylonWeapon="missiles_DAR_AP";
	};
	class 12Rnd_missiles_Cluster: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Cluster Rocket";
		pylonWeapon="missiles_DAR_Cluster";
		ammo = "DAR_Cluster";
		displayNameShort = "Cluster";
	};
	class 12Rnd_missiles_APM: PylonRack_12Rnd_missiles
	{
		displayName = "DAR AP Mines Rocket";
		pylonWeapon="missiles_DAR_APM";
		ammo = "DAR_APM";
		displayNameShort = "AP Mines";
	};
	class 12Rnd_missiles_ATM: PylonRack_12Rnd_missiles
	{
		displayName = "DAR AT Mines Rocket";
		pylonWeapon="missiles_DAR_ATM";
		ammo = "DAR_ATM";
		displayNameShort = "AT Mines";
	};
	class 12Rnd_missiles_XM: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Mix Mines Rocket";
		pylonWeapon="missiles_DAR_XM";
		ammo = "DAR_XM";
		displayNameShort = "Mix";
	};
	class 12Rnd_missiles_SW: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Smoke Rocket";
		pylonWeapon="missiles_DAR_SW";
		ammo = "DAR_SW";
		displayNameShort = "Smoke";
	};
	class 12Rnd_missiles_WP: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Phosphorus Rocket (Cluster)";
		pylonWeapon="missiles_DAR_WP";
		ammo = "DAR_WP";
		displayNameShort = "Cluster";
	};
	class 12Rnd_missiles_NP: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Napalm Rocket (Cluster)";
		pylonWeapon="missiles_DAR_NP";
		ammo = "DAR_NP";
		displayNameShort = "Cluster";
	};
	class 12Rnd_missiles_FG: PylonRack_12Rnd_missiles
	{
		displayName = "DAR AirBurst Rocket";
		pylonWeapon="missiles_DAR_FG";
		ammo = "DAR_FG";
		displayNameShort = "AirBurst";
	};
	class 12Rnd_missiles_SWP: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Phosphorus Rocket (Single)";
		pylonWeapon="missiles_DAR_SWP";
		ammo = "DAR_SWP";
		displayNameShort = "Phosphorus";
	};
	class 12Rnd_missiles_SNP: PylonRack_12Rnd_missiles
	{
		displayName = "DAR Napalm Rocket (Single)";
		pylonWeapon="missiles_DAR_SNP";
		ammo = "DAR_SNP";
		displayNameShort = "Napalm";
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
		ammo = "Rocket_03_Cluster_F";
		displayNameShort = "Cluster";
		pylonWeapon="Rocket_03_Cluster_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_APM_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr AP Mines Rocket";
		ammo = "Rocket_03_APM_F";
		displayNameShort = "AP Mines";
		pylonWeapon="Rocket_03_APM_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_ATM_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr AT Mines Rocket";
		ammo = "Rocket_03_ATM_F";
		displayNameShort = "AT Mines";
		pylonWeapon="Rocket_03_ATM_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_XM_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Mix Mines Rocket";
		ammo = "Rocket_03_XM_F";
		displayNameShort = "Mix Mines";
		pylonWeapon="Rocket_03_XM_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_SW_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Smoke Rocket";
		ammo = "Rocket_03_SW_F";
		displayNameShort = "Smoke";
		pylonWeapon="Rocket_03_SW_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_WP_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Phosphorus Rocket (Cluster)";
		ammo = "Rocket_03_WP_F";
		displayNameShort = "Cluster";
		pylonWeapon="Rocket_03_WP_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_NP_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Napalm Rocket (Cluster)";
		ammo = "Rocket_03_NP_F";
		displayNameShort = "Cluster";
		pylonWeapon="Rocket_03_NP_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_FG_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr AirBurst Rocket";
		ammo = "Rocket_03_FG_F";
		displayNameShort = "AirBurst";
		pylonWeapon="Rocket_03_FG_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_SWP_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Phosphorus Rocket (Single)";
		ammo = "Rocket_03_SWP_F";
		displayNameShort = "Phosphorus";
		pylonWeapon="Rocket_03_SWP_Plane_CAS_02_F";
	};
	class 20Rnd_Rocket_03_SNP_F: PylonRack_20Rnd_Rocket_03_HE_F
	{
		displayName = "Tratnyr Napalm Rocket (Single)";
		ammo = "Rocket_03_SNP_F";
		displayNameShort = "Napalm";
		pylonWeapon="Rocket_03_SNP_Plane_CAS_02_F";
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
		pylonWeapon="rockets_Skyfire_AP";
	};
	
	class 19Rnd_Rocket_Skyfire_Cluster: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Cluster Rocket";
		ammo = "R_80mm_Cluster";
		displayNameShort = "Cluster";
		pylonWeapon="rockets_Skyfire_Cluster";
	};
	class 19Rnd_Rocket_Skyfire_APM: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire AP Mines Rocket";
		ammo = "R_80mm_APM";
		displayNameShort = "AP Mines";
		pylonWeapon="rockets_Skyfire_APM";
	};
	class 19Rnd_Rocket_Skyfire_ATM: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire AT Mines Rocket";
		ammo = "R_80mm_ATM";
		displayNameShort = "AT Mines";
		pylonWeapon="rockets_Skyfire_ATM";
	};
	class 19Rnd_Rocket_Skyfire_XM: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Mix Mines Rocket";
		ammo = "R_80mm_XM";
		displayNameShort = "Mix";
		pylonWeapon="rockets_Skyfire_XM";
	};
	class 19Rnd_Rocket_Skyfire_SW: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Smoke Rocket";
		ammo = "R_80mm_SW";
		displayNameShort = "Smoke";
		pylonWeapon="rockets_Skyfire_SW";
	};
	class 19Rnd_Rocket_Skyfire_WP: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Phosphorus Rocket (Cluster)";
		ammo = "R_80mm_WP";
		displayNameShort = "Cluster";
		pylonWeapon="rockets_Skyfire_WP";
	};
	class 19Rnd_Rocket_Skyfire_NP: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Napalm Rocket (Cluster)";
		ammo = "R_80mm_NP";
		displayNameShort = "Cluster";
		pylonWeapon="rockets_Skyfire_NP";
	};
	class 19Rnd_Rocket_Skyfire_FG: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire AirBurst Rocket";
		ammo = "R_80mm_FG";
		displayNameShort = "AirBurst";
		pylonWeapon="rockets_Skyfire_FG";
	};
	class 19Rnd_Rocket_Skyfire_SWP: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Phosphorus Rocket (Single)";
		ammo = "R_80mm_SWP";
		displayNameShort = "Phosphorus";
		pylonWeapon="rockets_Skyfire_SWP";
	};
	class 19Rnd_Rocket_Skyfire_SNP: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName = "Skyfire Napalm Rocket (Single)";
		ammo = "R_80mm_SNP";
		displayNameShort = "Napalm";
		pylonWeapon="rockets_Skyfire_SNP";
	};
};