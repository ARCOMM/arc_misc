#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: ARC_MISC_difficulty_fnc_vehicleInit

Description:
	Initializes AI settings for vehicles

Parameters:
	_vehicle - Vehicle to set AI settings on [Object]

Author:
	Freddo
---------------------------------------------------------------------------- */

params ["_vehicle"];

// See initSettings.sqf

switch (GVAR(allowCrewInImmobile)) do {
	case 0: {}; // Default
	case 1: {_vehicle allowCrewInImmobile true}; // Allowed
	case 2: {_vehicle allowCrewInImmobile canFire _vehicle}; // Armed vehicles only
	case 3: {_vehicle allowCrewInImmobile false}; // Disallowed
};

nil
