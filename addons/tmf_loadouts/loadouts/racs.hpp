/*
	Dependencies:
	CUP Weapons
	CUP Units
	Wearable Antennas
	Redd'n'Tank
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"CUP_U_I_RACS_Desert_1","CUP_U_I_RACS_Desert_2"};
	vest[] = {"CUP_V_B_Interceptor_Base_Coyote"};
	backpack[] = {"B_AssaultPack_cbr"};
	headgear[] = {"CUP_H_CZ_Booniehat_vz95_des"};
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
	items[] = {
		MEDICAL_R,
		"ACE_Flashlight_MX991",
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
	headgear[] = {
		"CUP_H_LWHv2_desert_comms",
		"CUP_H_LWHv2_desert_ess_comms"
	};
	vest[] = {"CUP_V_B_Interceptor_Rifleman_Coyote"};
	primaryWeapon[] = {"CUP_arifle_M16A2"};
	attachment[] = {"cup_acc_flashlight"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Green"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"CUP_V_B_Interceptor_Grenadier_Coyote"};
	primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
	magazines[] += {
		LIST_8("CUP_1Rnd_HEDP_M203"),
		LIST_4("CUP_1Rnd_Smoke_M203")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_Colt727"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_smg_MP5A5"};
	magazines[] = {
		LIST_8("CUP_30Rnd_9x19_MP5"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("CUP_1Rnd_StarFlare_Red_M203")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : ftl {
	displayName = "Squad Leader";
	hmd[] = {"antenna_long_one_nvg"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_2("CUP_15Rnd_9x19_M9")
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_RACS_Beret_Blue"};
};

class fac : co {
	displayName = "Forward Air Controller";
	hmd[] = {"antenna_long_two_nvg"};
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
	primaryWeapon[] = {"CUP_lmg_M249_E2"};
	magazines[] = {
		LIST_6("CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch"),
		"HandGrenade",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_3("CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"CUP_H_CZ_Booniehat_vz95_des"};
	primaryWeapon[] = {"CUP_srifle_Mk12SPR"};
	scope[] = {"cup_optic_hensoldtzo"};
	bipod[] = {"bipod_01_f_blk"};
	magazines[] = {
		LIST_6("CUP_20Rnd_556x45_Stanag"),
		LIST_2("CUP_20Rnd_556x45_Stanag_Tracer_Green"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_FNMAG_RIS_modern"};
	scope[] = {"cup_optic_elcanm145"};
	magazines[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"),
		"HandGrenade",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Kitbag_cbr"};
	backpackItems[] = {
		LIST_5("CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backpack[] = {"B_Carryall_cbr"};
	secondaryWeapon[] = {"ace_csw_staticM2ShieldCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backpack[] = {"B_Carryall_cbr"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backpack[] = {"B_Carryall_cbr"};
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"B_Kitbag_cbr"};
	secondaryWeapon[] = {"CUP_launch_MAAWS"};
	secondaryAttachments[] = {"cup_optic_maaws_scope"};
	magazines[] += {
		LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Kitbag_cbr"};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_Kitbag_cbr"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("CUP_MAAWS_HEAT_M"),
		LIST_2("CUP_MAAWS_HEDP_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"Redd_Milan_Static_Barrel"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"Redd_Milan_Static_Barrel"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"Redd_Milan_Static_Tripod"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector",
		"ItemGPS"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"CUP_m252_carry"};
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
	backPack[] = {"B_Carryall_khk"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};

	linkedItems[] += {
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
		"Binocular",
		"ItemGPS"
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_FullGhillie_sard"};
	backpack[] = {};
	headgear[] = {"CUP_H_PMC_PRR_Headset"};
	goggles[] = {"default"};
	primaryWeapon[] = {"CUP_srifle_G22_des"};
	scope[] = {"cup_optic_leupoldm3lr"};
	bipod[] = {"cup_bipod_vltor_modpod"};
	sidearmWeapon[] = {"CUP_hgun_MicroUzi"};
	sidearmAttachments[] = {"cup_muzzle_snds_microuzi"};
	magazines[] = {
		LIST_7("CUP_5Rnd_762x67_G22"),
		LIST_2("HandGrenade"),
		LIST_2("CUP_30Rnd_9x19_UZI")
	};
};

class sp : g {
	displayName = "Spotter";
	primaryWeapon[] = {"CUP_arifle_Colt727_M203"};
	uniform[] = {"U_B_FullGhillie_sard"};
	headgear[] = {"CUP_H_PMC_PRR_Headset"};
	hmd[] = {"antenna_long_one_nvg"};
	backpack[] = {};
	scope[] = {"cup_optic_aimpoint_5000"};
	silencer[] = {"cup_muzzle_snds_m16"};
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
	uniform[] = {"CUP_U_I_RACS_PilotOverall"};
	vest[] = {"CUP_V_B_Interceptor_Base_Coyote"};
	backpack[] = {};
	headgear[] = {"CUP_H_CVCH_des"};
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
	backpack[] = {"B_AssaultPack_cbr"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_I_RACS_PilotOverall"};
	vest[] = {"CUP_V_B_Interceptor_Base_Coyote"};
	backpack[] = {};
	headgear[] = {"CUP_H_SPH4_khaki", "CUP_H_SPH4_khaki_visor"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("CUP_30Rnd_9x19_MP5"),
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

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_I_RACS_PilotOverall"};
	vest[] = {"CUP_V_B_PilotVest"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetFighter_O"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_cbr"};
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
	headgear[] = {"CUP_H_CZ_Booniehat_vz95_des"};
	traits[] = {"UAVHacker"};
	linkedItems[] += {"B_UavTerminal"};
};
