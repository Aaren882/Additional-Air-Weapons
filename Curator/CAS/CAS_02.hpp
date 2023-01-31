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
			class pylons
			{
				class pylons1;
				class pylons2;
				class pylons3;
				class pylons4;
				class pylons5;
				class pylons6;
				class pylons7;
				class pylons8;
				class pylons9;
				class pylons10;
			};
		};
	};
};
class O_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F{};
class O_Plane_CAS_02_AAW_WP_F: O_Plane_CAS_02_dynamicLoadout_F
{
	scope = 1;
	scopeCurator = 2;
	displayName = "To-199 Neophron WP Cluster";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3{};
				class pylons4: pylons4{};
				class pylons5: pylons5
				{
					attachment = "WPCluster_02_F";
				};
				class pylons6: pylons6
				{
					attachment = "";
				};
				class pylons7: pylons7{};
				class pylons8: pylons8{};
				class pylons9: pylons9{};
				class pylons10: pylons10{};
			};
		};
	};
};
class O_Plane_CAS_02_AAW_NP_F: O_Plane_CAS_02_AAW_WP_F
{
	displayName = "To-199 Neophron Napalm Cluster";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3{};
				class pylons4: pylons4{};
				class pylons5: pylons5
				{
					attachment = "NPCluster_02_F";
				};
				class pylons6: pylons6{};
				class pylons7: pylons7{};
				class pylons8: pylons8{};
				class pylons9: pylons9{};
				class pylons10: pylons10{};
			};
		};
	};
};