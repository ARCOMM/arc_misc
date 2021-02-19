class TMF_autotest {
	class TMF_autotest_testHCs {
		expectedHCs = 3;
	};
	class GVAR(testMacros) {
		code = [                 \
			[                    \
				'any',           \
				'items',         \
				"MEDICAL_R",     \
				[MEDICAL_R]      \
			],                   \
			[                    \
				'cls',           \
				'backpackItems', \
				"MEDICAL_CLS",   \
				[MEDICAL_CLS]    \
			],                   \
			[                    \
				'm',             \
				'backpackItems', \
				"MEDICAL_M",     \
				[MEDICAL_M]      \
			],                   \
			[                    \
				'mtrtl',         \
				'items',         \
				"MTR_GEAR",      \
				[MTR_GEAR]       \
			],                   \
			[                    \
				'fac',           \
				'backpackItems', \
				"FAC_GEAR",      \
				[FAC_GEAR]       \
			]                    \
		] call FUNC(testMacros);
	};
	class GVAR(testTemplate) {
		code = QUOTE([] call FUNC(testTemplate));
	};
	class GVAR(testPlayers) {
		code = QUOTE(                                                                           \
			if ('Scenario' get3DENMissionAttribute 'disabledAI') then {                         \
				[]                                                                              \
			} else {                                                                            \
				[[ARR_3(0, 'AI slots are enabled, disable them under multiplayer attributes')]] \
			};                                                                                  \
		);
	};
	class GVAR(testGroupNames) {
		code = QUOTE([] call FUNC(testGroupNames));
	};
};
