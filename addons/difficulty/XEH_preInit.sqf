#include "script_component.hpp"

#include "XEH_PREP.sqf"
#include "initSettings.sqf"

// Global settings
"CombatFormationSoft" enableAIFeature GVAR(CombatFormationSoft);
"AwareFormationSoft" enableAIFeature GVAR(AwareFormationSoft);

useAISteeringComponent GVAR(useAISteeringComponent);
disableRemoteSensors GVAR(disableRemoteSensors);
