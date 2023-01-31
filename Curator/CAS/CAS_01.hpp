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
class B_Plane_CAS_01_AAW_WP_F: B_Plane_CAS_01_dynamicLoadout_F
{
	scope = 1;
	scopeCurator = 2;
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
class B_Plane_CAS_01_AAW_NP_F: B_Plane_CAS_01_AAW_WP_F
{
	displayName = "A-164 Wipeout Napalm Cluster";
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
					attachment = "NPCluster_01_F";
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
//Rockets
class B_Plane_CAS_01_AAW_RK_WP_F: B_Plane_CAS_01_AAW_WP_F
{
	displayName = "A-164 Wipeout WP Rockets (Cluster)";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2
				{
					attachment = "7Rnd_Rocket_04_WP_F";
				};
				class pylons3: pylons3{};
				class pylons4: pylons4{};
				class pylons5: pylons5
				{
					attachment = "";
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
class B_Plane_CAS_01_AAW_RK_NP_F: B_Plane_CAS_01_AAW_RK_WP_F
{
	displayName = "A-164 Wipeout Napalm Rockets (Cluster)";
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2
				{
					attachment = "7Rnd_Rocket_04_NP_F";
				};
				class pylons3: pylons3{};
				class pylons4: pylons4{};
				class pylons5: pylons5{};
				class pylons6: pylons6{};
				class pylons7: pylons7{};
				class pylons8: pylons8{};
				class pylons9: pylons9{};
				class pylons10: pylons10{};
			};
		};
	};
};

//Hi Drags
#ifdef have_hi_drag_ammo
	class B_Plane_CAS_01_Hi_Drag_500_F: B_Plane_CAS_01_AAW_WP_F
	{
		displayName = "A-164 Wipeout Hi-Drag (500lb)";
		Bombing_Offset[] = {0,100,0};
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
						attachment = hi_drag_ammo_500;
					};
					class pylons5: pylons5
					{
						attachment = hi_drag_ammo_500;
					};
					class pylons6: pylons6
					{
						attachment = hi_drag_ammo_500;
					};
					class pylons7: pylons7
					{
						attachment = hi_drag_ammo_500;
					};
					class pylons8: pylons8{};
					class pylons9: pylons9{};
					class pylons10: pylons10{};
				};
			};
		};
	};
	class B_Plane_CAS_01_Hi_Drag_2000_F: B_Plane_CAS_01_Hi_Drag_500_F
	{
		displayName = "A-164 Wipeout Hi-Drag (2000lb)";
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
						attachment = hi_drag_ammo_2000;
					};
					class pylons5: pylons5
					{
						attachment = hi_drag_ammo_2000;
					};
					class pylons6: pylons6
					{
						attachment = hi_drag_ammo_2000;
					};
					class pylons7: pylons7
					{
						attachment = hi_drag_ammo_2000;
					};
					class pylons8: pylons8{};
					class pylons9: pylons9{};
					class pylons10: pylons10{};
				};
			};
		};
	};
#endif