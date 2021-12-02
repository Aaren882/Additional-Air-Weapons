class Plane_CAS_01_base_F: Plane_Base_F
{
	class Components;
};
class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F
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
class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F{};
class B_Plane_CAS_01_Cluster_F: B_Plane_CAS_01_dynamicLoadout_F{};
class B_Plane_CAS_01_AWS_WP_F: B_Plane_CAS_01_Cluster_F
{
	displayName = "A-164 Wipeout WP Cluster";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3{};
				class pylons4: pylons4
				{
					attachment = "";
				};
				class pylons5: pylons5
				{
					attachment = "WPCluster_01_F";
				};
				class pylons6: pylons6
				{
					attachment = "";
				};
				class pylons7: pylons7
				{
					attachment = "";
				};
				class pylons8: pylons8{};
				class pylons9: pylons9{};
				class pylons10: pylons10{};
			};
		};
	};
};