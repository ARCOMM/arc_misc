// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

// Reference: https://www.battleorder.org/vdv-footmobile-1986

/*
	Dependencies:
		* CUP Units
		* CUP Weapons
*/

//Created by AChesheireCat

//Note: No body armor at ALL. Relatively light loadout because of that.
//Adtl. Note: MAT Teams are anachronistic and are not advised to be used. Same with the UAV Operator. AAR is actually the Assistant to the Grenadier.

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_O_RUS_M88_VDV_rolled_up",
		"CUP_U_O_RUS_M88_VDV"
	};
	vest[] = {
		"CUP_V_RUS_Smersh_1",
		"CUP_V_RUS_Smersh_2",
		"CUP_V_O_SLA_Carrier_Belt03",
		"CUP_V_O_Ins_Carrier_Rig"
	};
	backpack[] = {};
	headgear[] = {
		"H_Booniehat_tan",
		"H_Bandanna_cbr"
	};
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
	items[] = { MEDICAL_R ,"ACE_Flashlight_KSF1",};
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
	primaryWeapon[] = {
		"CUP_arifle_AKS74",
		"CUP_arifle_AKS74_Early"
	};
	magazines[] = {
		LIST_6("CUP_30Rnd_545x39_AK_M"),
		LIST_2("CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v2"};
	backPack[] = {"CUP_B_CivPack_WDL"};
	magazines[] += {
		LIST_2("CUP_PG7VM_M")
	};
};

class car : r {
	displayName = "Carabinier";
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_CivPack_WDL"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = { MEDICAL_M };
};

class smg : car {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
	magazines[] = {
		LIST_5("CUP_30Rnd_545x39_AK_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		"SmokeShell"
	};
};

class ftl : r {
	displayName = "Fireteam Leader";
	primaryWeapon[] = {
		"CUP_arifle_AKS74_GL",
		"CUP_arifle_AKS74_GL_Early"
	};
	secondaryWeapon[] = {"CUP_launch_RPG18"};
	backpack[] = {"CUP_B_CivPack_WDL"};
	magazines[] += {
		LIST_15("CUP_1Rnd_HE_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class sl : ftl {
	displayName = "Squad Leader";
	sidearmWeapon[] = {"CUP_hgun_PMM"};
	magazines[] += {
		LIST_2("CUP_IlumFlareRed_GP25_M"),
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M"),
		LIST_3("CUP_12Rnd_9x18_PMM_M")
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_RUS_Beret_VDV"};
};

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"usm_pack_st138_prc77"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74_45"};
	secondaryWeapon[] = {};
	backPack[] = {"CUP_B_CivPack_WDL"};
	magazines[] = {
		LIST_16("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant RPG7V2 Grenadier";
	backPack[] = {"CUP_B_CivPack_WDL"};
	backpackItems[] = {
		LIST_3("CUP_PG7VM_M")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (Anti-Tank)";
	secondaryWeapon[] = {"CUP_launch_RPG18"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1"};
	secondaryWeapon[] = {"CUP_launch_RPG18"};
	magazines[] = {
		LIST_11("CUP_10Rnd_762x54_SVD_M"),
		LIST_2("HandGrenade"),
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_PKM"};
	secondaryWeapon[] = {"CUP_hgun_PMM"};
	backPack[] = {"CUP_B_HikingPack_Civ"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_3("CUP_12Rnd_9x18_PMM_M")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgtl : mmgac {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class hmgg : car {
	displayName = "GMG Gunner";
	backPack[] = {"CUP_B_AGS30_Gun_Bag"};
};

class hmgac : car {
	displayName = "GMG Ammo Carrier";
	backPack[] = {"CUP_B_AGS30_Tripod_Bag"};
};

class hmgtl : car {
	displayName = "GMG Team Leader";
	backPack[] = {"CUP_B_AGS30_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v2"};
	magazines[] += {
		LIST_2("CUP_PG7VL_M")
	};
};

class matac : car {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Metis_Gun_Bag"};
};

class hatac : car {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_Metis_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_Metis_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : car {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] = { MTR_GEAR };
	backPack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};

	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};

class samg : car {
	displayName = "AA Missile Specialist";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};


class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_GhillieSuit"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"srifle_LRR_F"};
	scope[] = {"optic_SOS"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
	magazines[] = {
		LIST_7("7Rnd_408_Mag"),
		LIST_2("HandGrenade"),
		LIST_4("11Rnd_45ACP_Mag")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"U_B_GhillieSuit"};
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
		"ItemWatch",
		"Laserdesignator",
		"ItemGPS"
	};
};


class vg : smg {
	displayName = "Vehicle Gunner";
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_TSH_4_Brown"};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {"Binocular"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_CivPack_WDL"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_O_RUS_Flora_1_VDV"};
	vest[] = {"V_TacVest_khk"};
	backpack[] = {};
	headgear[] = {
		"CUP_H_RUS_ZSH_Shield_Down",
		"CUP_H_RUS_ZSH_Shield_Up"
	};
	items[] += {"ACE_MapTools"};
};

class hp : hc {
	displayName = "Helicopter Pilot";
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_CivPack_WDL"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	primaryWeapon[] = {};
	secondaryWeapon[] = {"CUP_hgun_PMM"};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {"CUP_V_CDF_OfficerBelt"};
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	goggles[] = {"CUP_G_PMC_RadioHeadset"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_4("CUP_12Rnd_9x18_PMM_M"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	secondaryWeapon[] = {"ACE_VMM3"};
	backpack[] = {"CUP_B_HikingPack_Civ"};
	items[] = {
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_Clacker",
		"ACE_wirecutter"
	};
	magazines[] += {
		LIST_4("ClaymoreDirectionalMine_Remote_Mag")
	};
	backpackItems[] = {
		"ToolKit",
		LIST_2("DemoCharge_Remote_Mag"),
		LIST_2("SLAMDirectionalMine_Wire_Mag")
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	secondaryWeapon[] = {"ACE_VMM3"};
	backpack[] = {"CUP_B_HikingPack_Civ"};
	items[] += {
		LIST_2("APERSMine_Range_Mag"),
		LIST_2("APERSTripMine_Wire_Mag"),
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_Clacker",
		"ACE_wirecutter"
	};
	backpackItems[] = {
		"ToolKit",
		"CUP_MineE_M"
	};
};


class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	linkedItems[] += {"B_UavTerminal"};
};
