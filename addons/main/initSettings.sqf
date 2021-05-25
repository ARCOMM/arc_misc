[
	QGVAR(spotlight),
	"LIST",
	["Main menu spotlight", "What main menu spotlight button will be displayed"],
	"ARC Misc",
	[
		["Random", "Logo", "Clips"],
		["Random", "Logo", "Clips"],
		0
	],
	false,
	{
		if (_this == "Random") then {
			profileNamespace setVariable [QGVAR(spotlight), selectRandom ["Logo", "Clips"]];
		} else {
			profileNamespace setVariable [QGVAR(spotlight), _this];
		};
	},
	true
] call CBA_fnc_addSetting;
