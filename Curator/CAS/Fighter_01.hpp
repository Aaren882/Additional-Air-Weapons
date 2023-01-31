class Plane_Fighter_01_Base_F: Plane_Base_F
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
				class pylonBayRight1;
				class pylonBayLeft1;
				class pylonBayCenter1;
				class pylonBayCenter2;
				class pylonBayCenter3;
				class pylonBayCenter4;
				class pylonBayCenter5;
				class pylonBayCenter6;
			};
		};
	};
};
class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F{};
class B_Plane_Fighter_01_AAW_WP_F: B_Plane_Fighter_01_F
{
	scope = 1;
	scopeCurator = 2;
	displayName = "F/A-181 Black Wasp II WP Cluster";
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
				class pylonBayRight1: pylonBayRight1{};
				class pylonBayLeft1: pylonBayLeft1{};
				class pylonBayCenter1: pylonBayCenter1{};
				class pylonBayCenter2: pylonBayCenter2{};
				class pylonBayCenter3: pylonBayCenter3{};
				class pylonBayCenter4: pylonBayCenter4{};
				class pylonBayCenter5: pylonBayCenter5
				{
					attachment = "WPCluster_01_F";
				};
				class pylonBayCenter6: pylonBayCenter6
				{
					attachment = "";
				};
			};
		};
	};
};
class B_Plane_Fighter_01_AAW_NP_F: B_Plane_Fighter_01_AAW_WP_F
{
	displayName = "F/A-181 Black Wasp II Napalm Cluster";
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
				class pylonBayRight1: pylonBayRight1{};
				class pylonBayLeft1: pylonBayLeft1{};
				class pylonBayCenter1: pylonBayCenter1{};
				class pylonBayCenter2: pylonBayCenter2{};
				class pylonBayCenter3: pylonBayCenter3{};
				class pylonBayCenter4: pylonBayCenter4{};
				class pylonBayCenter5: pylonBayCenter5
				{
					attachment = "NPCluster_01_F";
				};
				class pylonBayCenter6: pylonBayCenter6{};
			};
		};
	};
};
//Hi Drags
#ifdef have_hi_drag_ammo
	class B_Plane_Fighter_01_Hi_Drag_500_F: B_Plane_Fighter_01_AAW_WP_F
	{
		displayName = "F/A-181 Black Wasp II Hi-Drag (500lb)";
		Bombing_Offset[] = {0,100,0};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1{};
					class pylon2: pylon2{};
					class pylon3: pylon3
					{
						attachment = hi_drag_ammo_500;
					};
					class pylon4: pylon4
					{
						attachment = hi_drag_ammo_500;
					};
					class pylonBayRight1: pylonBayRight1{};
					class pylonBayLeft1: pylonBayLeft1{};
					class pylonBayCenter1: pylonBayCenter1{};
					class pylonBayCenter2: pylonBayCenter2{};
					class pylonBayCenter3: pylonBayCenter3{};
					class pylonBayCenter4: pylonBayCenter4{};
					class pylonBayCenter5: pylonBayCenter5
					{
						attachment = "";
					};
					class pylonBayCenter6: pylonBayCenter6{};
				};
			};
		};
	};
	class B_Plane_Fighter_01_Hi_Drag_2000_F: B_Plane_Fighter_01_Hi_Drag_500_F
	{
		displayName = "F/A-181 Black Wasp II Hi-Drag (2000lb)";
		Bombing_Offset[] = {0,150,0};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1{};
					class pylon2: pylon2{};
					class pylon3: pylon3
					{
						attachment = hi_drag_ammo_2000;
					};
					class pylon4: pylon4
					{
						attachment = hi_drag_ammo_2000;
					};
					class pylonBayRight1: pylonBayRight1{};
					class pylonBayLeft1: pylonBayLeft1{};
					class pylonBayCenter1: pylonBayCenter1{};
					class pylonBayCenter2: pylonBayCenter2{};
					class pylonBayCenter3: pylonBayCenter3{};
					class pylonBayCenter4: pylonBayCenter4{};
					class pylonBayCenter5: pylonBayCenter5{};
					class pylonBayCenter6: pylonBayCenter6{};
				};
			};
		};
	};
#endif