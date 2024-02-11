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
            "ace_ballistics",
            "CBA_JAM",
            "cup_weapons_loadorder",
            "hlcweapons_G36",
            "OFrP_A3_Weapons",
            "pook_GL_c",
            "sp_fwa_machinegun_core"
        };
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"

// Fix FWA
class RscInGameUI
{
    class RscWeaponZeroing;
    class sp_fwa_machinegun_animation: RscWeaponZeroing
    {
        onLoad = ""; //onLoad = "_this call Spearpoint_fnc_machinegunrested;";
    };
};
