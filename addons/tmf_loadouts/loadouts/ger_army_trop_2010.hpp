/*
	Dependencies:
	* CUP Units
	* CUP Weapons
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_B_GER_Tropentarn_1",
		"CUP_U_B_GER_Tropentarn_2",
		"CUP_U_B_GER_Tropentarn_3",
		"CUP_U_B_GER_Tropentarn_4",
		"CUP_U_B_GER_Tropentarn_5",
		"CUP_U_B_GER_Tropentarn_6",
		"CUP_U_B_GER_Tropentarn_7",
		"CUP_U_B_GER_Tropentarn_8"
	};
	vest[] = {"CUP_V_B_GER_PVest_Trop_RFL"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"default"};
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
		"ACE_Flashlight_XL50",
		"Chemlight_green",
		"ACE_CableTie"
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
	headgear[] = {
		"CUP_H_Ger_M92_Cover_Trop",
		"CUP_H_Ger_M92_Cover_Trop_GG_CB",
		"CUP_H_Ger_M92_Cover_Trop_GG_CF",
		"CUP_H_Ger_M92_Cover_Trop_GG"
	};
	primaryWeapon[] = {"CUP_arifle_G36A"};
	scope[] = {"cup_optic_g36optics15x_3d"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_G36"),
		LIST_2("CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_B_GER_PVest_Trop_Gren"};
	primaryWeapon[] = {"CUP_arifle_AG36"};
	magazines[] += {
		LIST_8("CUP_1Rnd_HEDP_M203"),
		LIST_4("CUP_1Rnd_Smoke_M203")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_G36C_VFG_Carry"};
};

class cls : car {
	displayName = "Combat Life Saver";
	vest[] = {"CUP_V_B_GER_PVest_Trop_Med"};
	traits[] = {"medic"};
	backpack[] = {"CUP_B_GER_Medic_Tropentarn"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"CUP_V_B_GER_PVest_Trop_Med_LT"};
	backpack[] = {"CUP_B_GER_Pack_Tropentarn"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_MP7"};
	scope[] = {"optic_holosight_smg_blk_f"};
	magazines[] = {
		LIST_8("CUP_40Rnd_46x30_MP7"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_M203")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {"CUP_V_B_GER_PVest_Trop_TL"};
	sidearmWeapon[] = {"hgun_P07_F"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("16Rnd_9x21_Mag")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_VectorDay",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_Ger_Beret_INF_Grn"};
	vest[] = {"CUP_V_B_GER_PVest_Trop_OFC"};
};

class fac : sl {
	displayName = "Forward Air Controller";
	vest[] = {"CUP_V_B_GER_PVest_Trop_OFC"};
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	vest[] = {"CUP_V_B_GER_PVest_Trop_MG"};
	primaryWeapon[] = {"CUP_lmg_MG3"};
	magazines[] = {
		LIST_3("CUP_120Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_FieldPack_cbr"};
	backpackItems[] = {
		LIST_3("CUP_120Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M")
	};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_arifle_HK417_20"};
	scope[] = {"cup_optic_g33_hws_blk"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	magazines[] = {
		LIST_6("CUP_20Rnd_762x51_HK417"),
		LIST_2("CUP_20Rnd_TE1_Yellow_Tracer_762x51_HK417"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : car {
	displayName = "MMG Gunner";
	backpack[] = {"rnt_mg3_static_barell"};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	vest[] = {"CUP_V_B_GER_PVest_Trop_MG_LT"};
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_7("rnt_mg3_kasten_fake")
	};
};

class mmgtl : car {
	displayName = "MMG Team Leader";
	backpack[] = {"rnt_mg3_static_tripod"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
};

class hmgg : car {
	displayName = "GMG Gunner";
	backPack[] = {"rnt_gmw_static_barell"};
};

class hmgac : r {
	displayName = "GMG Ammo Carrier";
	vest[] = {"CUP_V_B_GER_PVest_Trop_MG_LT"};
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_2("rnt_gmw_kasten_fake")
	};
};

class hmgtl : car {
	displayName = "GMG Team Leader";
	backPack[] = {"rnt_gmw_static_tripod"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_GER_Pack_Tropentarn"};
	secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"cup_optic_maaws_scope"};
	magazines[] += {
		LIST_3("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_GER_Pack_Tropentarn"};
	backpackItems[] += {
		LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_GER_Pack_Tropentarn"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] += {
		LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backpack[] = {"Redd_Milan_Static_Tripod"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"Redd_Milan_Static_Barrel"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"Redd_Milan_Static_Barrel"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
};

class mtrg : smg {
	displayName = "Mortar Gunner";
	backpack[] = {"Redd_Tank_M120_Tampella_Barrel"};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backpack[] = {"Redd_Tank_M120_Tampella_Tripod"};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	backpack[] = {"Redd_Tank_M120_Tampella_Tripod"};
	items[] = { MTR_GEAR };

	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
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
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_FullGhillie_ard"};
	vest[] = {"V_TacVest_oli"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"CUP_srifle_AWM_wdl"};
	scope[] = {"cup_optic_leupoldmk4_25x50_lrt"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	sidearmWeapon[] = {"CUP_hgun_Mk23"};
	magazines[] = {
		LIST_7("CUP_5Rnd_86x70_L115A1"),
		"HandGrenade",
		LIST_2("CUP_12Rnd_45ACP_mk23")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"U_B_FullGhillie_ard"};
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	vest[] = {"V_TacVest_oli"};
	headgear[] = {};
	silencer[] = {"cup_muzzle_snds_g36_black"};
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
	uniform[] = {
		"CUP_U_B_BDUv2_OD",
		"CUP_U_B_BDUv2_gloves_OD",
		"CUP_U_B_BDUv2_roll2_OD",
		"CUP_U_B_BDUv2_roll2_gloves_OD",
		"CUP_U_B_BDUv2_roll_OD",
		"CUP_U_B_BDUv2_roll_gloves_OD"
	};
	vest[] = {"CUP_V_B_GER_Vest_1"};
	backpack[] = {};
	headgear[] = {"H_HelmetCrew_I"};
	primaryWeapon[] = {"CUP_smg_MP7"};
	magazines[] = {
		LIST_6("CUP_20Rnd_46x30_MP7"),
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
	backpack[] = {"B_AssaultPack_rgr"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_GER_Fleck_Overalls_Pilot"};
	vest[] = {"CUP_V_PMC_CIRAS_Black_Patrol"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetHeli_B"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("CUP_20Rnd_46x30_MP7"),
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
	backpack[] = {"B_AssaultPack_blk"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"CUP_V_B_PilotVest"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetFighter_O"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("CUP_20Rnd_46x30_MP7"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	sidearmWeapon[] = {"ACE_VMM3"};
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"CUP_B_GER_Pack_Tropentarn"};
	items[] += {"ACE_DefusalKit", "ACE_M26_Clacker"};
	backpackItems[] = {
		"ToolKit",
		"ACE_wirecutter",
		"SatchelCharge_Remote_Mag",
		LIST_4("DemoCharge_Remote_Mag")
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	sidearmWeapon[] = {"ACE_VMM3"};
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"CUP_B_GER_Pack_Tropentarn"};
	items[] += {"ACE_DefusalKit"};
	backpackItems[] = {
		"ToolKit",
		"ATMine_Range_Mag"
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
