#include "script_component.hpp"

[{!isNil "BIS_fnc_init" && time > 0.1},{
	call COMPILE_FILE(initRespawns);
}] call CBA_fnc_waitUntilAndExecute;
