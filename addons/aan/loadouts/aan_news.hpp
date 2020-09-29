// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*
	Dependencies:
	Laws of War DLC
	Pack Press
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"U_C_Journalist"};
	vest[] = {};
	backpack[] = {};
	headgear[] = {"H_Cap_press"};
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
		"ACE_Cellphone",
		"ACE_WaterBottle"
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

class j : baseMan {
	displayName = "Journalist";
	sidearmWeapon[] = {"Xnooz_micro1"};
};

class cj : j {
	displayName = "Combat Journalist";
	vest[] = {"V_Press_F"};
	headgear[] = {
		"H_PASGT_basic_blue_press_F",
		"H_PASGT_neckprot_blue_press_F"
	};
};

class r : baseMan {
	displayName = "Reporter";
	sidearmWeapon[] = {"Xnooz_micro2"};
};

class cr : r {
	displayName = "Combat Reporter";
	vest[] = {"V_Press_F"};
	headgear[] = {
		"H_PASGT_basic_blue_press_F",
		"H_PASGT_neckprot_blue_press_F"
	};
};

class c : baseMan {
	displayName = "Camera Man";
	backpack[] = {"B_RadioBag_01_black_F"};
	secondaryWeapon[] = {"XZ_CamRecorder_1"};
	magazines[] += {LIST_2("XZ_CamRecorder_Mag")};

	#ifdef ADDON
		code = QUOTE([] remoteExecCall [ARR_3(QQFUNC(init),0,'ADDON')]);
	#else
		code = "[] remoteExecCall ['arc_misc_aan_fnc_init',0,'arc_misc_aan']";
	#endif
};

class cc : c {
	displayName = "Combat Camera Man";
	vest[] = {"V_Press_F"};
	headgear[] = {
		"H_PASGT_basic_blue_press_F",
		"H_PASGT_neckprot_blue_press_F"
	};
};

class p : baseMan {
	displayName = "Photographer";
	sidearmWeapon[] = {"Xnooz_AppareilPhoto"};
};

class cp : c {
	displayName = "Combat Photographer";
	vest[] = {"V_Press_F"};
	headgear[] = {
		"H_PASGT_basic_blue_press_F",
		"H_PASGT_neckprot_blue_press_F"
	};
};
