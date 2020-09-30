#include "..\script_component.hpp"

params ["_mode", "_params", "_class"];
TRACE_3("RscAANPrompt",_mode,_params,_class);

private _player = [] call CBA_fnc_currentUnit;

switch (_mode) do {
	case "onLoad": {
		private _aanDisplay = uiNamespace getVariable ["BIS_AAN",displayNull];
		if !(isNull _aanDisplay) then {
			_aanDisplay closeDisplay 1;
		};
		GVAR(headline) = nil;
		GVAR(rollingtext) = nil;
	};

	case "commit": {
		_params params ["_ctrl"];
		private _display = ctrlParent _ctrl;

		with missionNamespace do {
			GVAR(headline) = ctrlText (_display displayCtrl IDC_AAN_HEADLINE_EDIT);
			GVAR(rollingtext) = ctrlText (_display displayCtrl IDC_AAN_ROLLINGTEXT_EDIT);

			TRACE_4("Commit",GVAR(headline),GVAR(rollingtext),_display displayCtrl IDC_AAN_HEADLINE_EDIT,_display displayCtrl IDC_AAN_ROLLINGTEXT_EDIT);

			closeDialog 1;

			if (currentWeapon _player in CAMERA_TYPES && cameraView == "GUNNER") then {
				[parseText GVAR(headline),parseText GVAR(rollingtext)] spawn BIS_fnc_AAN;
			};
		};
	};

	case "cancel": {
		closeDialog 2;
		GVAR(headline) = nil;
		GVAR(headline) = nil;
	};

	case "onUnload": {};
};
