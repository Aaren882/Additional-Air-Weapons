class CfgPatches
{
	class ADtion_Jet_Compats
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Air_F_Jets_Plane_Fighter_01",
			"A3_Air_F_EPC_Plane_CAS_01",
			"A3_Weapons_F_Orange",
			"A3_Weapons_F_Sams"
		};
		requiredVersion=0.1;
	};
};

class CfgVehicles
{
	class Plane;
	class Plane_Base_F: Plane
	{
		class Components;
	};
	//Fighter_01
	#include "Fighter_01.hpp"
	#include "CAS_01.hpp"
};