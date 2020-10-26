/*
	Dependencies:
	* CUP Units
	* CUP Weapons
	* US Military Mod
	* ACE
	* Vz99 60mm Mortar
*/
class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_O_TKI_Khet_Jeans_01",
		"CUP_O_TKI_Khet_Jeans_02",
		"CUP_O_TKI_Khet_Jeans_03",
		"CUP_O_TKI_Khet_Jeans_04",
		"CUP_O_TKI_Khet_Partug_01",
		"CUP_O_TKI_Khet_Partug_02",
		"CUP_O_TKI_Khet_Partug_03",
		"CUP_O_TKI_Khet_Partug_04",
		"CUP_O_TKI_Khet_Partug_05",
		"CUP_O_TKI_Khet_Partug_06",
		"CUP_O_TKI_Khet_Partug_07",
		"CUP_O_TKI_Khet_Partug_08"
	};
	vest[] = {
		"CUP_V_OI_TKI_Jacket2_01",
		"CUP_V_OI_TKI_Jacket2_02",
		"CUP_V_OI_TKI_Jacket2_03",
		"CUP_V_OI_TKI_Jacket2_04",
		"CUP_V_OI_TKI_Jacket2_05",
		"CUP_V_OI_TKI_Jacket2_06",
		"CUP_V_OI_TKI_Jacket3_01",
		"CUP_V_OI_TKI_Jacket3_02",
		"CUP_V_OI_TKI_Jacket3_03",
		"CUP_V_OI_TKI_Jacket3_04",
		"CUP_V_OI_TKI_Jacket3_05",
		"CUP_V_OI_TKI_Jacket3_06",
		"CUP_V_OI_TKI_Jacket4_01",
		"CUP_V_OI_TKI_Jacket4_02",
		"CUP_V_OI_TKI_Jacket4_03",
		"CUP_V_OI_TKI_Jacket4_04",
		"CUP_V_OI_TKI_Jacket4_05",
		"CUP_V_OI_TKI_Jacket4_06",
		LIST_4("CUP_V_O_Ins_Carrier_Rig")
	};
	backpack[] = {};
	headgear[] = {
		"CUP_H_TKI_Lungee_01",
		"CUP_H_TKI_Lungee_02",
		"CUP_H_TKI_Lungee_03",
		"CUP_H_TKI_Lungee_04",
		"CUP_H_TKI_Lungee_05",
		"CUP_H_TKI_Lungee_06",
		"CUP_H_TKI_Lungee_Open_01",
		"CUP_H_TKI_Lungee_Open_02",
		"CUP_H_TKI_Lungee_Open_03",
		"CUP_H_TKI_Lungee_Open_04",
		"CUP_H_TKI_Lungee_Open_05",
		"CUP_H_TKI_Lungee_Open_06",
		"CUP_H_TKI_Pakol_1_01",
		"CUP_H_TKI_Pakol_1_02",
		"CUP_H_TKI_Pakol_1_03",
		"CUP_H_TKI_Pakol_1_04",
		"CUP_H_TKI_Pakol_1_05",
		"CUP_H_TKI_Pakol_1_06",
		"CUP_H_TKI_Pakol_2_01",
		"CUP_H_TKI_Pakol_2_02",
		"CUP_H_TKI_Pakol_2_03",
		"CUP_H_TKI_Pakol_2_04",
		"CUP_H_TKI_Pakol_2_05",
		"CUP_H_TKI_Pakol_2_06",
		"CUP_H_TKI_SkullCap_01",
		"CUP_H_TKI_SkullCap_02",
		"CUP_H_TKI_SkullCap_03",
		"CUP_H_TKI_SkullCap_04",
		"CUP_H_TKI_SkullCap_05",
		"CUP_H_TKI_SkullCap_06"
	};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:persian"};
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
		"ACE_Flashlight_KSF1"
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
	code = "if (sunOrMoon < 1) then {_this addPrimaryWeaponItem 'cup_acc_flashlight'}";
};

