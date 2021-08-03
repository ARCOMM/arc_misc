#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "ARC Misc: Main";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
			"A3_Data_F_Enoch_Loadorder",
			"A3_Data_F_Mod_Loadorder",
			"A3_Data_F_Warlords_Loadorder"
        };
        author = "ARCOMM";
        authors[] = {};
        url = "https://github.com/ARCOMM/arc_misc";
        VERSION_CONFIG;
		is3DENmod = 1;
    };
};

#include "disableStockMissions.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgMainMenuSpotlight.hpp"
#include "CfgWorlds.hpp"
#include "Cfg3DEN.hpp"
