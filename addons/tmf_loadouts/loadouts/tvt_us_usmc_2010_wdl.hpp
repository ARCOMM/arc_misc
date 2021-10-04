// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Units
//		* CUP Weapons
//		* CWR3
//		* Wearable Antennas

class baseMan {
	displayName = "Unarmed";
	uniform[] = {
		"CUP_U_B_USMC_FROG1_WMARPAT",
		"CUP_U_B_USMC_FROG2_WMARPAT",
		"CUP_U_B_USMC_FROG3_WMARPAT",
		"CUP_U_B_USMC_FROG4_WMARPAT"
	};
	vest[] = {
		"CUP_V_B_Eagle_SPC_Empty",
		"CUP_V_B_MTV"
	};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
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
		"ACE_Flashlight_XL50",
		"ACE_SpraypaintGreen",
		"ACE_EntrenchingTool"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch"
	};

	backpackItems[] = {};

	traits[] = {};

	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	vest[] = {
		"CUP_V_B_Eagle_SPC_Rifleman",
		"CUP_V_B_Eagle_SPC_Patrol",
		"CUP_V_B_Eagle_SPC_Scout",
		"CUP_V_B_MTV_Pouches",
		"CUP_V_B_MTV_LegPouch"
	};
	headgear[] = {
		"CUP_H_LWHv2_MARPAT",
		"CUP_H_LWHv2_MARPAT_NVG_gog2_cov2",
		"CUP_H_LWHv2_MARPAT_cov_fr",
		"CUP_H_LWHv2_MARPAT_comms"
	};
	primaryWeapon[] = {
		"CUP_arifle_M16A4_Grip",
		"CUP_arifle_M16A4_Base"
	};
	scope[] = {
		"cup_optic_eotech553_black",
		"cup_optic_compm2_low",
		"cup_optic_compm2_black"
	};
	attachment[] = {
		"cup_acc_anpeq_2_flashlight_black_l",
		"cup_acc_anpeq_2_black_top"
	};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		"HandGrenade",
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_B_Eagle_SPC_GL"};
	backPack[] = {"CUP_B_AssaultPack_Coyote"};
	primaryWeapon[] = {"CUP_arifle_M16A4_GL"};
	scope[] = {"cup_optic_eotech553_black"};
	attachment[] = {"cup_acc_anpeq_2_grey"};
	magazines[] += {
		LIST_2("CUP_1Rnd_HEDP_M203"),
		LIST_2("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_M4A1_black"};
};

class cls : car {
	displayName = "Combat Life Saver";
	vest[] = {"CUP_V_B_Eagle_SPC_Corpsman"};
	backpack[] = {"B_AssaultPack_cbr"};
	backpackItems[] = { MEDICAL_CLS };
	traits[] = {"medic"};
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_MP5A5"};
	scope[] = {};
	magazines[] = {
		LIST_7("CUP_30Rnd_9x19_MP5"),
		"HandGrenade",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	vest[] = {
		"CUP_V_B_Eagle_SPC_TL",
		"CUP_V_B_MTV_TL"
	};
	headgear[] = {
		"CUP_H_LWHv2_MARPAT_comms",
		"CUP_H_LWHv2_MARPAT_NVG_gog_cov2",
		"CUP_H_LWHv2_MARPAT_comms_cov_fr"
	};
	magazines[] += {
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellGreen")
	};
	linkedItems[] += {
		"ACE_Yardage450",
		"ItemGPS"
	};
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {
		"CUP_V_B_Eagle_SPC_SL",
		"CUP_V_B_MTV_PistolBlack"
	};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_3("CUP_15Rnd_9x19_M9")
	};
	items[] += {"ACE_microDAGR"};
};

class co : sl {
	displayName = "Platoon Leader";
	vest[] = {"CUP_V_B_Eagle_SPC_Officer"};
};

