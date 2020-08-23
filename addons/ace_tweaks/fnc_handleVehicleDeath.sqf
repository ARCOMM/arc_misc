#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: ARC_MISC_ace_tweaks_fnc_handleVehicleDeath

Description:
	Currently vehicles blowing up hardly deals damage to crew. This function
	is a placeholder until a proper ACE implementation is achieved.

Parameters:
	_unit - Object the event handler is assigned to [Object]
	_killer - Object that killed the unit. Contains the unit itself in case of collisions [Object]
	_instigator - Person who pulled the trigger [Object]
	_useEffects - same as useEffects in setDamage alt syntax [Boolean]

Returns:
	Nothing

Author:
	Freddo
---------------------------------------------------------------------------- */

params ["_unit", "_killer", "_instigator", "_useEffects"];

{
	if (isDamageAllowed _x) then {
		_x setDamage 1;
	};
} forEach crew _unit;
