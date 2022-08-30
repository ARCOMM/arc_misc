#include "script_component.hpp"
cba_settings_hasSettingsFile = 1;
class Extended_PostInit_EventHandlers {
    class GVAR(postInit) {
		serverInit = QUOTE(call COMPILE_SCRIPT(XEH_serverPostInit));
        clientInit = QUOTE(call COMPILE_SCRIPT(XEH_clientPostInit));
    };
};

onLoadName = "Sandbox";
author = "ARCOMM";
onLoadMission = "Welcome to the sandbox, may Zeus decide your fate.";

respawn = 3;
respawnDelay = 20;
respawnVehicleDelay = 30;
respawnTemplates[] = {"MenuPosition","Spectator","Tickets", "Counter"};
respawnTemplatesVirtual[] = {};

disabledAI = 1;
joinUnassigned = 1;

saving = 0;

class Params {
	#define DAYTIMEPERIOD_DEFAULT __EVAL(selectRandom [0,6,12,18])
	#include "\a3\functions_f\Params\paramDaytimePeriod.inc"
	#include "\a3\functions_f\Params\paramGuerFriendly.inc"
	#define WEATHER_DEFAULT __EVAL(selectRandom [0,25,50,75,100])
	#include "\a3\functions_f\Params\paramWeather.inc"
	#include "\a3\functions_f_mp_mark\Params\paramTimeAcceleration.inc"
};

class CfgDebriefingSections {
	class acex_killTracker {
		title = "$STR_ACEX_KillTracker_Title";
		variable = "acex_killTracker_outputText";
	};
	#include "\x\tmf\addons\adminmenu\debriefAdminLog.inc"
};
