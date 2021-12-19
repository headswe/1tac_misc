tooltip = "Author: Käsmeister.\n\nRegular Taliban fighters from the 2021 Taliban offensive period. Armed with M4s and AKs.\n\nThey drive Humvees and pickup trucks.";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"CUP_O_TKI_Khet_Partug_04","CUP_O_TKI_Khet_Partug_02","CUP_O_TKI_Khet_Partug_02","CUP_O_TKI_Khet_Partug_07","CUP_O_TKI_Khet_Partug_08","CUP_O_TKI_Khet_Partug_05","CUP_O_TKI_Khet_Partug_06"};
   	vest[] = {"CUP_V_MBSS_PACA_Tan","CUP_V_MBSS_PACA_Black","bear_lbt_light_tan","bear_lbt_operator_tan"};
   	backpack[] = {"B_AssaultPack_khk"};
   	headgear[] = {"rhssaf_bandana_smb","H_Bandanna_khk","CUP_H_USA_Cap_M81","CUP_H_TK_Lungee","CUP_H_TKI_Lungee_Open_01","CUP_H_TKI_Lungee_Open_02","CUP_H_TKI_Lungee_Open_03","CUP_H_TKI_Lungee_Open_04","CUP_H_TKI_Lungee_Open_05","CUP_H_TKI_Lungee_Open_06","CUP_H_TKI_Lungee_01","CUP_H_TKI_Lungee_02","CUP_H_TKI_Lungee_03","CUP_H_TKI_Lungee_03","CUP_H_TKI_Lungee_04","CUP_H_TKI_Lungee_05","CUP_H_TKI_Lungee_06","CUP_H_TKI_Pakol_1_01","CUP_H_TKI_Pakol_2_03"};
   	goggles[] = {"CUP_FR_NeckScarf2","CUP_FR_NeckScarf","bear_balaclava1_black","CUP_G_Tan_Scarf_Shades_Beard","CUP_G_Scarf_Face_Blk","CUP_G_Scarf_Face_Tan","CUP_G_Grn_Scarf_Shades_Beard","rhsusf_shemagh2_tan","UK3CB_BAF_G_Tactical_Black"};
   	hmd[] = {};
    faces[] = {"faceset:persian"};

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
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

	// These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
	radios[] = {};
};
class r : baseMan
{
    displayName = "Rifleman (AK)";
    primaryWeapon[] = {"rhs_weap_akm","rhs_weap_akms","rhs_weap_pm63"};
	secondaryWeapon[] = {};
    scope[] = {};
    silencer[] = {"rhs_acc_dtkakm"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_762x39mm_89"),
		LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_akm_gp25","rhs_weap_akms_gp25"};
	vest[] = {"lbt_weapons_coy"};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_762x39mm_89"),
		LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_f1",
		LIST_1("rhs_mag_rdg2_white"),
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Rifleman (M4)";
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    scope[] = {};
    bipod[] = {"rhsusf_acc_kac_grip"};
    silencer[] = {};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class m : car
{
    displayName = "Medic";
	vest[] = {"bear_lbt_medical_coy_patch"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_Splint"),
        LIST_1("ACE_surgicalKit"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class smg : r
{
    displayName = "Rifleman (M4+ACOG)";
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
	scope[] = {"rhsusf_acc_acog"};
	attachment[] = {""};
	bipod[] = {"rhsusf_acc_kac_grip",""};
    silencer[] = {};
	magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"lbt_tl_coy"};
    magazines[] +=
    {
		LIST_4("rhs_GRD40_White")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : smg
{
    displayName = "Scout";
	backpackItems[] = {};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	items[] = {
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"rhs_weap_pkm"};
	scope[] = {""};
	bipod[] = {""};
	magazines[] =
	{
		LIST_3("rhs_100Rnd_762x54mmR"),
		LIST_1("rhs_100Rnd_762x54mmR_green"),
		"rhs_mag_f1",
		LIST_2("rhs_mag_rdg2_white")
	};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
		LIST_1("rhs_100Rnd_762x54mmR_green")
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
	backPack[] = {"rhs_rpg_empty"};
	backPackItems[] =
	{
        LIST_3("rhs_rpg7_PG7V_mag")
	};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"40th_weap_svd_wood"};
	scope[] = {"rhs_acc_pso1m2"};
	magazines[] =
	{
		LIST_7("rhs_10Rnd_762x54mmR_7n1"),
		LIST_2("rhs_mag_f1"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m240B"};
	scope[] = {};
	magazines[] =
	{
		LIST_2("rhsusf_100Rnd_762x51"),
		LIST_1("rhsusf_100Rnd_762x51_M62_tracer")
	};
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
		LIST_1("rhsusf_100Rnd_762x51_M62_tracer")
    };
};
class mmgag : car
{
	displayName = "MMG Assistant Gunner";
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("rhsusf_100Rnd_762x51")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Tripod_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_M2_Tripod_Bag"};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_rdg2_white")
    };
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class matg : rat
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v"};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_rpg_empty"};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"rhs_rpg_empty"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class hatg : matg
{
    displayName = "HAT Gunner";
    secondaryAttachments[] = {"rhs_acc_pgo7v"};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class hatac : matac
{
	displayName = "HAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class hatag : matag
{
	displayName = "HAT Assistant Gunner";
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        "rhs_mag_9k38_rocket"
    };
    backpackItems[] =
    {
	"rhs_mag_9k38_rocket"
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
	"rhs_mag_9k38_rocket"
    };
};
class sn : dm
{
    displayName = "Sniper";
	primaryWeapon[] = {"rhs_weap_m24sws"};
	scope[] = {"cup_optic_leupoldmk4"};
	bipod[] = {"rhs_acc_harris_swivel"};
	magazines[] =
	{
		LIST_6("rhsusf_5Rnd_762x51_m118_special_Mag"),
		LIST_2("rhs_mag_f1"),
		LIST_2("rhs_mag_rdg2_white")
	};
	backpack[] = {};
	Items[] =
    {
        "ACE_RangeCard"
    };
};
class sp : car
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_acog"};
	Items[] =
    {
        "Binocular"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
	backpackItems[] = {};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhs_zsh7a_mike"};
};
class pcc : car
{
    displayName = "Helicopter Crew Chief";
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    headgear[] = {"rhs_zsh7a_mike"};
	sidearmWeapon[] = {"CUP_hgun_SA61"};
    magazines[] =
    {
        LIST_4("CUP_20Rnd_B_765x17_Ball_M")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"B_Carryall_cbr"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag")
    };
	items[] += {"ACE_M26_Clacker"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
		"ACE_M26_Clacker"
    };
    backpackItems[] = {
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
};
