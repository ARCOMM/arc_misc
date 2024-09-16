// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"CUP_U_B_GER_Flecktarn_2"};
	vest[] = {"CUP_V_B_GER_PVest_Fleck_RFL"};
	backpack[] = {"CUP_B_GER_Pack_Flecktarn"};
	headgear[] = {"CUP_H_Ger_M92_Cover"};
	goggles[] = {"CUP_G_PMC_Facewrap_Black_Glasses_Dark"};

	items[] = { MEDICAL_R };
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemRadio",
		"ItemWatch",
		"ItemGPS"
	};
};

class r : baseMan {
	displayName = "Rifleman";	
	primaryWeapon[] = {"hlc_rifle_G36V"};
	attachment[] = {"cup_acc_flashlight"};
	scope[] = {"cup_optic_aimpoint_5000"};
	items[] += {
		"ACE_EntrenchingTool",
		"ACE_Flashlight_XL50",
		"ACE_Canteen"
	};
	magazines[] = {
		LIST_11("CUP_30Rnd_556x45_G36"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"hlc_rifle_G36VAG36"};	
	magazines[] += {
		LIST_8("CUP_1Rnd_HEDP_M203"),
		LIST_8("CUP_FlareRed_M203"),
		LIST_5("CUP_1Rnd_Smoke_M203")
	};
};

class car : r {
	displayName = "Carabinier";
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	//backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] = { MEDICAL_M };
};

class ftl : g {
	displayName = "Fireteam Leader";
	uniform[] = {"CUP_U_B_GER_Flecktarn_6"};
	vest[] = {"CUP_V_B_GER_PVest_Fleck_TL"};
	headgear[] = {"CUP_H_Ger_M92_Cover_GG_CB"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Rangefinder"};
};

class sl : ftl {
	displayName = "Squad Leader";
	headgear[] = {"CUP_H_Ger_Beret_INF_Grn"};
};

class co : sl {
	displayName = "Platoon Leader";
	//grey beret or smthing?
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_lmg_MG3_rail"};
	//bipod[] = {"bipod_01_F_snd"};
	attachment[] = {"cup_acc_flashlight"};
	scope[] = {"cup_optic_aimpoint_5000"};
	magazines[] = {
		LIST_5("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		LIST_2("CUP_HandGrenade_M67"),
		LIST_2("SmokeShell")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpackItems[] = {
		LIST_3("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
		"ACE_SpareBarrel_Item"
	};
	linkedItems[] += {"Binocular"};
};

class rat : car {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_PzF3"};
};

class hmgg : car {
	displayName = "HMG Gunner";
	secondaryWeapon[] = {"CUP_m2_carry"};
	backPack[] = {"B_Carryall_wdl_F"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")		
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"B_Carryall_wdl_F"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")		
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
	backPack[] = {"B_Carryall_wdl_F"};
	backpackItems[] = {
		LIST_3("ace_csw_100Rnd_127x99_mag_red")		
	};	
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Rangefinder"};
};

class hatg : car {
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"CUP_TOW_carry"};
	backPack[] = {"B_Carryall_wdl_F"};
	backpackItems[] = {"CUP_compats_TOW_M"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"B_Carryall_wdl_F"};
	backpackItems[] = {"CUP_compats_TOW_M"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	secondaryWeapon[] = {"ace_csw_m220CarryTripod"};
	backPack[] = {"B_Carryall_wdl_F"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Rangefinder"};
	backpackItems[] = {"CUP_compats_TOW_M"};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	backpack[] = {"Redd_Tank_M120_Tampella_Barrel"};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	backpack[] = {"Redd_Tank_M120_Tampella_Tripod"};
	items[] += { 
		MTR_GEAR,
		"ACE_artilleryTable"
	};
	linkedItems[] += {"Rangefinder"};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_Clacker",
		"ACE_DefusalKit"
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
	vest[] = {"V_PlateCarrier3_rgr"};
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