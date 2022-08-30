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
			"hlcweapons_G36",
			"sp_fwa_machinegun_core",
			"pook_GL_c"
		};
        VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"

// Fix FWA
class RscInGameUI
{
	class RscWeaponZeroing;
	class sp_fwa_machinegun_animation: RscWeaponZeroing
	{
		onLoad = ""; //onLoad = "_this call Spearpoint_fnc_machinegunrested;";
	};
};
