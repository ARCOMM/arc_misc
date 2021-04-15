#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "ARC Misc: Difficulty Settings";
		author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"arc_misc_main"
		};
        VERSION_CONFIG;
	};
};

#include "CfgDifficultyPresets.hpp"
#include "CfgAILevelPresets.hpp"
#include "CfgAISkill.hpp"
#include "CfgBrains.hpp"
#include "CfgEventhandlers.hpp"
#include "Cfg3DEN.hpp"
#include "RscDisplayAttributesMan.hpp"
