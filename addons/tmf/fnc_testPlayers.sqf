#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_tmf_fnc_testPlayers

Description:
	Checks if a mission has AI slots enabled.
	Used for TMF autotest.

Author:
	Freddo
---------------------------------------------------------------------------- */

if ('Scenario' get3DENMissionAttribute 'disabledAI') then {
	[]
} else {
	[[0, 'AI slots are enabled, disable them under multiplayer attributes']]
}
