// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

//Dependencies:
//		* CUP Units
//		* CUP Weapons
//		* FIR AWS(AirWeaponSystem)
//		* USM Uniforms

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_B_USMC_FROG1_DMARPAT",
		"CUP_U_B_USMC_FROG2_DMARPAT",
		"CUP_U_B_USMC_FROG3_DMARPAT",
		"CUP_U_B_USMC_FROG4_DMARPAT"
	};
	vest[] = {
		"CUP_V_B_Eagle_SPC_Empty",
		"CUP_V_B_MTV"
	};
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
	items[] = { MEDICAL_R ,"ACE_Flashlight_XL50","ACE_SpraypaintGreen"};
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
		"CUP_H_USMC_MICH2000_DES",
		"CUP_H_USMC_MICH2000_COMM_DES",
		"CUP_H_USMC_MICH2000_DEF_DES",
		"CUP_H_USMC_MICH2000_DEF_ESS_DES",
		"CUP_H_USMC_MICH2000_ESS_COMM_DES"
	};
	vest[] = {
		"CUP_V_B_Eagle_SPC_Rifleman",
		"CUP_V_B_Eagle_SPC_Patrol",
		"CUP_V_B_Eagle_SPC_Scout",
		"CUP_V_B_MTV_Pouches",
		"CUP_V_B_MTV_LegPouch"
	};
	primaryWeapon[] = {
		"CUP_arifle_M16A4_Grip",
		"CUP_arifle_M16A4_Base"
	};
	scope[] = {
		"cup_optic_eotech553_black",
		"cup_optic_compm4",
		"cup_optic_compm2_low",
		"cup_optic_compm2_black"
	};
	attachment[] = {
		"cup_acc_anpeq_2_flashlight_black_l",
		"cup_acc_anpeq_2_black_top"
	};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"CUP_arifle_M16A4_GL"};
	attachment[] = {"cup_acc_anpeq_2_grey"};
	vest[] = {"CUP_V_B_Eagle_SPC_GL"};
	backPack[] = {"CUP_B_AssaultPack_Coyote"};
	magazines[] += {
		LIST_16("CUP_1Rnd_HEDP_M203"),
		LIST_2("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_M4A1_black"};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Stanag"),
		"HandGrenade",
		"SmokeShell"
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	vest[] = {"CUP_V_B_Eagle_SPC_Corpsman"};
	backpack[] = {"CUP_B_USMC_MOLLE_WDL"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = { MEDICAL_M };
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
	items[] += {"ACE_MapTools"};
	vest[] = {
		"CUP_V_B_Eagle_SPC_TL",
		"CUP_V_B_MTV_TL"
	};
	magazines[] += {
		LIST_2("CUP_1Rnd_StarFlare_Red_M203"),
		LIST_2("CUP_1Rnd_SmokeRed_M203")
	};
	linkedItems[] += {
		"ACE_Yardage450",
		"ItemGPS"
	};
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {
		"CUP_V_B_Eagle_SPC_SL",
		"CUP_V_B_MTV_PistolBlack"
	};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_3("CUP_15Rnd_9x19_M9")
	};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_USMC_CAP_PRR_DES"};
	vest[] = {"CUP_V_B_Eagle_SPC_Officer"};
};

