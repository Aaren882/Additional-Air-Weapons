class Cfgweapons
{
	class RocketPods;
	//////////////////////////////////////////////////////////////DAGR//////////////////////////////////////////////////////////////
	class missiles_DAGR: RocketPods
	{
		class Far_AI;
		class Medium_AI;
		class Burst;
	};
	class Missiles_DAGR_AP: missiles_DAGR
	{
		magazines[] = {"12Rnd_AP_missiles"};
	};
	class Missiles_DAGR_Flare: missiles_DAGR
	{
		displayName = "DAGR Flare Missile";
		magazines[] = {"12Rnd_Flare_missiles"};
		weaponLockDelay = 1.0;
		oldsterAnimValue = 5;
		modes[] = {"Far_AI","Medium_AI","TopDown"};
		class Far_AI: Far_AI{};
		class Medium_AI: Medium_AI{};
		class TopDown: Burst
		{
			textureType = "topDown";
			displayName = "DAGR Flare";
			reloadtime = 2;
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 1500;
			minRange = 470;
			minRangeProbab = 0.9;
			midRange = 1700;
			midRangeProbab = 0.8;
			maxRange = 4000;
			maxRangeProbab = 0.70;
		};
	};
	//////////////////////////////////////////////////////////////Hydra//////////////////////////////////////////////////////////////
	class Rocket_04_HE_Plane_CAS_01_F;
	class Rocket_04_Cluster_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Hydra Cluster Rocket";
		magazines[] = {"7Rnd_Rocket_04_Cluster_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_04_APM_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra AP Mines Rocket";
		magazines[] = {"7Rnd_Rocket_04_APM_F"};
	};
	class Rocket_04_ATM_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra AT Mines Rocket";
		magazines[] = {"7Rnd_Rocket_04_ATM_F"};
	};
	class Rocket_04_XM_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra Mix Mines Rocket";
		magazines[] = {"7Rnd_Rocket_04_XM_F"};
	};
	class Rocket_04_SW_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra Smoke Rocket";
		magazines[] = {"7Rnd_Rocket_04_SW_F"};
	};
	class Rocket_04_WP_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra Phosphorus Rocket (Cluster)";
		magazines[] = {"7Rnd_Rocket_04_WP_F"};
	};
	class Rocket_04_NP_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra Napalm Rocket (Cluster)";
		magazines[] = {"7Rnd_Rocket_04_NP_F"};
	};
	class Rocket_04_FG_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra AirBurst Rocket";
		magazines[] = {"7Rnd_Rocket_04_FG_F"};
	};
	class Rocket_04_SWP_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra Phosphorus Rocket (Single)";
		magazines[] = {"7Rnd_Rocket_04_SWP_F"};
	};
	class Rocket_04_SNP_Plane_CAS_01_F: Rocket_04_Cluster_Plane_CAS_01_F
	{
		displayName = "Hydra Napalm Rocket (Single)";
		magazines[] = {"7Rnd_Rocket_04_SNP_F"};
	};
	//////////////////////////////////////////////////////////////DAR//////////////////////////////////////////////////////////////
	class missiles_DAR;
	class missiles_DAR_AP: missiles_DAR
	{
		displayName = "DAR AP Rocket";
		magazines[] = {"PylonRack_12Rnd_missiles_AP"};
		oldsterAnimValue = 5;
	};
	class missiles_DAR_Cluster: missiles_DAR_AP
	{
		displayName = "DAR Cluster Rocket";
		magazines[] = {"12Rnd_missiles_Cluster"};
	};
	class missiles_DAR_APM: missiles_DAR_AP
	{
		displayName = "DAR AP Mines Rocket";
		magazines[] = {"12Rnd_missiles_APM"};
	};
	class missiles_DAR_ATM: missiles_DAR_AP
	{
		displayName = "DAR AT Mines Rocket";
		magazines[] = {"12Rnd_missiles_ATM"};
	};
	class missiles_DAR_XM: missiles_DAR_AP
	{
		displayName = "DAR Mix Mines Rocket";
		magazines[] = {"12Rnd_missiles_XM"};
	};
	class missiles_DAR_SW: missiles_DAR_AP
	{
		displayName = "DAR Smoke Rocket";
		magazines[] = {"12Rnd_missiles_SW"};
	};
	class missiles_DAR_WP: missiles_DAR_AP
	{
		displayName = "DAR Phosphorus Rocket (Cluster)";
		magazines[] = {"12Rnd_missiles_WP"};
	};
	class missiles_DAR_NP: missiles_DAR_AP
	{
		displayName = "DAR Napalm Rocket (Cluster)";
		magazines[] = {"12Rnd_missiles_NP"};
	};
	class missiles_DAR_FG: missiles_DAR_AP
	{
		displayName = "DAR AirBurst Rocket";
		magazines[] = {"12Rnd_missiles_FG"};
	};
	class missiles_DAR_SWP: missiles_DAR_AP
	{
		displayName = "DAR Phosphorus Rocket (Single)";
		magazines[] = {"12Rnd_missiles_SWP"};
	};
	class missiles_DAR_SNP: missiles_DAR_AP
	{
		displayName = "DAR Napalm Rocket (Single)";
		magazines[] = {"12Rnd_missiles_SNP"};
	};
	//////////////////////////////////////////////////////////////Tratnyr//////////////////////////////////////////////////////////////
	class Rocket_03_Cluster_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Tratnyr Cluster Rocket";
		magazines[] = {"20Rnd_Rocket_03_Cluster_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_03_APM_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr AP Mines Rocket";
		magazines[] = {"20Rnd_Rocket_03_APM_F"};
	};
	class Rocket_03_ATM_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr AT Mines Rocket";
		magazines[] = {"20Rnd_Rocket_03_ATM_F"};
	};
	class Rocket_03_XM_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr Mix Mines Rocket";
		magazines[] = {"20Rnd_Rocket_03_XM_F"};
	};
	class Rocket_03_SW_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr Smoke Rocket";
		magazines[] = {"20Rnd_Rocket_03_SW_F"};
	};
	class Rocket_03_WP_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr Phosphorus Rocket (Cluster)";
		magazines[] = {"20Rnd_Rocket_03_WP_F"};
	};
	class Rocket_03_NP_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr Napalm Rocket (Cluster)";
		magazines[] = {"20Rnd_Rocket_03_NP_F"};
	};
	class Rocket_03_FG_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr AirBurst Rocket";
		magazines[] = {"20Rnd_Rocket_03_FG_F"};
	};
	class Rocket_03_SWP_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr Phosphorus Rocket (Single)";
		magazines[] = {"20Rnd_Rocket_03_SWP_F"};
	};
	class Rocket_03_SNP_Plane_CAS_02_F: Rocket_03_Cluster_Plane_CAS_02_F
	{
		displayName = "Tratnyr Napalm Rocket (Single)";
		magazines[] = {"20Rnd_Rocket_03_SNP_F"};
	};
	//////////////////////////////////////////////////////////////Skyfire//////////////////////////////////////////////////////////////
	class rockets_Skyfire;
	class rockets_Skyfire_AP: rockets_Skyfire
	{
		magazines[] = {"PylonRack_19Rnd_Rocket_Skyfire_AP"};
		oldsterAnimValue = 5;
	};
	class rockets_Skyfire_Cluster: rockets_Skyfire_AP
	{
		displayName = "Skyfire Cluster Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_Cluster"};
	};
	class rockets_Skyfire_APM: rockets_Skyfire_AP
	{
		displayName = "Skyfire AP Mines Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_APM"};
	};
	class rockets_Skyfire_ATM: rockets_Skyfire_AP
	{
		displayName = "Skyfire AT Mines Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_ATM"};
	};
	class rockets_Skyfire_XM: rockets_Skyfire_AP
	{
		displayName = "Skyfire Mix Mines Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_XM"};
	};
	class rockets_Skyfire_SW: rockets_Skyfire_AP
	{
		displayName = "Skyfire Smoke Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_SW"};
	};
	class rockets_Skyfire_WP: rockets_Skyfire_AP
	{
		displayName = "Skyfire Phosphorus Rocket (Cluster)";
		magazines[] = {"19Rnd_Rocket_Skyfire_WP"};
	};
	class rockets_Skyfire_NP: rockets_Skyfire_AP
	{
		displayName = "Skyfire Napalm Rocket (Cluster)";
		magazines[] = {"19Rnd_Rocket_Skyfire_NP"};
	};
	class rockets_Skyfire_FG: rockets_Skyfire_AP
	{
		displayName = "Skyfire AirBurst Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_FG"};
	};
	class rockets_Skyfire_SWP: rockets_Skyfire_AP
	{
		displayName = "Skyfire Phosphorus Rocket (Single)";
		magazines[] = {"19Rnd_Rocket_Skyfire_SWP"};
	};
	class rockets_Skyfire_SNP: rockets_Skyfire_AP
	{
		displayName = "Skyfire Napalm Rocket (Single)";
		magazines[] = {"19Rnd_Rocket_Skyfire_SNP"};
	};
};