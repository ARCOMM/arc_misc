// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/ARCOMM/arc_misc/tree/master/addons/tmf_loadouts

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_vest"};
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
    items[] = {MEDICAL_R};
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
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"H_HelmetB","H_HelmetSpecB"};
    primaryWeapon[] = {"arifle_MX_F"};
    scope[] = {"optic_Holosight"};
    attachment[] = {"acc_pointer_IR"};
    magazines[] =
    {
        LIST_9("30Rnd_65x39_caseless_mag"),
        LIST_2("30Rnd_65x39_caseless_mag_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_MX_GL_F"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"arifle_MXC_F"};
};
class cls : car
{
	displayName = "Combat Life Saver";
	traits[] = {"medic"};
	backpack[] = {"B_AssaultPack_mcamo"};
	backpackItems[] =
	{
		MEDICAL_CLS
	};
};
class m : cls
{
    displayName = "Medic";
	backpack[] = {"B_Carryall_mcamo"};
	backpackItems[] =
	{
		MEDICAL_M
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_01_F"};
    magazines[] =
    {
        LIST_10("30Rnd_45ACP_Mag_SMG_01"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    magazines[] +=
    {
        LIST_4("11Rnd_45ACP_Mag")
    };
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
class co : sl
{
    displayName = "Platoon Leader";
	headgear[] = {"H_MilCap_mcamo"};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpack[] = {"B_Kitbag_mcamo"};
	linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Laserdesignator",
        "ItemGPS"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"arifle_MX_SW_F"};
    bipod[] = {"bipod_01_F_snd"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    magazines[] =
    {
        LIST_6("100Rnd_65x39_caseless_mag"),
        LIST_2("100Rnd_65x39_caseless_mag_Tracer"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("100Rnd_65x39_caseless_mag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"srifle_DMR_03_tan_F"};
    scope[] = {"optic_MRCO"};
    bipod[] = {"bipod_01_F_snd"};
    magazines[] =
    {
        LIST_11("20Rnd_762x51_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"MMG_02_sand_F"};
    scope[] = {"optic_MRCO"};
    magazines[] =
    {
        LIST_4("130Rnd_338_Mag"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("130Rnd_338_Mag")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"B_HMG_01_weapon_F"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"B_HMG_01_weapon_F"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
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
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"B_FieldPack_khk"};
    secondaryWeapon[] = {"launch_MRAWS_sand_F"};
    magazines[] +=
    {
        LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] =
    {
        LIST_3("MRAWS_HEAT_F"),
		LIST_2("MRAWS_HE_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"B_FieldPack_khk"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"B_AT_01_weapon_F"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_AT_01_weapon_F"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
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
class mtrg : car
{
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
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
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
class samg : car
{
    displayName = "AA Missile Specialist";
	backpack[] = {"B_Carryall_mcamo"};
    secondaryWeapon[] = {"launch_B_Titan_F"};
    magazines[] +=
    {
        LIST_3("Titan_AA")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_mcamo"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("Titan_AA")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"U_B_GhillieSuit"};
    vest[] = {"V_Chestrig_rgr"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_LRR_F"};
    scope[] = {"optic_SOS"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    magazines[] =
    {
        LIST_7("7Rnd_408_Mag"),
        LIST_2("HandGrenade"),
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class sp : g
{
    displayName = "Spotter";
    scope[] = {"optic_MRCO"};
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
class vg : smg
{
    displayName = "Vehicle Crew";
    uniform[] = {"U_B_CombatUniform_mcam_vest"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_B"};
	magazines[] =
	{
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
        "SmokeShellPurple"
	};
};
class vc : vg
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : vg
{
    displayName = "Vehicle Driver";
	traits[] = {"engineer"};
    backpack[] = {"B_AssaultPack_mcamo"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
	magazines[] =
	{
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
        "SmokeShellPurple"
	};
};
class pp : pc
{
    displayName = "Helicopter Pilot";
    linkedItems[] += {"ItemGPS"};
};
class pcc : pc
{
    displayName = "Helicopter Crew Chief";
	traits[] = {"engineer"};
    backpack[] = {"B_AssaultPack_mcamo"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class jp : smg
{
    displayName = "Jet pilot";
	traits[] = {"engineer"};
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
	magazines[] =
	{
		LIST_6("30Rnd_45ACP_Mag_SMG_01"),
        "SmokeShellPurple"
	};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_rgr"};
    vest[] = {"V_PlateCarrier3_rgr"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	traits[] = {"engineer", "explosiveSpecialist"};
	backpack[] = {"B_Kitbag_rgr"};
    vest[] = {"V_PlateCarrier3_rgr"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
	traits[] = {"UAVHacker"};
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};
