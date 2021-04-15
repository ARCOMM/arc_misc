// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

/*
	Dependencies:
		* CUP Units
		* CUP Weapons
		* Wearable Antennas
		* Community Factions Project

	Note:
		This loadout functions as a template for several different camos.
		Camos and weapons can be configured through the use of:
			#define UNI_CAMO
			#define VEST_CAMO
			#define HELMET_CAMO
			#define BACKPACK_CAMO
			#define IS_WINTER
			#define GHILLIE_CLASS
			#define USE_AK12

		For camos, valid options are:
			* Summer (Leave undefined for vests)
			* Autumn (Not available for vests)
			* Winter (Not available for vests)
			* BeigeDigital
			* Desert
			* Pink (Not available for vests)
			* Green (Only for backpacks)

		IS_WINTER defines whether to use winter balaclavas,
		and which backpacks to use.
		Leave undefined when not winter

		GHILLIE_CLASS can be defined as any uniform, such as
		#define GHILLIE_CLASS "U_B_FullGhillie_lsh"

		Defining USE_AK12 makes changes the rifles to AK12s instead of AK74s,
		Note that this requires the Contact Expansion

		See CfgLoadouts for usage examples
*/

// References: https://www.battleorder.org/rus-btr-co , https://www.youtube.com/watch?v=6E2oIZ7dayc

//	Created by: Freddo, AChesheireCat

#ifndef UNI_CAMO
	#define UNI_CAMO Summer
#endif

#ifdef VEST_CAMO
	#define VEST_CLASS(var1) QUOTE(DOUBLES(var1,VEST_CAMO))
#else
	#define VEST_CLASS(var1) QUOTE(var1)
#endif

#ifndef HELMET_CAMO
	#define HELMET_CAMO UNI_CAMO
#endif
#define HELMET_CLASS(var1) QUOTE(DOUBLES(var1,HELMET_CAMO))

#ifndef BACKPACK_CAMO
	#define BACKPACK_CAMO UNI_CAMO
#endif
#define BACKPACK_CLASS(var1) QUOTE(DOUBLES(var1,BACKPACK_CAMO))
#ifdef IS_WINTER
	#define BACKPACK_SHOVEL_CLASS(var1) BACKPACK_CLASS(var1)
	#define BALACLAVAS "CUP_G_RUS_Balaclava_Ratnik_winter", "CUP_G_RUS_Balaclava_Ratnik_winter_v2"
#else
	#define BACKPACK_SHOVEL_CLASS(var1) QUOTE(TRIPLES(var1,BACKPACK_CAMO,Shovel))
	#define BALACLAVAS "CUP_G_RUS_Balaclava_Ratnik", "CUP_G_RUS_Balaclava_Ratnik_v2"
#endif

#ifndef GHILLIE_CLASS
	#define GHILLIE_CLASS "U_B_FullGhillie_lsh"
#endif

#ifdef USE_AK12
	#define RIFLE "arc_misc_weapons_ak12"
	#define RIFLE_GL "arc_misc_weapons_ak12_GL"
	#define CARBINE "arc_misc_weapons_ak12k"
	#define RPK "arc_misc_weapons_rpk16"
	#define SMG "CUP_arifle_SR3M_Vikhr_VFG_top_rail"
	#define ATTACHMENTS "cup_optic_ac11704_black", "cup_optic_1p87_ris"
#else
	// Mixing RIS and non-RIS to mix in some iron sights
	#define RIFLE "CUP_arifle_AK74M", "CUP_arifle_AK74M_top_rail"
	#define RIFLE_GL "CUP_arifle_AK74M_GL", "CUP_arifle_AK74M_GL_top_rail"
	#define CARBINE "CUP_arifle_AK105", "CUP_arifle_AK105_top_rail"
	#define RPK "CUP_arifle_RPK74M", "CUP_arifle_RPK74M_top_rail"
	#define SMG "CUP_arifle_SR3M_Vikhr_VFG", "CUP_arifle_SR3M_Vikhr_VFG_top_rail"
	#define ATTACHMENTS "cup_optic_ekp_8_02", "cup_optic_1p63", "cup_optic_kobra", "cup_optic_ac11704_black", "cup_optic_1p87_ris"
#endif

#ifndef DOUBLES
	#define DOUBLES(var1,var2) var1##_##var2
