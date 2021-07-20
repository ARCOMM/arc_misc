/*
	Dependencies:
	* US Army Mod
	* CUP Units
	* CUP Weapons
	* ACE3
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"usm_bdu_w"};
	vest[] = {"usm_vest_pasgt_lbe_rm"};
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
	code = QUOTE( \
		if (sunOrMoon != 1) then \
		{ \
			_this linkItem 'CUP_NVG_PVS7'; \
			_this addPrimaryWeaponItem 'cup_acc_anpeq_2_grey'; \
		});
};

class r : baseMan {
	displayName = "Rifleman";
	headgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_g_w"};
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
	vest[] = {"usm_vest_pasgt_lbe_gr"};
	primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
	magazines[] += {
		LIST_8("CUP_1Rnd_HEDP_M203"),
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
	backpack[] = {"CUP_B_AlicePack_Khaki"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"usm_pack_alice"};
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

class ftlnr : r {
	displayName = "Fireteam Leader (No radio)";
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
	magazines[] +=
	{
		"SmokeShellGreen",
		"SmokeShellRed"
	};
};

class ftl : ftlnr {
	displayName = "Fireteam Leader";
	backpack[] = {"usm_pack_st138_prc77"};
};

class sl : ftl {
	displayName = "Squad Leader";
	headgear[] = {"usm_bdu_cap_wdl"};
	vest[] = {"usm_vest_pasgt_lbe_rmp"};
	sidearmWeapon[] = {"CUP_hgun_M9"};
	magazines[] += {
		LIST_2("CUP_15Rnd_9x19_M9")
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"usm_bdu_8point_wdl"};
};

class fac : ftl {
	displayName = "Forward Air Controller";
	backpack[] = {"usm_pack_alice_prc119"};
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
	backpack[] = {"usm_pack_abag_m60"};
	vest[] = {"usm_vest_pasgt_lbe_mg"};
	primaryWeapon[] = {"CUP_lmg_M249_E2"};
	magazines[] = {
		LIST_3("CUP_200Rnd_TE1_Red_Tracer_556x45_M249")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"usm_pack_200rnd_556_bandoliers"};
	backpackItems[] = {
		LIST_4("CUP_200Rnd_TE1_Red_Tracer_556x45_M249")
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
	headgear[] = {"usm_bdu_boonie_wdl"};
	primaryWeapon[] = {"CUP_srifle_M14"};
	scope[] = {"optic_khs_old"};
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
		LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {"usm_pack_762x51_bandoliers"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpack[] = {"usm_pack_alice_prc77"};
	backpackItems[] =
	{
		LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
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
	backpack[] = {"usm_pack_st138_prc77"};
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
	code = QUOTE(\
		if (sunOrMoon != 1) then \
		{ \
			_this linkItem 'CUP_NVG_PVS7'; \
			_this addPrimaryWeaponItem 'cup_acc_anpeq_2_grey'; \
		}; \
		backpackContainer _this setVariable [ARR_3('ace_gunbag_gunbagWeapon', \
		[ARR_3( \
			'CUP_srifle_M107_Base', \
			[ARR_4('','','cup_optic_leupoldm3lr_pip','')], \
			[[ARR_2('CUP_10Rnd_127x99_M107', 10)]] \
		)], true)]);
};

class sp : car {
	displayName = "Spotter";

	uniform[] = {"CUP_U_B_CZ_WDL_Ghillie"};
	vest[] = {"V_Chestrig_oli"};
	backpack[] = {"usm_pack_st138_prc77"};
	headgear[] = {};

	primaryWeapon[] = {"CUP_arifle_Colt727_M203"};
	silencer[] = {"cup_muzzle_mfsup_flashhider_556x45_black"};

	items[] += {
		"ACE_RangeCard",
		"ACE_Kestrel4500",
		"ACE_MapTools"
	};
	linkedItems[] += {"CUP_SOFLAM"};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"V_TacVest_oli"};
	headgear[] = {"H_HelmetCrew_I"};
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
	backpack[] = {"usm_pack_st138_prc77"};
};
class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"usm_pack_abag_m60"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"V_TacVest_oli"};
	headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
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
	backpack[] = {"usm_pack_abag_m60"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	sidearmWeapon[] = {"CUP_hgun_MicroUzi"};
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"CUP_V_B_PilotVest"};
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
	backpack[] = {"usm_pack_alice"};
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
