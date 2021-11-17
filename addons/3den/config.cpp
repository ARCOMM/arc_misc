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
			QGVARMAIN(main),
			"tmf_common"
		};
        VERSION_CONFIG;
		is3DENmod = 1;
	};
};

#include "CfgEventhandlers.hpp"
#include "CfgCommands.hpp"
#include "display3DEN.hpp"
#include "Cfg3DEN.hpp"
#include "CfgWorlds.hpp"
