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
		"U_I_CombatUniform",
		"U_I_CombatUniform_shortsleeve"
	};
	vest[] = {"V_PlateCarrierIA1_dgtl"};
	backpack[] = {"B_AssaultPack_dgtl"};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:greek"};
	// Leave empty to not change faces.
	insignias[] = {"AAF_3rdRegiment"};
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
	headgear[] = {"H_HelmetIA"};
	primaryWeapon[] = {"arifle_Mk20_F"};
	scope[] = {"optic_aco_grn"};
	attachment[] = {"acc_pointer_ir"};
	magazines[] = {
		LIST_9("30Rnd_556x45_Stanag"),
		LIST_2("30Rnd_556x45_Stanag_Tracer_Yellow"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"V_PlateCarrierIAGL_dgtl"};
	primaryWeapon[] = {"arifle_Mk20_GL_F"};
	magazines[] += {
		LIST_8("1Rnd_HE_Grenade_shell"),
		LIST_4("1Rnd_Smoke_Grenade_shell")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"arifle_Mk20C_F"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"B_AssaultPack_dgtl"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	scope[] = {"optic_aco_grn_smg"};
	primaryWeapon[] = {"hgun_PDW2000_F"};
	magazines[] = {
		LIST_10("30Rnd_9x21_Mag"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	linkedItems[] += {"Binocular","ItemGPS"};
};

class sl : r {
	displayName = "Squad Leader";
	vest[] = {"V_PlateCarrierIA2_dgtl"};
	sidearmWeapon[] = {"hgun_ACPC2_F"};
	magazines[] += {
		LIST_4("9Rnd_45ACP_Mag")
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
	headgear[] = {"H_MilCap_dgtl"};
	uniform[] = {"U_I_OfficerUniform"};
};

class fac : co {
	displayName = "Forward Air Controller";
	uniform[] = {
		"U_I_CombatUniform",
		"U_I_CombatUniform_shortsleeve"
	};
	hmd[] = {"antenna_long_two_nvg"};
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"Laserdesignator_03",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"LMG_Mk200_F"};
	bipod[] = {"bipod_03_f_blk"};
	sidearmWeapon[] = {"hgun_ACPC2_F"};
	magazines[] = {
		LIST_3("200Rnd_65x39_cased_Box"),
		LIST_2("200Rnd_65x39_cased_Box_Tracer"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("9Rnd_45ACP_Mag")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_3("200Rnd_65x39_cased_Box"),
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
	primaryWeapon[] = {"srifle_EBR_F"};
	scope[] = {"optic_mrco"};
	bipod[] = {"bipod_03_f_blk"};
	magazines[] = {
		LIST_11("20Rnd_762x51_Mag"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	scope[] = {"optic_mrco"};
	magazines[] = {
		LIST_5("200Rnd_65x39_cased_Box"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("9Rnd_45ACP_Mag")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Kitbag_rgr"};
	backpackItems[] = {
		LIST_3("200Rnd_65x39_cased_Box"),
		LIST_2("200Rnd_65x39_cased_Box_Tracer")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"B_Kitbag_rgr"};
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
		LIST_3("200Rnd_65x39_cased_Box"),
		LIST_2("200Rnd_65x39_cased_Box_Tracer"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backpack[] = {"B_Carryall_oli"};
	secondaryWeapon[] = {"ace_csw_staticHMGCarry"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_yellow")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backpack[] = {"B_Carryall_oli"};
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
	backpack[] = {"B_FieldPack_oli"};
	secondaryWeapon[] = {"launch_MRAWS_olive_rail_F"};
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
	backpack[] = {"B_FieldPack_oli"};
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
	secondaryWeapon[] = {"launch_I_Titan_short_F"};
	backpack[] = {"B_Carryall_oli"};
	magazines[] += {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
	};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] += {
		LIST_2("Titan_AT"),
		LIST_2("Titan_AP")
	};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backpack[] = {"B_Carryall_oli"};
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
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_oli"};
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
	backPack[] = {"B_Carryall_oli"};
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
	backpack[] = {"B_Carryall_oli"};
	secondaryWeapon[] = {"launch_I_Titan_F"};
	magazines[] += {
		LIST_3("Titan_AA")
	};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
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
	uniform[] = {"U_I_GhillieSuit"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	goggles[] = {"default"};
	primaryWeapon[] = {"srifle_GM6_F"};
	scope[] = {"optic_lrps"};
	sidearmWeapon[] = {"hgun_ACPC2_F"};
	magazines[] = {
		LIST_7("5Rnd_127x108_Mag"),
		LIST_2("HandGrenade"),
		LIST_4("9Rnd_45ACP_Mag")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"U_I_GhillieSuit"};
	vest[] = {"V_Chestrig_rgr"};
	headgear[] = {};
	scope[] = {"optic_mrco"};
	silencer[] = {"muzzle_snds_m"};
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
		"Laserdesignator_03",
		"ItemGPS"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner (dlc)";
	uniform[] = {"U_Tank_green_F"};
	vest[] = {"V_BandollierB_oli"};
	backpack[] = {};
	headgear[] = {"H_HelmetCrew_I"};
	magazines[] = {
		LIST_6("30Rnd_9x21_Mag"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander (dlc)";
	linkedItems[] += {"Binocular","ItemGPS"};
};

class vd : vg {
	displayName = "Vehicle Driver (dlc)";
	traits[] = {"engineer"};
	backpack[] = {"B_AssaultPack_dgtl"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"U_I_HeliPilotCoveralls"};
	vest[] = {"V_TacVest_khk"};
	backpack[] = {};
	headgear[] = {
		"H_CrewHelmetHeli_I",
		"H_PilotHelmetHeli_I"
	};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_6("30Rnd_9x21_Mag"),
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
	backpack[] = {"B_AssaultPack_dgtl"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"U_I_HeliPilotCoveralls"};
	vest[] = {"V_TacVest_khk"};
	backpack[] = {};
	headgear[] = {"H_PilotHelmetHeli_I"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] = {
		LIST_6("30Rnd_9x21_Mag"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_rgr"};
	vest[] = {"V_PlateCarrierIAGL_oli"};
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
	vest[] = {"V_PlateCarrierIAGL_oli"};
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
	backpack[] = {"I_UAV_01_backpack_F"};
	linkedItems[] += {"I_UavTerminal"};
};
