#include "script_component.hpp"
[{!isNil "BIS_fnc_init" && {time > 0.1} && {!([] call BIS_fnc_isLoading)}},{
	["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
	{
		[player] call BIS_fnc_drawCuratorDeaths;
	} forEach allCurators;

}] call CBA_fnc_waitUntilAndExecute;
