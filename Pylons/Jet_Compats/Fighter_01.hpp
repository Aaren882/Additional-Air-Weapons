class Plane_Fighter_01_Base_F: Plane_Base_F
{
	#include "UserActions\UserActions.hpp"
	class Components: Components
	{
		class TransportPylonsComponent
		{
			class pylons
			{
				class pylon1
				{
					hardpoints[] += 
					{
						#include "Ext\Compat_Missiles.hpp"
					};
				};
				class pylon2: pylon1{};
				class pylon3
				{
					hardpoints[] += 
					{
						#include "Ext\Compat_Bombs_Ext.hpp"
					};
				};
				class pylon4: pylon3{};
				class pylonBayCenter3
				{
					hardpoints[] += 
					{
						#include "Int\Compat_Bombs_Int.hpp"
					};
				};
				class pylonBayCenter4: pylonBayCenter3{};
				class pylonBayCenter5
				{
					hardpoints[] += 
					{
						#include "Int\Compat_Bombs_Int.hpp"
					};
				};
				class pylonBayCenter6: pylonBayCenter5{};
			};
		};
	};
	class Eventhandlers: Eventhandlers
	{
		class USAF_Compat
		{
			fired = "_this spawn AAW_fnc_USAF_Compat";
		};
	};
};
class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F
{
	class Components: Components
	{
		class TransportPylonsComponent
		{
			class pylons
			{
				class pylonBayCenter1
				{
					hardpoints[] += 
					{
						#include "Int\Compat_Missiles_AA_Int.hpp"
					};
				};
				class pylonBayCenter2: pylonBayCenter1{};
				class pylonBayCenter3
				{
					hardpoints[] += 
					{
						#include "Int\Compat_Bombs_Int.hpp"
					};
				};
				class pylonBayCenter4: pylonBayCenter3{};
				class pylonBayCenter5
				{
					hardpoints[] += 
					{
						#include "Int\Compat_Bombs_Int.hpp"
					};
				};
				class pylonBayCenter6: pylonBayCenter5{};
			};
		};
	};
};