class Plane_Fighter_02_Base_F: Plane_Base_F
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
				class pylonBayRight1;
				class pylonBayLeft1;
				class pylonBayRight2;
				class pylonBayLeft2;
				class pylonBayCenter1;
				class pylonBayCenter2;
				class pylonBayCenter3;
			};
		};
	};
};
class O_Plane_Fighter_02_F: Plane_Fighter_02_Base_F{};
class O_Plane_Fighter_02_AAW_WP_F: O_Plane_Fighter_02_F
{
	scope = 1;
	scopeCurator = 2;
	displayName = "To-201 Shikra WP Cluster";
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
					attachment = "";
				};
				class pylons6: pylons6
				{
					attachment = "";
				};
				class pylonBayRight1: pylonBayRight1{};
				class pylonBayLeft1: pylonBayLeft1{};
				class pylonBayRight2: pylonBayRight2{};
				class pylonBayLeft2: pylonBayLeft2{};
				class pylonBayCenter1: pylonBayCenter1{};
				class pylonBayCenter2: pylonBayCenter2{};
				class pylonBayCenter3: pylonBayCenter3
				{
					attachment = "WPCluster_02_F";
				};
			};
		};
	};
};
class O_Plane_Fighter_02_AAW_NP_F: O_Plane_Fighter_02_AAW_WP_F
{
	displayName = "To-201 Shikra Napalm Cluster";
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
				class pylons5: pylons5{};
				class pylons6: pylons6{};
				class pylonBayRight1: pylonBayRight1{};
				class pylonBayLeft1: pylonBayLeft1{};
				class pylonBayRight2: pylonBayRight2{};
				class pylonBayLeft2: pylonBayLeft2{};
				class pylonBayCenter1: pylonBayCenter1{};
				class pylonBayCenter2: pylonBayCenter2{};
				class pylonBayCenter3: pylonBayCenter3
				{
					attachment = "NPCluster_02_F";
				};
			};
		};
	};
};