class fac : co {
	displayName = "Forward Air Controller";
	vest[] = {"CUP_V_B_Eagle_SPC_RTO"};
	backpack[] = {"usm_pack_alice_prc77"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] += {
		"CUP_SOFLAM",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"hlc_m249_pip4"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	vest[] = {
		"CUP_V_B_Eagle_SPC_AR",
		"CUP_V_B_MTV_MG"
	};
	backpack[] = {"CUP_B_AssaultPack_Coyote"};
	magazines[] = {
		LIST_3("hlc_200rnd_556x45_M_SAW"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_Kitbag_cbr"};
	backpackItems[] = {
		LIST_3("hlc_200rnd_556x45_M_SAW"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"ACE_Yardage450"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	vest[] = {"CUP_V_B_Eagle_SPC_AT"};
	secondaryWeapon[] = {"CUP_launch_Mk153Mod0"};
	secondaryAttachments[] = {"cup_optic_eotech553_black"};
	backPack[] = {"B_Kitbag_cbr"};
	magazines[] += {
		LIST_2("CUP_SMAW_HEAA_M")
	};
};

class dm : r {
	displayName = "Designated Marksman";
	vest[] = {
		"CUP_V_B_Eagle_SPC_DMR",
		"CUP_V_B_MTV_Marksman"
	};
	primaryWeapon[] = {"CUP_srifle_m110_kac"};
	scope[] = {"cup_optic_leupoldm31r"};
	attachment[] = {"cup_acc_anpeq_2_grey"};
	bipod[] = {"bipod_01_F_snd"};
	silencer[] = {"cup_muzzle_snds_m110"};
	magazines[] = {
		LIST_7("CUP_20Rnd_762x51_B_M110"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M240"};
	scope[] = {"cup_optic_elcanm145"};
	sidearmWeapon[] = {"CUP_hgun_Glock17_blk"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_17Rnd_9x19_glock17")
	};
};

class mmgac : aar {
	displayName = "MMG Ammo Carrier";
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
	backpack[] = {"CFP_Kitbag_MarpatDesert"};
	secondaryWeapon[] = {"CUP_launch_Mk153Mod0"};
	secondaryAttachments[] = {"cup_optic_smaw_scope"};
	magazines[] += {
		LIST_2("CUP_SMAW_HEAA_M")
	};
};

class matac : car {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CFP_Kitbag_MarpatDesert"};
	backpackItems[] = {
		LIST_2("CUP_SMAW_HEAA_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CFP_Kitbag_MarpatDesert"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		"CUP_SMAW_HEAA_M",
		"ACE_MapTools"
	};
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
		"ACE_Vector",
		"ItemGPS"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] = { "MTR_GEAR" };
	backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
	linkedItems[] += {
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
	linkedItems[] += {
		"Rangefinder",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	headgear[] = {"CUP_H_USMC_BOONIE_PRR_DES"};
	uniform[] = {"CUP_U_B_USMC_FROG1_DMARPAT"};
	goggles[] = {"default"};
	vest[] = {"CFP_Alice_Vest2"};
	primaryWeapon[] = {"CUP_srifle_M40A3_bipod"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] = {
		LIST_7("CUP_5Rnd_762x51_M24"),
		LIST_2("HandGrenade"),
		LIST_4("CUP_15Rnd_9x19_M9")
	};
};

class sp : r {
	displayName = "Spotter";
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
	uniform[] = {"SP_0000_Standard_Coverall_Tan"};
	vest[] = {"CUP_V_B_Eagle_SPC_Crew"};
	backpack[] = {};
	headgear[] = {"SP_CVCHelmet_Tan"};
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
	uniform[] = {"FIR_Fighter_Pilot_USN_Nomex4"};
	vest[] = {"FIR_pilot_vest"};
	backpack[] = {};
	headgear[] = {
		"H_CrewHelmetHeli_B",
		"FIR_HGU56P_Skull",
		"FIR_HGU56P_Skull_Death"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	uniform[] = {"FIR_Fighter_Pilot_USN_Nomex4"};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_mcamo"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	headgear[] = {"FIR_JHMCS"};
	hmd[] = {};
	vest[] = {"FIR_pilot_vest"};
	traits[] = {"engineer"};
	uniform[] = {"FIR_Fighter_Pilot_Uniform_Flight"};
	backpack[] = {};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"usm_pack_alice"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_Clacker"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_3("DemoCharge_Remote_Mag"),
		LIST_2("SLAMDirectionalMine_Wire_Mag"),
		"SatchelCharge_Remote_Mag",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"usm_pack_alice"};
	items[] += {
		"ACE_wirecutter",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_Clacker"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_4("APERSBoundingMine_Range_Mag"),
		LIST_2("APERSTripMine_Wire_Mag"),
		LIST_2("ACE_FlareTripMine_Mag"),
		LIST_2("ClaymoreDirectionalMine_Remote_Mag")
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
