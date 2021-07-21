// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*	Dependencies:

		* CUP
		* CWR3
		* MNP

*/

//		Created by: AChesheireCat, edited by Freddo

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_B_BDUv2_dirty_DCU_US",
		"CUP_U_B_BDUv2_gloves_dirty_DCU_US",
		"CUP_U_B_BDUv2_roll2_dirty_DCU_US",
		"CUP_U_B_BDUv2_roll2_gloves_dirty_DCU_US",
		"CUP_U_B_BDUv2_roll_dirty_DCU_US",
		"CUP_U_B_BDUv2_roll_gloves_dirty_DCU_US"
	};
	vest[] = {
		LIST_3("CUP_V_B_Interceptor_Rifleman_M81"),
		"cwr3_b_vest_pasgt_LBV_woodland"
	};
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
		"ACE_Flashlight_XL50"
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
	code = "if (sunOrMoon < 1) then {_this linkItem 'CUP_NVG_PVS7'}";
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {"CUP_H_PASGTv2_NVG_DCU"};
	primaryWeapon[] = {
		"CUP_arifle_M4A1"
	};
	scope[] = {
		"cup_optic_compm2_low",
		LIST_2("")
	};
	attachment[] = {
		"cup_acc_anpeq_2_grey"
	};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {
		LIST_3("CUP_V_B_Interceptor_Grenadier_M81"),
		"cwr3_b_vest_pasgt_alice_woodland_gl"
	};
	primaryWeapon[] = {
		"CUP_arifle_M4A1_GL_carryhandle"
	};
	attachment[] = {
		"cup_acc_anpeq_2_grey",
		"cup_acc_anpeq_2_black_top"
	};
	backpack[] = {"CUP_B_Kombat_Olive"};
	magazines[] += {
		LIST_10("CUP_1Rnd_HEDP_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203")
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
	vest[] = {
		"cwr3_b_vest_pasgt_alice_woodland_medic",
		"CUP_V_B_Interceptor_Rifleman_M81"
	};
	backpack[] = {"cwr3_b_backpack_alice_medic_empty"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	vest[] = {"CUP_V_B_Interceptor_Base_M81"};
	primaryWeapon[] = {"CUP_smg_MP5A5"};
	magazines[] = {
		LIST_8("CUP_30Rnd_9x19_MP5"),
		"HandGrenade",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	backpackItems[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeRed_Grenade_shell")
	};
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {
		"CUP_V_B_Interceptor_Rifleman_M81",
		"cwr3_b_vest_pasgt_alice_woodland_officer"
	};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_3("CUP_15Rnd_9x19_M9")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Yardage450",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"MNP_MC_US3Co"};
};

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
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
	vest[] = {
		"cwr3_b_vest_pasgt_alice_woodland_mg",
		"CUP_V_B_Interceptor_Base_M81"
	};
	backPack[] = {"CUP_B_USMC_MOLLE_WDL"};
	primaryWeapon[] = {"CUP_lmg_M249_E2"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] = {
		LIST_8("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backPack[] = {"CUP_B_USMC_MOLLE_WDL"};
	backpackItems[] = {
		LIST_6("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	backPack[] = {"CUP_B_USMC_MOLLE_WDL"};
	secondaryWeapon[] = {"CUP_launch_M72A6"};
	backpackItems[] = {"CUP_launch_M72A6"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_M14"};
	scope[] = {"cup_optic_leupoldmk4"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	magazines[] = {
		LIST_9("ACE_10Rnd_762x51_M118LR_Mag"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M60"};
	backPack[] = {"CUP_B_USMC_MOLLE_WDL"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backPack[] = {"CUP_B_USMC_MOLLE_WDL"};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backPack[] = {"CUP_B_USMC_MOLLE_WDL"};
	backpackItems[] += {
		"ACE_MapTools",
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
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
		"ACE_Vector",
		"ItemGPS"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"cwr3_b_backpack_alice"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] += {"CUP_Javelin_M"};
};

class matac : car {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"cwr3_b_backpack_alice"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {"CUP_Javelin_M"};
	items[] += {"ACE_MapTools"};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Tow_Gun_Bag"};
};

class hatac : car {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_TOW_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_TOW_Tripod_Bag"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
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

class mtrac : car {
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
		"ACE_Yardage450",
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
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	headgear[] = {"MNP_Boonie_3CO"};
	goggles[] = {"default"};
	vest[] = {"cwr3_b_vest_LBV"};
	primaryWeapon[] = {"CUP_srifle_M24_wdl"};
	scope[] = {"cup_optic_leupoldmk4"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] = {
		LIST_7("CUP_5Rnd_762x51_M24"),
		LIST_2("HandGrenade"),
		LIST_4("CUP_15Rnd_9x19_M9")
	};
};

class sp : r {
	displayName = "Spotter";
	backPack[] = {"CUP_B_Kombat_Radio_Olive"};
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
	vest[] = {"CUP_V_B_Interceptor_Base_M81"};
	backpack[] = {};
	headgear[] = {
		"cwr3_b_headgear_cvc",
		"cwr3_b_headgear_cvc_goggles"
	};
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
	backpack[] = {"cwr3_o_backpack_gasmask"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"Aircrew_vest_2_NH"};
	headgear[] = {
		"H_CrewHelmetHeli_B",
		"H_PilotHelmetHeli_B"
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
	backpack[] = {"cwr3_o_backpack_gasmask"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"cwr3_b_uniform_pilot_jet"};
	vest[] = {"Aircrew_vest_2_NH"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetFighter_B"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_USMC_MOLLE_WDL"};
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
