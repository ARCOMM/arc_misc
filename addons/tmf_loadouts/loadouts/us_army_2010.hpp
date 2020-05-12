/*
	Dependencies:
	* CUP Units
	* CUP Weapons
	* ACE
*/
class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"CUP_U_B_USArmy_TwoKnee","CUP_U_B_USArmy_Base"};
	vest[] = {"CUP_V_B_IOTV_Rifleman","CUP_V_B_IOTV_AT"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {"CUP_NVG_PVS14"};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:african", "faceset:caucasian"};
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
		"ACE_Flashlight_XL50",
		LIST_2("Chemlight_green")
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
		"CUP_H_USArmy_HelmetMICH_earpro_ess",
		"CUP_H_USArmy_HelmetMICH_earpro"
	};
	primaryWeapon[] = {
		"CUP_arifle_M4A3_black",
		"CUP_arifle_M4A1_black"
	};
	scope[] = {
		"cup_optic_compm2_black",
		"cup_optic_compm4",
		"cup_optic_microt1"
	};
	attachment[] = {"cup_acc_anpeq_15_flashlight_black_l"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_B_IOTV_gl"};
	primaryWeapon[] = {"CUP_arifle_M4A1_BUIS_GL"};
	magazines[] += {
		LIST_4("CUP_1Rnd_HEDP_M203"),
		LIST_2("CUP_1Rnd_Smoke_M203"),
		LIST_2("CUP_1Rnd_StarFlare_White_M203")
	};
};

class car : r {
	displayName = "Carabinier";
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"CUP_V_B_IOTV_Medic"};
	backpack[] = {"B_Carryall_oucamo"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	scope[] = {"cup_optic_microt1"};
	primaryWeapon[] = {"CUP_smg_MP5A5"};
	magazines[] = {
		LIST_10("CUP_30Rnd_9x19_MP5"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	vest[] = {"CUP_V_B_IOTV_tl"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_M203")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {"CUP_V_B_IOTV_SL"};
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_15Rnd_9x19_M9")
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

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"H_MilCap_gry"};
};

class fac : co {
	displayName = "Forward Air Controller";
	backpack[] = {"B_RadioBag_01_oucamo_F"};
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
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	vest[] = {"CUP_V_B_IOTV_saw"};
	primaryWeapon[] = {"CUP_lmg_m249_pip3"};
	scope[] = {"cup_optic_eotech553_black"};
	magazines[] = {
		LIST_3("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
		"HandGrenade",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	backpackItems[] = {
		LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"srifle_EBR_F"};
	scope[] = {"optic_sos"};
	bipod[] = {"bipod_01_f_blk"};
	magazines[] = {
		LIST_7("20Rnd_762x51_Mag"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {"CUP_V_B_IOTV_MG"};
	primaryWeapon[] = {"CUP_lmg_M240"};
	magazines[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Carryall_oucamo"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"CUP_B_M2_Gun_Bag"};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"CUP_B_M2_Tripod_Bag"};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"CUP_B_M2_MiniTripod_Bag"};
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
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"cup_optic_maaws_scope"};
	magazines[] += {
		"CUP_MAAWS_HEAT_M",
		"CUP_MAAWS_HEDP_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_oucamo"};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_Vector",
		"ItemGPS"
	};
	magazines[] += {
		"CUP_MAAWS_HEAT_M",
		"CUP_MAAWS_HEDP_M"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backpack[] = {"B_FieldPack_oucamo"};
	magazines[] += {"CUP_Javelin_M"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_FieldPack_oucamo"};
	backpackItems[] = {"CUP_Javelin_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"B_FieldPack_oucamo"};
	backpackItems[] = {"CUP_Javelin_M"};
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
	backPack[] = {"B_Carryall_oucamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_oucamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	backPack[] = {"B_Carryall_oucamo"};
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
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	silencer[] = {"ace_muzzle_mzls_l"};

	uniform[] = {"U_B_FullGhillie_sard"};
	backpack[] = {"ace_gunbag_Tan"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};

	backpackItems[] = {LIST_5("CUP_10Rnd_127x99_M107")};

	code = QUOTE(\
		backpackContainer _this setVariable ['ace_gunbag_gunbagWeapon', \
		[ \
			'CUP_srifle_M107_Base', \
			['','','optic_lrps',''], \
			[['CUP_10Rnd_127x99_M107', 10]] \
		], true]; \
	);
};

class sp : r {
	displayName = "Spotter";
	silencer[] = {"ace_muzzle_mzls_l"};

	uniform[] = {"U_B_FullGhillie_sard"};
	backpack[] = {"ace_gunbag_Tan"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};

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
		"CUP_SOFLAM",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {"CUP_U_B_USArmy_Soft"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"H_HelmetCrew_I"};
	magazines[] = {
		LIST_6("CUP_30Rnd_9x19_MP5"),
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
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
	vest[] = {"CUP_V_B_USArmy_PilotVest"};
	headgear[] = {"H_CrewHelmetHeli_B"};
	magazines[] = {
		LIST_6("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	headgear[] = {"H_PilotHelmetHeli_B"};
	linkedItems[] += {"ItemGPS"};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	headgear[] = {"H_CrewHelmetHeli_B"};
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_AssaultPack_ACU"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"U_B_PilotCoveralls"};
	vest[] = {};
	headgear[] = {"H_PilotHelmetFighter_B"};
	magazines[] = {
		LIST_3("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	sidearmWeapon[] = {"ACE_VMM3"};
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_sgg"};
	items[] += {
		"ACE_DefusalKit",
		"ACE_Clacker"
	};
	backpackItems[] = {
		"ToolKit",
		"ACE_wirecutter",
		"SatchelCharge_Remote_Mag",
		LIST_4("SLAMDirectionalMine_Wire_Mag")
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	sidearmWeapon[] = {"ACE_VMM3"};
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_sgg"};
	items[] += {
		"ACE_DefusalKit",
		"ACE_Clacker"
	};
	backpackItems[] = {
		LIST_2("CUP_Mine_M"),
		LIST_8("APERSMine_Range_Mag")
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
