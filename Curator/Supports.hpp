class CfgVehicles
{
	//Planes
	class Plane;
	class Plane_Base_F: Plane
	{
		class Components;
		Bombing_Offset[] = {0,0,0};
	};
	//USAF or FIR (Hi Drags)
	#if __has_include("\usaf_missilebox_c\basicdefines.h")
		#define have_hi_drag_ammo 1
		#define hi_drag_ammo_500 "USAF_PylonRack_3Rnd_MK82SE"
		#define hi_drag_ammo_2000 "USAF_PylonRack_1Rnd_MK84AIR"
	#endif
	
	#if __has_include("\FIR_AirWeaponSystem_US_cfg\Cfgammo.hpp")
		#define have_hi_drag_ammo 1
		#define hi_drag_ammo_500 ""
		#define hi_drag_ammo_2000 ""
	#endif
	
	#include "CAS\CAS_01.hpp"
	#include "CAS\CAS_02.hpp"
	#include "CAS\Fighter_01.hpp"
	#include "CAS\Fighter_02.hpp"
	#include "CAS\Fighter_03.hpp"
	#include "CAS\Fighter_04.hpp"
};
#include "CfgAmmo.hpp"