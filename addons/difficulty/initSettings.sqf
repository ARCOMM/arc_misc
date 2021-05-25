
// https://community.bistudio.com/wiki/Arma_3_AI_Skill
[
	QGVAR(enabled),
	"CHECKBOX",
	["Enable AI Skill System", "Turning this off will leave AI with maxed skills. Use caution."],
	["ARC Misc", "AI Settings"],
	true,
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(aimingAccuracy),
	"Slider",
	["Aiming accuracy", "Affects how well AI can lead a target, compensate for recoil and dispersion"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(aimingSpeed),
	"Slider",
	["Aiming Speed", "Affects how quickly the AI can rotate and stabilize its aim"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(commanding),
	"Slider",
	["Commanding", "Affects how quickly recognized targets are shared with the group"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(courage),
	"Slider",
	["Courage", "Affects unit's subordinates' morale"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;


[
	QGVAR(endurance),
	"Slider",
	["Endurance", "Disabled in Arma3"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(general),
	"Slider",
	["General", "Raw ""Skill"", value is distributed to sub-skills unless defined otherwise. Affects the AI's decision making."],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(reloadSpeed),
	"Slider",
	["Reload Speed", "Affects the delay between switching or reloading a weapon"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(spotDistance),
	"Slider",
	["Spot Distance", "Affects the AI ability to spot targets within it's visual or audible range"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(spotTime),
	"Slider",
	["Spot Time", "Affects how quick the AI react to death, damage or observing an enemy"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(aimingShake),
	"Slider",
	["Aiming Shake", "Affects how steadily the AI can hold a weapon"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

[
	QGVAR(randomSkill),
	"Slider",
	["Random Skill %", "Applies a percentage of randomization to each skill"],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.1, 2],
	true,
	{},
	true
] call CBA_fnc_addSetting;

// https://community.bistudio.com/wiki/allowCrewInImmobile
[
	QGVAR(allowCrewInImmobile),
	"LIST",
	["Dismount immobile vehicles", "Whether units should dismount when wheels/tracks are destroyed."],
	["ARC Misc", "AI Settings"],
	[[0,1,2,3],["Default", "All vehicles", "Unarmed vehicles only", "No vehicles"],0],
	true,
	{},
	true
] call CBA_fnc_addSetting;

// https://community.bistudio.com/wiki/enableAIFeature
[
	QGVAR(CombatFormationSoft),
	"CHECKBOX",
	"Enable CombatFormationSoft",
	["ARC Misc", "AI Settings"],
	true,
	true,
	{"CombatFormationSoft" enableAIFeature _this},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(AwareFormationSoft),
	"CHECKBOX",
	"Enable AwareFormationSoft",
	["ARC Misc", "AI Settings"],
	true,
	true,
	{"AwareFormationSoft" enableAIFeature _this},
	false
] call CBA_fnc_addSetting;

// https://community.bistudio.com/wiki/useAISteeringComponent
[
	QGVAR(useAISteeringComponent),
	"CHECKBOX",
	["Enable useAISteeringComponent", "Disable to revert to pre-apex driving."],
	["ARC Misc", "AI Settings"],
	true,
	true,
	{useAISteeringComponent _this},
	false
] call CBA_fnc_addSetting;

// https://community.bistudio.com/wiki/enableAttack
[
	QGVAR(enableAttack),
	"LIST",
	["Enable Attack on Groups", "Set if leader can issue attack commands to the soldiers in his group."],
	["ARC Misc", "AI Settings"],
	[[0,1,2],["Default", "Enabled", "Disabled"],0],
	true,
	{},
	true
] call CBA_fnc_addSetting;

// https://community.bistudio.com/wiki/allowFleeing
[
	QGVAR(allowFleeing),
	"SLIDER",
	["Allow Fleeing", "Sets the cowardice level of groups. 0 is least, 1 is most, set at 0.5 for default values."],
	["ARC Misc", "AI Settings"],
	[0, 1, 0.5, 1],
	true,
	{},
	true
] call CBA_fnc_addSetting;

// https://community.bistudio.com/wiki/disableRemoteSensors
[
	QGVAR(disableRemoteSensors),
	"CHECKBOX",
	["Disable Remote Sensors", "Disables visibility raycasts on non-local units."],
	["ARC Misc", "AI Settings"],
	false,
	true,
	{
		if !hasInterface then {
			disableRemoteSensors _this
		};
	},
	false
] call CBA_fnc_addSetting;
