#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "ARC Misc: ACE Tweaks";
		author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			QGVARMAIN(main),
			"ace_minedetector",
			"ace_medical",
			"ace_medical_statemachine",
			"ace_medical_engine"
		};
        VERSION_CONFIG;
	};
};

// Remove AI from statemachine
class ACE_Medical_StateMachine {
	list = QUOTE((call ace_common_fnc_getLocalUnits) select {isPlayer _x});
};

class ace_medical_replacementItems {
	ItemType_401[] = {
		{"ACE_fieldDressing", 5},
		{"ACE_morphine", 1},
		{"ACE_tourniquet", 2}
	};
	ItemType_619[] = {
		{"ACE_fieldDressing", 20},
		{"ACE_epinephrine", 5},
		{"ACE_morphine", 10},
		{"ACE_salineIV_250", 5},
		{"ACE_salineIV_500", 1},
		{"ACE_tourniquet", 3},
		{"ACE_splint", 10}
	};
};

#include "ACE_detector.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
