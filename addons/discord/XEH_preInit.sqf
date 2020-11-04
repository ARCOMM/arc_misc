#include "script_component.hpp"
#include "XEH_PREP.sqf"

diag_log ["is3DEN", is3DEN];

switch (true) do {
	// Main menu
	case (["intro", missionName] call BIS_fnc_inString): {
		[{
			"ArmaDiscordRPC" callExtension ["mission", [
				formatText ["[ARC] %1", "In main menu"],
				text str CBA_missionTime,
				text toLower worldName,
				text getText (configfile >> "cfgworlds" >> worldName >> "description")
			]];
		}, 1] call CBA_fnc_addPerFrameHandler;
	};

	// Editor
	case is3DENPreview;
	case is3DEN: {
		"ArmaDiscordRPC" callExtension ["mission", [
			text "[ARC] Mission Editor",
			diag_tickTime,
			text toLower worldName,
			text getText (configfile >> "cfgworlds" >> worldName >> "description")
		]];
	};

	// Multiplayer
	case isMultiplayer: {
		[{
			"ArmaDiscordRPC" callExtension ["mission", [
				formatText ["[ARC] %1", briefingName],
				text str CBA_missionTime,
				text toLower worldName,
				text getText (configfile >> "cfgworlds" >> worldName >> "description")
			]];
		}, 1] call CBA_fnc_addPerFrameHandler;
	};

	// Assumed single player mission
	default {
		[{
			"ArmaDiscordRPC" callExtension ["mission", [
				formatText ["[ARC] %1 (Singleplayer)", briefingName],
				text str CBA_missionTime,
				text toLower worldName,
				text getText (configfile >> "cfgworlds" >> worldName >> "description")
			]];
		}, 1] call CBA_fnc_addPerFrameHandler;
	};
};


addMissionEventHandler ["Ended", {
	"ArmaDiscordRPC" callExtension "ended";
}];
