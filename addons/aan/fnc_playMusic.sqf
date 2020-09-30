#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_aan_playMusic

Description:
	Plays the AAN tune

Parameters:params ["_target", "_caller", "_actionId", "_arguments"];
	0: Target Object [Object]
	1: Caller [Object]
	2: Action ID [Number]
	3: Arguments [Anything]

Returns:
	Nothing

Author:
	Freddo
---------------------------------------------------------------------------- */
params ["_target", "_caller", "_actionId", "_arguments"];

["EventTrack01a_F_EPA", 0, false] call CBA_fnc_playMusic;

nil
