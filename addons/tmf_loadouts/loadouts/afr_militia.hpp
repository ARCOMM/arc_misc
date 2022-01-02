// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*
	Dependencies:
		* CUP Units
		* CUP Weapons
		* CWR3
		* MNP Uniforms
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"U_C_Poor_1",
		"U_C_Poloshirt_tricolour",
		"U_C_Poloshirt_salmon",
		"U_C_Man_casual_6_F",
		"U_C_Man_casual_5_F",
		"U_C_Man_casual_4_F",
		"U_I_C_Soldier_Para_1_F",
		"U_I_C_Soldier_Para_4_F",
		"U_I_C_Soldier_Para_5_F",
		"CUP_U_B_BDUv2_roll_dirty_OD",
		"CUP_U_B_BDUv2_roll2_dirty_DPM",
		"CUP_U_B_BDUv2_roll_dirty_M81",
		"U_C_Uniform_Farmer_01_F",
		"U_BG_Guerilla2_3",
		"U_BG_Guerilla2_1",
		"U_C_Mechanic_01_F",
		"U_I_L_Uniform_01_tshirt_black_F",
		"U_I_L_Uniform_01_tshirt_olive_F",
		"U_I_L_Uniform_01_tshirt_skull_F",
		"U_I_L_Uniform_01_tshirt_sport_F"
	};
	vest[] = {
		"cwr3_i_vest_ammo_pouch",
		"cwr3_o_vest_chicom_ak74",
		"cwr3_i_vest_lbv_olive",
		"cwr3_i_vest_lbv"
	};
	backpack[] = {};
	headgear[] = {};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	goggles[] = {
		LIST_10("None"),
		"G_Bandanna_shades",
		"G_Bandanna_beast",
		"G_Bandanna_blk",
		"G_Bandanna_khk",
		"G_Bandanna_oli",
		"G_Bandanna_tan",
		"murshun_cigs_cig0",
		"G_Shades_Black"
	};
	// Leave empty to not change faces.
	faces[] = {
		"faceset:african",
		"faceset:tanoan"
	};
	// Leave empty to not change insignias
	insignias[] = {};

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
		"ACE_WaterBottle"
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
		LIST_20(""),
		LIST_5(""),
		"cwr3_o_headgear_ssh68",
		"cwr3_o_headgear_ssh68_camo",
		"H_Bandanna_blu",
		"H_Bandanna_surfer_blk",
		"H_Bandanna_surfer_grn",
		"H_Bandanna_sgg",
		"H_Bandanna_sand",
		"H_Cap_oli",
		"H_Cap_blu",
		"H_Cap_tan",
		"H_ShemagOpen_tan",
		"H_ShemagOpen_khk",
		"H_Shemag_olive",
		"H_Hat_camo",
		"H_HeadBandage_stained_F"
	};
	primaryWeapon[] = {
		"CUP_arifle_AK47_Early",
		"CUP_arifle_TYPE_56_2_Early"
	};
	attachment[] = {"cup_acc_zenit_2ds"};
	magazines[] = {
		LIST_8("CUP_30Rnd_762x39_AK47_M"),
		LIST_2("CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"V_HarnessOGL_brn"};
	backpack[] = {
		"B_FieldPack_khk",
		"B_FieldPack_oli",
		"B_FieldPack_cbr"
	};
	primaryWeapon[] = {"CUP_arifle_AK47_GL_Early"};
	magazines[] += {
		LIST_8("CUP_1Rnd_HE_GP25_M"),
		LIST_4("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKS"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"cwr3_o_backpack_veshmeshok_medic_empty"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
	magazines[] = {
		LIST_10("CUP_20Rnd_545x39_AKSU_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
	items[] = { MEDICAL_R };
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {
		"ACE_MapTools",
		"ACE_Cellphone"
	};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_GP25_M")
	};
	linkedItems[] += {"Binocular"};
};

class sl : ftl {
	displayName = "Squad Leader";
	sidearmWeapon[] = {"CUP_hgun_TaurusTracker455"};
	magazines[] += {
		LIST_4("CUP_6Rnd_45ACP_M")
	};
	linkedItems[] += {
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	uniform[] = {"MNP_CombatUniform_Rebel_B"};
	vest[] = {"cwr3_i_vest_lbv_officer"};
	headgear[] = {"CUP_H_NAPA_Fedora"};
	primaryWeapon[] = {"CUP_arifle_AKS_Gold"};
	goggles[] = {"G_Aviator"};
	magazines[] = {
		LIST_9("CUP_30Rnd_762x39_AK47_M"),
		LIST_2("CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class fac : sl {
	displayName = "Forward Air Controller";
	backpack[] = {"cwr3_b_backpack_radio"};
	backpackItems[] = { FAC_GEAR };
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
	backpack[] = {"cwr3_o_backpack_gasmask"};
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	magazines[] = {
		LIST_8("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
	backpackItems[] = {
		LIST_8("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG18"};
};

class dm : r {
	displayName = "Designated Marksman";
	scope[] = {"cup_optic_pso_1_ak_open"};
	silencer[] = {"cup_muzzle_mfsup_flashhider_762x39_black"};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {
		"cwr3_i_vest_lbv_mg",
		"cwr3_i_vest_lbv_mg_olive"
	};
	primaryWeapon[] = {"CUP_lmg_PKM"};
	magazines[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"cwr3_o_backpack_veshmeshok"};
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
		LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	secondaryWeapon[] = {"CUP_DSHKM_carry"};
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
	backpackItems[] = {
		LIST_6("ace_csw_50Rnd_127x108_mag"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v"};
	magazines[] += {
		LIST_3("CUP_PG7VM_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	backpackItems[] = {
		LIST_3("CUP_PG7VM_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
	backpackItems[] = {
		LIST_3("CUP_PG7VM_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"CUP_SPG9_carry"};
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M"
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M"
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	secondaryWeapon[] = {"ace_csw_spg9CarryTripod"};
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M",
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"CUP_2b14_carry"};
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
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
	backpack[] = {
		"B_Carryall_cbr",
		"B_Carryall_khk",
		"B_Carryall_oli"
	};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};

	linkedItems[] += {
		"Binocular"
	};
};

class samg : car {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"CUP_U_I_Ghillie_Top"};
	vest[] = {"cwr3_i_vest_ammo_pouch"};
	headgear[] = {};
	primaryWeapon[] = {"CUP_srifle_CZ550"};
	sidearmWeapon[] = {"CUP_hgun_TaurusTracker455"};
	magazines[] = {
		LIST_10("CUP_5x_22_LR_17_HMR_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_4("CUP_6Rnd_45ACP_M")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"CUP_U_I_Ghillie_Top"};
	vest[] = {"cwr3_i_vest_ammo_pouch"};
	headgear[] = {};
	silencer[] = {"cup_muzzle_bizon"};
	linkedItems[] += {
		"binocular",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {
		"U_BG_Guerilla2_2",
		"U_BG_Guerilla2_1",
		"U_BG_Guerilla2_3"
	};
	vest[] = {"V_TacVest_oli"};
	backpack[] = {};
	headgear[] = {"cwr3_o_headgear_tsh4_tan"};
	magazines[] = {
		LIST_6("CUP_20Rnd_545x39_AKSU_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {"Binocular","ItemGPS"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"cwr3_o_backpack_gasmask"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : vg {
	displayName = "Helicopter Crew";
	headgear[] = {"H_Cap_headphones"};
	items[] += {"ACE_MapTools"};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"cwr3_o_backpack_gasmask"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"cwr3_o_camel_pilot_uniform"};
	vest[] = {"V_TacVest_blk"};
	headgear[] = {"cwr3_c_headgear_camelpilot_hat"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("CUP_20Rnd_545x39_AKSU_M"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"B_Kitbag_rgr"};
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
	backpack[] = {"O_UAV_01_backpack_F"};
	linkedItems[] += {"O_UavTerminal"};
};
