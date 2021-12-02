if (isClass (configFile >> 'CfgPatches' >> 'USAF_Main')) then {
  _this spawn USAF_GPS_DIALOG_fnc_firedGPS;
};
