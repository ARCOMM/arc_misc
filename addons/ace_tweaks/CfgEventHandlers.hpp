class Extended_Killed_EventHandlers {
	class AllVehicles {
		class ADDON {
			killed = QUOTE(call FUNC(handleVehicleDeath));
			exclude[] = {"StaticWeapon","Boat_F"};
		};
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class ADDON {
			init = QUOTE(call FUNC(handleUnitSpawned));
		};
	};
};

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
