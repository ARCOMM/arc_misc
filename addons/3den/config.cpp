#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "ARC Misc: 3DEN";
		author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			QGVARMAIN(main)
		};
        VERSION_CONFIG;
		is3DENmod = 1;
	};
};

#include "Cfg3DEN.hpp"
#include "CfgWorlds.hpp"
