#include "script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

if (hasInterface) then {
    ["ARCOMM Keybinds", QGVAR(Collision_Lights_Toggle), localize LSTRING(Collision_Lights_Toggle), {
        _this call FUNC(switchCollisionLights);
        true
    }, {false}, [DIK_L, [true, false, false]], false] call CBA_fnc_addKeybind; //SHIFT + L Key
};
