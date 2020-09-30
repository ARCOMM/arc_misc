#include "script_component.hpp"
#include "\a3\ui_f\hpp\defineCommon.inc"

class CfgPatches
{
    class ADDON
    {
        name = "ARC Misc: AAN Scripts";
        author = "ARCOMM";
        url = "https://github.com/ARCOMM/arc_misc";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"arc_misc_main",
			"arc_misc_tmf_loadouts",
			"Xnooz_Press"
		};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgScriptPaths.hpp"

class RscStandardDisplay;
class RscControlsGroupNoScrollbars;
class RscMessageBox: RscControlsGroupNoScrollbars {
	class Controls {
		class BcgCommonTop;
		class BcgCommon;
		class Text;
		class BackgroundButtonOK;
		class BackgroundButtonMiddle;
		class BackgroundButtonCancel;
		class ButtonOK;
		class ButtonCancel;
	};
};
class RscText;
class RscEdit;
class RscEditMulti;
class RscButtonMenuBIKI;
#include "RscAANPrompt.hpp"

#include "..\tmf_loadouts\macros.inc"
#include "Cfgloadouts.hpp"
