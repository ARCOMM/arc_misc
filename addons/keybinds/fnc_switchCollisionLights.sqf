#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: ARC_MISC_keybinds_fnc_switchCollisionLights

Description:
	Switch collision lights on or off

Parameters:
	none

Returns:
	Nothing

Author:
	drofseh
---------------------------------------------------------------------------- */
private _vehicle = vehicle player;

if (!(_vehicle == player) && {(driver _vehicle) isEqualTo player || {(effectiveCommander _vehicle) isEqualTo player}}) then {
    if (isCollisionLightOn _vehicle) then {
        _vehicle setCollisionLight false;
    } else {
        _vehicle setCollisionLight true;
    };
};
