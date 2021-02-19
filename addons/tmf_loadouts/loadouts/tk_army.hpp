// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*
	Dependencies:
	* CUP Weapons
	* CUP Units
	* Wearable Antennas
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"CUP_U_O_TK_Green","CUP_U_O_TK_MixedCamo"};
	vest[] = {"CUP_V_O_TK_Vest_1"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {
		LIST_5("None"),
		"default",
		"CUP_TK_NeckScarf",
		"CUP_G_TK_RoundGlasses",
		"CUP_G_TK_RoundGlasses_blk",
		"CUP_G_TK_RoundGlasses_gold"
	};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:persian"};
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
		"CUP_H_TK_Helmet",
		"CUP_H_SLA_Helmet_OD_worn",
		"CUP_H_SLA_Helmet_DES_worn",
		"CUP_H_SLA_Helmet_URB_worn"
	};
	primaryWeapon[] = {"CUP_arifle_FNFAL"};
	magazines[] = {
		LIST_7("CUP_20Rnd_762x51_FNFAL_M"),
		LIST_2("CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};


class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {
		"CUP_arifle_AK74",
		"CUP_arifle_AKS74"
	};
	magazines[] = {
		LIST_7("CUP_30Rnd_545x39_AK_M"),
		LIST_2("CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class g : car {
	displayName = "Grenadier";
	primaryWeapon[] = {
		"CUP_arifle_AK74_GL",
		"CUP_arifle_AKS74_GL"
	};
	magazines[] += {
		LIST_8("CUP_1Rnd_HE_GP25_M"),
		LIST_4("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_TK_Medic_Desert"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"CUP_V_O_TK_Vest_2"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = { MEDICAL_M };
};

class smg : car {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_GP25_M"),
		LIST_2("CUP_IlumFlareRed_GP25_M")
	};
	linkedItems[] += {"Binocular","ItemRadio"};
};

class sl : r {
	displayName = "Squad Leader";
	items[] += {"ACE_MapTools"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] += {
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
	};
	linkedItems[] += {"Binocular","ItemRadio"};
};

class co : sl {
	displayName = "Platoon Leader";
	goggles[] = {"G_Aviator"};
	headgear[] = {"CUP_H_TK_Beret"};
};

class fac : ftl {
	primaryWeapon[] = {
		"CUP_arifle_M16A2_GL"
	};
	magazines[] = {
		LIST_7("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Green"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	displayName = "Forward Air Controller";
	hmd[] = {"antenna_long_two_nvg"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
		FAC_GEAR,
		LIST_4("CUP_1Rnd_SmokeGreen_M203"),
		LIST_4("CUP_1Rnd_SmokeRed_M203"),
		LIST_4("CUP_1Rnd_SmokeYellow_M203"),
		"ACE_DAGR"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"CUP_SOFLAM"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74_45"};
	magazines[] = {
		LIST_8("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
		LIST_8("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG26","CUP_launch_RPG18"};
};

class lat : r {
	displayName = "Rifleman (RShG-2)";
	secondaryWeapon[] = {"CUP_launch_RShG2"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"H_Booniehat_oli"};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1_open"};
	magazines[] = {
		LIST_11("CUP_10Rnd_762x54_SVD_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	primaryWeapon[] = {"CUP_lmg_PKMN"};
	scope[] = {"cup_optic_pso_1"};
	magazines[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	hmd[] = {"antenna_long_one_nvg"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ItemRadio"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	secondaryWeapon[] = {"CUP_DSHKM_carry"};
	backpackItems[] = {LIST_5("ace_csw_50Rnd_127x108_mag")};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
	backpackItems[] = {LIST_5("ace_csw_50Rnd_127x108_mag")};
};

class hmgtl : mmgtl {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = {
		LIST_5("ace_csw_50Rnd_127x108_mag"),
		"ACE_EntrenchingTool"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v2"};
	magazines[] += {
		LIST_2("CUP_PG7VL_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ItemRadio",
		"Binocular"
	};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"ace_dragon_super"};
	linkedItems[] = {"ace_dragon_sight"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	secondaryWeapon[] = {"ace_dragon_super"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	secondaryWeapon[] = {"ace_dragon_super"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemRadio",
		"Binocular"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"CUP_2b14_carry"};
	backPack[] = {"B_Carryall_oli", "B_Carryall_khk", "B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_oli", "B_Carryall_khk", "B_Carryall_cbr"};
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
	backPack[] = {"B_Carryall_oli", "B_Carryall_khk", "B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke",
		"ACE_DAGR"
	};

	linkedItems[] += {
		"ItemRadio",
		"ACE_Vector"
	};
};

class samg : car {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
	linkedItems[] = {
		"ItemRadio",
		"Binocular"
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_FullGhillie_sard"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"CUP_srifle_ksvk"};
	scope[] = {"cup_optic_pso_3"};
	sidearmWeapon[] = {"CUP_hgun_PB6P9"};
	sidearmAttachments[] = {"cup_muzzle_pb6p9"};
	magazines[] = {
		LIST_7("CUP_5Rnd_127x108_KSVK_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_4("CUP_8Rnd_9x18_MakarovSD_M")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"U_B_FullGhillie_sard"};
	headgear[] = {};
	scope[] = {"cup_optic_kobra"};
	silencer[] = {"cup_muzzle_pbs4"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX",
		"Laserbatteries"
	};
	linkedItems[] += {
		"ItemRadio",
		"CUP_SOFLAM"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	vest[] = {"CUP_V_O_TK_CrewBelt"};
	backpack[] = {};
	headgear[] = {"CUP_H_TK_TankerHelmet"};
	magazines[] = {
		LIST_3("CUP_20Rnd_545x39_AKSU_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {"Binocular","ItemRadio"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : vg {
	displayName = "Helicopter Crew";
	headgear[] = {"CUP_H_SPH4_khaki", "CUP_H_SPH4_khaki_visor"};
	vest[] = {"V_BandollierB_oli"};
	items[] += {"ACE_MapTools"};
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
	vest[] = {"V_TacVest_oli"};
	backpack[] = {};
	headgear[] = {
		"CUP_H_RUS_ZSH_Shield_Down",
		"CUP_H_RUS_ZSH_Shield_Up"
	};
	goggles[] = {"default"};
	linkedItems[] += {"ItemRadio"};
	items[] += {"ACE_DAGR"};
	magazines[] = {
		LIST_3("CUP_20Rnd_545x39_AKSU_M"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_rgr"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_Clacker",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_2("DemoCharge_Remote_Mag"),
		LIST_2("ClaymoreDirectionalMine_Remote_Mag"),
		"SatchelCharge_Remote_Mag"
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_rgr"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_8("APERSMine_Range_Mag"),
		"ATMine_Range_Mag"
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"O_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal", "ItemRadio"};
	items[] += {LIST_2("ACE_UAVBattery")};
};
