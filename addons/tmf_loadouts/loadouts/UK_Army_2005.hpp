// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Uniforms
//		* CUP Weapons
//		* Community Factions Project
//		* FIR AWS(AirWeaponSystem)
// 		* NIArms P226

// Created by: AChesheireCat

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		LIST_3("CUP_U_B_BDUv2_dirty_DDPM"),
		"CUP_U_B_BDUv2_gloves_dirty_DDPM",
		"CUP_U_B_BDUv2_roll2_gloves_dirty_DDPM",
		"CUP_U_B_BDUv2_roll2_dirty_DDPM"
	};
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Empty"};
	backpack[] = {};
	headgear[] = {
		"CUP_H_BAF_DDPM_Mk6_NETTING_PRR",
		"CUP_H_BAF_DDPM_Mk6_GOGGLES_PRR",
		"CUP_H_BAF_DDPM_Mk6_EMPTY",
		"CUP_H_BAF_DDPM_Mk6_EMPTY_PRR"
	};
	goggles[] = {};
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
		MEDICAL_R,
		"ACE_SpraypaintGreen",
		"ACE_Flashlight_XL50"
	};
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch"
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
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman"};
	primaryWeapon[] = {"CUP_arifle_L85A2"};
	scope[] = {"cup_optic_susat"};
	magazines[] = {
		LIST_8("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("CUP_HandGrenade_L109A1_HE"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Grenadier"};
	primaryWeapon[] = {"CUP_arifle_L85A2_GL"};
	scope[] = {};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("CUP_HandGrenade_L109A1_HE"),
		LIST_2("SmokeShell"),
		LIST_10("CUP_1Rnd_HEDP_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203")
	};
};

class car : r {
	displayName = "Carabinier";
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Medic"};
	backpack[] = {"CUP_B_Bergen_BAF"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"CFP_Carryall_DPMWoodland"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_MP5A5"};
	scope[] = {};
	magazines[] = {
		LIST_5("CUP_30Rnd_9x19_MP5"),
		"CUP_HandGrenade_L109A1_HE",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
		"SmokeShellGreen"
	};
	linkedItems[] += {
		"Binocular"
	};
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Officer"};
	backPack[] = {"CUP_B_SLA_Medicbag"};
	sidearmWeapon[] = {"hlc_pistol_P226US"};
	magazines[] += {
		LIST_3("hlc_15Rnd_9x19_B_P226")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_BAF_PARA_PRROVER_BERET"};
};

class fac : co {
	displayName = "Forward Air Controller";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Scout"};
	backpack[] = {"CUP_B_Predator_Radio_MTP"};
	backpackItems[] = {
		FAC_GEAR,
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_4("CUP_1Rnd_SmokeGreen_M203")
	};
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
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_AutomaticRifleman"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	primaryWeapon[] = {"CUP_lmg_minimipara"};
	sidearmWeapon[] = {"hlc_pistol_P226US"};
	magazines[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1"),
		"CUP_HandGrenade_L109A1_HE",
		"SmokeShell",
		LIST_3("hlc_15Rnd_9x19_B_P226")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backPack[] = {"usm_pack_200rnd_556_bandoliers"};
	backpackItems[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1"),
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_arifle_L86A2"};
	scope[] = {"cup_optic_susat"};
	secondaryWeapon[] = {"hlc_pistol_P226US"};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Stanag_L85"),
		LIST_2("CUP_30Rnd_556x45_Stanag_L85_Tracer_Red"),
		LIST_3("hlc_15Rnd_9x19_B_P226"),
		LIST_2("CUP_HandGrenade_L109A1_HE"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_L7A2_Flat"};
	backPack[] = {"usm_pack_762x51_bandoliers"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"CUP_HandGrenade_L109A1_HE",
		"SmokeShell",
		LIST_3("hlc_15Rnd_9x19_B_P226")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backPack[] = {"usm_pack_762x51_bandoliers"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	secondaryWeapon[] = {"ace_csw_staticM2ShieldCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
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
	backPack[] = {"Redd_Milan_Static_Tripod"};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backPack[] = {"Redd_Milan_Static_Barrel"};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backPack[] = {"Redd_Milan_Static_Barrel"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ACE_Vector",
		"ItemGPS"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] += {"CUP_Javelin_M"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	backpackItems[] = {"CUP_Javelin_M"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ACE_Vector",
		"ItemGPS"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] = {
		MTR_GEAR,
		"ACE_RangeTable_82mm",
		"ACE_MapTools"
	};
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};

	linkedItems[] = {
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
	linkedItems[] = {
		"Rangefinder",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_FullGhillie_sard"};
	vest[] = {"usm_vest_lbv_rm"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"CUP_srifle_AWM_wdl"};
	scope[] = {"hlc_optic_leupoldm3a"};
	sidearmWeapon[] = {"hlc_pistol_P226US"};
	magazines[] = {
		LIST_7("CUP_5Rnd_86x70_L115A1"),
		LIST_2("HandGrenade"),
		LIST_4("hlc_15Rnd_9x19_B_P226")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"U_B_FullGhillie_sard"};
	vest[] = {"usm_vest_lbv_rm"};
	headgear[] = {};
	silencer[] = {"cup_muzzle_snds_m16"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Crewman"};
	headgear[] = {"CUP_H_BAF_DDPM_Mk6_CREW_PRR"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
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
	backpack[] = {"CUP_B_SLA_Medicbag"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"FIR_Fighter_Pilot_VF84_Nomex"};
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Pilot"};
	headgear[] = {
		"CFP_SOARCREW_BLUE",
		"CFP_SOARCREW_STACHE",
		"CFP_SOARCREW_RED",
		"CFP_SOARCREW_SKULL",
		"H_CrewHelmetHeli_B",
		"FIR_HGU56P_Skull",
		"FIR_HGU56P_Skull_Death",
		"MNP_Helmet_Dslyecxi"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
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
	backpack[] = {"CUP_B_SLA_Medicbag"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"FIR_Fighter_Pilot_Uniform_Flight"};
	vest[] = {"CUP_V_B_PilotVest"};
	backpack[] = {};
	headgear[] = {"FIR_JHMCS_Type2"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"};
	backpack[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"};
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
	vest[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"};
	backpack[] = {"CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"};
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
	backpack[] = {};
	backpackItems[] = {};
	linkedItems[] += {"B_UavTerminal"};
};
