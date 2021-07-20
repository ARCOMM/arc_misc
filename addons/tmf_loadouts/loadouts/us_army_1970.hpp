// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/* Dependencies:
		NIArms M60 Pack
		NIArms M1903 Pack
		USM Uniforms
		CUP
		Community Factions Project
		FIR AWS
*/

//		Created by: AChesheireCat

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"usm_bdu_odg"};
	vest[] = {"usm_vest_LBE_rm"};
	backpack[] = {};
	headgear[] = {};
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
		 MEDICAL_R ,
		"ACE_Flashlight_MX991",
		"ACE_EntrenchingTool"
	};
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
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
	headgear[] = {
		"CUP_H_USArmy_Helmet_M1_Vine",
		"CUP_H_USArmy_Helmet_M1_Olive",
		"CUP_H_USArmy_Helmet_M1_plain_Olive",
		"CUP_H_USArmy_Helmet_M1_plain_Vine",
		"CUP_H_USArmy_Helmet_M1_btp"
	};
	primaryWeapon[] = {"CUP_srifle_M14"};
	magazines[] = {
		LIST_6("CUP_20Rnd_762x51_DMR"),
		LIST_2("CUP_20Rnd_TE1_Red_Tracer_762x51_DMR"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"usm_vest_LBE_gr"};
	primaryWeapon[] = {"CUP_glaunch_M79"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
	magazines[] = {
		LIST_20("CUP_1Rnd_HE_M203"),
		LIST_5("CUP_1Rnd_HE_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203"),
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
		LIST_7("CUP_7Rnd_45ACP_1911")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_M16A1"};
	magazines[] = {
		LIST_9("CUP_20Rnd_556x45_Stanag"),
		LIST_2("CUP_20Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"usm_pack_m5_medic"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"usm_pack_alice_medic"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_M3A1"};
	magazines[] = {
		LIST_8("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		"HandGrenade",
		"SmokeShell"
	};
};

class ftl : car {
	displayName = "Fireteam Leader";
	vest[] = {"usm_vest_LBE_gr"};
	backPack[] = {"CUP_B_SLA_Medicbag"};
	primaryWeapon[] = {"CUP_arifle_M16A1GL"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_11("CUP_1Rnd_HE_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203"),
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_2("CUP_1Rnd_SmokeGreen_M203")
	};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class sl : car {
	displayName = "Squad Leader";
	vest[] = {"usm_vest_LBE_rmp"};
	backPack[] = {"CUP_B_SLA_Medicbag"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
	magazines[] += {
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellGreen"),
		LIST_3("CUP_7Rnd_45ACP_1911")
	};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"usm_bdu_8point_odg"};
};

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"usm_pack_st138_prc77"};
	backpackItems[] = { FAC_GEAR };
};

class ar : r {
	displayName = "Automatic Rifleman";
	vest[] = {"usm_vest_LBE_mg"};
	backPack[] = {"usm_pack_762x51_ammobelts"};
	primaryWeapon[] = {"CUP_lmg_M60"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
	magazines[] = {
		LIST_4("hlc_100Rnd_762x51_M_M60E4"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_7Rnd_45ACP_1911")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backPack[] = {"usm_pack_762x51_bandoliers"};
	backpackItems[] = {
		LIST_4("hlc_100Rnd_762x51_M_M60E4")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_M72A6_Special"};
	backpackItems[] = {"CUP_launch_M72A6"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_M14"};
	scope[] = {"hlc_optic_zf95base"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	magazines[] = {
		LIST_9("ACE_10Rnd_762x51_M118LR_Mag"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {"usm_vest_LBE_mg_m"};
	primaryWeapon[] = {"CUP_lmg_M60"};
	backPack[] = {"usm_pack_762x51_bandoliers"};
	backpackItems[] = {
		LIST_3("hlc_100Rnd_762x51_M_M60E4")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	vest[] = {"usm_vest_LBE_rm"};
	backPack[] = {"usm_pack_762x51_bandoliers"};
	backpackItems[] = {
		LIST_4("hlc_100Rnd_762x51_M_M60E4")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	vest[] = {"usm_vest_LBE_mg_m"};
	backPack[] = {"usm_pack_alice"};
	backpackItems[] = {
		LIST_4("hlc_100Rnd_762x51_M_M60E4")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ItemRadio"};
};

class hmgg : car {
	displayName = "HMG Gunner";
	vest[] = {"usm_vest_LBE_rm"};
	backPack[] = {"CUP_B_M2_Gun_Bag"};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	vest[] = {"usm_vest_LBE_rm"};
	backPack[] = {"CUP_B_M2_MiniTripod_Bag"};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	vest[] = {"usm_vest_LBE_mg_m"};
	backPack[] = {"CUP_B_M2_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	vest[] = {"usm_vest_LBE_rm"};
	backpack[] = {"usm_pack_alice"};
	secondaryWeapon[] = {"CUP_launch_MAAWS"};
	magazines[] += {
		LIST_2("CUP_MAAWS_HEAT_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	vest[] = {"usm_vest_LBE_rm"};
	backpack[] = {"usm_pack_alice"};
	backpackItems[] = {
		"CUP_MAAWS_HEAT_M",
		"CUP_MAAWS_HEDP_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	vest[] = {"usm_vest_LBE_mg_m"};
	backpack[] = {"usm_pack_alice"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
	backpackItems[] = {
		"CUP_MAAWS_HEAT_M",
		"CUP_MAAWS_HEDP_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	vest[] = {"usm_vest_LBE_rm"};
	backPack[] = {"CUP_B_Tow_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	vest[] = {"usm_vest_LBE_rm"};
	backPack[] = {"CUP_B_TOW_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	vest[] = {"usm_vest_LBE_mg_m"};
	backPack[] = {"CUP_B_TOW_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	vest[] = {"usm_vest_LBE_rm"};
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"usm_pack_alice"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	vest[] = {"usm_vest_LBE_rm"};
	backPack[] = {"usm_pack_alice"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	vest[] = {"usm_vest_LBE_mg_m"};
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] += { MTR_GEAR };
	backPack[] = {"usm_pack_alice"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
};

class samg : car {
	displayName = "AA Missile Specialist";
	vest[] = {"usm_vest_LBE_rm"};
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	vest[] = {"usm_vest_LBE_mg_m"};
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
};

class sn : r {
	displayName = "Sniper";
	headgear[] = {"usm_bdu_boonie_erdl"};
	uniform[] = {"CUP_U_B_BDUv2_roll_dirty_ERDL_lowland"};
	vest[] = {"CFP_Alice_Vest2"};
	goggles[] = {"default"};
	primaryWeapon[] = {"hlc_rifle_M1903A1_unertl"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
	magazines[] = {
		LIST_7("hlc_5rnd_3006_1903"),
		LIST_2("HandGrenade"),
		LIST_5("CUP_7Rnd_45ACP_1911")
	};
};

class sp : r {
	displayName = "Spotter";
	headgear[] = {"usm_bdu_boonie_erdl"};
	uniform[] = {"CUP_U_B_BDUv2_roll_dirty_ERDL_lowland"};
	vest[] = {"CFP_Alice_Vest2"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
			LIST_10("hlc_5rnd_3006_1903"),
			LIST_4("APERSTripMine_Wire_Mag"),
			LIST_2("ACE_FlareTripMine_Mag")
	};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	backpack[] = {};
	headgear[] = {"usm_helmet_cvc"};
	magazines[] = {
		LIST_3("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"FIR_Fighter_Pilot_Uniform_Flight"};
	vest[] = {"FIR_pilot_vest"};
	backpack[] = {};
	headgear[] = {
		"SP_SPH4Helmet_Green",
		"SP_SPH4Helmet_Black"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"FIR_Fighter_Pilot_Uniform_Flight"};
	vest[] = {"CUP_V_B_PilotVest"};
	backpack[] = {};
	headgear[] = {"FIR_hgu26p"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_3("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"usm_pack_alice"};
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
	backpack[] = {};
	linkedItems[] += {"B_UavTerminal"};
};
