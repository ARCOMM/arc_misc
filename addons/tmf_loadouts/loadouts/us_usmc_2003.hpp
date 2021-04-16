// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/* Dependencies:

		* CUP
		* Community Factions Project
		* USM
		* NIArms M14 Pack
		* FIR AWS

*/

//		Created by: AChesheireCat

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		LIST_2("CUP_U_B_BDUv2_dirty_DCU"),
		LIST_2("CUP_U_B_BDUv2_roll_dirty_DCU"),
		LIST_2("CUP_U_B_BDUv2_gloves_dirty_DCU"),
		LIST_2("CUP_U_B_BDUv2_dirty_M81"),
		LIST_2("CUP_U_B_BDUv2_gloves_M81"),
		"CUP_U_B_USMC_FROG3_DMARPAT"
	};
	vest[] = {"CUP_V_B_Interceptor_Rifleman_M81"};
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
	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {
		"CUP_H_PASGTv2_NVG_DCU",
		"CUP_H_USMC_LWH_ESS_DES",
		"CUP_H_USMC_LWH_NVGMOUNT_DES"
	};
	backPack[] = {"CUP_B_SLA_Medicbag"};
	primaryWeapon[] = {
		"CUP_arifle_M16A2",
		"CUP_arifle_M16A4_Base",
		"CUP_arifle_M16A4_Grip"
	};
	scope[] = {
		LIST_4(""),
		"cup_optic_trijiconrx01_black"
	};
	attachment[] = {
		"cup_acc_anpeq_2_grey",
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
	vest[] = {"CUP_V_B_Interceptor_Grenadier_M81"};
	primaryWeapon[] = {
		"CUP_arifle_M16A4_GL",
		"CUP_arifle_M16A2_GL"
	};
	attachment[] = {"cup_acc_anpeq_2_grey"};
	magazines[] += {
		LIST_11("CUP_1Rnd_HEDP_M203"),
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
	backpack[] = {"CUP_B_AlicePack_OD"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"usm_pack_alice"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	vest[] = {"CUP_V_B_Interceptor_Base_M81"};
	primaryWeapon[] = {"CUP_smg_MP5A5"};
	magazines[] = {
		LIST_7("CUP_30Rnd_9x19_MP5"),
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
	linkedItems[] += {"Binocular"};
};

class sl : ftl {
	displayName = "Squad Leader";
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_3("CUP_15Rnd_9x19_M9")
	};
	linkedItems[] += {"ItemGPS"};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"usm_bdu_8point_dcu"};
	vest[] = {"CUP_V_B_Interceptor_Base_M81"};
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
	vest[] = {"CUP_V_B_Interceptor_Base_M81"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	primaryWeapon[] = {"CUP_lmg_M249_E2"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] = {
		LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backPack[] = {"usm_pack_200rnd_556_bandoliers"};
	backpackItems[] = {
		LIST_3("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"hlc_rifle_M21"};
	scope[] = {"hlc_optic_artel_m14"};
	magazines[] = {
		LIST_9("ACE_10Rnd_762x51_M118LR_Mag"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M240"};
	backPack[] = {"CUP_B_AlicePack_Khaki"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_15Rnd_9x19_M9")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backPack[] = {"usm_pack_762x51_bandoliers"};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backPack[] = {"usm_pack_762x51_bandoliers"};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	linkedItems[] = {"ItemGPS"};
	items[] += {"ACE_MapTools"};
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
	backpack[] = {"usm_pack_alice"};
	secondaryWeapon[] = {"CUP_launch_Mk153Mod0"};
	secondaryAttachments[] = {"cup_optic_smaw_scope"};
	magazines[] += {
		LIST_2("CUP_SMAW_HEAA_M")
	};
};

class matac : car {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"usm_pack_alice"};
	backpackItems[] = {
		LIST_2("CUP_SMAW_HEAA_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"usm_pack_alice"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {"CUP_SMAW_HEAA_M"};
	items[] += {"ACE_MapTools"};
};

class hatg : car {
	displayName = "HAT Gunner";
	backpack[] = {"usm_pack_alice"};
	secondaryWeapon[] = {"CUP_launch_Javelin"};
	magazines[] += {"CUP_Javelin_M"};
};

class hatac : car {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"usm_pack_alice"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"usm_pack_alice"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		"CUP_Javelin_M",
		"ACE_MapTools"
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

class mtrac : car {
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
	headgear[] = {"CUP_H_USMC_BOONIE_PRR_DES"};
	uniform[] = {"CUP_U_B_USMC_FROG1_DMARPAT"};
	goggles[] = {"default"};
	vest[] = {"CFP_Alice_Vest2"};
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
	headgear[] = {"CUP_H_USMC_BOONIE_PRR_DES"};
	uniform[] = {"CUP_U_B_USMC_FROG1_DMARPAT"};
	vest[] = {"CFP_Alice_Vest2"};
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
	vest[] = {"CUP_V_B_Interceptor_Base_M81"};
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
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"FIR_Fighter_Pilot_Uniform_Flight"};
	vest[] = {"FIR_pilot_vest"};
	backpack[] = {};
	headgear[] = {
		"CFP_SOARCREW_BLUE",
		"CFP_SOARCREW_STACHE",
		"CFP_SOARCREW_RED",
		"CFP_SOARCREW_SKULL",
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
	uniform[] = {"FIR_Fighter_Pilot_Uniform_Flight"};
	vest[] = {"CUP_V_B_PilotVest"};
	backpack[] = {};
	headgear[] = {"FIR_USHelmetType1"};
	goggles[] = {"FIR_Visor_Black_down"};
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
	sidearmWeapon[] = {"ACE_VMM3"};
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
	backpack[] = {};
	linkedItems[] += {"B_UavTerminal"};
};