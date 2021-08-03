#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_tmf_fnc_testTemplate

Description:
	Checks if a mission has or has not used the ARCOMM Mission Template.
	Used for TMF autotest.

Author:
	Freddo
---------------------------------------------------------------------------- */

private _output = [];

if !("Scenario" get3DENMissionAttribute QGVARMAIN(isTemplate)) then {
	_output pushBack [1,"ARCOMM Mission template has not been used for this mission or is outdated"];
};

_output
