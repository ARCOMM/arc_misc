#include "script_component.hpp"

#include "initSettings.sqf"

// Global settings
"CombatFormationSoft" enableAIFeature GVAR(CombatFormationSoft);
"AwareFormationSoft" enableAIFeature GVAR(AwareFormationSoft);

useAISteeringComponent GVAR(useAISteeringComponent);
disableRemoteSensors GVAR(disableRemoteSensors);
