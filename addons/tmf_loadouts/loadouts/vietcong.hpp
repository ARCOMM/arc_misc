/*
	Dependencies:
	* CFP
	* CUP
	* Wearable Antennas
	* Pith Helmet
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"SP_0000_Standard_BattleDressUniform_Black"};
	vest[] = {
		"CUP_V_O_Ins_Carrier_Rig",
		"CUP_V_O_SLA_Carrier_Belt"
	};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:asian"};
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
		LIST_2("ACE_HandFlare_Red")
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
		"ASI_PithHelmet",
		"ASI_PithHelmet_oli",
		"ASI_PithHelmet_khk",
		LIST_2("ASI_RiceHat"),
		"H_Booniehat_tan",
		"CUP_H_SLA_Helmet_OD_worn",
		LIST_2("")
	};
	primaryWeapon[] = {
		"CUP_arifle_TYPE_56_2_Early",
		"CUP_arifle_AK47_Early",
		"CUP_arifle_AKS"
	};
	attachment[] = {"acc_flashlight"};
	magazines[] = {
		LIST_6("CUP_30Rnd_762x39_AK47_M"),
		LIST_2("CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_O_SLA_Carrier_Belt03"};
	primaryWeapon[] = {"CUP_arifle_AK47_GL_Early"};
	magazines[] += {
		LIST_4("CUP_1Rnd_HE_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_SKS"};
	magazines[] = {
		LIST_12("CUP_10Rnd_762x39_SKS_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class cls : car {
	displayName = "Combat Life Saver";
	vest[] = {"CUP_V_O_Ins_Carrier_Rig"};
	traits[] = {"medic"};
	backpack[] = {"B_FieldPack_khk"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	primaryWeapon[] = {"CUP_srifle_Mosin_Nagant"};
	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackItems[] = { MEDICAL_M };
	magazines[] = {
		LIST_20("CUP_5Rnd_762x54_Mosin_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_SA61"};
	magazines[] = {
		LIST_10("CUP_20Rnd_B_765x17_Ball_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_IlumFlareRed_GP25_M")
	};
	linkedItems[] += {"Binocular"};
};

class sl : r {
	displayName = "Squad Leader";
	sidearmWeapon[] = {"CUP_hgun_TT"};
	magazines[] += {
		LIST_2("CUP_8Rnd_762x25_TT")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"Binocular"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_ChDKZ_Beret"};
};

class fac : sl {
	displayName = "Forward Air Controller";
	hmd[] = {"antenna_long_two_nvg"};
	backpack[] = {"CUP_B_AlicePack_Khaki"};
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
	backpack[] = {"CUP_B_SLA_Medicbag"};
	primaryWeapon[] = {"CUP_lmg_UK59"};
	magazines[] = {
		LIST_6("CUP_50Rnd_UK59_762x54R_Tracer"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {
		LIST_5("CUP_50Rnd_UK59_762x54R_Tracer"),
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
	headgear[] = {"SP_GhillieHat_Forrest"};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1"};
	magazines[] = {
		LIST_11("CUP_10Rnd_762x54_SVD_M"),
		"HandGrenade",
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	backpack[] = {"CUP_B_SLA_Medicbag"};
	primaryWeapon[] = {"CUP_lmg_PKM"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_FieldPack_cbr"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"B_FieldPack_cbr"};
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	secondaryWeapon[] = {"CUP_DSHKM_carry"};
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = {LIST_6("ace_csw_50Rnd_127x108_mag")};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_6("ace_csw_50Rnd_127x108_mag"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v"};
	magazines[] += {
		LIST_3("CUP_PG7VM_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	backpackItems[] = {
		LIST_3("CUP_PG7VM_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {"Binocular"};
	backpackItems[] = {
		LIST_3("CUP_PG7VM_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"CUP_SPG9_carry"};
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M"
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M"
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	secondaryWeapon[] = {"ace_csw_spg9CarryTripod"};
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_2("CUP_compats_PG9_M"),
		"CUP_compats_OG9_M",
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"Binocular"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"CUP_2b14_carry"};
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
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] = { MTR_GEAR };
	backPack[] = {"B_Carryall_mcamo"};
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

class samg : r {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};

class samag : r {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
	linkedItems[] += {
		"Binocular"
	};
};

class sn : dm {
	displayName = "Sniper";
};

class sp : g {
	displayName = "Spotter";
	headgear[] = {"SP_GhillieHat_Forrest"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard"
	};
	linkedItems[] += {
		"Binocular"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	headgear[] = {"CUP_H_SLA_TankerHelmet"};
	magazines[] = {
		LIST_3("CUP_20Rnd_B_765x17_Ball_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {"Binocular"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	headgear[] = {"CUP_H_TK_PilotHelmet"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_20Rnd_B_765x17_Ball_M"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpackItems[] = {"ToolKit"};
};
class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	magazines[] = {
		LIST_3("CUP_20Rnd_B_765x17_Ball_M"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Carryall_khk"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_Clacker",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_3("DemoCharge_Remote_Mag"),
		LIST_2("ClaymoreDirectionalMine_Remote_Mag"),
		"SatchelCharge_Remote_Mag"
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Carryall_khk"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		LIST_8("APERSMine_Range_Mag"),
		LIST_3("CUP_MineE_M")
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	linkedItems[] += {"O_UavTerminal"};
};
