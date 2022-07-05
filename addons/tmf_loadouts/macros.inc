/* assignGear specific macros */
#include "\x\tmf\addons\assigngear\loadouts\macros.inc"

#define MEDICAL_R "FirstAidKit"

#define MEDICAL_CLS \
"Medikit", \
LIST_2("ACE_bodyBag"), \
LIST_2("ACE_tourniquet")


#define MEDICAL_M \
"Medikit", \
LIST_20("ACE_fieldDressing"), \
LIST_10("ACE_morphine"), \
LIST_10("ACE_epinephrine"), \
LIST_7("ACE_salineIV_500"), \
LIST_5("ACE_salineIV_250"), \
LIST_2("ACE_bodyBag"), \
LIST_10("ACE_splint"), \
LIST_5("ACE_salineIV"), \
"ACE_surgicalKit"

#define MTR_GEAR \
"ACE_RangeTable_82mm", \
"ACE_MapTools"

#define FAC_GEAR \
LIST_4("SmokeShellRed"), \
LIST_4("SmokeShellGreen"), \
LIST_4("SmokeShellPurple"), \
"ACRE_VHF30108SPIKE", \
"Laserbatteries"

#define LIST_30(var1) LIST_20(var1),LIST_10(var1)
#define LIST_40(var1) LIST_20(var1),LIST_20(var1)
#define LIST_50(var1) LIST_30(var1),LIST_20(var1)

#ifndef ADDON
ARCMT = 1;
#endif
