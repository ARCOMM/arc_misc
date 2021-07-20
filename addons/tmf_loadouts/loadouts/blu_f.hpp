/*
	Author:
		Freddo

	Dependencies:
		* Wearable Antennas
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		LIST_2("U_B_CombatUniform_mcam"),
		LIST_2("U_B_CombatUniform_mcam_vest"),
		"U_B_CombatUniform_mcam_tshirt"
	};
	vest[] = {"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	backpack[] = {"B_AssaultPack_mcamo"};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:african", "faceset:caucasian"};
	// Leave empty to not change faces.
	insignias[] = {"111thID"};
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
		"ItemRadio",
		"ItemWatch"
	};

	// These are put into the backpack
	backpackItems[] = {};

	// Unit traits, see https://community.bistudio.com/wiki/setUnitTrait
	traits[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "if (sunOrMoon < 1) then {_this linkItem 'NVGoggles'};";
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {
		"H_HelmetB",
		"H_HelmetB_black",
		"H_HelmetB_camo",
		"H_HelmetB_desert",
		"H_HelmetB_grass",
		"H_HelmetB_sand",
		"H_HelmetB_snakeskin"
	};
	primaryWeapon[] = {"arifle_MX_F"};
	scope[] = {"optic_aco"};
	attachment[] = {"acc_pointer_IR"};
	magazines[] = {
		LIST_9("30Rnd_65x39_caseless_mag"),
		LIST_2("30Rnd_65x39_caseless_mag_Tracer"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"V_PlateCarrierGL_rgr"};
	primaryWeapon[] = {"arifle_MX_GL_F"};
	magazines[] += {
		LIST_8("1Rnd_HE_Grenade_shell"),
		LIST_4("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"arifle_MXC_F"};
};

class cls : car {
	displayName = "Combat Life Saver";
	headgear[] = {
		"H_HelmetB_light",
		"H_HelmetB_light_black",
		"H_HelmetB_light_desert",
		"H_HelmetB_light_grass",
		"H_HelmetB_light_sand",
		"H_HelmetB_light_snakeskin"
	};
	traits[] = {"medic"};
	backpack[] = {"B_AssaultPack_mcamo"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"V_PlateCarrierSpec_rgr"};
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	scope[] = {"optic_holosight_smg"};
	primaryWeapon[] = {"SMG_01_F"};
	magazines[] = {
		LIST_10("30Rnd_45ACP_Mag_SMG_01"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	headgear[] = {
		"H_HelmetSpecB",
		"H_HelmetSpecB_blk",
		"H_HelmetSpecB_paint2",
		"H_HelmetSpecB_paint1",
		"H_HelmetSpecB_sand",
		"H_HelmetSpecB_snakeskin"
	};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	headgear[] = {
		"H_HelmetSpecB",
		"H_HelmetSpecB_blk",
		"H_HelmetSpecB_paint2",
		"H_HelmetSpecB_paint1",
		"H_HelmetSpecB_sand",
		"H_HelmetSpecB_snakeskin"
	};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
	sidearmAttachments[] = {"optic_mrd"};
	magazines[] += {
		LIST_4("11Rnd_45ACP_Mag")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ACE_VectorDay",
		"ItemGPS"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"H_MilCap_mcamo"};
};

class fac : co {
	displayName = "Forward Air Controller";
	hmd[] = {"antenna_long_two_nvg"};
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"arifle_MX_SW_F"};
	bipod[] = {"bipod_01_F_snd"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
	magazines[] = {
		LIST_6("100Rnd_65x39_caseless_mag"),
		LIST_2("100Rnd_65x39_caseless_mag_Tracer"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("11Rnd_45ACP_Mag")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_4("100Rnd_65x39_caseless_mag"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"launch_NLAW_F"};
};

class dm : r {
	displayName = "Designated Marksman (DLC)";
	primaryWeapon[] = {"srifle_DMR_03_tan_F"};
	scope[] = {"optic_hamr"};
	bipod[] = {"bipod_01_F_snd"};
	magazines[] = {
		LIST_11("20Rnd_762x51_Mag"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner (DLC)";
	primaryWeapon[] = {"MMG_02_sand_F"};
	scope[] = {"optic_hamr"};
	magazines[] = {
		LIST_4("130Rnd_338_Mag"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("11Rnd_45ACP_Mag")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = {
		LIST_3("130Rnd_338_Mag")
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
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("130Rnd_338_Mag"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backpack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"ace_csw_staticHMGCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow"),
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
	backpack[] = {"B_FieldPack_khk"};
	secondaryWeapon[] = {"launch_MRAWS_sand_F"};
	secondaryAttachments[] = {"acc_pointer_ir"};
	magazines[] += {
		LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = {
		LIST_3("MRAWS_HEAT_F"),
		LIST_2("MRAWS_HE_F")
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
		"ACE_Vector",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"launch_B_Titan_short_F"};
	backpack[] = {"B_Carryall_mcamo"};
	magazines[] += {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] += {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] += {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
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

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_mcamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_mcamo"};
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
	backpack[] = {"B_Carryall_mcamo"};
	secondaryWeapon[] = {"launch_B_Titan_F"};
	magazines[] += {
		LIST_3("Titan_AA")
	};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_mcamo"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpackItems[] = {
		LIST_2("Titan_AA")
	};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {"U_B_GhillieSuit"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"srifle_LRR_F"};
	scope[] = {"optic_lrps"};
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
	scope[] = {"optic_hamr"};
	silencer[] = {"muzzle_snds_h_snd_f"};
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
		"Laserdesignator",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {"U_B_CombatUniform_mcam_vest"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"H_HelmetCrew_B"};
	magazines[] = {
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
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
	backpack[] = {"B_AssaultPack_mcamo"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"U_B_HeliPilotCoveralls"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetHeli_B"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
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
	backpack[] = {"B_AssaultPack_mcamo"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"U_B_HeliPilotCoveralls"};
	vest[] = {"V_TacVest_blk"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetHeli_B"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
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
	backpack[] = {"B_UAV_01_backpack_F"};
	linkedItems[] += {"B_UavTerminal"};
};
