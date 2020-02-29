#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "ARC Misc: Hide MNP units";
		author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"arc_misc_main",
			"MNP_OPFOR_CONFIG",
			"STOP_BLUFOR_Config",
			"MNP_MIXR_Config"
		};
        VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
