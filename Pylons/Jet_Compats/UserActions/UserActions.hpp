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