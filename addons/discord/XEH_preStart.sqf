#include "script_component.hpp"
#include "XEH_PREP.sqf"

if !hasInterface exitWith {
	INFO("Headless environment detected, skipped initializing RPC.");
};

"ArmaDiscordRPC" callExtension "init";

INFO("RPC initialized.");
