#include "script_component.hpp"
cba_settings_hasSettingsFile = 1;
class Extended_PostInit_EventHandlers {
    class GVAR(postInit) {
		serverInit = QUOTE(call COMPILE_FILE(XEH_serverPostInit));
        clientInit = QUOTE(call COMPILE_FILE(XEH_clientPostInit));
    };
};

author = "ARCOMM";
onLoadMission = "Welcome to the sandbox, may Zeus decide your fate.";

respawn = 3;
respawnDelay = 20;
respawnVehicleDelay = 30;
respawnTemplates[] = {"MenuPosition","Spectator","Tickets", "Counter"};
respawnTemplatesVirtual[] = {};

disabledAI = true;
joinUnassigned = true;

saving = false;

class Params {
	#define DAYTIMEPERIOD_DEFAULT __EVAL(selectRandom [0,6,12,18])
	#include "\a3\functions_f\Params\paramDaytimePeriod.hpp"
	#include "\a3\functions_f\Params\paramGuerFriendly.hpp"
	#define WEATHER_DEFAULT __EVAL(selectRandom [0,25,50,75,100])
	#include "\a3\functions_f\Params\paramWeather.hpp"
	#include "\a3\Functions_F_MP_Mark\Params\paramTimeAcceleration.hpp"
};
