// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts
/*
	Dependencies:
	* CUP Units
	* CUP Weapons
*/

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {
		"CUP_U_O_RUS_M88_MSV",
		"CUP_U_O_RUS_M88_MSV_rolled_up"
	};
	vest[] = {"CUP_V_O_SLA_Carrier_Belt"};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	// Leave empty to remove all. "Default" > leave original item.
	faces[] = {"faceset:russian"};
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
	items[] = { MEDICAL_R };
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
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
		"CUP_H_RUS_SSH68_olive",
		"CUP_H_RUS_SSH68_green"
	};
	primaryWeapon[] = {"CUP_arifle_AKM_Early"};
	magazines[] = {
		LIST_5("CUP_30Rnd_762x39_AK47_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	code = "                                              \
		if (sunOrMoon != 1) then {                        \
			_this addPrimaryWeaponItem 'acc_flashlight';  \
		};                                                \
	";
};

class g : r {
	displayName = "Grenadier";
	primaryWeapon[] = {"CUP_arifle_AKM_GL_Early"};
	vest[] = {"CUP_V_O_SLA_Carrier_Belt03"};
	magazines[] += {
		LIST_4("CUP_1Rnd_HE_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_AKS"};
	vest[] = {"CUP_V_O_SLA_Carrier_Belt02"};
};

class cls : car {
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"B_FieldPack_cbr"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	vest[] = {"CUP_V_O_SLA_Carrier_Belt02"};
	primaryWeapon[] = {"CUP_smg_SA61"};
	magazines[] = {
		LIST_5("CUP_20Rnd_B_765x17_Ball_M"),
		"HandGrenade",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	items[] += {"ACE_MapTools"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M")
	};
	linkedItems[] += {"Binocular"};
	code = "                                              \
		if (sunOrMoon != 1) then {                        \
			_this addPrimaryWeaponItem 'acc_flashlight';  \
			_this addMagazine 'CUP_IlumFlareRed_GP25_M';  \
			_this addMagazine 'CUP_IlumFlareRed_GP25_M';  \
		};                                                \
	";
};

class sl : ftl {
	displayName = "Squad Leader";
	backpack[] = {"CUP_B_SLA_Medicbag"};
	sidearmWeapon[] = {"CUP_hgun_Makarov"};
	magazines[] += {
		LIST_2("CUP_8Rnd_9x18_Makarov_M")
	};
};

class slr : sl {
	displayName = "Squad Leader (Radio)";
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_RUS_Beret_Spetsnaz"};
};

class cor : co {
	displayName = "Platoon Leader (Radio)";
	radio[] = {"CUP_B_Kombat_Radio_Olive"};
};

class fac : sl {
	displayName = "Forward Air Controller";
	backpack[] = {"CUP_B_Kombat_Radio_Olive"};
	backpackItems[] = { FAC_GEAR };
	linkedItems[] += {"Laserdesignator"};
};

class ar : r {
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	magazines[] = {
		LIST_5("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {
		LIST_4("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG18"};
};

class dm : r {
	displayName = "Designated Marksman";
	headgear[] = {"H_Booniehat_tan"};
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1_open"};
	magazines[] = {
		LIST_8("CUP_10Rnd_762x54_SVD_M"),
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_PKM"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	magazines[] = {
		LIST_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M")
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	vest[] = {"CUP_V_O_SLA_Carrier_Belt02"};
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	vest[] = {"CUP_V_O_SLA_Carrier_Belt02"};
	backpack[] = {"B_FieldPack_cbr"};
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"),
		"ACE_EntrenchingTool"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {"CUP_B_DShkM_Gun_Bag"};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {"CUP_B_DShkM_TripodHigh_Bag"};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {"CUP_B_DShkM_TripodLow_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v"};
	magazines[] += {
		LIST_3("CUP_PG7VM_M")
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	backpackItems[] = {
		LIST_3("CUP_PG7VM_M")
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {"Binocular"};
	backpackItems[] = {
		LIST_3("CUP_PG7VM_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_SPG9_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_SPG9_Gun_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_SPG9_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"Binocular"
	};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {"B_Carryall_cbr"};
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
	backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {
		LIST_4("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};

	linkedItems[] = {
		"Binocular"
	};
};

class samg : r {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};

class samag : r {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_9K32Strela"};
	linkedItems[] += {
		"Binocular"
	};
};

class sn : dm {
	displayName = "Sniper";
	uniform[] = {"CUP_U_O_TK_Ghillie_Top"};
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Light"};
	headgear[] = {};
	sidearmWeapon[] = {"CUP_hgun_PB6P9"};
	sidearmAttachments[] = {"cup_muzzle_pb6p9"};
	magazines[] = {
		LIST_8("10Rnd_762x54_Mag"),
		LIST_2("CUP_HandGrenade_RGD5"),
		LIST_4("CUP_8Rnd_9x18_MakarovSD_M")
	};
	code = "                                              \
		if (sunOrMoon != 1) then {                        \
			_this addPrimaryWeaponItem 'cup_optic_nspu';  \
		};                                                \
	";
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {"CUP_U_O_TK_Ghillie_Top"};
	headgear[] = {};
	silencer[] = {"cup_muzzle_bizon"};
	items[] += {
		"ACE_MapTools",
		"ACE_RangeCard"
	};
	linkedItems[] += {
		"Laserdesignator"
	};
};

class vg : smg {
	displayName = "Vehicle Gunner";
	headgear[] = {"CUP_H_TK_TankerHelmet"};
	magazines[] = {
		LIST_3("CUP_20Rnd_B_765x17_Ball_M"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	linkedItems[] += {"Binocular"};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	headgear[] = {"CUP_H_TK_PilotHelmet"};
	items[] += {"ACE_MapTools"};
	magazines[] = {
		LIST_3("CUP_20Rnd_B_765x17_Ball_M"),
		"SmokeShellPurple"
	};
};

class hp : hc {
	displayName = "Helicopter Pilot";
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
	backpackItems[] = {"ToolKit"};
};

class jp : smg {
	displayName = "Jet pilot";
	traits[] = {"engineer"};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	magazines[] = {
		LIST_3("CUP_20Rnd_B_765x17_Ball_M"),
		"SmokeShellPurple"
	};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Carryall_cbr"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_wirecutter",
		"ACE_Clacker",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_3("DemoCharge_Remote_Mag"),
		LIST_2("ClaymoreDirectionalMine_Remote_Mag"),
		"SatchelCharge_Remote_Mag"
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Carryall_cbr"};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
	backpackItems[] = {
		LIST_8("APERSMine_Range_Mag"),
		LIST_3("CUP_MineE_M")
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	linkedItems[] += {"O_UavTerminal"};
};
