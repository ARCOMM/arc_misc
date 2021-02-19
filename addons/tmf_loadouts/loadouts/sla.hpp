/*
	Dependencies:
	CUP Weapons
	CUP Units
	Wearable Antennas
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"CUP_U_O_SLA_MixedCamo"};
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpack[] = {};
	headgear[] = {"CUP_H_SLA_Boonie"};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:greek"};
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
	items[] = { MEDICAL_R };
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
		"CUP_H_SLA_Helmet_OD_worn",
		"CUP_H_TK_Helmet",
		"CUP_H_SLA_Helmet",
		"CUP_H_RUS_SSH68_green",
		"CUP_H_RUS_SSH68_olive"
	};
	vest[] = {"CUP_V_O_SLA_Flak_Vest01"};
	primaryWeapon[] = {"CUP_arifle_AK74"};
	attachment[] = {"cup_acc_xm8_light_module"};
	magazines[] = {
		LIST_6("CUP_30Rnd_545x39_AK_M"),
		LIST_2("CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	primaryWeapon[] = {"CUP_arifle_AK74_GL"};
	magazines[] += {
		LIST_8("CUP_1Rnd_HE_GP25_M"),
		LIST_4("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKS74"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
	magazines[] = {
		LIST_10("CUP_20Rnd_545x39_AKSU_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	vest[] = {"CUP_V_O_SLA_Flak_Vest02"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_GP25_M"),
		LIST_2("CUP_IlumFlareGreen_GP25_M")
	};
	linkedItems[] += {"Binocular", "ItemRadio"};
};

class sl : ftl {
	displayName = "Squad Leader";
	headgear[] = {"CUP_H_SLA_SLCap"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] += {
		LIST_2("CUP_8Rnd_9x18_Makarov_M")
	};
	linkedItems[] += {"ItemGPS"};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_SLA_OfficerCap"};
};

class fac : co {
	displayName = "Forward Air Controller";
	headgear[] = {"CUP_H_SLA_Boonie"};
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
	primaryWeapon[] = {"CUP_arifle_RPK74_45"};
	magazines[] = {
		LIST_8("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	vest[] = {"CUP_V_O_SLA_Flak_Vest02"};
	backpack[] = {"CUP_B_ACRScout_m95"};
	backpackItems[] = {
		LIST_5("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG26"};
};

class lat : car {
	displayName = "Rifleman (RShG-2)";
	secondaryWeapon[] = {"CUP_launch_RShG2"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"CUP_H_SLA_Boonie"};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1"};
	magazines[] = {
		LIST_9("CUP_10Rnd_762x54_SVD_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	primaryWeapon[] = {"CUP_lmg_PKMN"};
	scope[] = {"cup_optic_pso_1"};
	magazines[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = {
		LIST_5("130Rnd_338_Mag")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	vest[] = {"CUP_V_O_SLA_Flak_Vest02"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	secondaryWeapon[] = {"CUP_DSHKM_carry"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	vest[] = {"CUP_V_O_SLA_Flak_Vest02"};
	secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = {
		LIST_5("ace_csw_50Rnd_127x108_mag"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class matg : car {
	displayName = "MAT Gunner";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v2"};
	magazines[] += {
		LIST_2("CUP_PG7VL_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M"),
		"CUP_PG7VR_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	vest[] = {"CUP_V_O_SLA_Flak_Vest02"};
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("CUP_PG7VL_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	secondaryWeapon[] = {"CUP_launch_Metis"};
	magazines[] += {
		LIST_3("CUP_AT13_M")
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	vest[] = {"CUP_V_O_SLA_Flak_Vest03"};
	backpackItems[] = {
		LIST_3("CUP_AT13_M")
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	vest[] = {"CUP_V_O_SLA_Flak_Vest02"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_3("CUP_AT13_M")
	};
	linkedItems[] += {
		"Binocular",
		"ItemGPS"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"CUP_2b14_carry"};
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
	items[] += { MTR_GEAR };
	backPack[] = {"B_Carryall_cbr"};
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
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"CUP_U_I_Ghillie_Top"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	vest[] = {"CUP_V_O_SLA_Carrier_Belt02"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"CUP_srifle_ksvk"};
	scope[] = {"cup_optic_pso_3"};
	sidearmWeapon[] = {"CUP_hgun_SA61"};
	sidearmAttachments[] = {"cup_muzzle_snds_sa61"};
	magazines[] = {
		LIST_7("CUP_5Rnd_127x108_KSVK_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_4("CUP_20Rnd_B_765x17_Ball_M")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"CUP_U_I_Ghillie_Top"};
	vest[] = {"CUP_V_O_SLA_Carrier_Belt03"};
	headgear[] = {};
	hmd[] = {"antenna_long_one_nvg"};
	scope[] = {"cup_optic_kobra"};
	silencer[] = {"cup_muzzle_pbs4"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX",
		"Laserbatteries"
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
	uniform[] = {"CUP_U_O_SLA_Overalls_Tank"};
	vest[] = {"CUP_V_CDF_CrewBelt"};
	backpack[] = {};
	headgear[] = {"CUP_H_SLA_TankerHelmet"};
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
	vest[] = {"CUP_V_CDF_CrewBelt"};
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Up"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("CUP_20Rnd_545x39_AKSU_M"),
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
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {"CUP_V_CDF_CrewBelt"};
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
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
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
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_8("APERSMine_Range_Mag"),
		"CUP_MineE_M"
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	linkedItems[] += {"O_UavTerminal"};
};
