/*
	Dependencies:
	* CUP Units
	* CUP Weapons
	* CWR3
	* ACE3
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"cwr3_b_uniform_m81_woodland_gloves_sf_early",
		"cwr3_b_uniform_m81_woodland_early",
		"cwr3_b_uniform_m81_woodland_gloves",
		"cwr3_b_uniform_m81_woodland_rolled_gloves",
		"cwr3_b_uniform_m81_woodland_rolled",
		"cwr3_b_uniform_m81_woodland_gloves_sf",
		"cwr3_b_uniform_m81_woodland_rolled_gloves_sf",
		"cwr3_b_uniform_m81_woodland"
	};
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
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
		"ACE_Flashlight_MX991",
		"ACE_CableTie",
		"ACE_EntrenchingTool",
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
	// Add NVGs and lasers only if night
	code = "if (sunOrMoon != 1) then { \
		_this linkItem 'CUP_NVG_PVS7'; \
		_this addPrimaryWeaponItem 'cup_acc_anpeq_2_grey'; \
	}";
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {
		"cwr3_b_headgear_pasgt_m81_woodland_goggles_early",
		"cwr3_b_headgear_pasgt_m81_woodland_early",
		"cwr3_b_headgear_pasgt_m81_woodland_goggles",
		"cwr3_b_headgear_pasgt_m81_woodland"
	};
	primaryWeapon[] = {"CUP_arifle_M16A2"};
	magazines[] = {
		LIST_6("CUP_30Rnd_556x45_Stanag"),
		LIST_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		"HandGrenade",
		"SmokeShell"
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland_gl"};
	primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
	magazines[] += {
		LIST_2("CUP_1Rnd_HEDP_M203"),
		LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_2("CUP_FlareRed_M203")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_Colt727"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"cwr3_b_backpack_alice_medic_empty"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpackItems[] = { MEDICAL_M };
	linkedItems[] += {"Binocular"};
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

class ftl : r {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
	magazines[] +=
	{
		"SmokeShellGreen",
		"SmokeShellRed"
	};
};

class sl : ftl {
	displayName = "Squad Leader";
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland_officer"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_2("CUP_15Rnd_9x19_M9")
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"cwr3_b_headgear_pasgt_m81_woodland_2lt"};
};

class fac : ftl {
	displayName = "Forward Air Controller";
	hmd[] = {"antenna_long_two_nvg"};
	backpack[] = {"cwr3_b_backpack_alice"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"CUP_SOFLAM"
	};
	backpackItems[] = { FAC_GEAR };
};

class ar : r {
	displayName = "Automatic Rifleman";
	backpack[] = {"cwr3_b_backpack_alice"};
	vest[] = {"cwr3_b_vest_pasgt_alice_woodland_mg"};
	primaryWeapon[] = {"CUP_lmg_M249_E1"};
	magazines[] = {
		LIST_10("CUP_100Rnd_TE4_Red_Tracer_556x45_M249")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {
		LIST_8("CUP_100Rnd_TE4_Red_Tracer_556x45_M249")
	};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_M136"};
};

class lat : r {
	displayName = "Rifleman (LAT)";
	secondaryWeapon[] = {"CUP_launch_M72A6"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {
		"cwr3_b_headgear_boonie_m81_woodland",
		"cwr3_b_headgear_boonie_m81_sf_woodland_early",
		"cwr3_b_headgear_boonie_m81_woodland_early",
		"cwr3_b_headgear_boonie_m81_sf_woodland"
	};
	primaryWeapon[] = {"CUP_srifle_M21"};
	scope[] = {"cup_optic_artel_m14"};
	bipod[] = {"bipod_03_f_blk"};
	magazines[] = {
		LIST_9("20Rnd_762x51_Mag"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_M60"};
	magazines[] =
	{
		"HandGrenade",
		"SmokeShell",
		LIST_8("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"cwr3_b_backpack_alice"};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"cwr3_b_backpack_radio"};
	backpackItems[] =
	{
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
	linkedItems[] += {"Binocular"};
};

class matg : car {
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"ace_dragon_super"};
	linkedItems[] += {"ace_dragon_sight"};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	secondaryWeapon[] = {"ace_dragon_super"};
};

class mattl : car {
	displayName = "MAT Team Leader";
	secondaryWeapon[] = {"ace_dragon_super"};
	linkedItems[] += {"Binocular"};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Tow_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_TOW_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_TOW_Tripod_Bag"};
	linkedItems[] += {"Binocular"};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	backPack[] = {"B_Mortar_01_weapon_F"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ItemGPS"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"I_Mortar_01_weapon_F"};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	items[] += {MTR_GEAR};
	backPack[] = {"B_HMG_01_support_F"};
	linkedItems[] =
	{
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
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	backpack[] = {"cwr3_b_backpack_radio"};
	secondaryWeapon[] = {"CUP_launch_FIM92Stinger"};
};

class sn : car {
	displayName = "Sniper";
	uniform[] = {"CUP_U_B_CZ_WDL_Ghillie"};
	backpack[] = {"ace_gunbag"};
	vest[] = {"V_Chestrig_oli"};
	headgear[] = {};

	silencer[] = {"cup_muzzle_mfsup_flashhider_556x45_black"};
	backpackItems[] = {LIST_5("CUP_10Rnd_127x99_M107")};

	// Add sniper rifle to gunbag
	code = "\
		if (sunOrMoon != 1) then \
		{ \
			_this linkItem 'CUP_NVG_PVS7'; \
			_this addPrimaryWeaponItem 'cup_acc_anpeq_2_grey'; \
		}; \
		backpackContainer _this setVariable ['ace_gunbag_gunbagWeapon', \
		[ \
			'CUP_srifle_M107_Base', \
			['','','cup_optic_leupoldm3lr_pip',''], \
			[['CUP_10Rnd_127x99_M107', 10]] \
		], true]";
};

class sp : car {
	displayName = "Spotter";

	uniform[] = {"CUP_U_B_CZ_WDL_Ghillie"};
	vest[] = {"V_Chestrig_oli"};
	backpack[] = {"cwr3_b_backpack_radio"};
	headgear[] = {};

	primaryWeapon[] = {"CUP_arifle_Colt727_M203"};
	silencer[] = {"cup_muzzle_mfsup_flashhider_556x45_black"};

	magazines[] += {"LaserBatteries"};

	items[] += {
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_MapTools"
	};
	linkedItems[] += {"CUP_SOFLAM"};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {"cwr3_b_uniform_tanksuit"};
	vest[] = {"cwr3_b_vest_pasgt_alice_od_crew"};
	headgear[] = {
		"cwr3_b_headgear_cvc",
		"cwr3_b_headgear_cvc_goggles"
	};
	magazines[] =
	{
		LIST_6("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class vcnr : vg {
	displayName = "Vehicle Commander (No radio)";
	linkedItems[] += {"Binocular"};
};

class vc : vcnr {
	displayName = "Vehicle Commander";
	backpack[] = {"cwr3_b_backpack_radio"};
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
	uniform[] = {"cwr3_b_uniform_pilot"};
	vest[] = {"cwr3_b_vest_pilot"};
	headgear[] = {
		"cwr3_b_headgear_cvc",
		"cwr3_b_headgear_cvc_goggles"
	};
	goggles[] = {"default"};
	magazines[] =
	{
		LIST_6("CUP_30Rnd_9x19_MP5"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	primaryWeapon[] = {"cwr3_smg_uzi"};
	traits[] = {"engineer"};
	uniform[] = {"cwr3_b_uniform_pilot_jet"};
	vest[] = {"cwr3_b_vest_pilot"};
	headgear[] = {"H_PilotHelmetFighter_O"};
	magazines[] =
	{
		LIST_4("CUP_30Rnd_9x19_UZI"),
		"SmokeShellPurple"
	};
};

class logi : car {
	displayName = "Logistics";
	traits[] = {"engineer"};
	backpack[] = {"cwr3_b_backpack_alice"};
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
	linkedItems[] += {"B_UavTerminal"};
};
