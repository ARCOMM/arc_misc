// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/* Dependencies:
		CUP
		CWR3
*/

//		Created by: AChesheireCat, edited by Freddo

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"cwr3_b_uniform_og107",
		"cwr3_b_uniform_og107_rolled",
		"cwr3_b_uniform_og107_rolled_gloves"
	};
	vest[] = {"cwr3_b_vest_alice"};
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
		MEDICAL_R,
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
	headgear[] = {"cwr3_b_headgear_m1_olive"};
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
	vest[] = {"cwr3_b_vest_alice_gl"};
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
	backpack[] = {"cwr3_b_backpack_alice_medic_empty"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"cwr3_b_vest_alice_medic"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
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
	vest[] = {"cwr3_b_vest_alice_gl"};
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
	vest[] = {"cwr3_b_vest_alice_officer"};
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

class slr : sl {
	displayName = "Squad Leader (Radio)";
	backpack[] = {"cwr3_b_backpack_radio"};
}

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"cwr3_i_headgear_cap_og107"};
};

class cor : co {
	displayName = "Platoon Leader (Radio)";
	backpack[] = {"cwr3_b_backpack_radio"};
}

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"cwr3_b_backpack_radio"};
	backpackItems[] = { FAC_GEAR };
};

class ar : r {
	displayName = "Automatic Rifleman";
	vest[] = {"cwr3_b_vest_alice_mg"};
	backPack[] = {"cwr3_b_backpack_alice"};
	primaryWeapon[] = {"CUP_lmg_M60"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
	magazines[] = {
		LIST_7("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_7Rnd_45ACP_1911")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backPack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	backPack[] = {"cwr3_b_backpack_alice"};
	secondaryWeapon[] = {"cwr3_launch_m72a3"};
	backpackItems[] = {"cwr3_launch_m72a3"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"cwr3_i_headgear_boonie_rolled_og107"};
	primaryWeapon[] = {"CUP_srifle_M21"};
	scope[] = {"cup_optic_artel_m14"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	magazines[] = {
		LIST_9("ACE_10Rnd_762x51_M118LR_Mag"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backPack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ItemRadio"};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"CUP_B_M2_Gun_Bag"};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"CUP_B_M2_MiniTripod_Bag"};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"CUP_B_M2_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular",
		"ItemRadio"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"cwr3_b_backpack_alice"};
	secondaryWeapon[] = {"cwr3_launch_m67_rcl"};
	magazines[] += {
		LIST_4("cwr3_m67_rcl_heat_m")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {
		LIST_4("cwr3_m67_rcl_heat_m")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"cwr3_b_backpack_alice"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
	backpackItems[] = {
		LIST_4("cwr3_m67_rcl_heat_m")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Tow_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_TOW_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_TOW_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {
		LIST_3("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {
		LIST_3("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] += { MTR_GEAR };
	backPack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {
		LIST_3("ACE_1Rnd_82mm_Mo_HE"),
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
	secondaryWeapon[] = {"cwr3_launch_redeye"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"cwr3_launch_redeye"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
};

class sn : dm {
	displayName = "Sniper";
	headgear[] = {"cwr3_b_headgear_headband_od"};
	uniform[] = {
		"cwr3_b_uniform_ERDL",
		"cwr3_b_uniform_ERDL_rolled"
	};
	vest[] = {"cwr3_b_vest_alice_crew"};
	sidearmWeapon[] = {"CUP_hgun_Colt1911"};
	magazines[] += {
		LIST_5("CUP_7Rnd_45ACP_1911")
	};
};

class sp : car {
	displayName = "Spotter";
	headgear[] = {"cwr3_b_headgear_headband_od"};
	uniform[] = {
		"cwr3_b_uniform_ERDL",
		"cwr3_b_uniform_ERDL_rolled"
	};
	vest[] = {"cwr3_b_vest_alice_crew"};
	backPack[] = {"cwr3_b_backpack_radio"};
	backpackItems[] = {
		LIST_4("ACE_10Rnd_762x51_M118LR_Mag"),
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
	uniform[] = {"cwr3_b_uniform_tanksuit"};
	headgear[] = {
		"cwr3_b_headgear_cvc_goggles",
		"cwr3_b_headgear_cvc"
	};
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
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"cwr3_b_uniform_pilot"};
	vest[] = {"cwr3_b_vest_pilot"};
	backpack[] = {};
	headgear[] = {
		"CUP_H_SPH4",
		"CUP_H_SPH4_visor"
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

class jp : hc {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	backpack[] = {"CUP_T10_Parachute_backpack"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_3("CUP_30Rnd_45ACP_M3A1_BLK_M"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"cwr3_b_backpack_alice"};
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
