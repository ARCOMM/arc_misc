/*
	Dependencies:
	CUP Weapons
	CUP Units
	Wearable Antennas
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_B_HIL_ACU_Gloves_TTS",
		"CUP_U_B_HIL_ACU_Kneepad_Gloves_TTS",
		"CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_TTS",
		"CUP_U_B_HIL_ACU_Kneepad_Rolled_TTS",
		"CUP_U_B_HIL_ACU_Kneepad_TTS",
		"CUP_U_B_HIL_ACU_Rolled_Gloves_TTS",
		"CUP_U_B_HIL_ACU_Rolled_TTS",
		"CUP_U_B_HIL_ACU_TTS"
	};
	vest[] = {"CUP_V_B_Interceptor_Rifleman_Olive"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:tanoan"};
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
		"ACE_Flashlight_MX991",
		LIST_2("Chemlight_green")
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
	code = "if (sunOrMoon != 1) then {_this linkItem 'CUP_NVG_PVS7';};";
};

class r : baseMan {
	displayName = "Rifleman";
	primaryWeapon[] = {"CUP_Famas_F1"};
	headgear[] = {
		LIST_3("CUP_H_Ger_M92"),
		"CUP_H_Ger_M92_GG",
		"CUP_H_Ger_M92_GG_CB",
		"CUP_H_Ger_M92_GG_CF"
	};
	backpack[] = {"B_AssaultPack_rgr"};
	magazines[] = {
		LIST_8("CUP_25Rnd_556x45_Famas"),
		LIST_2("CUP_25Rnd_556x45_Famas_Tracer_Red"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_B_Interceptor_Grenadier_Olive"};
	primaryWeapon[] = {"CUP_glaunch_M79"};
	sidearmWeapon[] = {"CUP_hgun_Mac10"};
	magazines[] = {
		LIST_16("CUP_1Rnd_HEDP_M203"),
		LIST_4("CUP_1Rnd_StarFlare_White_M203"),
		LIST_4("CUP_1Rnd_Smoke_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203"),
		LIST_5("CUP_30Rnd_45ACP_MAC10_M")
	};
};

class car : r {
	displayName = "Carabinier";
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"B_FieldPack_green_F"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_green_F"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_Mac10"};
	magazines[] = {
		LIST_10("CUP_30Rnd_45ACP_MAC10_M"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : r {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("SmokeShellGreen")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : ftl {
	displayName = "Squad Leader";
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
	magazines[] += {
		LIST_2("11Rnd_45ACP_Mag")
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
	headgear[] = {"H_MilCap_grn"};
};

class fac : ftl {
	displayName = "Forward Air Controller";
	hmd[] = {"antenna_long_two_nvg"};
	backpack[] = {"B_Kitbag_rgr"};
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
	primaryWeapon[] = {"CUP_lmg_M249_E1"};
	magazines[] = {
		LIST_7("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
		"HandGrenade",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_APILAS"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_M14_DMR"};
	scope[] = {"cup_optic_acog_ta01b_od"};
	bipod[] = {"bipod_03_f_oli"};
	magazines[] = {
		LIST_11("CUP_20Rnd_762x51_DMR"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_FNMAG"};
	magazines[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"B_FieldPack_green_F"};
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
		LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"ACE_EntrenchingTool",
		"ACE_SpareBarrel"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"B_Carryall_green_F"};
	secondaryWeapon[] = {"ace_csw_staticM2ShieldCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"B_Carryall_green_F"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"B_Carryall_green_F"};
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
	backpack[] = {"B_Carryall_green_F"};
	secondaryWeapon[] = {"CUP_launch_Mk153Mod0"};
	secondaryAttachments[] = {"cup_optic_smaw_scope", "acc_pointer_ir"};
	magazines[] += {
		LIST_2("CUP_SMAW_HEAA_M"),
		"CUP_SMAW_HEDP_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_green_F"};
	magazines[] += {
		LIST_2("CUP_SMAW_HEAA_M"),
		"CUP_SMAW_HEDP_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_Carryall_green_F"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	magazines[] += {
		LIST_2("CUP_SMAW_HEAA_M"),
		"CUP_SMAW_HEDP_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"Redd_Milan_Static_Barrel"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"Redd_Milan_Static_Barrel"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"Redd_Milan_Static_Tripod"};
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

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_green_F"};
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
	backPack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
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

class samg : car {
	displayName = "AA Missile Specialist";
	backpack[] = {"B_Carryall_green_F"};
	secondaryWeapon[] = {"launch_B_Titan_tna_F"};
	magazines[] += {
		LIST_3("Titan_AA")
	};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_green_F"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("Titan_AA")
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"CUP_U_I_Ghillie_Top"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	primaryWeapon[] = {"CUP_srifle_AWM_wdl"};
	scope[] = {"cup_optic_leupoldm3lr"};
	bipod[] = {"bipod_03_f_oli"};
	sidearmWeapon[] = {"CUP_hgun_Mac10"};
	sidearmAttachments[] = {"cup_muzzle_mfsup_suppressor_mac10"};
	magazines[] = {
		LIST_18("CUP_5Rnd_86x70_L115A1"),
		LIST_2("HandGrenade"),
		LIST_4("CUP_30Rnd_45ACP_MAC10_M")
	};
};

class sp : r {
	displayName = "Spotter";
	uniform[] = {"CUP_U_I_Ghillie_Top"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	primaryWeapon[] = {"CUP_Famas_F1_Rail_Wood"};
	scope[] = {"cup_optic_aimm_microt1_od"};
	silencer[] = {"cup_muzzle_snds_famas_wood"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX",
		"Laserbatteries"
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

class vg : smg {
	displayName = "Vehicle Gunner";
	vest[] = {"CUP_V_B_Interceptor_Base_Olive"};
	backpack[] = {};
	headgear[] = {"CUP_H_CZ_Helmet05"};
	magazines[] = {
		LIST_6("CUP_30Rnd_45ACP_MAC10_M"),
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
	backpack[] = {"CUP_B_SLA_Medicbag"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
	vest[] = {"Aircrew_vest_2_NH"};
	backpack[] = {};
	headgear[] = {
		"CUP_H_SPH4_green",
		"CUP_H_SPH4_green_visor"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("CUP_30Rnd_45ACP_MAC10_M"),
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
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
	vest[] = {"Aircrew_vest_2_NH"};
	backpack[] = {};
	headgear[] = {"CUP_H_SPH4_green_visor"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("CUP_30Rnd_45ACP_MAC10_M"),
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
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
