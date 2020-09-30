#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_aan_fnc_toggleHUD

Description:
	Toggles camera HUD

Author:
	Freddo
---------------------------------------------------------------------------- */

private _player = [] call CBA_fnc_currentUnit;
private _hasMag = !([] isEqualTo secondaryWeaponMagazine _player);
private _success = false;
switch (secondaryWeapon _player) do {
	case "XZ_CamRecorder_2": {
		[_player,"XZ_CamRecorder_1"] call CBA_fnc_addWeaponWithoutItems;
		_player selectWeapon "XZ_CamRecorder_1";
		_success = true;
	};
	case "XZ_CamRecorder_1": {
		_success = [_player,"XZ_CamRecorder_2"] call CBA_fnc_addWeaponWithoutItems;
		_player selectWeapon "XZ_CamRecorder_2";
		_success = true;
	};
};

if (_success && _hasMag) then {
	_player addSecondaryWeaponItem "XZ_CamRecorder_Mag";
};

nil