#endif
#ifndef TRIPLES
	#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#endif
#ifndef QUOTE
	#define QUOTE(x) #x
#endif

class baseMan {
	displayName = "Unarmed";
	uniform[] = {QUOTE(DOUBLES(CUP_U_O_RUS_Ratnik,UNI_CAMO))};
	vest[] = {VEST_CLASS(CUP_Vest_RUS_6B45_Sh117)};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"default"};
	hmd[] = {};
	faces[] = {
		"default",
		"faceset:russian"
	};
	insignias[] = {};

	primaryWeapon[] = {};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};

	secondaryWeapon[] = {};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {};
	sidearmAttachments[] = {};

	magazines[] = {};
	items[] = {
		MEDICAL_R ,
		"ACE_Flashlight_KSF1",
		"Chemlight_red"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"ItemGPS"
	};

	backpackItems[] = {};

	traits[] = {};

	code = "";
};

class r : baseMan {
	displayName = "Rifleman";
	hmd[] = {"CUP_NVG_PVS14"};
	goggles[] = { BALACLAVAS };
	vest[] = {VEST_CLASS(CUP_Vest_RUS_6B45_Sh117)};
	headgear[] = {
		HELMET_CLASS(CUP_H_RUS_6B47_v2),
		HELMET_CLASS(CUP_H_RUS_6B47_v2_GogglesClosed),
		HELMET_CLASS(CUP_H_RUS_6B47_v2_GogglesDown),
		HELMET_CLASS(CUP_H_RUS_6B47_v2_GogglesUp)
	};
	primaryWeapon[] = {
		RIFLE
	};
	scope[] = {
		ATTACHMENTS
	};
	attachment[] = {"cup_acc_flashlight"};
	magazines[] = {
		LIST_8("CUP_30Rnd_545x39_AK74_plum_M"),
		LIST_2("CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M"),
		LIST_2("CUP_HandGrenade_RGO"),
		LIST_2("SmokeShell")
	};
};

class g : r {
	displayName = "Grenadier";
	vest[] = {VEST_CLASS(CUP_Vest_RUS_6B45_Sh117_VOG)};
	primaryWeapon[] = {
		RIFLE_GL
	};
	magazines[] += {
		LIST_10("CUP_1Rnd_HE_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M"),
		LIST_2("CUP_IlumFlareRed_GP25_M")
	};
};

class car : r {
	displayName = "Carabinier";
	primaryWeapon[] = { CARBINE };
};

class cls : car {
	displayName = "Combat Life Saver";
	backpack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	traits[] = {"medic"};
	backpackItems[] = { MEDICAL_CLS };
};

class m : cls {
	displayName = "Medic";
	backpackItems[] = { MEDICAL_M };
};

class smg : r {
	displayName = "Submachinegunner";
	primaryWeapon[] = { SMG };
	magazines[] = {
		LIST_8("CUP_30Rnd_9x39_SP5_VIKHR_M"),
		"CUP_HandGrenade_RGO",
		"SmokeShell"
	};
};

class ftl : g {
	displayName = "Fireteam Leader";
	backPack[] = {"CUP_B_SLA_Medicbag"};
	magazines[] += {
		LIST_2("CUP_1Rnd_SmokeGreen_GP25_M"),
		LIST_2("CUP_1Rnd_SmokeRed_GP25_M"),
		LIST_2("CUP_1Rnd_SMOKE_GP25_M")
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"Binocular"};
};

class sl : r {
	displayName = "Squad Leader";
	backPack[] = {"CUP_B_SLA_Medicbag"};
	sidearmWeapon[] = {"hgun_Rook40_F"};
	magazines[] += {
		LIST_3("16Rnd_9x21_Mag"),
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellGreen"),
		LIST_5("ACE_Chemlight_HiRed")
	};
	items[] += {"ACE_MapTools", "ACE_microDAGR"};
	linkedItems[] += {
		"ACE_Yardage450"
	};
};

class co : sl {
	displayName = "Platoon Leader";
	headgear[] = {"CUP_H_RUS_Bandana_GSSh_Headphones"};
	goggles[] = {"default"};
};

