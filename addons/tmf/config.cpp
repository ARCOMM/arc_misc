#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "ARC Misc: TMF Tweaks";
        author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			QGVARMAIN(main),
			"tmf_autotest",
			"tmf_adminmenu",
			QGVARMAIN(tmf_loadouts)
		};
        VERSION_CONFIG;
    };
};

#include "tmf_adminMenu_authorized_players.hpp"

#include "\x\arc_misc\addons\tmf_loadouts\macros.inc"
#include "CfgEventhandlers.hpp"
#include "autotest.hpp"
