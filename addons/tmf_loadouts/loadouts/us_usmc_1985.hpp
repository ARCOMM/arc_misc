// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Units
//		* CUP Weapons
//		* CWR3
//		* USM Uniforms

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"usm_bdu_d_m"};
	vest[] = {"usm_vest_pasgtdes_lbe_rm_m"};
	backpack[] = {};
	headgear[] = {};
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
	items[] = { MEDICAL_R ,"ACE_Flashlight_MX991"};
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
		"usm_helmet_pasgt_g_d_m",
		"usm_helmet_pasgt_d_m"
	};
	primaryWeapon[] = {"CUP_arifle_M16A2"};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
	vest[] = {"usm_vest_pasgtdes_lbe_gr_m"};
	magazines[] += {
		LIST_11("CUP_1Rnd_HEDP_M203"),
		LIST_2("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Stanag"),
		"HandGrenade",
		"SmokeShell"
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"usm_pack_alice"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_MP5A5"};
	scope[] = {};
	magazines[] = {
		LIST_7("CUP_30Rnd_9x19_MP5"),
		"HandGrenade",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	backPack[] = {"CUP_B_SLA_Medicbag"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203")
	};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {"usm_vest_pasgtdes_lbe_rmp_m"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"usm_bdu_8point_des_m"};
	linkedItems[] += {"ItemGPS"};
};

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"usm_pack_alice_prc119"};
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
	primaryWeapon[] = {"CUP_lmg_M249_E2"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	vest[] = {"usm_vest_pasgtdes_lbe_mg_m"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	magazines[] = {
		LIST_3("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"usm_pack_200rnd_556_bandoliers"};
	backpackItems[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
	};
	Items[] += {"ACE_EntrenchingTool"};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_M21"};
	scope[] = {"cup_optic_artel_m14"};
	magazines[] = {
		LIST_9("ACE_10Rnd_762x51_M118LR_Mag"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M60"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backPack[] = {"usm_pack_762x51_bandoliers"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	backPack[] = {"usm_pack_762x51_bandoliers"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	linkedItems[] += {"ItemRadio"};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"CUP_B_M2_Gun_Bag"};
};

class hmgac : car {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"CUP_B_M2_MiniTripod_Bag"};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"CUP_B_M2_Tripod_Bag"};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"usm_pack_alice"};
	secondaryWeapon[] = {"ace_dragon_super"};
	linkedItems[] += {"ace_dragon_sight"};
};

class matac : car {
	displayName = "MAT Ammo Carrier";
	secondaryWeapon[] = {"ace_dragon_super"};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"usm_pack_alice"};
	secondaryWeapon[] = {"ace_dragon_super"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS",
		"ItemRadio"
	};
	Items[] += {"ACE_MapTools"};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Tow_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_TOW2_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_TOW2_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
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
	backPack[] = {"usm_pack_alice"};
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
	backPack[] = {"usm_pack_alice"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};

	linkedItems[] += {
		"Binocular",
		"ItemGPS",
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
	linkedItems[] = {"Binocular"};
};

class sn : r {
	displayName = "Sniper";
	headgear[] = {"usm_bdu_boonie_des"};
	goggles[] = {"default"};
	vest[] = {"usm_vest_LBE_rmp_m"};
	primaryWeapon[] = {"CUP_srifle_M40A3"};
	scope[] = {"CUP_optic_LeupoldMk4"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] = {
		LIST_7("CUP_5Rnd_762x51_M24"),
		LIST_2("HandGrenade"),
		LIST_4("CUP_15Rnd_9x19_M9")
	};
};

class sp : r {
	displayName = "Spotter";
	headgear[] = {"usm_bdu_boonie_des"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
			LIST_10("CUP_5Rnd_762x51_M24")
	};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	linkedItems[] += {
		"ACE_Yardage450",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	vest[] = {"usm_vest_LBE_rm_m"};
	backpack[] = {};
	headgear[] = {"usm_helmet_cvc"};
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
	backpack[] = {"CUP_B_AssaultPack_Coyote"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"Aircrew_vest_2_NH"};
	backpack[] = {};
	headgear[] = {
		"H_CrewHelmetHeli_B"
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
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	headgear[] = {"H_PilotHelmetFighter_B"};
	hmd[] = {};
	vest[] = {"Aircrew_vest_2_NH"};
	traits[] = {"engineer"};
	uniform[] = {"cwr3_b_uniform_pilot_jet"};
	backpack[] = {};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
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
