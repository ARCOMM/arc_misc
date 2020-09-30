#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_aan_fnc_init

Description:
	Initializes some functionality for AAN crew if present.

Author:
	Freddo
---------------------------------------------------------------------------- */

if (missionNamespace getVariable [QGVAR(initialized),false]) exitWith {};

["weapon", {
	params ["_unit","_newWeapon","_prevWeapon"];
	TRACE_3("Switched player weapon",_unit,_newWeapon,_prevWeapon);

	if (_newWeapon in CAMERA_TYPES) then {
		if !(_prevWeapon in CAMERA_TYPES) then {

			GVAR(toggleHUDAction) = [[
				"Toggle HUD",
				QUOTE(call FUNC(toggleHUD))
			]] call CBA_fnc_addPlayerAction;

			GVAR(configureOverlayAction) = [[
				"Configure AAN Overlay",
				QUOTE(createDialog QQGVARMAIN(RscAANPrompt))
			]] call CBA_fnc_addPlayerAction;

			GVAR(musicAction) = [[
				"Play Music",
				"['EventTrack01a_F_EPA', 0, false] call CBA_fnc_playMusic;",
				nil, 1.5, false, true, "",
				"([] call CBA_fnc_getMusicPlaying) isEqualTo ['',0,0]"
			]] call CBA_fnc_addPlayerAction;

			[
				"cameraView",
				{
					params ["_unit","_newView","_prevView"];

					TRACE_1("Changed camera view",_newView);

					if (_newView isEqualTo "GUNNER" && {!isNil QGVAR(headline)}) then {
						[parseText GVAR(headline),parseText GVAR(rollingtext)] spawn BIS_fnc_AAN;
					} else {
						AAN_DISPLAY closeDisplay 1;
					};
				}
			] call CBA_fnc_addPlayerEventHandler;

			GVAR(RemoveAANAction) = [[
				"Remove AAN Overlay",
				{
					AAN_DISPLAY closeDisplay 1;


					GVAR(headline) = nil;
					GVAR(rollingtext) = nil;

					[GVAR(RemoveAANAction)] call CBA_fnc_removePlayerAction;

				}, nil, 1.5, false, true, "",
				QUOTE(!isNil QQGVAR(headline))
			]] call CBA_fnc_addPlayerAction;
		};

	} else {
		[GVAR(toggleHUDAction)] call CBA_fnc_removePlayerAction;
		[GVAR(RemoveAANAction)] call CBA_fnc_removePlayerAction;
		[GVAR(configureOverlayAction)] call CBA_fnc_removePlayerAction;
		[GVAR(musicAction)] call CBA_fnc_removePlayerAction;
	};
}, true] call CBA_fnc_addPlayerEventHandler;

GVAR(initialized) = true;
