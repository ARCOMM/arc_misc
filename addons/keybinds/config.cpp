#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "ARC Misc: Keybinds";
        author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QGVARMAIN(main),
            "cba_keybinding"
        };
        VERSION_CONFIG;
    };
};

#include "CfgEventhandlers.hpp"
