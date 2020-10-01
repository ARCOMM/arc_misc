#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "ARC Misc: Weapons";
		author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {
			QGVAR(Negev_NG5)
		};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"arc_misc_main",
			"cup_weapons_loadorder",
			"ace_ballistics"
		};
        VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
