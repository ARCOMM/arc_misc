/* assignGear specific macros */
#define MEDICAL_R \
LIST_5("ACE_fieldDressing"), \
LIST_1("ACE_morphine"), \
LIST_2("ACE_tourniquet")

#define MEDICAL_CLS \
LIST_2("ACE_bodyBag"), \
LIST_20("ACE_fieldDressing"), \
LIST_10("ACE_morphine"), \
LIST_3("ACE_salineIV_250"), \
LIST_1("ACE_salineIV_500"), \
LIST_5("ACE_epinephrine"), \
LIST_4("ACE_tourniquet"), \
LIST_10("ACE_splint")

#define MEDICAL_M \
LIST_40("ACE_fieldDressing"), \
LIST_20("ACE_morphine"), \
LIST_15("ACE_epinephrine"), \
LIST_10("ACE_salineIV_500"), \
LIST_5("ACE_salineIV_250"), \
LIST_3("ACE_tourniquet"), \
LIST_2("ACE_bodyBag"), \
LIST_20("ACE_splint"), \
LIST_8("ACE_salineIV")

#define MTR_GEAR \
"ACE_RangeTable_82mm", \
"ACE_MapTools"

#define FAC_GEAR \
LIST_4("SmokeShellRed"), \
LIST_4("SmokeShellGreen"), \
LIST_4("SmokeShellPurple")

#define LIST_1(var1) var1
#define LIST_2(var1) var1,var1
#define LIST_3(var1) var1,var1,var1
#define LIST_4(var1) var1,var1,var1,var1
#define LIST_5(var1) var1,var1,var1,var1,var1
#define LIST_6(var1) var1,var1,var1,var1,var1,var1
#define LIST_7(var1) var1,var1,var1,var1,var1,var1,var1
#define LIST_8(var1) var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_9(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_10(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_11(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_12(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_13(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_14(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_15(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_16(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_17(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_18(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_19(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_20(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1

#define LIST_30(var1) LIST_20(var1),LIST_10(var1)
#define LIST_40(var1) LIST_20(var1),LIST_20(var1)
#define LIST_50(var1) LIST_30(var1),LIST_20(var1)
