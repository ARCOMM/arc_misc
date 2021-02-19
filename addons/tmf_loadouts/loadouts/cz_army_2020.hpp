// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Uniforms
//		* CUP Weapons
//		* Community Factions Project
//		* FIR AWS(AirWeaponSystem)

//	Reference: https://en.wikipedia.org/wiki/Military_equipment_of_the_Czech_Republic

//	Created by: AChesheireCat

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_B_CZ_WDL_NoKneepads",
		"CUP_U_B_CZ_WDL_Kneepads_Gloves",
		"CUP_U_B_CZ_WDL_TShirt"
	};
	vest[] = {"CUP_V_CZ_vest02"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
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
		"ACE_Flashlight_XL50"
	};
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};

	// These are put into the backpack
	backpackItems[] = {};

	// Unit traits, see https://community.bistudio.com/wiki/setUnitTrait
	traits[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	vest[] = {"CUP_V_CZ_vest04"};
	headgear[] = {
		LIST_2("CUP_H_CZ_Helmet03"),
		LIST_2("CUP_H_CZ_Helmet04"),
		"CUP_H_CZ_Helmet09"
	};
	primaryWeapon[] = {
		"CUP_arifle_CZ805_A1_coyote",
		"CUP_arifle_CZ805_A1"
	};
	scope[] = {"cup_optic_zddot"};
	attachment[] = {"cup_acc_flashlight"};
	magazines[] = {
		LIST_8("CUP_30Rnd_556x45_CZ805"),
		LIST_4("CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_CZ_vest06"};
	backPack[] = {"CUP_B_ACRScout_m95"};
	primaryWeapon[] = {
		"CUP_arifle_CZ805_GL_coyote",
		"CUP_arifle_CZ805_GL"
	};
	magazines[] = {
		LIST_8("CUP_30Rnd_556x45_CZ805"),
		LIST_2("CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805"),
		"HandGrenade",
		"SmokeShell",
		LIST_10("CUP_1Rnd_HEDP_M203"),
		LIST_2("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {
		"CUP_arifle_CZ805_A2_coyote",
		"CUP_arifle_CZ805_A2"
	};
	magazines[] = {
		LIST_12("CUP_30Rnd_556x45_CZ805"),
		"HandGrenade",
		LIST_2("SmokeShell")
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	vest[] = {
		"CUP_V_CZ_vest14",
		"CUP_V_CZ_vest10"
	};
	backpack[] = {"CUP_B_ACRPara_m95"};
	traits[] = {"medic"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_wdl_F"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	vest[] = {"CUP_V_CZ_vest16"};
	primaryWeapon[] = {"CUP_smg_EVO"};
	scope[] = {"cup_optic_mrad"};
	magazines[] = {
		LIST_5("CUP_30Rnd_9x19_EVO"),
		"HandGrenade",
		"SmokeShellPurple"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	vest[] = {"CUP_V_CZ_vest08"};
	backPack[] = {"CUP_B_ACRScout_m95"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_2("CUP_1Rnd_StarFlare_Red_M203")
	};
	linkedItems[] += {
		"ACE_Yardage450",
		"ItemGPS"
	};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {"CUP_V_CZ_vest08"};
	backPack[] = {"CUP_B_ACRPara_m95"};
	sidearmWeapon[] = {"CUP_hgun_Phantom"};
	magazines[] = {
		LIST_11("CUP_30Rnd_556x45_CZ805"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell"),
		LIST_3("CUP_18Rnd_9x19_Phantom"),
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellGreen"),
		LIST_4("ACE_Chemlight_HiGreen")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_CZ_Patrol_Cap"};
	backPack[] = {"CUP_B_ACRPara_m95"};
};

class fac : ftl {
	displayName = "Forward Air Controller";
	headgear[] = {"CUP_H_CZ_Patrol_Cap"};
	attachment[] = {"ace_acc_pointer_green"};
	sidearmWeapon[] = {"CUP_hgun_Phantom"};
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	backpackItems[] = {
		FAC_GEAR ,
		"ACRE_VHF30108"
	};
	magazines[] += {
		LIST_3("CUP_18Rnd_9x19_Phantom"),
		LIST_2("CUP_1Rnd_SmokeGreen_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
	};
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
	vest[] = {"CUP_V_CZ_vest12"};
	backpack[] = {"B_AssaultPack_wdl_F"};
	primaryWeapon[] = {"CUP_lmg_minimi_railed"};
	attachment[] = {"cup_optic_elcanm145"};
	sidearmWeapon[] = {"CUP_hgun_Phantom"};
	magazines[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_18Rnd_9x19_Phantom")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_ACRPara_m95"};
	backpackItems[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch")
	};
	items[] += {"ACE_EntrenchingTool"};
	linkedItems[] += {"ACE_Yardage450"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	backPack[] = {"CUP_B_ACRScout_m95"};
	secondaryWeapon[] = {"CUP_launch_M72A6"};
	backpackItems[] = {"CUP_launch_M72A6"};
};

class dm : r {
	displayName = "Designated Marksman";
	vest[] = {"CUP_V_CZ_vest02"};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1"};
	sidearmWeapon[] = {"CUP_hgun_Phantom"};
	magazines[] = {
		LIST_10("CUP_10Rnd_762x54_SVD_M"),
		LIST_4("CUP_18Rnd_9x19_Phantom"),
		"HandGrenade",
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_UK59"};
	backPack[] = {"CUP_B_ACRPara_m95"};
	magazines[] = {
		LIST_8("CUP_50Rnd_UK59_762x54R_Tracer"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("CUP_18Rnd_9x19_Phantom")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backpackItems[] = {
		LIST_7("CUP_50Rnd_UK59_762x54R_Tracer")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_7("CUP_50Rnd_UK59_762x54R_Tracer")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS",
		"ItemRadio"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"CUP_B_ACRPara_m95"};
	secondaryWeapon[] = {"ace_csw_staticM2ShieldCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"CUP_B_ACRPara_m95"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"CUP_B_ACRPara_m95"};
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
	backpack[] = {"CUP_B_ACRPara_m95"};
	secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"cup_optic_maaws_scope"};
	magazines[] += {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_ACRPara_m95"};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_ACRPara_m95"};
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
	backPack[] = {"CUP_B_Metis_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_Metis_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_Metis_Tripod_Bag"};
	magazines[] = {
		LIST_9("CUP_30Rnd_556x45_CZ805"),
		"HandGrenade",
		"SmokeShell"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_wdl_F"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_wdl_F"};
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
	backPack[] = {"B_Carryall_wdl_F"};
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
	magazines[] = {
		LIST_9("CUP_30Rnd_556x45_CZ805"),
		"HandGrenade",
		"SmokeShell"
	};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
	magazines[] = {
		LIST_9("CUP_30Rnd_556x45_CZ805"),
		"HandGrenade",
		"SmokeShell"
	};
	linkedItems[] += {
		"Rangefinder",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"CUP_U_B_CZ_WDL_Kneepads"};
	vest[] = {"CFP_LBT6094_operator_Multicam"};
	backpack[] = {"CUP_B_ACRPara_m95"};
	headgear[] = {"CUP_H_OpsCore_Spray_SF"};
	hmd[] = {"CUP_NVG_GPNVG_black"};
	primaryWeapon[] = {"CUP_CZ_BREN2_556_11"};
	scope[] = {"cup_optic_eotech553_black"};
	attachment[] = {"ace_acc_pointer_green"};
	sidearmWeapon[] = {"CUP_hgun_Glock17_blk"};
	magazines[] = {
		LIST_11("CUP_30Rnd_556x45_PMAG_QP"),
		LIST_2("HandGrenade"),
		"SmokeShellGreen",
		"SmokeShell",
		LIST_3("CUP_17Rnd_9x19_glock17")
	};
	backpackItems[] = {
		LIST_6("CUP_5Rnd_762x51_M24"),
		"CUP_srifle_M24_des_LeupoldMk4LRT",
	};
	linkedItems[] += {"ItemGPS"};
};

class sp : sn {
	displayName = "Spotter";
	vest[] = {"CFP_LBT6094_MG_Multicam"};
	backpack[] = {"CUP_B_ACRPara_m95"};
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_4("CUP_5Rnd_762x51_M24"),
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
	uniform[] = {"CUP_U_B_CZ_WDL_Kneepads"};
	vest[] = {"CUP_V_CZ_vest19"};
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_TSH_4_Brown"};
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
	backpack[] = {"B_AssaultPack_wdl_F"};
	backpackItems[] = {"ToolKit"};
	linkedItems[] += {"ItemGPS"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_CZ_WDL_Kneepads"};
	vest[] = {"CUP_V_CZ_vest18"};
	headgear[] = {
		"CFP_SOARCREW_BLUE",
		"CFP_SOARCREW_STACHE",
		"CFP_SOARCREW_RED",
		"CFP_SOARCREW_SKULL",
		"H_CrewHelmetHeli_B",
		"FIR_HGU56P_Skull",
		"FIR_HGU56P_Skull_Death",
		"H_CrewHelmetHeli_O",
		"H_PilotHelmetHeli_O"
	};
	items[] += {"ACE_MapTools"};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	uniform[] = {
		"FIR_Fighter_Pilot_JASDF_Nomex5",
		"FIR_Fighter_Pilot_JASDF_Nomex6",
		"FIR_Fighter_Pilot_JASDF_Nomex2",
		"FIR_Fighter_Pilot_JASDF_Nomex"
	};
	vest[] = {"CUP_V_B_PilotVest"};
	backpackItems[] = {};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	uniform[] = {
		"FIR_Fighter_Pilot_JASDF_Nomex5",
		"FIR_Fighter_Pilot_JASDF_Nomex6",
		"FIR_Fighter_Pilot_JASDF_Nomex2",
		"FIR_Fighter_Pilot_JASDF_Nomex"
	};
	vest[] = {"CUP_V_B_PilotVest"};
	backpack[] = {"B_AssaultPack_wdl_F"};
	traits[] = {"engineer"};
	backpackItems[] = {"ToolKit"};
	linkedItems[] += {"ItemGPS"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	vest[] = {"FIR_pilot_vest"};
	uniform[] = {"FIR_Fighter_Pilot_Uniform_Flight"};
	backpack[] = {"B_Parachute"};
	headgear[] = {
		"FIR_USHelmetType1_VF31",
		"FIR_USHelmetType1",
		"FIR_USHelmetType2_VF154",
		"FIR_USHelmetType2_VF103"
	};
	goggles[] = {"FIR_Visor_Black_down"};
	sidearmWeapon[] = {"CUP_hgun_Compact"};
	magazines[] += {
		"SmokeShellPurple",
		LIST_3("CUP_18Rnd_9x19_Phantom")
	};
	traits[] = {"engineer"};
	linkedItems[] += {"B_UavTerminal"};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	vest[] = {"CUP_V_CZ_vest18"};
	backpack[] = {"CUP_B_ACRPara_m95"};
	sidearmWeapon[] = {"ACE_VMH3"};
	items[] += {"ACE_Clacker"};
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
	vest[] = {"CUP_V_CZ_vest18"};
	backpack[] = {"CUP_B_ACRPara_m95"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
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
