/*
	Dependencies:
	* CUP Units
	* CUP Weapons
	* ACE3
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_B_BAF_MTP_UBACSLONG",
		"CUP_U_B_BAF_MTP_UBACSLONGKNEE",
		"CUP_U_B_BAF_MTP_UBACSROLLED",
		"CUP_U_B_BAF_MTP_UBACSROLLEDKNEE",
		"CUP_U_B_BAF_MTP_UBACSTSHIRT",
		"CUP_U_B_BAF_MTP_UBACSTSHIRTKNEE"
	};
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Empty"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:african", "faceset:caucasian"};
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
		"ACE_EntrenchingTool"
	};
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"CUP_NVG_HMNVS"
	};

	// These are put into the backpack
	backpackItems[] = {};

	// Unit traits, see https://community.bistudio.com/wiki/setUnitTrait
	traits[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "";
	// Add NVGs if it is night
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {
		"CUP_H_BAF_MTP_Mk7_PRR",
		"CUP_H_BAF_MTP_Mk6_EMPTY_PRR",
		"CUP_H_BAF_MTP_Mk6_CREW_PRR",
		"CUP_H_BAF_MTP_Mk6_GLASS_PRR",
		"CUP_H_BAF_MTP_Mk6_GOGGLES_PRR",
		"CUP_H_BAF_MTP_Mk6_NETTING_PRR",
		"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A"
	};
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman"};
	primaryWeapon[] = {"CUP_arifle_L85A2_NG","CUP_arifle_L85A2_G"};
	sidearmWeapon[] = {"CUP_hgun_Glock17"};
	scope[] = {"cup_optic_eotech553_black"};
	attachment[] = {"cup_acc_llm"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag_L85"),
		LIST_2("CUP_30Rnd_556x45_Stanag_L85_Tracer_Red"),
		"CUP_HandGrenade_L109A1_HE",
		LIST_2("SmokeShell"),
		LIST_2("CUP_17Rnd_9x19_glock17")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier"};
	primaryWeapon[] = {"CUP_arifle_L85A2_GL"};
	magazines[] += {
		LIST_2("1Rnd_HE_Grenade_shell"),
		LIST_2("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
};

class cls : car {
	displayName = "Combat Life Saver";
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Medic"};
	traits[] = {"medic"};
	backpack[] = {"CUP_B_Motherlode_MTP"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"CUP_B_Predator_MTP"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_MP5A5"};
	scope[] = {"cup_optic_microt1_low"};
	magazines[] = {
		LIST_7("CUP_30Rnd_9x19_MP5"),
		LIST_2("CUP_HandGrenade_L109A1_HE"),
		LIST_2("SmokeShell"),
		LIST_2("CUP_17Rnd_9x19_glock17")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Officer"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS",
		"CUP_NVG_HMNVS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
};

class fac : r {
	displayName = "Forward Air Controller";
	backpack[] = {"CUP_B_Predator_Radio_MTP"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"CUP_LRTV",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_lmg_L110A1"};
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman"};
	backpack[] = {"B_AssaultPack_khk"};
	magazines[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1"),
		"CUP_HandGrenade_L109A1_HE",
		"SmokeShell",
		LIST_2("CUP_17Rnd_9x19_glock17")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_AssaultPack_khk"};
	backpackItems[] = {
		LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"launch_NLAW_F"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"H_Booniehat_mcamo"};
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Scout"};
	primaryWeapon[] = {"CUP_srifle_L129A1"};
	scope[] = {"cup_optic_acog_ta31_kf_desert_pip"};
	bipod[] = {"cup_bipod_harris_1a2_l"};
	magazines[] = {
		LIST_8("CUP_20Rnd_762x51_L129_M"),
		LIST_2("CUP_HandGrenade_L109A1_HE"),
		LIST_2("SmokeShell"),
		LIST_2("CUP_17Rnd_9x19_glock17")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_L7A2"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"CUP_HandGrenade_L109A1_HE",
		"SmokeShell",
		LIST_2("CUP_17Rnd_9x19_glock17")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_Predator_MTP"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"CUP_B_Predator_MTP"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"CUP_B_M2_Gun_Bag"};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"CUP_B_M2_Tripod_Bag"};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"CUP_B_M2_MiniTripod_Bag"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
};

class matg : car
{
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_Predator_MTP"};
	secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"cup_optic_maaws_scope"};
	magazines[] += {
		LIST_3("CUP_MAAWS_HEAT_M"),
		"CUP_MAAWS_HEDP_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_Predator_MTP"};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};
class mattl : car
{
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_Predator_MTP"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";

	secondaryWeapon[] = {"CUP_launch_Javelin"};
	secondaryAttachments[] = {"CUP_Javelin_M"};

	backpack[] = {"B_TacticalPack_mcamo"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_TacticalPack_mcamo"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"B_TacticalPack_mcamo"};
	backpackItems[] = {"CUP_Javelin_M"};
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
	backPack[] = {"CUP_B_Predator_MTP"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Smoke",
		"ACE_1Rnd_82mm_Mo_Illum"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS"
	};
};

class mtrac : r
{
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"CUP_B_Predator_MTP"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Smoke",
		"ACE_1Rnd_82mm_Mo_Illum"
	};
};

class mtrtl : car
{
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeTable_82mm"
	};
	backPack[] = {"CUP_B_Predator_Radio_MTP"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Smoke",
		"ACE_1Rnd_82mm_Mo_Illum"
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
	uniform[] = {"CUP_U_B_BAF_DPM_GHILLIE"};
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing"};
	headgear[] = {"CUP_H_PMC_PRR_Headset"};

	primaryWeapon[] = {"CUP_srifle_AWM_wdl"};
	scope[] = {"cup_optic_leupoldmk4_10x40_lrt_woodland"};
	bipod[] = {"bipod_01_f_khk"};
	sidearmAttachments[] = {"cup_muzzle_snds_m9"};

	magazines[] = {
		LIST_7("CUP_5Rnd_86x70_L115A1"),
		LIST_2("CUP_HandGrenade_L109A1_HE"),
		LIST_2("CUP_17Rnd_9x19_glock17")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"CUP_U_B_BAF_DPM_GHILLIE"};
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing"};
	backpack[] = {"CUP_B_Predator_Radio_MTP"};
	headgear[] = {"CUP_H_PMC_PRR_Headset"};

	silencer[] = {"cup_muzzle_snds_l85"};
	sidearmAttachments[] = {"cup_muzzle_snds_m9"};

	items[] += {
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_MapTools"
	};

	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"CUP_LRTV",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman"};
	headgear[] = {"CUP_H_BAF_MTP_Mk6_CREW_PRR"};
	magazines[] = {
		LIST_6("CUP_30Rnd_9x19_MP5"),
		LIST_2("CUP_17Rnd_9x19_glock17"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {"Binocular"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_mcamo"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"U_BG_Guerrilla_6_1"};
	vest[] = {"CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot"};
	headgear[] = {"H_CrewHelmetHeli_O"};
	magazines[] = {
		LIST_6("CUP_30Rnd_9x19_MP5"),
		LIST_2("CUP_17Rnd_9x19_glock17"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	headgear[] = {"H_PilotHelmetHeli_O"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_rgr"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"U_B_PilotCoveralls"};
	headgear[] = {"H_PilotHelmetFighter_I"};
	sidearmWeapon[] = {};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"B_Kitbag_mcamo"};
	items[] += {
		"ACE_wirecutter"
	};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class eng : logi {
	displayName = "Combat Engineer";
	vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
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