class fac : ftl {
	displayName = "Forward Air Controller";
	headgear[] = {"CUP_H_RUS_Bandana_GSSh_Headphones"};
	goggles[] = {"antenna_long_two_face"};
	backpack[] = {BACKPACK_SHOVEL_CLASS(CUP_O_RUS_Patrol_bag)};
	backpackItems[] = {
		FAC_GEAR
	};
	magazines[] += {
		"Laserbatteries"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"CUP_SOFLAM",
		"ItemRadio",
		"ItemGPS"
	};
};

class ar : r {
	displayName = "Automatic Rifleman";
	backpack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	primaryWeapon[] = {
		RPK
	};
	magazines[] = {
		LIST_8("CUP_60Rnd_545x39_AK74M_M"),
		LIST_2("CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M"),
		"CUP_HandGrenade_RGO",
		"SmokeShell"
	};
};

class aar : r {
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {BACKPACK_SHOVEL_CLASS(CUP_O_RUS_Patrol_bag)};
	backpackItems[] = {
		LIST_8("CUP_60Rnd_545x39_AK74M_M"),
		LIST_2("CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M"),
		"ACE_EntrenchingTool"
	};
	linkedItems[] += {"Binocular"};
};

class rat : r {
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"CUP_launch_RPG26"};
};

class dm : r {
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_SVD"};
	scope[] = {"cup_optic_pso_1_open"};
	magazines[] = {
		LIST_10("10Rnd_762x54_Mag"),
		LIST_4("ACE_10Rnd_762x54_Tracer_mag"),
		"CUP_HandGrenade_RGO",
		"SmokeShell"
	};
};