class r : baseMan {
	displayName = "Rifleman";
	backpack[] = {"CUP_B_AlicePack_Khaki", "CUP_B_AlicePack_Bedroll"};
	headgear[] += {
		LIST_4("CUP_H_SLA_Helmet_OD_worn"),
		LIST_4("CUP_H_SLA_Helmet_DES_worn")
	};
	primaryWeapon[] = {
		"CUP_arifle_AK47_Early",
		"CUP_arifle_AKM_Early",
		"CUP_arifle_AKMS_Early",
		"CUP_arifle_AKS"
	};
	magazines[] = {
		LIST_6("CUP_30Rnd_762x39_AK47_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"CUP_glaunch_M79"};
	sidearmWeapon[] = {"CUP_hgun_TT"};
	magazines[] = {
		LIST_4("CUP_8Rnd_762x25_TT"),
		LIST_8("CUP_1Rnd_HEDP_M203"),
		LIST_4("CUP_1Rnd_Smoke_M203"),
		LIST_4("ACE_40mm_Flare_white")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_SKS"};
	magazines[] = {
		LIST_8("CUP_10Rnd_762x39_SKS_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	primaryWeapon[] = {"CUP_srifle_Mosin_Nagant"};
	magazines[] = {
		LIST_14("CUP_5Rnd_762x54_Mosin_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	traits[] = {"medic"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	primaryWeapon[] = {"CUP_srifle_LeeEnfield"};
	magazines[] = {
		LIST_12("CUP_10x_303_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = { MEDICAL_M };
};
class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_SA61"};
	magazines[] = {
		LIST_10("CUP_20Rnd_B_765x17_Ball_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class ftl : r {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {"SmokeShellGreen"};
	linkedItems[] += {"Binocular"};
};

class sl : ftl {
	displayName = "Squad Leader";
	backpack[] = {"usm_pack_st138_prc77"};
	sidearmWeapon[] = {"CUP_hgun_TT"};
	magazines[] += {
		LIST_2("CUP_8Rnd_762x25_TT")
	};
};

class co : sl {
	displayName = "Platoon Leader";
	primaryWeapon[] = {"CUP_arifle_AKS_Gold"};
	sidearmWeapon[] = {"CUP_hgun_PMM"};
	goggles[] = {"G_Aviator"};
	magazines[] = {
		LIST_3("CUP_30Rnd_762x39_AK47_TK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell",
		"SmokeShellGreen",
		LIST_2("CUP_12Rnd_9x18_PMM_M")
	};
};

class fac : car {
	displayName = "Forward Air Controller";
	backpack[] = {"usm_pack_st138_prc77"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
	backpackItems[] = { FAC_GEAR };
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	magazines[] = {
		LIST_8("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_6("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG18"};
};

class lat : car {
	displayName = "Rifleman (RShG-2)";
	secondaryWeapon[] = {"CUP_launch_RShG2"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_Mosin_Nagant"};
	scope[] = {"cup_optic_pem"};
	magazines[] = {
		LIST_14("CUP_5Rnd_762x54_Mosin_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_PKM"};
	magazines[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	secondaryWeapon[] = {"CUP_DSHKM_carry"};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
	backpack[] = {"B_Carryall_oli"};
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
		LIST_2("CUP_PG7V_M"),
		"CUP_OG7_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	backpackItems[] = {
		LIST_2("CUP_PG7V_M"),
		"CUP_OG7_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
	backpackItems[] = {
		LIST_2("CUP_PG7V_M"),
		"CUP_OG7_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"CUP_SPG9_carry"};
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M"
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M"
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	secondaryWeapon[] = {"ace_csw_spg9CarryTripod"};
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M",
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
	items[] += {"ACE_MapTools"};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"potato_vz99_carryWeapon"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
		LIST_6("potato_vz99_HE"),
		LIST_2("potato_vz99_smokeWhite"),
		LIST_2("potato_vz99_flare")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
		LIST_6("potato_vz99_HE"),
		LIST_2("potato_vz99_smokeWhite"),
		LIST_2("potato_vz99_flare")
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	items[] += {"ACE_MapTools"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
		LIST_6("potato_vz99_HE"),
		LIST_2("potato_vz99_smokeWhite"),
		LIST_2("potato_vz99_flare")
	};
	linkedItems[] += {"Binocular"};
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
	uniform[] = {"CUP_U_O_TK_Ghillie_Top"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};

	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1"};
	magazines[] = {
		LIST_14("CUP_10Rnd_762x54_SVD_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class sp : r {
	displayName = "Spotter";
	uniform[] = {"CUP_U_O_TK_Ghillie_Top"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	headgear[] = {
		"CUP_H_CZ_Pakol_headset_f_brown",
		"CUP_H_CZ_Pakol_headset_b_grey"
	};
	magazines[] = {
		LIST_6("CUP_20Rnd_B_765x17_Ball_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	vest[] = {"CUP_V_O_SLA_Flak_Vest02"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {"ToolKit"};
};

class hc : vg {
	displayName = "Helicopter Crew";
};

class hp : hc {
	displayName = "Helicopter Pilot";
	vest[] = {"CUP_V_O_SLA_Flak_Vest02"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {"ToolKit"};
};

class jp : vg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_C_Pilot_01"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {"CUP_T10_Parachute_backpack"};
	headgear[] = {"CUP_H_TK_PilotHelmet"};
};

class eng : r {
	displayName = "Combat Engineer (Explosives)";
	sidearmWeapon[] = {"ACE_VMM3"};
	traits[] = {"engineer", "explosiveSpecialist"};
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};

	primaryWeapon[] = {"CUP_sgun_CZ584"};
	magazines[] = {
		LIST_20("CUP_1Rnd_12Gauge_Pellets_No00_Buck"),
		LIST_20("CUP_1Rnd_762x51_CZ584"),
		LIST_2("ACE_M14")
	};

	items[] += {
		"ACE_DefusalKit",
		"ACE_wirecutter",
		"ACE_DeadManSwitch",
		"ACE_Cellphone"
	};

	backpackItems[] = {
		"ToolKit",
		LIST_4("CUP_PipeBomb_M")
	};
};

class engm : r {
	displayName = "Combat Engineer (Mines)";
	sidearmWeapon[] = {"ACE_VMM3"};
	traits[] = {"engineer", "explosiveSpecialist"};
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};

	primaryWeapon[] = {"CUP_sgun_CZ584"};
	magazines[] = {
		LIST_20("CUP_1Rnd_12Gauge_Pellets_No00_Buck"),
		LIST_20("CUP_1Rnd_762x51_CZ584"),
		LIST_2("ACE_M14")
	};

	items[] += {
		"ACE_DefusalKit",
		"ACE_wirecutter",
		"ACE_DeadManSwitch",
		"ACE_Cellphone"
	};

	backpackItems[] = {
		"ToolKit",
		"CUP_IED_V2_M",
		"CUP_IED_V4_M"
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"I_UAV_01_backpack_F"};
	linkedItems[] += {"I_UavTerminal"};
};
