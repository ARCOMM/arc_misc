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
			QGVARMAIN(main),
			"cup_weapons_loadorder",
			"ace_ballistics",
			"hlcweapons_G36"
		};
        VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
