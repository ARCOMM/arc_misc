#include "script_component.hpp"
params ["_vehicle"];

// See initSettings.sqf

switch (GVAR(allowCrewInImmobile)) do {
	case 0: {}; // Default
	case 1: {_vehicle allowCrewInImmobile true}; // Allowed
	case 2: {_vehicle allowCrewInImmobile canFire _vehicle}; // Armed vehicles only
	case 3: {_vehicle allowCrewInImmobile false}; // Disallowed
};
