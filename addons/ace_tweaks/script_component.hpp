#define COMPONENT ace_tweaks
#include "\x\arc_misc\addons\main\script_macros.hpp"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}
