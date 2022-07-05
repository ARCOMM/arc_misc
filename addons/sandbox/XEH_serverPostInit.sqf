#include "script_component.hpp"
[{!isNil "BIS_fnc_init" && time > 0.1},{
	call COMPILE_SCRIPT(initRespawns);

	// Add boxes and respawn logics to Curator
	[
		"ModuleCurator_F",
		"init",
		{
			params ['_logic'];

			_logic addCuratorEditableObjects [GVAR(boxes) + GVAR(respawnLogics) + GVAR(lanterns)];
			[_logic,[west,east,resistance]] call BIS_fnc_drawCuratorRespawnMarkers;
			[_logic] call BIS_fnc_drawCuratorLocations;
			{
				[_x] call BIS_fnc_drawCuratorDeaths;
			} forEach ([] call CBA_fnc_players);
		},
		true,
		[],
		true
	] call CBA_fnc_addClassEventHandler;

	["Initialize", [true]] call BIS_fnc_dynamicGroups;

}] call CBA_fnc_waitUntilAndExecute;
