class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PreStart_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preStart));
	};
};

class Extended_Init_EventHandlers {
	class CAManBase {
		class ADDON {
			init = QUOTE(call FUNC(unitInit));
		};
	};
	class LandVehicle {
		class ADDON {
			init = QUOTE(call FUNC(vehicleInit));
		};
	};
};
