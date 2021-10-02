// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*	Dependencies:

		* CUP
		* CWR3
		* Wearable Antennas

*/

//		Created by: AChesheireCat, edited by Freddo

class baseMan {
	displayName = "Unarmed";
	uniform[] = {
		"CUP_U_B_USArmy_ACU_Gloves_OCP",
		"CUP_U_B_USArmy_ACU_Kneepad_Gloves_OCP",
		"CUP_U_B_USArmy_ACU_Kneepad_OCP",
		"CUP_U_B_USArmy_ACU_OCP"
	};
	vest[] = {"CUP_V_B_IOTV_OCP_Empty_USArmy"};
	backpack[] = {};
	headgear[] = {"CUP_H_USArmy_HelmetACH_OCP"};
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
		"ACE_IR_Strobe_Item",
		"ACE_microDAGR"
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
		"CUP_V_B_IOTV_OCP_Rifleman_USArmy",
		"CUP_V_B_IOTV_OCP_Rifleman_Deltoid_USArmy"
	};
	headgear[] = {
		"CUP_H_USArmy_HelmetACH_OCP",
		"CUP_H_USArmy_HelmetACH_GCOVERED_OCP",
		"CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP",
		"CUP_H_USArmy_HelmetACH_ESS_OCP",
		"CUP_H_USArmy_HelmetACH_ESS_Headset_OCP",
		"CUP_H_USArmy_HelmetACH_Headset_OCP"
	};
	primaryWeapon[] = {
		"CUP_arifle_M4A1_black",
		"CUP_arifle_M4A3_black"
	};
	scope[] = {
		"cup_optic_eotech553_black",
		LIST_2("cup_optic_compm4")
	};
	attachment[] = {
		"cup_acc_anpeq_15",
		"cup_acc_anpeq_15_tan_top"
	};
	magazines[] = {
		LIST_8("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		"HandGrenade",
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_B_IOTV_OCP_Grenadier_USArmy"};
	backpack[] = {"CUP_B_US_Assault_OCP"};
	primaryWeapon[] = {"CUP_arifle_M4A1_BUIS_GL"};
	attachment[] = {"cup_acc_anpeq_15"};
	magazines[] += {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		"HandGrenade",
		"SmokeShell",
		LIST_2("CUP_1Rnd_HEDP_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203")
	};
};

class car : r {
	displayName = "Carabinier";
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	vest[] = {"CUP_V_B_IOTV_OCP_Medic_USArmy"};
	backpack[] = {"CUP_B_US_Assault_OCP"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"CUP_B_US_IIID_OCP"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	vest[] = {"CUP_V_B_IOTV_OCP_Empty_USArmy"};
	primaryWeapon[] = {"CUP_arifle_M4A1_standard_short_black"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		"HandGrenade",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	vest[] = {"CUP_V_B_IOTV_OCP_TL_USArmy"};
	backPack[] = {"CUP_B_US_Assault_OCP"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_2("CUP_1Rnd_SmokeGreen_M203"),
		LIST_2("CUP_1Rnd_StarFlare_Red_M203")
	};
	linkedItems[] += {"ACE_Yardage450"};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {"CUP_V_B_IOTV_OCP_SL_USArmy"};
	backPack[] = {"CUP_B_US_Assault_OCP"};
	sidearmWeapon[] = {"CUP_hgun_M17_Coyote"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_3("CUP_21Rnd_9x19_M17_Coyote"),
		LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellRed")
	};
	linkedItems[] += {"ACE_Yardage450"};
};

class co : sl {
	displayName = "Platoon Leader";
};

class fac : ftl {
	displayName = "Forward Air Controller";
	goggles[] = {"antenna_long_two_face"};
	backpack[] = {"CUP_B_US_IIID_OCP"};
	backpackItems[] = { FAC_GEAR };
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_2("CUP_1Rnd_SmokeGreen_M203"),
		"Laserbatteries"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"CUP_SOFLAM"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	vest[] = {
		"CUP_V_B_IOTV_OCP_MG_USArmy",
		"CUP_V_B_IOTV_OCP_SAW_USArmy"
	};
	backPack[] = {"CUP_B_US_Assault_OCP"};
	primaryWeapon[] = {"CUP_lmg_m249_pip3"};
	sidearmWeapon[] = {"CUP_hgun_M17_Coyote"};
	magazines[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_21Rnd_9x19_M17_Coyote")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backPack[] = {"CUP_B_US_IIID_OCP"};
	backpackItems[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_m110_kac"};
	scope[] = {"cup_optic_leupoldmk4_10x40_lrt_desert"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	attachment[] = {"cup_acc_anpeq_15"};
	magazines[] = {
		LIST_7("CUP_20Rnd_762x51_B_M110"),
		"HandGrenade",
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M240"};
	scope[] = {"cup_optic_elcan_specterdr_black"};
	backPack[] = {"CUP_B_US_IIID_OCP"};
	magazines[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_3("CUP_21Rnd_9x19_M17_Coyote")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backPack[] = {"CUP_B_US_IIID_OCP"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	backPack[] = {"CUP_B_US_IIID_OCP"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
	backpack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] += {"CUP_Javelin_M"};
};

class matac : car {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_Carryall_mcamo"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {"CUP_Javelin_M"};
	items[] += {"ACE_MapTools"};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"ace_csw_m220CarryTripod"};
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {"CUP_compats_TOW2_M"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	secondaryWeapon[] = {"CUP_TOW2_carry"};
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {"CUP_compats_TOW2_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {"CUP_compats_TOW2_M"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ACE_Vector"};
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

class mtrac : car {
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
	items[] += { MTR_GEAR };
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};

	linkedItems[] += {
		"ACE_Yardage450",
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
		"Binocular",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_FullGhillie_sard"};
	vest[] = {"cwr3_b_vest_LBV"};
	backpack[] = {"B_Carryall_mcamo"};
	hmd[] = {"CUP_NVG_GPNVG_black"};
	primaryWeapon[] = {"CUP_arifle_M4A1_SOMMOD_Grip_tan"};
	silencer[] = {"cup_muzzle_snds_m16_coyote"};
	sidearmWeapon[] = {"CUP_hgun_Glock17_blk"};
	sidearmAttachments[] = {"optic_mrd_black"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		"SmokeShell",
		"SmokeShellGreen",
		LIST_3("CUP_17Rnd_9x19_glock17")
	};
	items[] += {
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard"
	};
	backpackItems[] = {
		LIST_4("CUP_20Rnd_762x51_B_M110"),
		"CUP_srifle_M110_ANPVS10",
		"cup_muzzle_snds_m110"
	};
};

class sp : r {
	displayName = "Spotter";
	uniform[] = {"U_B_FullGhillie_sard"};
	vest[] = {"cwr3_b_vest_LBV"};
	backpack[] = {"CUP_B_US_IIID_OCP"};
	hmd[] = {"CUP_NVG_GPNVG_black"};
	primaryWeapon[] = {"CUP_arifle_M4A1_SOMMOD_Grip_tan"};
	silencer[] = {"cup_muzzle_snds_m16_coyote"};
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_4("CUP_20Rnd_762x51_B_M110"),
		"ACE_SpottingScope",
		"ACRE_VHF30108SPIKE",
		"Laserbatteries"
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
	vest[] = {"CUP_V_B_IOTV_OCP_Empty_USArmy"};
	backpack[] = {};
	headgear[] = {"CUP_H_CVC"};
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
	backpack[] = {"cwr3_o_backpack_gasmask"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_USArmy_ACU_Gloves_OCP"};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
	backpack[] = {};
	headgear[] = {
		"H_CrewHelmetHeli_B",
	};
	attachment[] = {};
	scope[] = {};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_556x45_Stanag"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	headgear[] = {
		"H_PilotHelmetHeli_O",
		"H_PilotHelmetHeli_B"
	};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"cwr3_o_backpack_gasmask"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	hmd[] = {};
	headgear[] = {"H_PilotHelmetFighter_B"};
	uniform[] = {"U_B_PilotCoveralls"};
	vest[] = {"V_Rangemaster_belt"};
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

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"B_Carryall_mcamo"};
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
