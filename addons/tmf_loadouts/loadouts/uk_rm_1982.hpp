// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Units
//		* CUP Weapons
//		* CWR3
//		* CWR3 British Forces
//		* REDD Milan

//		Note: Just swap the berets and you have a para regiment instead.
//		Addtl. Note: Helmets are the only armor on this kit.

//	Created by: AChesheireCat, edited by Freddo

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"cwr3_b_uk_uniform_olive"};
	vest[] = {"cwr3_i_vest_58webbing"};
	backpack[] = {"cwr3_b_uk_backpack"};
	headgear[] = {
		"cwr3_b_uk_headgear_mk5_helmet_camo",
		"cwr3_b_uk_headgear_mk5_helmet_net"
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
		MEDICAL_R,
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
	backpackItems[] = {"cwr3_b_uk_headgear_beret_rm"};

	// Unit traits, see https://community.bistudio.com/wiki/setUnitTrait
	traits[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	primaryWeapon[] = {"cwr3_arifle_l1a1"};
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
	vest[] = {"cwr3_b_uk_vest_58webbing_medic"};
	traits[] = {"medic"};
	backpack[] = {"cwr3_b_uk_backpack_medic_empty"};
	backpackItems[] = {MEDICAL_CLS};
};

class m : cls {
	displayName = "Medic";
	headgear[] = {"cwr3_b_uk_headgear_mk5_helmet_net_medic"};
	backpackItems[] = {MEDICAL_M};
	linkedItems[] += {"Binocular"};
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
	backPack[] = {"cwr3_b_backpack_radio"};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"cwr3_b_uk_headgear_beret_rm"};
};

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"cwr3_b_uk_backpack"};
	hmd[] = {"antenna_long_two_nvg"};
	backpackItems[] = {FAC_GEAR};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"cwr3_lmg_bren"};
	magazines[] = {
		LIST_13("cwr3_30rnd_762x51_bren_m"),
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
	secondaryWeapon[] = {"cwr3_launch_m72a3"};
	backpackItems[] = {"cwr3_launch_m72a3"};
};

class dm : r {
	displayName = "Designated Marksman";
	scope[] = {"cwr3_optic_suit"};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {"cwr3_b_uk_vest_58webbing_mg"};
	primaryWeapon[] = {"CUP_lmg_L7A2_Flat"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
	magazines[] = {
		LIST_8("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"CUP_HandGrenade_L109A1_HE",
		"SmokeShell",
		LIST_4("CUP_13Rnd_9x19_Browning_HP")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
	secondaryWeapon[] = {"cwr3_launch_carlgustaf"};
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
	backPack[] = {"cwr3_i_bergen_backpack_od"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"cwr3_i_bergen_backpack_od"};
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
	backPack[] = {"cwr3_i_bergen_backpack_od"};
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
	backpack[] = {"cwr3_i_bergen_backpack_od"};
	magazines[] += {"cwr3_javelin_m"};
	secondaryWeapon[] = {"cwr3_launch_javelin"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backpack[] = {"cwr3_i_bergen_backpack_od"};
	magazines[] += {"cwr3_javelin_m"};
	linkedItems[] += {"Binocular"};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"CUP_U_I_Ghillie_Top"};
	vest[] = {"cwr3_i_vest_58webbing"};
	backpack[] = {"cwr3_i_bergen_backpack_od"};
	headgear[] = {"cwr3_b_uk_headgear_beret_rm"};
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
	headgear[] = {"cwr3_b_uk_headgear_beret_rm"};
	uniform[] = {"CUP_U_I_Ghillie_Top"};
	backPack[] = {"cwr3_i_bergen_backpack_od"};
	scope[] = {"cwr3_optic_suit"};
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
		LIST_3("APERSTripMine_Wire_Mag"),
		"LaserBatteries"
	};
	linkedItems[] += {
		"CUP_SOFLAM",
		"ItemRadio"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	vest[] = {"CUP_V_CDF_OfficerBelt"};
	backpack[] = {};
	backpackItems[] = {};
	headgear[] = {
		"cwr3_b_headgear_cvc",
		"cwr3_b_headgear_cvc_goggles"
	};
	magazines[] = {
		LIST_3("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	vest[] = {"CUP_V_CDF_OfficerBelt2"};
	backpackItems[] = {};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"cwr3_o_backpack_gasmask"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"cwr3_b_uk_uniform_pilot"};
	vest[] = {"Aircrew_vest_2_NH"};
	backpack[] = {};
	backpackItems[] = {};
	headgear[] = {
		"CUP_H_SPH4_khaki",
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
	backpackItems[] = {};
	linkedItems[] += {"ItemRadio"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"cwr3_o_backpack_gasmask"};
	backpackItems[] = {"ToolKit"};
};

class jp : hc {
	displayName = "Jet pilot";
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
	backpack[] = {"cwr3_i_bergen_backpack_khaki"};
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
