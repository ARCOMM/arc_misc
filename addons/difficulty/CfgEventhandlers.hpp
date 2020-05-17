class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_Init_EventHandlers {
	class CAManBase {
		class ADDON {
			init = QUOTE(call COMPILE_FILE(XEH_unitInit));
		};
	};
	class LandVehicle {
		class ADDON {
			init = QUOTE(call COMPILE_FILE(XEH_vehicleInit));
		};
	};
};
