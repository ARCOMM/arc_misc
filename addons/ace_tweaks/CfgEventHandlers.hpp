class Extended_Killed_EventHandlers {
	class AllVehicles {
		class ADDON {
			killed = QUOTE(call FUNC(handleVehicleDeath));
			exclude[] = {"StaticWeapon","Boat_F"};
		};
	};
};

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
