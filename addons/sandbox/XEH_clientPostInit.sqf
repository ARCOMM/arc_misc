#include "script_component.hpp"
[{!isNil "BIS_fnc_init"},{
	["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
	
	private _index = allCurators findIf {getAssignedCuratorUnit _x isEqualTo player};
	
	if (_index != -1) then {
		// Initialize curator unit
		[allCurators # _index,[west,east,resistance]] call bis_fnc_drawCuratorRespawnMarkers;
	} else {
		// Initialize player
		[player] call BIS_fnc_drawCuratorDeaths;
	};
}] call CBA_fnc_waitUntilAndExecute; 