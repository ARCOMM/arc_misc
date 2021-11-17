#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_3den_fnc_testChecklist

Description:
	Checks if the mission maker has confirmed the checklist.
	Used for TMF autotest.

Author:
	Freddo
---------------------------------------------------------------------------- */

if !('ADDON' get3DENMissionAttribute QGVAR(checklistCheck))then {
	[]
} else {
	[[0, 'Mission has not been tested against the checklist']]
}
