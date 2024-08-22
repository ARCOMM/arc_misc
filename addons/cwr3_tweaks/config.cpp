#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "ARC Misc: CWR 3 Tweaks";
        author = "drofseh";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {
            "cwr3_b_vest_pasgt_oliveDrab",
            "cwr3_b_vest_pasgt_alice_oliveDrab",
            "cwr3_b_vest_pasgt_alice_oliveDrab_etool",
            "cwr3_b_vest_pasgt_alice_oliveDrab_ar",
            "cwr3_b_vest_pasgt_alice_oliveDrab_gl",
            "cwr3_b_vest_pasgt_alice_oliveDrab_mg",
            "cwr3_b_vest_pasgt_alice_oliveDrab_officer",
            "cwr3_b_vest_pasgt_alice_oliveDrab_light",
            "cwr3_b_vest_pasgt_alice_oliveDrab_medic"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cwr3_soldiers_us"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
