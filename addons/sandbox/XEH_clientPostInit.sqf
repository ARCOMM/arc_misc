#include "script_component.hpp"
[{!isNil "BIS_fnc_init" && {time > 0.1} && {!([] call BIS_fnc_isLoading)}},{
	["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;

	[
		"ModuleCurator_F",
		"init",
		compile format ["[%1] call BIS_fnc_drawCuratorDeaths;",player],
		true,
		[],
		true
	] call CBA_fnc_addClassEventHandler;

}] call CBA_fnc_waitUntilAndExecute;
