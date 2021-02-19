#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_tmf_loadouts_fnc_testMacros

Description:
	Checks if a mission has correctly assigned macro equipment.
	Used for TMF autotest.

Parameters:
	_this - Macros to check in format below [Array of arrays]
		0: Role to check [String]
		1: Inventory to check [String]
		2: Macro name [String]
		3: Macro contents [String to parseArray]

Author:
	Freddo
---------------------------------------------------------------------------- */

private _output = [];
private _loadoutClasses = "getNumber (_x >> 'overrideMacros') == 0" configClasses (missionConfigFile >> "CfgLoadouts");

if (_loadoutClasses isEqualTo []) exitWith {_output};

if (getMissionConfigValue ["ARCMT", 0] < 1) exitWith {
	_output pushBack [0, "Loadout macros are not correctly included"];
	_output
};

private _fnc_countOccurrences = {
	params ["_arr", "_str"];
	TRACE_2("Counting occurences autotest",_arr,_str);
	{_x == _str} count _arr
};

// Checks if an inventory contains all macro contents
private _fnc_checkInventory = {
	scopeName "checkInventory";
	params ["_class", "_contents"];
	private _contentClasses = _contents arrayIntersect _contents;
	private _classInventory = getArray _class;

	private _hash = [];
	{
		_hash pushBack [
			_x,
			[_contents, _x] call _fnc_countOccurrences
		];
	} forEach _contentClasses;
	_hash = [_hash, 0] call CBA_fnc_hashCreate;

	TRACE_4("Checking inventory autotest",_hash,_contents,_contentClasses,_classInventory);

	[_hash, {
		if (([_classInventory, _key] call _fnc_countOccurrences) < _value) then {
			false breakOut "checkInventory";
		};
	}] call CBA_fnc_hashEachPair;

	true
};

{
	private _faction = _x;
	{
		_x params ["_role", "_inventory", "_macro", "_contents"];

		if (_role == "any") then {
			{
				TRACE_1("Checking role autotest",configName _x);
				if !([_x >> _inventory, _contents] call _fnc_checkInventory)  then {
					_output pushBack [0, format ["Loadout '%1' > '%2' lacks contents from '%3' in '%4'", configName _faction, configName _x, _macro, _inventory]];
				};
			} forEach ("true" configClasses _faction);
		} else {
			private _class = (_faction >> _role);
			if (isClass (_class) && {!([_class >> _inventory, _contents] call _fnc_checkInventory)})  then {
				TRACE_1("Checking role autotest",configName _class);
				_output pushBack [0, format ["Loadout '%1' > '%2' lacks contents from '%3' in '%4'", configName _faction, configName _class, _macro, _inventory]];
			};
		};
	} forEach _this;
} forEach _loadoutClasses;

_output
