#include "script_component.hpp"

#include "XEH_PREP.sqf"

[QGVAR(onMessage), {
	params ["_messageID"];

	if (
		_messageID == 6 &&
		!('ADDON' get3DENMissionAttribute QGVAR(checklistCheck))
	) then {
		[
			"You have not yet confirmed that your mission conforms to the mission checklist.",
			"ARCOMM Mission Testers",
			[
				"CONFORM NOW",
				{
					[] spawn {
						edit3DENMissionAttributes 'ADDON'
					};
					BIS_Message_Confirmed = true
				}
			],
			"SKIP",
			QPATHTOEF(main,data\logo_arc_ca.paa)
		] call BIS_fnc_3DENShowMessage;
	};
}] call CBA_fnc_addEventHandler;
