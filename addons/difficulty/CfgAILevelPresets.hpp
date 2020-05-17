
// precision and skillAI are maxes as they're handled via CBA settings
#define AILEVELPRESET(x)\
class x { \
	displayName = "ARCOMM"; \
	precisionAI = 1.0; \
	skillAI = 1.0; \
}
class CfgAILevelPresets {
	// Overwriting the default presets using above macro
	AILEVELPRESET(AILevelHigh);
	AILEVELPRESET(AILevelLow);
	AILEVELPRESET(AILevelMedium);
	AILEVELPRESET(Custom);
};
