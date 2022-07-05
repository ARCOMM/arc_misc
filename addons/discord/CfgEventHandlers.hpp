class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PreStart_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
	};
};

class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMultiplayerSetup {
        ADDON = QUOTE(call COMPILE_SCRIPT(XEH_RscDisplayMultiplayerSetup));
    };
};
