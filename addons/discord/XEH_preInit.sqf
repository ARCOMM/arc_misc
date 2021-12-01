#include "script_component.hpp"
#include "XEH_PREP.sqf"

if !hasInterface exitWith {
	INFO("Headless environment detected, skipped loading RPC.");
};

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
			LOG("Updated RPC");
		}, 1] call CBA_fnc_addPerFrameHandler;
		INFO("RPC Loaded (main menu)");
	};

	// Editor
	case is3DENPreview;
	case is3DENMultiplayer;
	case is3DEN: {
		"ArmaDiscordRPC" callExtension ["mission", [
			text "[ARC] Mission Editor",
			text str diag_tickTime,
			text toLower worldName,
			text getText (configfile >> "cfgworlds" >> worldName >> "description")
		]];
		INFO("RPC Loaded (Editor)");
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
			LOG("Updated RPC");
		}, 1] call CBA_fnc_addPerFrameHandler;
		INFO("RPC Loaded (Multiplayer)");
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
			LOG("Updated RPC");
		}, 1] call CBA_fnc_addPerFrameHandler;
		INFO("RPC Loaded (Singleplayer)");
	};
};


addMissionEventHandler ["Ended", {
	"ArmaDiscordRPC" callExtension "ended";
	INFO("RPC Ended");
}];
