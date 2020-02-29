#include "\x\arc_misc\addons\main\script_macros.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "ARC Misc: TMF Loadouts";
        author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
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

#include "macros.inc"
#include "Cfgloadouts.hpp"
