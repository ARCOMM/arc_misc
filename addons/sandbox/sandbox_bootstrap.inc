#include "script_component.hpp"
cba_settings_hasSettingsFile = 1;
class Extended_PostInit_EventHandlers {
    class arc_postInit {
		serverInit = QUOTE(call COMPILE_FILE(XEH_serverPostInit));
        clientInit = QUOTE(call COMPILE_FILE(XEH_clientPostInit.sqf));
    };
};

respawn = 3;
respawnDelay = 20;
respawnVehicleDelay = 30;
respawnTemplates[] = {"MenuPosition","Spectator","Tickets", "Counter"};
respawnTemplatesVirtual[] = {};

disabledAI = 1;
joinUnassigned = 1;

saving = 0;
