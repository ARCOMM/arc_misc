/*
	Author:
		Freddo

	Dependencies:
		* Wearable Antennas
		* CUP Weapons
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"U_O_SpecopsUniform_ocamo",
		"U_O_CombatUniform_ocamo"
	};
	vest[] = {"V_HarnessO_brn"};
	backpack[] = {"B_AssaultPack_ocamo"};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:persian"};
	// Leave empty to not change faces.
	insignias[] = {"GryffinRegiment"};
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
	code = "if (sunOrMoon < 1) then {_this linkItem 'NVGoggles_OPFOR'};";
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {"H_HelmetO_ocamo"};
	primaryWeapon[] = {"arifle_Katiba_F"};
	scope[] = {"optic_aco_grn"};
	attachment[] = {"acc_pointer_IR"};
	magazines[] = {
		LIST_9("30Rnd_65x39_caseless_green"),
		LIST_2("30Rnd_65x39_caseless_green_mag_Tracer"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"V_HarnessOGL_brn"};
	primaryWeapon[] = {"arifle_Katiba_GL_F"};
	magazines[] += {
		LIST_8("1Rnd_HE_Grenade_shell"),
		LIST_4("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"arifle_Katiba_C_F"};
};

class cls : car {
	displayName = "Combat Life Saver";
	headgear[] = {"H_HelmetSpecO_ocamo"};
	traits[] = {"medic"};
	backpack[] = {"B_FieldPack_ocamo"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	vest[] = {"V_TacVest_brn"};
	backpack[] = {"B_Carryall_ocamo"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	scope[] = {"optic_aco_grn_smg"};
	primaryWeapon[] = {"SMG_02_F"};
	magazines[] = {
		LIST_10("30Rnd_9x21_Mag_SMG_02"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	headgear[] = {"H_HelmetLeaderO_ocamo"};
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {"V_TacVest_brn"};
	headgear[] = {"H_HelmetLeaderO_ocamo"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_02_F"};
	sidearmAttachments[] = {"optic_yorris"};
	magazines[] += {
		LIST_4("6Rnd_45ACP_Cylinder")
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
	uniform[] = {"U_O_OfficerUniform_ocamo"};
	headgear[] = {"H_MilCap_ocamo"};
};

class fac : co {
	displayName = "Forward Air Controller";
	hmd[] = {"antenna_long_two_nvg"};
	uniform[] = {"U_O_officer_noInsignia_hex_F"};
	backpack[] = {"B_Kitbag_cbr"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator_02",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"LMG_Zafir_F"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_02_F"};
	magazines[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("6Rnd_45ACP_Cylinder")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"launch_RPG32_F"};
	magazines[] += {
		"RPG32_F",
		"RPG32_HE_F"
	};
};

class dm : r {
	displayName = "Designated Marksman (DLC)";
	headgear[] = {"H_HelmetSpecO_ocamo"};
	primaryWeapon[] = {"srifle_DMR_05_hex_F"};
	scope[] = {"optic_arco_blk_f"};
	bipod[] = {"bipod_02_f_hex"};
	magazines[] = {
		LIST_11("10Rnd_93x64_DMR_05_Mag"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner (DLC)";
	primaryWeapon[] = {"MMG_01_hex_F"};
	scope[] = {"optic_arco_blk_f"};
	bipod[] = {"bipod_02_f_hex"};
	magazines[] = {
		LIST_4("150Rnd_93x64_Mag"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("6Rnd_45ACP_Cylinder")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Kitbag_cbr"};
	backpackItems[] = {
		LIST_3("150Rnd_93x64_Mag")
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
		LIST_2("150Rnd_93x64_Mag"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backpack[] = {"B_Carryall_ocamo"};
	secondaryWeapon[] = {"ace_csw_staticHMGCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpack[] = {"B_Carryall_ocamo"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backpack[] = {"B_Carryall_ocamo"};
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
	backpack[] = {"B_Carryall_ocamo"};
	secondaryWeapon[] = {"launch_O_Titan_short_F"};
	secondaryAttachments[] = {"acc_pointer_ir"};
	magazines[] += {
		LIST_3("Titan_AT")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_ocamo"};
	backpackItems[] = {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"B_Carryall_ocamo"};
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
		LIST_2("Titan_AT"),
		"Titan_AP"
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"launch_O_Vorona_brown_F"};
	backpack[] = {"B_Carryall_ocamo"};
	magazines[] += {
		LIST_2("Vorona_HEAT"),
		"Vorona_HE"
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"B_Carryall_ocamo"};
	backpackItems[] += {
		LIST_2("Vorona_HEAT"),
		"Vorona_HE"
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"B_Carryall_ocamo"};
	backpackItems[] += {
		LIST_2("Vorona_HEAT"),
		"Vorona_HE"
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
	backPack[] = {"B_Carryall_ocamo"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_ocamo"};
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
	backPack[] = {"B_Carryall_ocamo"};
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
	backpack[] = {"B_Carryall_ocamo"};
	secondaryWeapon[] = {"launch_O_Titan_F"};
	magazines[] += {
		LIST_3("Titan_AA")
	};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_ocamo"};
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
	uniform[] = {"U_O_GhillieSuit"};
	vest[] = {"V_Chestrig_khk"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"srifle_GM6_camo_F"};
	scope[] = {"optic_lrps"};
	sidearmWeapon[] = {"hgun_Pistol_heavy_02_F"};
	magazines[] = {
		LIST_7("5Rnd_127x108_Mag"),
		LIST_2("HandGrenade"),
		LIST_4("6Rnd_45ACP_Cylinder")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"U_O_GhillieSuit"};
	vest[] = {"V_Chestrig_khk"};
	headgear[] = {};
	scope[] = {"optic_arco_blk_f"};
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
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {"U_O_officer_noInsignia_hex_F"};
	vest[] = {"V_TacVest_brn"};
	backpack[] = {};
	headgear[] = {"H_HelmetCrew_O"};
	magazines[] = {
		LIST_6("30Rnd_9x21_Mag_SMG_02"),
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
	backpack[] = {"B_FieldPack_ocamo"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	vest[] = {"V_TacVest_brn"};
	backpack[] = {};
	headgear[] = {"H_CrewHelmetHeli_O"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("30Rnd_9x21_Mag_SMG_02"),
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
	backpack[] = {"B_FieldPack_ocamo"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	vest[] = {"V_TacVest_brn"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetFighter_O"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("30Rnd_9x21_Mag_SMG_02"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	headgear[] = {"H_HelmetSpecO_ocamo"};
	backpack[] = {"B_Kitbag_cbr"};
	vest[] = {"V_TacVest_brn"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_Clacker",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		"ToolKit",
		"DemoCharge_Remote_Mag",
		"ClaymoreDirectionalMine_Remote_Mag",
		"SatchelCharge_Remote_Mag"
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	headgear[] = {"H_HelmetSpecO_ocamo"};
	backpack[] = {"B_Kitbag_cbr"};
	vest[] = {"V_TacVest_brn"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_6("APERSMine_Range_Mag"),
		"ATMine_Range_Mag"
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"O_UAV_01_backpack_F"};
	linkedItems[] += {"O_UavTerminal"};
};
