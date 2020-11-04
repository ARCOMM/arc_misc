#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "ARC Misc: Discord Rich Presence";
		author = "Björn Dahlgren";
        url = "https://www.anrop.se";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"arc_misc_main"
		};
        VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"
