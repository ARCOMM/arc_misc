// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*
	Dependencies:
	* CUP Units
	* CUP Weapons
	* Wearable Antennas
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		#ifdef AUTUMN
			"CUP_U_O_RUS_Gorka_Partizan_A",
			"CUP_U_O_RUS_Gorka_Partizan_A_gloves2",
			"CUP_U_O_RUS_Gorka_Partizan_A_gloves_kneepads"
		#else
			"CUP_U_O_RUS_Gorka_Partizan",
			"CUP_U_O_RUS_Gorka_Partizan_gloves2",
			"CUP_U_O_RUS_Gorka_Partizan_gloves_kneepads"
		#endif
	};
	vest[] = {
		"CUP_V_B_MTV_Pouches",
		"CUP_V_B_MTV_LegPouch",
		"CUP_V_B_MTV_Patrol"
	};
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_Beret_Spetsnaz"};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:russian", "default"};
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
		"ACE_CableTie"
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
	goggles[] = {
		"CUP_RUS_Balaclava_grn",
		"CUP_RUS_Balaclava_blk"
	};
	headgear[] = {
		#ifdef AUTUMN
			"CUP_H_RUS_Altyn_khaki",
			"CUP_H_RUS_Altyn_Goggles_khaki",
			"CUP_H_RUS_Altyn_Shield_Down_khaki",
			"CUP_H_RUS_Altyn_Shield_Up_khaki"
		#else
			"CUP_H_RUS_Altyn",
			"CUP_H_RUS_Altyn_Goggles",
			"CUP_H_RUS_Altyn_Shield_Down",
			"CUP_H_RUS_Altyn_Shield_Up"
		#endif
	};
	primaryWeapon[] = {"CUP_arifle_OTS14_GROZA_Grip"};
	magazines[] = {
		LIST_8("CUP_20Rnd_9x39_SP5_GROZA_M"),
		LIST_2("CUP_HandGrenade_RGO"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	backpack[] = {"B_AssaultPack_cbr"};
	primaryWeapon[] = {"CUP_arifle_OTS14_GROZA_GL"};
	magazines[] += {
		LIST_8("CUP_1Rnd_HE_GP25_M"),
		LIST_4("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_OTS14_GROZA"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"B_FieldPack_cbr"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_bizon"};
	magazines[] = {
		LIST_4("CUP_64Rnd_9x19_Bizon_M"),
		LIST_2("CUP_HandGrenade_RGO"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	vest[] = {"CUP_V_B_MTV_TL"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M"),
		LIST_2("CUP_IlumFlareRed_GP25_M")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {
		"CUP_V_B_MTV_noCB",
		"CUP_V_B_MTV_PistolBlack"
	};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] += {
		LIST_3("CUP_8Rnd_9x18_Makarov_M")
	};
	items[] += {"ACE_DAGR"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Binocular",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_RUS_Beret_Spetsnaz"};
};

class fac : co {
	displayName = "Forward Air Controller";
	headgear[] = {"CUP_H_RUS_Bandana_HS"};
	goggles[] = {"antenna_long_two_face"};
	backpack[] = {"B_Kitbag_cbr"};
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
	primaryWeapon[] = {"CUP_arifle_RPK74M"};
	magazines[] = {
		LIST_8("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"),
		"CUP_HandGrenade_RGO",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_FieldPack_cbr"};
	backpackItems[] = {
		LIST_8("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"),
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
	vest[] = {"CUP_V_B_MTV_Marksman"};
	primaryWeapon[] = {"CUP_srifle_VSSVintorez_VFG"};
	scope[] = {"cup_optic_pso_1"};
	bipod[] = {"cup_bipod_harris_1a2_l_blk"};
	magazines[] = {
		LIST_11("CUP_10Rnd_9x39_SP5_VSS_M"),
		LIST_2("CUP_HandGrenade_RGO"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_Pecheneg"};
	backpack[] = {"B_Kitbag_cbr"};
	scope[] = {"cup_optic_pechenegscope"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"CUP_HandGrenade_RGO",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Binocular",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "GMG Gunner";
	secondaryWeapon[] = {"CUP_AGS30_carry"};
	backPack[] = {"B_Carryall_CBR"};
	backpackItems[] = {
		LIST_7("CUP_compats_29Rnd_30mm_AGS30_M")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"B_Carryall_CBR"};
	backpackItems[] = {
		LIST_7("CUP_compats_29Rnd_30mm_AGS30_M")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_sag30CarryTripod"};
	backPack[] = {"B_Carryall_CBR"};
	backpackItems[] = {
		LIST_7("CUP_compats_29Rnd_30mm_AGS30_M"),
		"ACE_EntrenchingTool"
	};
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
	backpack[] = {"B_Kitbag_cbr"};
	secondaryWeapon[] = {"launch_RPG32_green_F"};
	magazines[] += {
		LIST_3("RPG32_F"),
		LIST_2("RPG32_HE_F")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Kitbag_cbr"};
	backpackItems[] = {
		LIST_3("RPG32_F"),
		LIST_2("RPG32_HE_F")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_FieldPack_khk"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Binocular",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("RPG32_F"),
		"RPG32_HE_F"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Kornet_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_Kornet_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_Kornet_Tripod_Bag"};
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

class samg : car {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Binocular",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"CUP_U_O_RUS_Ghillie"};
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"CUP_srifle_ksvk"};
	scope[] = {"cup_optic_pso_3"};
	sidearmWeapon[] = {"CUP_hgun_PB6P9"};
	sidearmAttachments[] = {"cup_muzzle_pb6p9"};
	magazines[] = {
		LIST_7("CUP_5Rnd_127x108_KSVK_M"),
		LIST_2("CUP_HandGrenade_RGO"),
		LIST_4("CUP_8Rnd_9x18_MakarovSD_M")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"CUP_U_O_RUS_Ghillie"};
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	headgear[] = {};
	goggles[] = {"default"};
	scope[] = {"cup_optic_grozascope"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_ATragMX",
		"LaserBatteries"
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
	uniform[] = {
		"CUP_U_O_RUS_Gorka_Green",
		"CUP_U_O_RUS_Gorka_Green_gloves2",
		"CUP_U_O_RUS_Gorka_Green_gloves_kneepads"
	};
	vest[] = {"CUP_V_B_MTV"};
	backpack[] = {};
	headgear[] = {"CUP_H_TK_TankerHelmet"};
	magazines[] = {
		LIST_3("CUP_64Rnd_9x19_Bizon_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	goggles[] = {"default"};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_cbr"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	goggles[] = {"default"};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {"V_Rangemaster_belt"};
	backpack[] = {};
	headgear[] = {
		"CUP_H_RUS_ZSH_Shield_Up",
		"CUP_H_RUS_ZSH_Shield_Down"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_2("CUP_64Rnd_9x19_Bizon_M"),
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
	backpack[] = {"B_AssaultPack_cbr"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {"CUP_V_CDF_CrewBelt"};
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] = {
		LIST_3("CUP_8Rnd_9x18_Makarov_M"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_cbr"};
	vest[] = {"CUP_V_B_MTV_Mine"};
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
	backpack[] = {"B_Kitbag_cbr"};
	vest[] = {"CUP_V_B_MTV_Mine"};
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
	linkedItems[] += {"O_UavTerminal"};
};

#ifdef AUTUMN
	#undef AUTUMN
#endif
