#include "script_component.hpp"

#include "XEH_PREP.sqf"
#include "initSettings.sqf"
["CBA_settingsInitialized", {
	LOG("Settings initialized, enabling systems");

	// Global settings
	"CombatFormationSoft" enableAIFeature GVAR(CombatFormationSoft);
	"AwareFormationSoft" enableAIFeature GVAR(AwareFormationSoft);

	useAISteeringComponent GVAR(useAISteeringComponent);
	disableRemoteSensors GVAR(disableRemoteSensors);

	// Add inits for vehicles and units
	["CAManBase", "initPost", FUNC(unitInit), true, [], true] call CBA_fnc_addClassEventHandler;
	["LandVehicle", "initPost", FUNC(vehicleInit), true, [], true] call CBA_fnc_addClassEventHandler;

}] call CBA_fnc_addEventHandler;
