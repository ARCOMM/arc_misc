cba_settings_hasSettingsFile = 1;
class Extended_PostInit_EventHandlers {
    class arc_postInit {
		serverInit = "call compile preprocessFileLineNumbers 'XEH_serverPostInit.sqf'";
        clientInit = "call compile preprocessFileLineNumbers 'XEH_clientPostInit.sqf'";
    };
};

respawn = 3;
respawnDelay = 20;
respawnVehicleDelay = 30;
respawnTemplates[] = {"MenuPosition","Spectator","Tickets", "Counter"};
respawnTemplatesVirtual[] = {};

disabledAI = 1;
joinUnassigned = 1;
