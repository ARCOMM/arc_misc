#include "..\script_component.hpp"

class CfgPatches
{
    class GVAR(disableNative)
    {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"arc_misc_main",
			"tmf_assigngear"
		};
        VERSION_CONFIG;
    };
};

#include "CfgLoadouts.hpp"
