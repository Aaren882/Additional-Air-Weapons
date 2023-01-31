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
			class pylons
			{
				class pylons1;
				class pylons2;
				class pylons3;
				class pylons4;
				class pylons5;
				class pylons6;
				class pylons7;
			};
		};
	};
};
class I_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F{};
class I_Plane_Fighter_03_AAW_WP_F: I_Plane_Fighter_03_dynamicLoadout_F
{
	scope = 1;
	scopeCurator = 2;
	displayName = "A-143 Buzzard WP Cluster";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3
				{
					attachment = "WPCluster_03_F";
				};
				class pylons4: pylons4{};
				class pylons5: pylons5
				{
					attachment = "";
				};
				class pylons6: pylons6{};
				class pylons7: pylons7{};
			};
		};
	};
};
class I_Plane_Fighter_03_AAW_NP_F: I_Plane_Fighter_03_AAW_WP_F
{
	displayName = "A-143 Buzzard Napalm Cluster";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3
				{
					attachment = "NPCluster_03_F";
				};
				class pylons4: pylons4{};
				class pylons5: pylons5{};
				class pylons6: pylons6{};
				class pylons7: pylons7{};
			};
		};
	};
};