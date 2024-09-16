/*
	Dependencies:
	* CUP Units
	* CUP Weapons
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_O_RUS_VSR98_worn_MSV",
		"CUP_U_O_RUS_VSR98_worn_gloves_MSV",
		"CUP_U_O_RUS_VSR98_worn_MSV_rolled_up"
	};
	vest[] = {
		"CUP_V_RUS_6B3_Flora_1"
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
	items[] = {
		MEDICAL_R,
		"ACE_Flashlight_KSF1",
		LIST_3("ACE_CableTie"),
        "ACE_EntrenchingTool",
        "ACE_Canteen"
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
	headgear[] = {"CUP_H_RUS_6B27_NVG"};
	primaryWeapon[] = {"CUP_arifle_AK74M"};
	scope[] = {"cup_optic_kobra"};
	attachment[] = {"cup_acc_flashlight"};
	magazines[] = {
		LIST_6("CUP_30Rnd_545x39_AK74_plum_M"),
		LIST_2("CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"CUP_arifle_AK74M_GL"};
	magazines[] += {
		LIST_4("CUP_1Rnd_HE_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M"),
		LIST_2("CUP_IlumFlareRed_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AK105"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_CivPack_WDL"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"CUP_V_RUS_6B3_Flora_2"};
	backpack[] = {"B_Carryall_green_F"};
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_arifle_AKS74U"};
};

class ftl : g {
	displayName = "Fireteam Leader";
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	sidearmWeapon[] = {"hgun_Rook40_F"};
	magazines[] += {
		LIST_2("16Rnd_9x21_Mag")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"H_MilCap_grn"};
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
		"Laserdesignator_01_khk_F",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74M"};
	magazines[] = {
		LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_FieldPack_green_F"};
	backpackItems[] = {
		LIST_6("CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M")
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
	headgear[] = {"H_Booniehat_oli"};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1"};
	magazines[] = {
		LIST_8("CUP_10Rnd_762x54_SVD_M"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {"CUP_V_RUS_6B3_Flora_3"};
	backpack[] = {"CUP_B_CivPack_WDL"};
	primaryWeapon[] = {"CUP_lmg_Pecheneg"};
	scope[] = {"cup_optic_pechenegscope"};
	magazines[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_CivPack_WDL"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpack[] = {"CUP_B_CivPack_WDL"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M")
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	secondaryWeapon[] = {"CUP_KORD_carry"};
	backPack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		LIST_6("ace_csw_50Rnd_127x108_mag")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
	backPack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		LIST_6("ace_csw_50Rnd_127x108_mag")
	};
};
class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
	backPack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		LIST_6("ace_csw_50Rnd_127x108_mag"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	vest[] = {"CUP_V_RUS_6B3_Flora_2"};
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v3"};
	magazines[] += {
		LIST_2("CUP_PG7VL_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		"CUP_PG7VR_M",
		LIST_2("CUP_PG7VL_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_FieldPack_khk"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("CUP_OG7_M"),
		"CUP_PG7VR_M"
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
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"CUP_2b14_carry"};
	backPack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_green_F"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	backPack[] = {"B_Carryall_green_F"};
	items[] += { MTR_GEAR };
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
		"Rangefinder",
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
		"ItemGPS"
	};
};

class sn : car {
	displayName = "Sniper";
	uniform[] = {"CUP_U_O_RUS_Ghillie"};
	vest[] = {"CUP_V_RUS_6B3_Flora_4"};
	headgear[] = {};
	backpack[] = {"ace_gunbag_Tan"};

	silencer[] = {"cup_muzzle_pbs4"};

	backpackItems[] = {LIST_4("CUP_5Rnd_127x108_KSVK_M")};

	// This adds a sniper rifle to the ACE gunbag
	code = "															\
		backpackContainer _this setVariable ['ace_gunbag_gunbagWeapon', \
		[ 																\
			'CUP_srifle_ksvk', 											\
			['','','cup_optic_pso_3',''], 								\
			[['CUP_5Rnd_127x108_KSVK_M', 5]] 							\
		], true]; 														\
	";
};

class sp : car {
	displayName = "Spotter";

	uniform[] = {"CUP_U_O_RUS_Ghillie"};
	vest[] = {"CUP_V_RUS_6B3_Flora_4"};
	headgear[] = {};
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};

	silencer[] = {"cup_muzzle_pbs4"};

	items[] += {
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_MapTools"
	};

	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator_01_khk_F",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	vest[] = {"CUP_V_RUS_6B3_Flora_4"};
	headgear[] = {"CUP_H_TK_TankerHelmet"};
	magazines[] = {
		LIST_3("CUP_30Rnd_545x39_AK74_plum_M"),
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
	backpack[] = {"B_FieldPack_green_F"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : baseMan {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	headgear[] = {"CUP_H_RUS_Altyn_Goggles_black", "CUP_H_RUS_Altyn_black"};
	goggles[] = {"default"};

	primaryWeapon[] = {"CUP_smg_vityaz"};

	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_Vityaz"),
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
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};

	primaryWeapon[] = {"CUP_smg_vityaz"};

	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_Vityaz"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"B_Kitbag_rgr"};
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
	backpack[] = {"O_UAV_01_backpack_F"};
	linkedItems[] += {"O_UavTerminal"};
};
