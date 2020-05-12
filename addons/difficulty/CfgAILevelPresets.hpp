
// Edit preset values below
#define AILEVELPRESET(x)\
class x { \
	displayName = "ARCOMM"; \
	precisionAI = 0.2; \
	skillAI = 0.7; \
}
class CfgAILevelPresets {
	// Overwriting the default presets using above macro
	AILEVELPRESET(AILevelHigh);
	AILEVELPRESET(AILevelLow);
	AILEVELPRESET(AILevelMedium);
	AILEVELPRESET(Custom);
};