class fac : co {
	displayName = "Forward Air Controller";
	vest[] = {"CUP_V_B_Eagle_SPC_RTO"};
	backpack[] = {"B_Kitbag_cbr"};
	hmd[] = {"antenna_long_two_nvg"};
	backpackItems[] = { FAC_GEAR };
	magazines[] += {"Laserbatteries"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"CUP_SOFLAM",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	vest[] = {
		"CUP_V_B_Eagle_SPC_AR",
		"CUP_V_B_MTV_MG"
	};
	backpack[] = {"CUP_B_AssaultPack_Coyote"};
	primaryWeapon[] = {"CUP_lmg_m249_pip1"};
	scope[] = {"cup_optic_eotech553_black"};
	bipod[] = {"cup_bipod_vltor_modpod_black"};
	attachment[] = {"cup_acc_anpeq_2_grey"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] = {
		LIST_3("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_Kitbag_cbr"};
	backpackItems[] += {
		LIST_3("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
	};
	linkedItems[] += {"ACE_Yardage450"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	vest[] = {"CUP_V_B_Eagle_SPC_AT"};
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	vest[] = {
		"CUP_V_B_Eagle_SPC_DMR",
		"CUP_V_B_MTV_Marksman"
	};
	primaryWeapon[] = {"CUP_srifle_Mk12SPR"};
	scope[] = {"cup_optic_leupoldmk4_mrt_tan"};
	attachment[] = {"cup_acc_anpeq_2_desert"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	magazines[] = {
		LIST_7("ACE_30Rnd_556x45_Stanag_Mk262_mag"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M240"};
	scope[] = {""};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"B_Carryall_cbr"};
	secondaryWeapon[] = {"ace_csw_staticM2ShieldCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgac : car {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"B_Carryall_cbr"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"B_Carryall_cbr"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"B_Kitbag_cbr"};
	secondaryWeapon[] = {"CUP_launch_Mk153Mod0"};
	secondaryAttachments[] = {"cup_optic_smaw_scope"};
	magazines[] += {
		LIST_2("CUP_SMAW_HEAA_M")
	};
};

class matac : car {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Kitbag_cbr"};
	backpackItems[] = {
		LIST_2("CUP_SMAW_HEAA_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_Kitbag_cbr"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		"CUP_SMAW_HEAA_M",
		"ACE_MapTools"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Tow_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_TOW2_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_TOW2_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] += { MTR_GEAR };
	backPack[] = {"B_Carryall_cbr"};
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
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	headgear[] = {"CUP_H_USMC_BOONIE_PRR_WDL"};
	uniform[] = {"CUP_U_B_USMC_FROG1_WMARPAT"};
	goggles[] = {"default"};
	vest[] = {"CUP_V_O_SLA_M23_1_BRN"};
	primaryWeapon[] = {"CUP_srifle_M40A3_bipod"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] = {
		LIST_7("CUP_5Rnd_762x51_M24"),
		LIST_2("HandGrenade"),
		LIST_4("CUP_15Rnd_9x19_M9")
	};
};

class sp : r {
	displayName = "Spotter";
	headgear[] = {"CUP_H_USMC_BOONIE_PRR_WDL"};
	uniform[] = {"CUP_U_B_USMC_FROG1_WMARPAT"};
	vest[] = {"CUP_V_O_SLA_M23_1_BRN"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
		LIST_10("CUP_5Rnd_762x51_M24")
	};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	linkedItems[] += {
		"ACE_Yardage450",
		"ItemGPS"
	};
};

class vg : car {
	displayName = "Vehicle Gunner";
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
	vest[] = {"CUP_V_B_Eagle_SPC_Crew"};
	backpack[] = {};
	headgear[] = {
		"cwr3_b_headgear_cvc",
		"cwr3_b_headgear_cvc_goggles"
	};
	magazines[] = {
		LIST_3("CUP_30Rnd_556x45_Stanag"),
		"SmokeShellPurple"
	};
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
	backpack[] = {"CUP_B_AssaultPack_Coyote"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : car {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"CUP_V_PMC_CIRAS_Coyote_Veh"};
	backpack[] = {};
	headgear[] = {
		"H_CrewHelmetHeli_B",
		"H_CrewHelmetHeli_O",
		"H_PilotHelmetHeli_O"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_556x45_Stanag"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_cbr"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	uniform[] = {"U_B_PilotCoveralls"};
	vest[] = {"V_Rangemaster_belt"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetFighter_B"};
	hmd[] = {};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
	linkedItems[] += {"ItemGPS"};
	traits[] = {"engineer"};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_USMC_MOLLE"};
	items[] += {
		"ACE_wirecutter"
	};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class eng : logi {
	displayName = "Combat Engineer";
	traits[] += {"explosiveSpecialist"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_Clacker",
		"ACE_DefusalKit"
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
