// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts
/*
	Dependencies:
	CUP Weapons
	CUP Units
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_O_CHDKZ_Kam_01",
		"CUP_U_O_CHDKZ_Kam_02",
		"CUP_U_O_CHDKZ_Kam_03",
		"CUP_U_O_CHDKZ_Kam_04",
		"CUP_U_O_CHDKZ_Kam_05",
		"CUP_U_O_CHDKZ_Kam_06",
		"CUP_U_O_CHDKZ_Kam_07",
		"CUP_U_O_CHDKZ_Kam_08"
	};
	vest[] = {
		"CUP_V_O_Ins_Carrier_Rig",
		"CUP_V_O_Ins_Carrier_Rig_Light"
	};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"default", "faceset:russian"};
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
		LIST_4("CUP_H_ChDKZ_Beanie"),
		"CUP_H_RUS_SSH68_olive",
		"CUP_H_RUS_SSH68_green",
		LIST_2("")
	};
	goggles[] += {
		"Default",
		LIST_4(""),
		"G_Balaclava_oli",
		"G_Balaclava_blk",
		"CUP_G_TK_RoundGlasses_blk",
		"CUP_G_WristWatch"
	};
	primaryWeapon[] = {"CUP_arifle_AK74_Early"};
	magazines[] = {
		LIST_6("CUP_30Rnd_545x39_AK_M"),
		LIST_2("CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"CUP_arifle_AK74_GL_Early"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	magazines[] += {
		LIST_8("CUP_1Rnd_HE_GP25_M"),
		LIST_4("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKS74_Early"};
	magazines[] = {
		LIST_6("CUP_30Rnd_545x39_AK_M"),
		LIST_2("CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	headgear[] = {
		"CUP_H_C_Ushanka_01",
		"CUP_H_C_Ushanka_02",
		"CUP_H_C_Ushanka_03",
		"CUP_H_C_Ushanka_04"
	};
	traits[] = {"medic"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
	magazines[] = {
		LIST_8("CUP_20Rnd_545x39_AKSU_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M")
	};
	linkedItems[] += {"Binocular","ItemGPS","ItemRadio"};
};

class sl : ftl {
	displayName = "Squad Leader";
	headgear[] = {"CUP_H_ChDKZ_Cap"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] += {
		LIST_2("CUP_8Rnd_9x18_Makarov_M")
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_ChDKZ_Beret"};
	goggles[] = {"G_Aviator"};
	uniform[] = {"CUP_U_O_CHDKZ_Bardak"};
};

class fac : car {
	displayName = "Forward Air Controller";
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	backpackItems[] = { FAC_GEAR, "ACE_MapTools" };
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
	backpack[] = {"CUP_B_ACRScout_m95"};
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	magazines[] = {
		LIST_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_FieldPack_khk"};
	backpackItems[] = {
		LIST_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG18"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"H_Booniehat_oli"};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1_open"};
	bipod[] = {"bipod_01_F_snd"};
	magazines[] = {
		LIST_11("CUP_10Rnd_762x54_SVD_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_MG"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	primaryWeapon[] = {"CUP_lmg_PKM"};
	magazines[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	backpack[] = {"CUP_B_CivPack_WDL"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ItemRadio"};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"),
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

class hmgtl : car {
	displayName = "HMG Team Leader";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	backPack[] = {"CUP_B_DShkM_TripodLow_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ItemRadio"};
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
	backpack[] = {"CUP_B_HikingPack_Civ"};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M"),
		LIST_3("CUP_OG7_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ItemRadio"};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Metis_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_Metis_Gun_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	backPack[] = {"CUP_B_Metis_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ItemRadio"};
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

class mtrtl : car {
	displayName = "Mortar Team Leader";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] = { MTR_GEAR };
	backPack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
	linkedItems[] += {"ItemRadio"};
};

class samg : car {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};

class samag : sl {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};

class sn : dm {
	displayName = "Sniper";
	uniform[] = {"CUP_U_O_RUS_Ghillie"};
	headgear[] = {};
	goggles[] = {"default"};
	attachment[] = {"cup_svd_camo_g_half"};
	sidearmWeapon[] = {"CUP_hgun_PB6P9"};
	sidearmAttachments[] = {"cup_muzzle_pb6p9"};
	magazines[] += {
		LIST_4("CUP_8Rnd_9x18_MakarovSD_M")
	};
};

class sp : g {
	displayName = "Spotter";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	uniform[] = {"CUP_U_O_RUS_Ghillie"};
	headgear[] = {};
	silencer[] = {"hlc_muzzle_545sup_ak"};
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
	vest[] = {"V_TacVest_oli"};
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
	uniform[] = {"U_BG_Guerrilla_6_1"};
	vest[] = {"V_I_G_resistanceLeader_F"};
	backpack[] = {};
	headgear[] = {"CUP_H_PMC_Beanie_Headphones_Khaki"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("CUP_20Rnd_545x39_AKSU_M"),
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
	uniform[] = {"CUP_U_C_Pilot_01"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("CUP_20Rnd_545x39_AKSU_M"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"CUP_B_HikingPack_Civ"};
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
	backpack[] = {"CUP_B_HikingPack_Civ"};
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
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
