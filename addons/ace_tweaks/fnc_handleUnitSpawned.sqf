#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: ARC_MISC_ace_tweaks_fnc_handleUnitSpawned

Description:
	Init function for units.
	Currently used to disable ACE medical for AI

Parameters:
	_unit - Object the event handler is assigned to [Object]

Returns:
	Nothing

Author:
	Freddo
---------------------------------------------------------------------------- */

params ["_unit"];

if (!isPlayer _unit) then {
	[{
		(_this getVariable ["ace_medical_HandleDamageEHID", -1]) isNotEqualTo -1
	}, {
		TRACE_1("Disabling ACE Medical damage for unit", _this);

		_this removeEventHandler ["HandleDamage", _this getVariable ["ace_medical_HandleDamageEHID", -1]]
	}, _unit, 15] call CBA_fnc_waitUntilAndExecute;
};
