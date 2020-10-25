// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Uniforms
//		* CUP Weapons
//		* Community Factions Project
//		* FIR AWS(AirWeaponSystem)
//		* NIArms Core
//		* NIArms M249 Pack
//		* Wearable Antennas

// Weight:
// Rifleman - 15kg
// Rifleman AT - 21.6kg
// Autorifleman - 25kg
// Assistant Autorifleman - 27.5kg
// Combat Lifesaver - 19.3kg
// Fireteam Leader - 21kg
// Squad Leader - 19.9kg
// Medic - 30.4kg

//	Created by: AChesheireCat

class baseMan {
	displayName = "Unarmed";
	uniform[] = {
		"CUP_U_CRYE_G3C_MC_US",
		"CUP_U_CRYE_G3C_MC_US_V2"
	};
	vest[] = {"CUP_V_CPC_lightbelt_mc"};
	backpack[] = {};
	headgear[] = {"CFP_75th_Beanie_Olv"};
	goggles[] = {"default"};
	hmd[] = {"CUP_NVG_PVS15_black"};
	faces[] = {};
	insignias[] = {};

	primaryWeapon[] = {};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};

	secondaryWeapon[] = {};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {};
	sidearmAttachments[] = {};

	magazines[] = {};
	items[] = {
		MEDICAL_R ,
		"ACE_IR_Strobe_Item",
		"ACE_Flashlight_XL50",
		"ACE_microDAGR"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};

	backpackItems[] = {};

	traits[] = {};

	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	vest[] = {
		"CUP_V_CPC_Fastbelt_mc",
		"CUP_V_CPC_Fast_mc"
	};
	headgear[] = {
		"CUP_H_OpsCore_Covered_MCAM_US_SF",
		"CUP_H_OpsCore_Covered_MCAM_US"
	};
	primaryWeapon[] = {
		"CUP_arifle_M4A1_SOMMOD_black",
		"CUP_arifle_M4A1_SOMMOD_Grip_black"
	};
	scope[] = {
		"optic_holosight",
		"optic_holosight_blk_f",
		"cup_optic_microt1",
		"cup_optic_eotech553_black"
	};
	attachment[] = {
		"cup_acc_anpeq_15_tan_top",
		"cup_acc_anpeq_15_flashlight_tan_l",
		"cup_acc_anpeq_15",
		"cup_acc_anpeq_15_top_flashlight_tan_l"
	};
	magazines[] = {
		LIST_8("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_3("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {
		"CUP_V_CPC_weaponsbelt_mc",
		"CUP_V_CPC_weapons_mc"
	};
	backPack[] = {"CFP_Camelbak_Mule_Drab"};
	primaryWeapon[] = {
		"CUP_arifle_Mk16_STD_EGLM",
		"CUP_arifle_mk18_m203_black"
	};
	attachment[] = {
		"cup_acc_anpeq_15_tan_top",
		"cup_acc_anpeq_15",
	};
	magazines[] = {
		LIST_8("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell"),
		LIST_10("CUP_1Rnd_HEDP_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203"),
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
	};
};

class car : r {
	displayName = "Carabinier";
};

class cls : car {
	displayName = "Combat Life Saver";
	vest[] = {
		"CUP_V_CPC_medicalbelt_mc",
		"CUP_V_CPC_medical_mc"
	};
	backpack[] = {"B_AssaultPack_mcamo"};
	traits[] = {"medic"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	vest[] = {
		"CUP_V_CPC_light_mc",
		"CUP_V_CPC_lightbelt_mc"
	};
	primaryWeapon[] = {"CUP_arifle_mk18_black"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		"HandGrenade",
		"SmokeShellPurple"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	vest[] = {
		"CUP_V_CPC_tlbelt_mc",
		"CUP_V_CPC_tl_mc"
	};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ACE_Yardage450"};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {
		"CUP_V_CPC_tlbelt_mc",
		"CUP_V_CPC_tl_mc"
	};
	backPack[] = {"CFP_Camelbak_Mule_Drab"};
	sidearmWeapon[] = {"CUP_hgun_M17_Coyote"};
	sidearmAttachments[] = {
		"hlc_acc_tlr1",
		"optic_mrd_black"
	};
	magazines[] += {
		LIST_3("CUP_21Rnd_9x19_M17_Coyote"),
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellGreen"),
		LIST_5("ACE_Chemlight_HiGreen")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ACE_Vector"};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {
		"CFP_Ranger_Beret_1Btn",
		"CFP_Ranger_Beret_2Btn",
		"CFP_Ranger_Beret_3Btn",
		"CFP_75th_Patrol_Cap_Oakleys"
	};
	vest[] = {"CUP_V_CPC_light_mc"};
};

class fac : ftl {
	displayName = "Forward Air Controller";
	goggles[] = {"antenna_long_two_face"};
	vest[] = {"CUP_V_CPC_communicationsbelt_mc"};
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		FAC_GEAR ,
		"ACRE_VHF30108",
		"Laserbatteries"
	};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_SOFLAM",
		"ItemRadio"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_CPC_lightbelt_mc"};
	backpack[] = {"B_AssaultPack_mcamo"};
	primaryWeapon[] = {"hlc_m249_pip4"};
	scope[] = {"cup_optic_eotech553_black"};
	attachment[] = {"cup_acc_anpeq_15"};
	bipod[] = {"hlc_bipod_utgshooters"};
	sidearmWeapon[] = {"CUP_hgun_M17_Coyote"};
	sidearmAttachments[] = {
		"hlc_acc_tlr1",
		"optic_mrd_black"
	};
	magazines[] = {
		LIST_3("hlc_200rnd_556x45_M_SAW"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_21Rnd_9x19_M17_Coyote")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CFP_Kitbag_MCam_Grn"};
	backpackItems[] = {
		LIST_3("hlc_200rnd_556x45_M_SAW")
	};
	items[] += {"ACE_EntrenchingTool"};
	linkedItems[] += {"ACE_Yardage450"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	vest[] = {"CUP_V_CPC_lightbelt_mc"};
	backpack[] = {"B_AssaultPack_mcamo"};
	primaryWeapon[] = {
		"CUP_srifle_M110",
		"CUP_srifle_m110_kac"
	};
	scope[] = {
		"cup_optic_leupoldmk4",
		"cup_optic_leupoldmk4_10x40_lrt_desert"
	};
	attachment[] = {"cup_acc_anpeq_15"};
	silencer[] = {"cup_muzzle_snds_m110"};
	bipod[] = {"cup_bipod_vltor_modpod"};
	sidearmWeapon[] = {"CUP_hgun_M17_Coyote"};
	sidearmAttachments[] = {
		"hlc_acc_tlr1",
		"optic_mrd_black"
	};
	magazines[] = {
		LIST_6("CUP_20Rnd_762x51_B_M110"),
		LIST_3("CUP_21Rnd_9x19_M17_Coyote"),
		"HandGrenade",
		"SmokeShell"
	};
	backpackItems[] = {
		"ACE_Kestrel4500",
		"ACE_MapTools",
		"ACE_ATragMX",
		"ACE_SpottingScope",
		"ACE_Tripod"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M240"};
	scope[] = {"cup_optic_elcan_specterdr_black"};
	backPack[] = {"CFP_Kitbag_MCam_Grn"};
	magazines[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_3("CUP_21Rnd_9x19_M17_Coyote")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backPack[] = {"CFP_Kitbag_MCam_Grn"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	backPack[] = {"CFP_Kitbag_MCam_Grn"};
	backpackItems[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Yardage450",
		"ItemRadio"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"ace_csw_staticM2ShieldCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CFP_Kitbag_MCam_Grn"};
	secondaryWeapon[] = {"launch_MRAWS_green_F"};
	secondaryAttachments[] = {"cup_acc_anpeq_15"};
	magazines[] += {
		LIST_2("CUP_MAAWS_HEDP_M"),
		"CUP_MAAWS_HEAT_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CFP_Kitbag_MCam_Grn"};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CFP_Kitbag_MCam_Grn"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Vector"
	};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backpack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] += {"CUP_Javelin_M"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"B_Carryall_mcamo"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ACE_Vector"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] = { MTR_GEAR };
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class samg : car {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backPack[] = {"CFP_Camelbak_Mule_Drab"};
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
	linkedItems[] += {"Rangefinder"};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_FullGhillie_lsh"};
	vest[] = {"V_Chestrig_rgr"};
	backpack[] = {"B_Carryall_mcamo"};
	hmd[] = {"CUP_NVG_GPNVG_black"};
	silencer[] = {"cup_muzzle_snds_m16_coyote"};
	sidearmWeapon[] = {"CUP_hgun_Glock17_blk"};
	sidearmAttachments[] = {
		"optic_mrd_black",
		"hlc_acc_tlr1"
	};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		"SmokeShell",
		"SmokeShellGreen",
		LIST_3("CUP_17Rnd_9x19_glock17")
	};
	backpackItems[] = {
		LIST_4("CUP_20Rnd_762x51_B_M110"),
		"CUP_srifle_M110_ANPVS10",
		"cup_muzzle_snds_m110"
	};
	linkedItems[] += {"ItemGPS"};
};

class sp : r {
	displayName = "Spotter";
	uniform[] = {"U_B_FullGhillie_lsh"};
	vest[] = {"V_Chestrig_rgr"};
	backpack[] = {"CFP_Kitbag_MCam_Grn"};
	silencer[] = {"cup_muzzle_snds_m16_coyote"};
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_4("CUP_20Rnd_762x51_B_M110"),
		"ACE_SpottingScope",
		"ACRE_VHF30108SPIKE"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_SOFLAM",
		"B_UavTerminal"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {
		"CUP_U_B_USArmy_ACU_Gloves_OEFCP",
		"CUP_U_B_USArmy_ACU_OEFCP"
	};
	vest[] = {"CUP_V_CPC_light_mc"};
	hmd[] = {};
	primaryWeapon[] = {"CUP_arifle_M4A1_standard_short_black"};
	scope[] = {};
	attachment[] = {};
	backpack[] = {};
	headgear[] = {"CUP_H_CVC"};
	backpackItems[] = {};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_mcamo"};
	backpackItems[] = {"ToolKit"};
	linkedItems[] += {"ItemGPS"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	headgear[] = {
		"CFP_SOARCREW_BLUE",
		"CFP_SOARCREW_STACHE",
		"CFP_SOARCREW_RED",
		"CFP_SOARCREW_SKULL",
		"H_CrewHelmetHeli_B",
		"H_CrewHelmetHeli_O",
		"H_PilotHelmetHeli_O"
	};
	uniform[] = {
		"CUP_U_B_USArmy_ACU_Gloves_OEFCP",
		"CUP_U_B_USArmy_ACU_OEFCP"
	};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
	primaryWeapon[] = {"CUP_arifle_M4A1_standard_short_black"};
	scope[] = {};
	attachment[] = {};
	backPack[] = {};
	items[] += {"ACE_MapTools"};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	headgear[] = {
		"H_PilotHelmetHeli_O",
		"H_PilotHelmetHeli_B"
	};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
	backPack[] = {};
	backpackItems[] = {};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	backpack[] = {"B_AssaultPack_mcamo"};
	traits[] = {"engineer"};
	backpackItems[] = {"ToolKit"};
	linkedItems[] += {"ItemGPS"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	hmd[] = {};
	headgear[] = {"H_PilotHelmetFighter_B"};
	uniform[] = {"FIR_Fighter_Pilot_Nomex3"};
	vest[] = {"Aircrew_vest_2_NH"};
	backpack[] = {"B_Parachute"};
	primaryWeapon[] = {"CUP_arifle_mk18_black"};
	sidearmWeapon[] = {"CUP_hgun_M9A1"};
	magazines[] += {
		"SmokeShellPurple",
		LIST_3("CUP_15Rnd_9x19_M9"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Mk16")
	};
	traits[] = {"engineer"};
	linkedItems[] += {"B_UavTerminal"};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	vest[] = {"CUP_V_CPC_communicationsbelt_mc"};
	backpack[] = {"B_Carryall_mcamo"};
	sidearmWeapon[] = {"ACE_VMH3"};
	items[] += {
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_Clacker",
		"ACE_wirecutter"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_2("DemoCharge_Remote_Mag"),
		LIST_2("SLAMDirectionalMine_Wire_Mag"),
		"SatchelCharge_Remote_Mag"
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	vest[] = {"CUP_V_CPC_communicationsbelt_mc"};
	backpack[] = {"B_Carryall_mcamo"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_Clacker",
		"ACE_wirecutter"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_4("APERSBoundingMine_Range_Mag"),
		LIST_2("ACE_FlareTripMine_Mag"),
		LIST_3("ClaymoreDirectionalMine_Remote_Mag")
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
