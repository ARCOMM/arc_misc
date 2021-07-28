// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*
	Dependencies:
	CUP Weapons
	CUP Units
	CWR3
	CWR3 British Forces
	DZN Mitznefet
	MNP
	ARC Misc Weapons
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"MNP_CombatUniform_ISR"};
	vest[] = {"CUP_V_IDF_Vest"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:greek"};
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
		"ACE_CableTie",
		"Chemlight_green"
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
	hmd[] = {
		"CUP_NVG_PVS7" //TODO: Switch out with CUP_NVG_PVS7_Hide
	};
	headgear[] = {
		"cwr3_b_uk_headgear_m76_olive_net",
		"cwr3_b_uk_headgear_m76_olive"
	};
	goggles[] = {
		"dzn_G_IDF_Mitznefet_Cover",
		"dzn_G_IDF_Mitznefet_Cover2",
		"dzn_G_IDF_Mitznefet_Cover3",
		"dzn_G_IDF_Mitznefet_Cover4"
	};
	primaryWeapon[] = {"arifle_TRG21_F"};
	scope[] = {
		"cup_optic_trijiconrx01_od",
		"cup_optic_mars_od"
	};
	attachment[] = {"cup_acc_anpeq_2_camo"};
	magazines[] = {
		LIST_6("30Rnd_556x45_Stanag_green"),
		LIST_2("30Rnd_556x45_Stanag_Tracer_Green"),
		LIST_2("MiniGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"arifle_TRG21_GL_F"};
	magazines[] += {
		LIST_4("1Rnd_HE_Grenade_shell"),
		LIST_2("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"arifle_TRG20_F"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {MEDICAL_CLS};
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_green_F"};
	backpackItems[] = {MEDICAL_M};
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"cwr3_smg_uzi"};
	magazines[] = {
		LIST_8("CUP_30Rnd_9x19_UZI"),
		LIST_2("MiniGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("ACE_40mm_Flare_white")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	items[] += {"ACE_MapTools"};
	sidearmWeapon[] = {"CUP_hgun_Phantom"};
	magazines[] += {
		LIST_2("CUP_18Rnd_9x19_Phantom")
	};
	linkedItems[] += {
		"ACE_VectorDay",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"MNP_MC_OD"};
};

class fac : r {
	displayName = "Forward Air Controller";
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] += {
		"Laserdesignator",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	backpack[] = {"B_TacticalPack_oli"};
	primaryWeapon[] = {
		"arc_misc_weapons_Negev_NG5"
	};
	scope[] = {
		"cup_optic_mars",
		"cup_optic_trijiconrx01_black"
	};
	magazines[] = {
		LIST_6("CUP_100Rnd_TE4_Green_Tracer_556x45_M249"),
		"MiniGrenade",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_IDF_Backpack"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_Green_Tracer_556x45_M249"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M72A6"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"H_Booniehat_oli"};
	primaryWeapon[] = {"CUP_srifle_m110_kac_woodland"};
	scope[] = {"cup_optic_leupoldmk4_10x40_lrt_woodland"};
	bipod[] = {"bipod_03_f_oli"};
	magazines[] = {
		LIST_6("CUP_20Rnd_762x51_B_M110"),
		LIST_2("CUP_20Rnd_TE1_Green_Tracer_762x51_M110"),
		LIST_2("MiniGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"LMG_Zafir_F"};
	scope[] = {"cup_optic_elcanm145_3d"};
	magazines[] = {
		LIST_4("150Rnd_762x54_Box"),
		"150Rnd_762x54_Box_Tracer",
		"MiniGrenade",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_4("150Rnd_762x54_Box"),
		LIST_2("150Rnd_762x54_Box_Tracer")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
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
		LIST_2("150Rnd_762x54_Box"),
		LIST_2("150Rnd_762x54_Box_Tracer"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	secondaryWeapon[] = {"ace_csw_staticM2ShieldCarry"};
	backPack[] = {"B_TacticalPack_oli"};
	backpackItems[] = {
		LIST_2("ace_csw_100Rnd_127x99_mag")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_2("ace_csw_100Rnd_127x99_mag"),
		"ace_csw_100Rnd_127x99_mag_green"
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backPack[] = {"B_TacticalPack_oli"};
	backpackItems[] = {
		LIST_2("ace_csw_100Rnd_127x99_mag"),
		"ACE_EntrenchingTool"
	};
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
	backpack[] = {"B_Kitbag_rgr"};
	secondaryWeapon[] = {"CUP_launch_Mk153Mod0"};
	secondaryAttachments[] = {
		"cup_acc_anpeq_15_od",
		"cup_optic_smaw_scope"
	};
	magazines[] += {
		LIST_2("CUP_SMAW_HEAA_M"),
		LIST_2("CUP_SMAW_Spotting")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		"CUP_SMAW_HEAA_M",
		"CUP_SMAW_HEDP_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_Kitbag_rgr"};
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
		"CUP_SMAW_HEAA_M",
		"CUP_SMAW_HEDP_M",
		"ACE_EntrenchingTool"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backpack[] = {"CUP_B_IDF_Backpack"};
	secondaryWeapon[] = {"ace_csw_staticATCarry"};
	backpackItems[] = {
		LIST_2("Titan_AT")
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		LIST_3("Titan_AT")
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpack[] = {"CUP_B_IDF_Backpack"};
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
		LIST_2("Titan_AT"),
		"ACE_EntrenchingTool"
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
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_FullGhillie_sard"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	primaryWeapon[] = {"CUP_srifle_M107_Base"};
	scope[] = {"cup_optic_leupoldmk4_25x50_lrt"};
	sidearmWeapon[] = {"CUP_hgun_MicroUzi"};
	sidearmAttachments[] = {"cup_muzzle_snds_microuzi"};
	magazines[] = {
		LIST_7("CUP_10Rnd_127x99_M107"),
		LIST_2("HandGrenade"),
		LIST_2("CUP_30Rnd_9x19_UZI")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"U_B_FullGhillie_sard"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	scope[] = {"optic_MRCO"};
	silencer[] = {"muzzle_snds_h"};
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
		"CUP_SOFLAM",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {"cwr3_b_uniform_tanksuit"};
	vest[] = {"V_TacVest_oli"};
	backpack[] = {};
	headgear[] = {"H_HelmetCrew_I"};
	goggles[] = {"default"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_UZI"),
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
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"CUP_V_B_PilotVest"};
	headgear[] = {"H_CrewHelmetHeli_B"};
	goggles[] = {"default"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_UZI"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	headgear[] = {"H_PilotHelmetHeli_B"};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	headgear[] = {"H_PilotHelmetHeli_B"};
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_khk"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : hc {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"U_I_pilotCoveralls"};
	vest[] = {};
	headgear[] = {"H_PilotHelmetFighter_O"};
	linkedItems[] += {"ItemGPS"};
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
