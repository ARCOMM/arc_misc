// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Units
//		* CUP Weapons
//		* Community Factions Project
//		* MNP Uniforms
//		* HLC FAL Pack
//		* USM
//		* REDD Milan

//		Note: Just swap the berets and you have a para regiment instead.
//		Addtl. Note: Helmets are the only armor on this kit.

//	Created by: AChesheireCat

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		LIST_2("CUP_U_B_BDUv2_dirty_DPM"),
		LIST_2("CUP_U_B_BDUv2_DPM"),
		"CUP_U_B_BDUv2_dirty_DPM_OD",
		"CUP_U_B_BDUv2_DPM_OD"
	};
	vest[] = {"CFP_Alice_Vest2"};
	backpack[] = {
		"CUP_B_AlicePack_Bedroll",
		"CUP_B_AlicePack_Khaki"
	};
	headgear[] = {
		"CFP_IDF_M76",
		"SP_M1Helmet_GrayDim",
		"CFP_IDF_M76_BD_Camo",
		"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A",
		"CUP_H_BAF_DPM_Mk6_NETTING_PRR"
	};
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
		"ACE_Canteen",
		"ACE_EntrenchingTool",
		"ACE_Flashlight_MX991"
	};
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	// These are put into the backpack
	backpackItems[] = {"MNP_Beret_RM"};

	// Unit traits, see https://community.bistudio.com/wiki/setUnitTrait
	traits[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	primaryWeapon[] = {"hlc_rifle_L1A1SLR"};
	magazines[] = {
		LIST_7("CUP_20Rnd_762x51_FNFAL_M"),
		LIST_4("CUP_HandGrenade_L109A1_HE"),
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"CUP_glaunch_M79"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
	magazines[] = {
		LIST_20("CUP_1Rnd_HE_M203"),
		LIST_5("CUP_1Rnd_StarFlare_Red_M203"),
		LIST_5("CUP_1Rnd_Smoke_M203"),
		LIST_5("CUP_1Rnd_SmokeRed_M203"),
		LIST_10("CUP_13Rnd_9x19_Browning_HP")
	};
};

class car : r {
	displayName = "Carabinier";
	magazines[] = {
		LIST_7("CUP_20Rnd_762x51_FNFAL_M"),
		LIST_2("CUP_HandGrenade_L109A1_HE"),
		"SmokeShell"
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_ACRPara_dpm"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"usm_pack_alice"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_M3A1"};
	scope[] = {};
	magazines[] = {
		LIST_7("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		LIST_4("CUP_HandGrenade_L109A1_HE"),
		"SmokeShell"
	};
};

class ftl : smg {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
	magazines[] += {
		LIST_5("CUP_13Rnd_9x19_Browning_HP")
	};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class sl : ftl {
	displayName = "Squad Leader";
	backPack[] = {"usm_pack_st138_prc77"};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"MNP_Beret_RM"};
};

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"usm_pack_alice_prc77"};
	backpackItems[] = { FAC_GEAR };
};

class ar : r {
	displayName = "Automatic Rifleman";
	vest[] = {"usm_vest_LBE_mg"};
	primaryWeapon[] = {"CUP_arifle_FNFAL5060"};
	silencer[] = {"hlc_muzzle_mag58_brake"};
	bipod[] = {"cup_bipod_fnfal"};
	magazines[] = {
		LIST_13("CUP_30Rnd_TE1_Red_Tracer_762x51_FNFAL_M"),
		LIST_4("CUP_HandGrenade_L109A1_HE"),
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_10("CUP_30Rnd_TE1_Red_Tracer_762x51_FNFAL_M")
	};
	linkedItems[] += {"Binocular"};
};

class rat : smg {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M72A6"};
	backpackItems[] = {"CUP_launch_M72A6"};
};

class dm : r {
	displayName = "Designated Marksman";
	scope[] = {"hlc_optic_suit"};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_FNMAG"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
	magazines[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"CUP_HandGrenade_L109A1_HE",
		"SmokeShell",
		LIST_4("CUP_13Rnd_9x19_Browning_HP")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
	backPack[] = {"I_C_HMG_02_support_F"};
	backpackItems[] = {};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"cup_optic_maaws_scope"};
	magazines[] += {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"Redd_Milan_Static_Barrel"};
	backpackItems[] = {};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"Redd_Milan_Static_Tripod"};
	backpackItems[] = {};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"Redd_Milan_Static_Tripod"};
	backpackItems[] = {};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
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
	items[] += { MTR_GEAR };
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class samg : car {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
	linkedItems[] += {"Binocular"};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_T_FullGhillie_tna_F"};
	vest[] = {"usm_vest_LBE_mg"};
	backpack[] = {"CFP_Carryall_DPMWoodland"};
	headgear[] = {"MNP_Beret_RM"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
	magazines[] = {
		LIST_4("CUP_13Rnd_9x19_Browning_HP"),
		"ACE_HandFlare_Red",
		LIST_2("CUP_HandGrenade_L109A1_HE"),
		"SmokeShell"
	};
	backpackItems[] = {
		"cup_optic_no23mk2",
		LIST_11("CUP_10x_303_M"),
		"CUP_srifle_LeeEnfield"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ItemRadio"};
};

class sp : r {
	displayName = "Spotter";
	backPack[] = {"CFP_Carryall_DPMWoodland"};
	scope[] = {"hlc_optic_suit"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	backpackItems[] += {
		LIST_10("CUP_10x_303_M"),
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_SpottingScope",
		"ACE_Tripod",
		"ACE_wirecutter",
		LIST_3("APERSTripMine_Wire_Mag")
	};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	backpack[] = {};
	backpackItems[] = {};
	headgear[] = {
		"SP_CVCHelmet_Green",
		"CUP_H_PMC_PRR_Headset"
	};
	magazines[] = {
		LIST_3("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	backpackItems[] = {};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	vest[] = {"CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot"};
	backpack[] = {};
	backpackItems[] = {};
	headgear[] = {
		"CUP_H_SPH4_green_visor",
		"CUP_H_SPH4_visor",
		"CUP_H_SPH4_khaki_visor"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	headgear[] = {
		"CUP_H_BAF_PILOT",
		"CUP_H_SPH4_green",
		"CUP_H_SPH4"
	};
	backpackItems[] = {};
	linkedItems[] += {"ItemRadio"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_rgr"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	headgear[] = {"H_PilotHelmetFighter_B"};
	vest[] = {"Aircrew_vest_2_NH"};
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
	backpack[] = {};
	primaryWeapon[] = {};
	secondaryWeapon[] = {"CUP_hgun_Browning_HP"};
	traits[] = {"engineer"};
	backpackItems[] = {};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_3("CUP_13Rnd_9x19_Browning_HP"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_ACRPara_dpm"};
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
	linkedItems[] += {"B_UavTerminal"};
};
