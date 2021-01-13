#include "script_component.hpp"

private _startPoses = [];

private _respawnTypes = [
		"ModuleRespawnPositionEast_F",
		"ModuleRespawnPositionWest_F",
		"ModuleRespawnPositionGuer_F"/*,
		"ModuleRespawnPositionCiv_F"*/ // Civ respawn disabled
];

// Find suitable respawn positions
for "_i" from 1 to 5 do {
	// https://community.bistudio.com/wiki/selectBestPlaces
	private _potentialStartPlaces = selectBestPlaces [
		[worldSize / 2, worldSize / 2],		// Position
		worldSize / 2, 						// Radius
		"meadow + 2*houses - sea", 			// Expression
		75, 								// Precision
		10									// sourcesCount
	];

	MAP(_potentialStartPlaces,_x # 0);

	// Find 4 empty spaces near mentioned places
	{
		private _pos = _x;
		if (count _startPoses < count _respawnTypes && {_startPoses findIf {_x distance _pos < 150} == -1}) then {
			private _emptyPos = _x findEmptyPosition [0, 25];
			if !(_emptyPos isEqualTo []) then {
				PUSH(_startPoses,_emptyPos);
			};
		};
	} forEach _potentialStartPlaces;
};

if (count _startPoses < count _respawnTypes) exitWith {
	"SANDBOX: Unable to find safe places to spawn" remoteExec ["systemChat"];
	ERROR("Unable to find safe places to spawn");
};

private _respawnLogics = [];
private _logicGroup = createGroup sideLogic;
private _boxes = [];
private _lanterns = [];
{
	LOG_1("Creating initial respawn at position", _x);
	private _box = createVehicle ["Land_PaperBox_open_full_F", _x, [], 0, "NONE"];
	private _lantern = createVehicle ["Land_Camping_Light_F", _x, [], 0, "NONE"];
	_lantern attachTo [_box, [-0.422119,0.346191,0.685676]];
	// _lantern setVectorDirAndUp [vectorDir _box, vectorUp _box]; // Handled by attachTo
	PUSH(_boxes,_box);
	PUSH(_lanterns,_lantern);

	private _respawnPosition = _logicGroup createUnit [(_respawnTypes # _forEachIndex), _box, [], 0, "NONE"];
	_respawnPosition setVariable ['BIS_fnc_initModules_disableAutoActivation', false, true];

	PUSH(_respawnLogics,_respawnPosition);
} forEach _startPoses;

// Add Arsenals
[_boxes,{{
	if !(isNil "ACE_arsenal_fnc_openBox") then {
		_x addAction [
			"<t size='2' font='RobotoCondensedBold'>ACE Arsenal</t>",
			{[player, player, true] call ACE_arsenal_fnc_openBox;},
			0, 102, true, false
		];
	};
	_x addAction [
		"<t size='2' font='RobotoCondensedBold'>TMF Loadouts</t>",
		{[] call TMF_assignGear_fnc_gearSelector},
		0, 101, true, false
	];
	_x addAction [
		"<t size='2' font='RobotoCondensedBold'>Arsenal</t>",
		{0 = ["Open", true] spawn BIS_fnc_arsenal;},
		0, 102, true, false
	];
} forEach _this}] remoteExecCall ["BIS_fnc_call", 0, true];

GVAR(boxes) = _boxes;
GVAR(lanterns) = _lanterns;
GVAR(respawnLogics) = _respawnLogics;
publicVariable QGVAR(boxes);
publicVariable QGVAR(respawnLogics);
publicVariable QGVAR(lanterns);
