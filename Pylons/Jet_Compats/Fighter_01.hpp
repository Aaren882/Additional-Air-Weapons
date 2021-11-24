class Plane_Fighter_01_Base_F: Plane_Base_F
{
	class UserActions
	{
		class USAF_GPS_targeting_system
		{
			displayName="GPS/INS Guidance System";
			shortcut="User3";
			position="pilotcontrol";
			radius=10;
			onlyforplayer=1;
			showWindow=0;
			hideOnUse=1;
			condition="(isClass (configFile >> 'CfgPatches' >> 'USAF_Main')) && (driver this == player)";
			statement="createDialog 'USAF_GPS_DIALOG'";
		};
		class USAF_HOB_Setting
		{
			displayName="Configure Height of Burst";
			shortcut="";
			position="pilotcontrol";
			radius=10;
			onlyforplayer=1;
			showWindow=0;
			hideOnUse=1;
			condition="(isClass (configFile >> 'CfgPatches' >> 'USAF_Main')) && (driver this == player)";
			statement="createDialog 'USAF_HOB_DIALOG'";
		};
	};
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