class mmgg : ar {
	displayName = "MMG Gunner";
	vest[] = {VEST_CLASS(CUP_Vest_RUS_6B45_Sh117_PKP)};
	primaryWeapon[] = {
		"CUP_lmg_Pecheneg_B50_vfg"
	};
	scope[] = {"cup_optic_pechenegscope"};
	sidearmWeapon[] = {"hgun_Rook40_F"};
	magazines[] = {
		LIST_7("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		LIST_3("16Rnd_9x21_green_Mag"),
		"CUP_HandGrenade_RGO",
		"SmokeShell"
	};
};

class mmgac : r {
	displayName = "MMG Ammo Carrier";
	backpack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};

class mmgtl : aar {
	displayName = "MMG Team Leader";
	backpackItems[] = {
		LIST_6("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Yardage450",
		"ItemRadio",
		"ItemGPS"
	};
};

class hmgg : car {
	displayName = "HMG Gunner";
	backPack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	secondaryWeapon[] = {"CUP_KORD_carry"};
	backpackItems[] = {
		LIST_5("ace_csw_50Rnd_127x108_mag")
	};
};

class hmgac : r {
	displayName = "HMG Ammo Carrier";
	backPack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
	backpackItems[] = {
		LIST_4("ace_csw_50Rnd_127x108_mag")
	};
};

class hmgtl : car {
	displayName = "HMG Team Leader";
	backPack[] = {BACKPACK_SHOVEL_CLASS(CUP_O_RUS_Patrol_bag)};
	secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
	backpackItems[] = {
		LIST_4("ace_csw_50Rnd_127x108_mag"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector"
	};
};

class gmgg : car {
	displayName = "GMG Gunner";
	backPack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	secondaryWeapon[] = {"CUP_AGS30_carry"};
	backpackItems[] = {
		LIST_7("CUP_compats_29Rnd_30mm_AGS30_M")
	};
};

class gmgac : r {
	displayName = "GMG Ammo Carrier";
	backPack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	secondaryWeapon[] = {"ace_csw_sag30CarryTripod"};
	backpackItems[] = {
		LIST_7("CUP_compats_29Rnd_30mm_AGS30_M")
	};
};

class gmgtl : car {
	displayName = "GMG Team Leader";
	backPack[] = {BACKPACK_SHOVEL_CLASS(CUP_O_RUS_Patrol_bag)};
	secondaryWeapon[] = {"ace_csw_sag30CarryTripod"};
	backpackItems[] = {
		LIST_7("CUP_compats_29Rnd_30mm_AGS30_M"),
		"ACE_EntrenchingTool"
	};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Vector"
	};
};

class matg : car {
	displayName = "MAT Gunner";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	secondaryWeapon[] = {"CUP_launch_RPG7V"};
	secondaryAttachments[] = {"cup_optic_pgo7v3"};
	magazines[] += {
		"CUP_PG7VR_M",
		"CUP_PG7VL_M"
	};
};

class matac : r {
	displayName = "MAT Ammo Carrier";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	backpackItems[] = {
		"CUP_PG7VR_M",
		"CUP_PG7VL_M"
	};
};

class mattl : car {
	displayName = "MAT Team Leader";
	backpack[] = {"CUP_B_RPGPack_Khaki"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {
		"ACE_Yardage450"
	};
	backpackItems[] = {
		"CUP_PG7VL_M",
		LIST_2("CUP_OG7_M")
	};
};

class hatg : car {
	displayName = "HAT Gunner";
	backPack[] = {"CUP_B_Kornet_Gun_Bag"};
};

class hatac : r {
	displayName = "HAT Ammo Carrier";
	backPack[] = {"CUP_B_Kornet_Tripod_Bag"};
};

class hattl : car {
	displayName = "HAT Team Leader";
	backPack[] = {"CUP_B_Kornet_Tripod_Bag"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"ACE_Vector"};
};

class mtrg : car {
	displayName = "Mortar Gunner";
	secondaryWeapon[] = {"CUP_2b14_carry"};
	backPack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	backpackItems[] = {
		LIST_3("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
};

class mtrac : r {
	displayName = "Mortar Ammo Carrier";
	backPack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	backpackItems[] = {
		LIST_5("ACE_1Rnd_82mm_Mo_HE")
	};
};

class mtrtl : car {
	displayName = "Mortar Team Leader";
	secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
	items[] += { MTR_GEAR };
	backPack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	backpackItems[] = {
		LIST_3("ACE_1Rnd_82mm_Mo_HE"),
		"ACE_1Rnd_82mm_Mo_Illum",
		"ACE_1Rnd_82mm_Mo_Smoke"
	};
	linkedItems[] += {"ACE_Vector"};
};

class samg : car {
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
};

class samag : car {
	displayName = "AA Assistant Missile Specialist";
	secondaryWeapon[] = {"CUP_launch_Igla"};
	linkedItems[] += {"Binocular"};
};

class sn : r {
	displayName = "Sniper";
	uniform[] = {GHILLIE_CLASS};
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	headgear[] = {"CUP_H_RUS_Bandana_GSSh_Headphones"};
	primaryWeapon[] = {"CUP_srifle_ksvk"};
	scope[] = {"cup_optic_pso_3_open"};
	sidearmWeapon[] = {"hgun_Rook40_F"};
	sidearmAttachments[] = {"muzzle_snds_l"};
	magazines[] = {
		LIST_6("CUP_5Rnd_127x108_KSVK_M"),
		"SmokeShellGreen",
		"SmokeShell",
		LIST_3("16Rnd_9x21_green_Mag")
	};
};

class sp : g {
	displayName = "Spotter";
	uniform[] = {GHILLIE_CLASS};
	vest[] = {"CUP_V_O_Ins_Carrier_Rig_Com"};
	headgear[] = {"CUP_H_RUS_Bandana_GSSh_Headphones"};
	backpack[] = {BACKPACK_CLASS(CUP_O_RUS_Patrol_bag)};
	silencer[] = {
		#ifndef USE_AK12
			"cup_muzzle_snds_kzrzp_ak545"
		#else
			"muzzle_snds_b"
		#endif
	};
	items[] += {"ACE_MapTools"};
	backpackItems[] = {
		LIST_4("CUP_5Rnd_127x108_KSVK_M"),
		"ACE_SpottingScope",
		"ACRE_VHF30108SPIKE",
		"Laserbatteries",
		"ACE_ATragMX",
		"ACE_Tripod"
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"CUP_SOFLAM",
		"O_UavTerminal"
	};
};

class vg : car {
	displayName = "Vehicle Gunner";
	goggles[] = {"default"};
	vest[] = {"CUP_V_B_PASGT_no_bags_OD"};
	headgear[] = {"H_HelmetCrew_I"};
	primaryWeapon[] = {};
	sidearmWeapon[] = {"hgun_Rook40_F"};
	magazines[] = {
		LIST_3("16Rnd_9x21_Mag"),
		"SmokeShellPurple"
	};
};

class vc : vg {
	displayName = "Vehicle Commander";
	primaryWeapon[] = { CARBINE };
	magazines[] += {
		LIST_3("CUP_30Rnd_545x39_AK74M_M")
	};
	items[] += {"ACE_microDAGR"};
	linkedItems[] += {
		"Binocular"
	};
};

class vd : vg {
	displayName = "Vehicle Driver";
	traits[] = {"engineer"};
	backpack[] = {"CUP_B_SLA_Medicbag"};
	backpackItems[] = {"ToolKit"};
};

class hc : smg {
	displayName = "Helicopter Crew";
	goggles[] = {"default"};
	headgear[] = {
		"CUP_H_RUS_ZSH_Shield_Down",
		"CUP_H_RUS_ZSH_Shield_Up"
	};
	uniform[] = {"CUP_U_O_SLA_Overalls_Pilot"};
	vest[] = {"CUP_V_RUS_6B45_1"};
	backPack[] = {};
	magazines[] = {
		LIST_3("CUP_20Rnd_9x39_SP5_VSS_M"),
		"SmokeShellPurple"
	};
	items[] += {"ACE_MapTools"};
};

class hp : hc {
	displayName = "Helicopter Pilot";
	backPack[] = {};
	backpackItems[] = {};
};

class hcc : hc {
	displayName = "Helicopter Crew Chief";
	backpack[] = {"CUP_B_SLA_Medicbag"};
	traits[] = {"engineer"};
	backpackItems[] = {"ToolKit"};
};

class jp : baseMan {
	displayName = "Jet pilot";
	hmd[] = {};
	goggles[] = {"default"};
	headgear[] = {"CUP_H_RUS_ZSH_Shield_Down"};
	uniform[] = {"CUP_U_B_USMC_PilotOverall"};
	vest[] = {"CUP_V_RUS_6B45_1"};
	backpack[] = {"ACE_NonSteerableParachute"};
	sidearmWeapon[] = {"hgun_Rook40_F"};
	magazines[] += {
		"SmokeShellPurple",
		LIST_3("16Rnd_9x21_green_Mag")
	};
	traits[] = {"engineer"};
};

class eng : car {
	displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	vest[] = {VEST_CLASS(CUP_Vest_RUS_6B45_Sh117)};
	backpack[] = {BACKPACK_SHOVEL_CLASS(CUP_O_RUS_Patrol_bag)};
	sidearmWeapon[] = {"ACE_VMH3"};
	items[] += {"ACE_Clacker"};
	backpackItems[] = {
		"ToolKit",
		LIST_3("DemoCharge_Remote_Mag"),
		LIST_2("SLAMDirectionalMine_Wire_Mag"),
		"SatchelCharge_Remote_Mag",
		"ACE_DefusalKit",
		"ACE_EntrenchingTool"
	};
};

class engm : car {
	displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	vest[] = {VEST_CLASS(CUP_Vest_RUS_6B45_Sh117)};
	backpack[] = {BACKPACK_SHOVEL_CLASS(CUP_O_RUS_Patrol_bag)};
	sidearmWeapon[] = {"ACE_VMM3"};
	items[] += {
		"ACE_DefusalKit",
		"ACE_EntrenchingTool",
		"ACE_Clacker"
	};
	backpackItems[] = {
		"ToolKit",
		LIST_4("APERSBoundingMine_Range_Mag"),
		LIST_2("APERSTripMine_Wire_Mag"),
		LIST_2("ACE_FlareTripMine_Mag"),
		LIST_2("ClaymoreDirectionalMine_Remote_Mag")
	};
};

class UAV : car {
	displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
	backpack[] = {"O_UAV_01_backpack_F"};
	linkedItems[] += {"O_UavTerminal"};
};

#undef UNI_CAMO
#ifdef VEST_CAMO
	#undef VEST_CAMO
#endif
#undef VEST_CLASS
#undef HELMET_CAMO
#undef HELMET_CLASS
#undef BACKPACK_CAMO
#undef BACKPACK_CLASS
#undef BACKPACK_SHOVEL_CLASS
#ifdef IS_WINTER
	#undef IS_WINTER
#endif
#undef BALACLAVAS
#undef GHILLIE_CLASS
#ifdef USE_AK12
	#undef USE_AK12
#endif
#undef RIFLE
#undef RIFLE_GL
#undef CARBINE
#undef RPK
#undef SMG
#undef ATTACHMENTS
