#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_tmf_fnc_testGroupNames

Description:
	Tests if group names are set correctly (not default)
	Used for TMF autotest.

Author:
	Freddo
---------------------------------------------------------------------------- */

private _output = [];
private _groups = (playableUnits + switchableUnits + [player] - [objNull]) apply {group _x};
UNIQUE(_groups);

private _companyNames = ("true" configClasses (configFile >> "CfgWorlds" >> "GroupCompany")) apply {getText (_x >> "Name")};
private _platoonNames = ("true" configClasses (configFile >> "CfgWorlds" >> "GroupPlatoon")) apply {getText (_x >> "Name")};
private _squadNames = ("true" configClasses (configFile >> "CfgWorlds" >> "GroupSquad")) apply {getText (_x >> "Name")};

{
	private _nameArr = (groupID _x) splitString " -";
	if (count _nameArr == 3
		&& {(_nameArr # 0) in _companyNames}
		&& {(_nameArr # 1) in _platoonNames}
		&& {(_nameArr # 2) in _squadNames}
	) then {
		_output pushBack [0, format ["Group (%1) has default Callsign", _x]];
	};
} forEach _groups;

_output
