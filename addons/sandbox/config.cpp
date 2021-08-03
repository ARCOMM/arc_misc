#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "ARC Misc: Sandbox Missions";
		author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			QGVARMAIN(main)
		};
        VERSION_CONFIG;
	};
};

#include "CfgMissions.hpp"
