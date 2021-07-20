// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*
	Dependencies:
		CUP Weapons
		CUP Units

	Note:
		This loadout functions as a template for four different camos.
		To switch between them add
		#define __CAMO FST/DST/SNW/MNT
		before the #include to this file.
*/

#ifndef __CAMO
	#define __CAMO DST
#endif
#ifndef DOUBLES
	#define DOUBLES(x,y) x##_##y
#endif
#ifndef TRIPLES
	#define TRIPLES(x,y,z) x##_##y##_##z
#endif
#ifndef QUOTE
	#define QUOTE(x) #x
#endif

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] =
	{
		QUOTE(TRIPLES(CUP_U_B_CDF,__CAMO,1)),
		QUOTE(TRIPLES(CUP_U_B_CDF,__CAMO,2))
	};
	vest[] = {QUOTE(DOUBLES(CUP_V_CDF_6B3_1,__CAMO))};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"Default"};
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
		"ACE_Flashlight_KSF1",
		"ACE_HandFlare_Red"
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
	headgear[] = {QUOTE(DOUBLES(CUP_H_CDF_H_PASGT,__CAMO))};
	primaryWeapon[] = {"CUP_arifle_AK74"};
	attachment[] = {"cup_acc_flashlight"};
	magazines[] = {
		LIST_6("CUP_30Rnd_545x39_AK_M"),
		LIST_2("CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {QUOTE(DOUBLES(CUP_V_CDF_6B3_4,__CAMO))};
	primaryWeapon[] = {"CUP_arifle_AK74_GL"};
	magazines[] += {
		LIST_4("CUP_1Rnd_HE_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_vityaz"};
	magazines[] = {
		LIST_8("CUP_30Rnd_9x19_Vityaz"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M"),
		"CUP_IlumFlareRed_GP25_M"
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {QUOTE(DOUBLES(CUP_V_CDF_6B3_5,__CAMO))};
	items[] += {"ACE_MapTools"};
	sidearmWeapon[] = {"CUP_hgun_PMM"};
	magazines[] += {
		LIST_2("CUP_12Rnd_9x18_PMM_M"),
		"SmokeShellGreen"
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {QUOTE(DOUBLES(CUP_H_CDF_OfficerCap,__CAMO))};
};

class fac : g {
	displayName = "Forward Air Controller";
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	backpackItems[] =
	{
		FAC_GEAR,
		LIST_2("CUP_1Rnd_SmokeGreen_GP25_M"),
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M"),
		LIST_2("CUP_1Rnd_SmokeYellow_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M")
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

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74_45"};
	magazines[] = {
		LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_FieldPack_khk"};
	backpackItems[] = {
		LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG18"};
};

class dm : r {
	displayName = "Designated Marksman";
	scope[] = {"cup_optic_pso_1_ak_open"};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {QUOTE(DOUBLES(CUP_V_CDF_6B3_3,__CAMO))};
	backpack[] = {"CUP_B_USMC_AssaultPack"};
	primaryWeapon[] = {"CUP_lmg_PKMN"};
	scope[] = {"cup_optic_pechenegscope"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"HandGrenade",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"CUP_B_USMC_AssaultPack"};
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
		LIST_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"CUP_B_DShkM_Gun_Bag"};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"CUP_B_DShkM_TripodHigh_Bag"};
};

class hmgtl : r {
	displayName = "HMG Team Leader";
	backPack[] = {"CUP_B_DShkM_TripodLow_Bag"};
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
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v3"};
	magazines[] += {
		"CUP_PG7VL_M",
		"CUP_PG7VR_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M"),
		"CUP_TBG7V_M"
	};
};

class mattl : r {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
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
		"CUP_PG7VL_M",
		"CUP_PG7VR_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Metis_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_Metis_Tripod_Bag"};
};

class hattl : r {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_Metis_Tripod_Bag"};
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
	backPack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : r {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] += { MTR_GEAR };
	backPack[] = {"B_Carryall_khk"};
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
	secondaryWeapon[] = {"CUP_launch_Igla"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	vest[] = {"CUP_V_RUS_Smersh_2"};
	headgear[] = {QUOTE(DOUBLES(CUP_H_CDF_OfficerCap,__CAMO))};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1_1"};
	sidearmWeapon[] = {"CUP_hgun_PB6P9"};
	sidearmAttachments[] = {"cup_muzzle_pb6p9"};
	magazines[] = {
		LIST_7("CUP_10Rnd_762x54_SVD_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_4("CUP_8Rnd_9x18_MakarovSD_M")
	};
};

class sp : g {
	displayName = "Spotter";
	vest[] = {"CUP_V_RUS_Smersh_2"};
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	headgear[] = {QUOTE(DOUBLES(CUP_H_CDF_OfficerCap,__CAMO))};
	silencer[] = {"cup_muzzle_pbs4"};
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

class vg : car {
	displayName = "Vehicle Gunner";
	headgear[] = {"CUP_H_TK_TankerHelmet"};
	magazines[] = {
		LIST_6("CUP_20Rnd_545x39_AKSU_M"),
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
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {"V_BandollierB_blk"};
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("CUP_30Rnd_9x19_Vityaz"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : hp {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	backpack[] = {"CUP_T10_Parachute_backpack"};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_USPack_Coyote"};
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

#undef __CAMO
