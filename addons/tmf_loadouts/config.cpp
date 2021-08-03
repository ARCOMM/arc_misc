#include "script_component.hpp"

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
			QGVARMAIN(main),
			"tmf_assigngear",
			QGVAR(disableNative)
		};
        VERSION_CONFIG;
    };
};

#include "macros.inc"
#include "CfgLoadouts.hpp"
