// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Units
//		* CUP Weapons
//		* HLC Mk46 + Mk48
//		* Community Factions Project
//		* FIR AWS(AirWeaponSystem)
//		* ACE

//	Reference: https://www.battleorder.org/us-stryker-platoon-2019 (for general formation, not for equipment)

//	Created by: AChesheireCat

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CFP_75th_CRYE_V3_Sleeved",
		"CFP_75th_CRYE_V4_Sleeved",
		"CFP_75th_CRYE_V3_Full",
		"CFP_75th_CRYE_V4_Full"
	};
	vest[] = {"CFP_HV5_Ciras_Olive"};
	backpack[] = {"CFP_Camelbak_Mule_RngrGrn"};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {"CUP_NVG_PVS15_black"};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {};
	// Leave empty to not change faces.
	insignias[] = {};
	// Leave empty to not change insignias

	// All randomized
	primaryWeapon[] = {};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};
	// Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

	// Only *Weapons[] arrays are randomized
	secondaryWeapon[] = {};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {};
	sidearmAttachments[] = {};
	// Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

	// These are added to the uniform or vest
	magazines[] = {};
	items[] = {
		 MEDICAL_R ,
		"ACE_IR_Strobe_Item",
		"ACE_Flashlight_XL50",
		"ACE_SpraypaintGreen",
		LIST_2("ACE_CableTie"),
		LIST_2("ACE_Chemlight_HiGreen")
	};
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};

	// These are put into the backpack
	backpackItems[] = {"CFP_75th_Beanie_Grn"};

	// Unit traits, see https://community.bistudio.com/wiki/setUnitTrait
	traits[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {
		LIST_2("CUP_H_CZ_Helmet09"),
		LIST_2("CUP_H_CZ_Helmet10"),
		"H_HelmetB_camo"
	};
	primaryWeapon[] = {
		"CUP_arifle_M4A3_black",
		"CUP_arifle_M4A1_black",
		"CUP_arifle_Mk16_STD_AFG"
	};
	scope[] = {
		LIST_2("cup_optic_eotech553_coyote"),
		"cup_optic_compm2_low"
	};
	silencer[] = {
		"cup_muzzle_snds_m16_coyote",
		"cup_muzzle_snds_m16"
	};
	attachment[] = {
		"cup_acc_anpeq_15_top_flashlight_tan_l",
		"cup_acc_anpeq_15_tan_top",
		"cup_acc_anpeq_15"
	};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_PMAG_QP"),
		LIST_2("CUP_30Rnd_556x45_Emag_Tracer_Red"),
		LIST_3("HandGrenade"),
		"SmokeShell",
		"ACE_HandFlare_Red"
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {
		"CUP_arifle_M4A1_BUIS_GL",
		"CUP_arifle_Mk16_CQC_EGLM"
	};
	attachment[] = {"cup_acc_anpeq_15"};
	magazines[] += {
		LIST_14("CUP_1Rnd_HEDP_M203"),
		LIST_2("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_M4A1_standard_short_black"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_MedicPack_ACU"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = { MEDICAL_M };
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
	magazines[] += {
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203")
	};
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
};

class sl : ftl {
	displayName = "Squad Leader";
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_3("CUP_15Rnd_9x19_M9")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_VectorDay",
		"ItemGPS",
		"ItemRadio"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"H_MilCap_mcamo"};
};

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_SOFLAM",
		"ItemGPS",
		"ItemRadio"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"hlc_lmg_mk46"};
	attachment[] = {
		"cup_acc_anpeq_15_flashlight_tan_l",
		"cup_acc_anpeq_15"
	};
	silencer[] = {};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	backpack[] = {"B_AssaultPack_sgg"};
	magazines[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_Kitbag_sgg"};
	backpackItems[] = {
		LIST_3("CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"ACE_Yardage450"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M72A6_Loaded"};
	backpackItems[] = {"CUP_launch_M72A6_Loaded"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_m110_kac"};
	scope[] = {"cup_optic_leupoldm3lr"};
	attachment[] = {"cup_acc_anpeq_2_grey"};
	bipod[] = {"bipod_01_F_snd"};
	magazines[] = {
		LIST_9("CUP_20Rnd_762x51_B_M110"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_Mk48"};
	scope[] = {
		"cup_optic_elcanm145",
		"cup_optic_elcan_specterdr_coyote"
	};
	backPack[] = {"B_Kitbag_sgg"};
	magazines[] = {
		LIST_3("hlc_200Rnd_762x51_M_M60E4"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backpackItems[] = {
		LIST_2("hlc_200Rnd_762x51_M_M60E4")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"I_G_HMG_02_weapon_F"};
	backpackItems[] = {};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"I_C_HMG_02_support_F"};
	backpackItems[] = {};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"I_C_HMG_02_support_high_F"};
	backpackItems[] = {};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"B_Kitbag_sgg"};
	secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"cup_optic_maaws_scope"};
	magazines[] += {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Kitbag_sgg"};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_Kitbag_sgg"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"B_Kitbag_sgg"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] += {"CUP_Javelin_M"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"B_Kitbag_sgg"};
	backpackItems[] += {"CUP_Javelin_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"B_Kitbag_sgg"};
	backpackItems[] += {"CUP_Javelin_M"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
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
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
	linkedItems[] += {
		"Rangefinder",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"CFP_75th_CRYE_V4_Full"};
	vest[] = {"CUP_V_I_RACS_Carrier_Vest_wdl"};
	backpack[] = {"B_Kitbag_rgr"};
	headgear[] = {"H_HelmetB_camo"};
	hmd[] = {"CUP_NVG_PVS15_black"};
	primaryWeapon[] = {"CUP_arifle_M4A1_standard_short_black"};
	scope[] = {"cup_optic_eotech553_coyote"};
	silencer[] = {"cup_muzzle_snds_m16_coyote"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Stanag"),
		LIST_2("HandGrenade"),
		"ACE_HandFlare_Red",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
	backpackItems[] = {
		LIST_8("CUP_5Rnd_762x51_M24"),
		"CFP_75th_Beanie_Grn",
		"CUP_srifle_M24_des_LeupoldMk4LRT"
	};
	linkedItems[] += {
		"ItemGPS"
	};
};

class sp : r {
	displayName = "Spotter";
	headgear[] = {"CUP_H_CZ_Helmet10"};
	hmd[] = {"CUP_NVG_PVS15_black"};
	vest[] = {"CFP_HV2_Ciras_Olive"};
	backPack[] = {"B_Kitbag_rgr"};
	primaryWeapon[] = {"CUP_arifle_Mk16_CQC"};
	scope[] = {"cup_optic_eotech553_coyote"};
	attachment[] = {"cup_acc_anpeq_15_flashlight_tan_l"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	silencer[] = {"cup_muzzle_snds_m16_coyote"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	backpackItems[] += {
		LIST_8("CUP_5Rnd_762x51_M24"),
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_SpottingScope",
		"ACE_Tripod",
		"ACE_wirecutter",
		LIST_3("APERSTripMine_Wire_Mag")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_SOFLAM",
		"B_UavTerminal",
		"ItemRadio"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {
		"CUP_U_B_USArmy_Base",
		"CUP_U_B_USArmy_Soft"
	};
	vest[] = {"CUP_V_B_IOTV_Rifleman"};
	backpack[] = {};
	backpackItems[] = {};
	headgear[] = {"CUP_H_USMC_ACVC_DES"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	backpackItems[] = {};
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_mcamo"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_USArmy_Soft"};
	vest[] = {"fir_usarmy_pilot_vest"};
	backpack[] = {};
	backpackItems[] = {};
	headgear[] = {
		"CFP_SOARCREW_BLUE",
		"CFP_SOARCREW_STACHE",
		"CFP_SOARCREW_RED",
		"CFP_SOARCREW_SKULL",
		"H_CrewHelmetHeli_B",
		"FIR_HGU56P_Skull",
		"FIR_HGU56P_Skull_Death"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
	vest[] = {"fir_usarmy_pilot_vest"};
	backpackItems[] = {};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	headgear[] = {"FIR_JHMCS"};
	hmd[] = {};
	vest[] = {"FIR_pilot_vest"};
	traits[] = {"engineer"};
	uniform[] = {"FIR_Fighter_Pilot_Uniform_Flight"};
	backpack[] = {};
	backpackItems[] = {};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_sgg"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_Clacker"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_3("DemoCharge_Remote_Mag"),
		LIST_2("SLAMDirectionalMine_Wire_Mag"),
		"SatchelCharge_Remote_Mag",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_sgg"};
	items[] += {
		"ACE_wirecutter",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_Clacker"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_4("APERSBoundingMine_Range_Mag"),
		LIST_2("APERSTripMine_Wire_Mag"),
		LIST_2("ACE_FlareTripMine_Mag"),
		LIST_2("ClaymoreDirectionalMine_Remote_Mag")
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"B_UAV_01_backpack_F"};
	backpackItems[] = {};
	linkedItems[] += {"B_UavTerminal"};
};
