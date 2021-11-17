class TMF_autotest {
	class TMF_autotest_testHCs {
		expectedHCs = 3;
	};
	class GVAR(testMacros) {
		class medical_r {
			name = "MEDICAL_R";
			role = "any";
			container = "items";
			contents[] = {MEDICAL_R};
		};
		class medical_cls {
			name = "MEDICAL_CLS";
			role = "cls";
			container = "backpackItems";
			contents[] = {MEDICAL_CLS};
		};
		class medical_m {
			name = "MEDICAL_M";
			role = "m";
			container = "backpackItems";
			contents[] = {MEDICAL_M};
		};
		class mtr_gear {
			name = "MTR_GEAR";
			role = "mtrtl";
			container = "items";
			contents[] = {MTR_GEAR};
		};
		class fac_gear {
			name = "FAC_GEAR";
			role = "fac";
			container = "backpackItems";
			contents[] = {FAC_GEAR};
		};

		code = QUOTE([] call FUNC(testMacros));
	};
	class GVAR(testPlayers) {
		code = QUOTE([] call FUNC(testPlayers));
	};
	class GVAR(testGroupNames) {
		code = QUOTE([] call FUNC(testGroupNames));
	};
	class GVAR(testDeprecatedMods) {
		code = QUOTE(['@community_factions_project_(cfp)'] call FUNC(testDeprecatedMods));
	};
};
