#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_tmf_fnc_testDeprecatedMods

Description:
	Checks for deprecated mods, and warns if they are used.
	Used for TMF autotest.

Author:
	Freddo
---------------------------------------------------------------------------- */

private _output = [];

// Scan placed vehicles
private _vehs = vehicles + allUnits;
MAP(_vehs,configOf _x);
UNIQUE(_vehs);
FILTER(_vehs,(configSourceMod _x) in _this);
MAP(_vehs,configName _x);
private _deprecatedVehicles = [];

if (_vehs isNotEqualTo []) then {
	_output pushBack [0, format ["Deprecated vehicles used: %1", _vehs]];
};

// Scan present loadouts
private _items = [];
{
	private _role = _x;

	{
		_items append getArray (_role >> _x);
	} forEach [
		"uniform",
		"vest",
		"backpack",
		"headgear",
		"goggles",
		"hmd",
		"primaryWeapon",
		"scope",
		"bipod",
		"attachment",
		"silencer",
		"secondaryWeapon",
		"secondaryAttachments",
		"sidearmWeapon",
		"sidearmAttachments",
		"magazines",
		"items",
		"linkedItems",
		"backpackItems"
	];
} forEach ([missionConfigFile >> "CfgLoadouts", 1, false] call BIS_fnc_returnChildren);

UNIQUE(_items);
FILTER(_items,(configSourceMod (_x call CBA_fnc_getItemConfig)) in _this);

if (_items isNotEqualTo []) then {
	_output pushBack [0, format ["Deprecated equipment used: %1", _items]];
};

_output
