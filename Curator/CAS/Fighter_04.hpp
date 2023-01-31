class Plane_Fighter_04_Base_F: Plane_Base_F
{
	class Components: Components
	{
		class TransportPylonsComponent
		{
			class pylons
			{
				class pylon1;
				class pylon2;
				class pylon3;
				class pylon4;
				class pylon5;
				class pylon6;
			};
		};
	};
};
class I_Plane_Fighter_04_F: Plane_Fighter_04_Base_F{};
class I_Plane_Fighter_04_AAW_WP_F: I_Plane_Fighter_04_F
{
	scope = 1;
	scopeCurator = 2;
	displayName = "A-149 Gryphon WP Cluster";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1{};
				class pylon2: pylon2{};
				class pylon3: pylon3{};
				class pylon4: pylon4{};
				class pylon5: pylon5
				{
					attachment = "WPCluster_03_F";
				};
				class pylon6: pylon6
				{
					attachment = "";
				};
			};
		};
	};
};
class I_Plane_Fighter_04_AAW_NP_F: I_Plane_Fighter_04_AAW_WP_F
{
	displayName = "A-149 Gryphon Napalm Cluster";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1{};
				class pylon2: pylon2{};
				class pylon3: pylon3{};
				class pylon4: pylon4{};
				class pylon5: pylon5
				{
					attachment = "NPCluster_03_F";
				};
				class pylon6: pylon6
				{
					attachment = "";
				};
			};
		};
	};
};