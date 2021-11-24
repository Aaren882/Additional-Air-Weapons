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
	class Rocket_04_APM_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Hydra AP Mines Rocket";
		magazines[] = {"7Rnd_Rocket_04_APM_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_04_ATM_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Hydra AT Mines Rocket";
		magazines[] = {"7Rnd_Rocket_04_ATM_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_04_XM_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Hydra Mix Mines Rocket";
		magazines[] = {"7Rnd_Rocket_04_XM_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_04_SW_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Hydra Smoke Rocket";
		magazines[] = {"7Rnd_Rocket_04_SW_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_04_WP_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Hydra Phosphorus Rocket";
		magazines[] = {"7Rnd_Rocket_04_WP_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_04_NP_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Hydra Napalm Rocket";
		magazines[] = {"7Rnd_Rocket_04_NP_F"};
		oldsterAnimValue = 5;
	};
	//////////////////////////////////////////////////////////////DAR//////////////////////////////////////////////////////////////
	class missiles_DAR;
	class missiles_DAR_AP: missiles_DAR
	{
		displayName = "DAR AP Rocket";
		magazines[] = {"PylonRack_12Rnd_missiles_AP"};
	};
	class missiles_DAR_Cluster: missiles_DAR
	{
		displayName = "DAR Cluster Rocket";
		magazines[] = {"12Rnd_missiles_Cluster"};
		oldsterAnimValue = 5;
	};
	class missiles_DAR_APM: missiles_DAR
	{
		displayName = "DAR AP Mines Rocket";
		magazines[] = {"12Rnd_missiles_APM"};
		oldsterAnimValue = 5;
	};
	class missiles_DAR_ATM: missiles_DAR
	{
		displayName = "DAR AT Mines Rocket";
		magazines[] = {"12Rnd_missiles_ATM"};
		oldsterAnimValue = 5;
	};
	class missiles_DAR_XM: missiles_DAR
	{
		displayName = "DAR Mix Mines Rocket";
		magazines[] = {"12Rnd_missiles_XM"};
		oldsterAnimValue = 5;
	};
	class missiles_DAR_SW: missiles_DAR
	{
		displayName = "DAR Smoke Rocket";
		magazines[] = {"12Rnd_missiles_SW"};
		oldsterAnimValue = 5;
	};
	class missiles_DAR_WP: missiles_DAR
	{
		displayName = "DAR Phosphorus Rocket";
		magazines[] = {"12Rnd_missiles_WP"};
		oldsterAnimValue = 5;
	};
	class missiles_DAR_NP: missiles_DAR
	{
		displayName = "DAR Napalm Rocket";
		magazines[] = {"12Rnd_missiles_NP"};
		oldsterAnimValue = 5;
	};
	//////////////////////////////////////////////////////////////Tratnyr//////////////////////////////////////////////////////////////
	class Rocket_03_Cluster_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Tratnyr Cluster Rocket";
		magazines[] = {"20Rnd_Rocket_03_Cluster_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_03_APM_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Tratnyr AP Mines Rocket";
		magazines[] = {"20Rnd_Rocket_03_APM_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_03_ATM_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Tratnyr AT Mines Rocket";
		magazines[] = {"20Rnd_Rocket_03_ATM_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_03_XM_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Tratnyr Mix Mines Rocket";
		magazines[] = {"20Rnd_Rocket_03_XM_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_03_SW_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Tratnyr Smoke Rocket";
		magazines[] = {"20Rnd_Rocket_03_SW_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_03_WP_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Tratnyr Phosphorus Rocket";
		magazines[] = {"20Rnd_Rocket_03_WP_F"};
		oldsterAnimValue = 5;
	};
	class Rocket_03_NP_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "Tratnyr Napalm Rocket";
		magazines[] = {"20Rnd_Rocket_03_NP_F"};
		oldsterAnimValue = 5;
	};
	//////////////////////////////////////////////////////////////Skyfire//////////////////////////////////////////////////////////////
	class rockets_Skyfire;
	class rockets_Skyfire_AP: rockets_Skyfire
	{
		magazines[] = {"PylonRack_19Rnd_Rocket_Skyfire_AP"};
	};
	class rockets_Skyfire_Cluster: rockets_Skyfire
	{
		displayName = "Skyfire CLuster Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_Cluster"};
		oldsterAnimValue = 5;
	};
	class rockets_Skyfire_APM: rockets_Skyfire
	{
		displayName = "Skyfire AP Mines Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_APM"};
		oldsterAnimValue = 5;
	};
	class rockets_Skyfire_ATM: rockets_Skyfire
	{
		displayName = "Skyfire AT Mines Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_ATM"};
		oldsterAnimValue = 5;
	};
	class rockets_Skyfire_XM: rockets_Skyfire
	{
		displayName = "Skyfire Mix Mines Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_XM"};
		oldsterAnimValue = 5;
	};
	class rockets_Skyfire_SW: rockets_Skyfire
	{
		displayName = "Skyfire Smoke Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_SW"};
		oldsterAnimValue = 5;
	};
	class rockets_Skyfire_WP: rockets_Skyfire
	{
		displayName = "Skyfire Phosphorus Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_WP"};
		oldsterAnimValue = 5;
	};
	class rockets_Skyfire_NP: rockets_Skyfire
	{
		displayName = "Skyfire Napalm Rocket";
		magazines[] = {"19Rnd_Rocket_Skyfire_NP"};
		oldsterAnimValue = 5;
	};
};