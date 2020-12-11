class CfgLoadouts {
	// Delete TMF provided loadouts
	delete BLU_F;
	delete BLU_G_F;
	delete CIV_F;
	delete IND_F;
	delete IND_G_F;
	delete OPF_F;
	delete OPF_G_F;

	// US Factions
	class us_army_1970 {
		displayName = "US Army (1970, OG-107)";
		category = "USA";
		tooltip = "Author: Chesheire";
		#include "loadouts\us_army_1970.hpp"
	};
	class us_army_1985 {
		displayName = "US Army (1985, M81)";
		category = "USA";
		tooltip = "Author: Freddo";
		#include "loadouts\us_army_1985.hpp"
	};
	class us_army_2003 {
		displayName = "US Army (2003, DCU/M81)";
		category = "USA";
		tooltip = "Author: Chesheire";
		#include "loadouts\us_army_2003.hpp"
	};
	class us_usmc_1985 {
		displayName = "US Marine Corps (1985, DBDU 'Chocolate Chip')";
		category = "USA";
		tooltip = "Author: Chesheire";
		#include "loadouts\us_usmc_1985.hpp"
	};
	class us_usmc_2003 {
		displayName = "US Marine Corps (2003, DCU/M81)";
		category = "USA";
		tooltip = "Author: Chesheire";
		#include "loadouts\us_usmc_2003.hpp"
	};
	class us_army_2010 {
		displayName = "US Army (2010, UCP)";
		category = "USA";
		tooltip = "Author: Freddo";
		#include "loadouts\us_army_2010.hpp"
	};
	class us_army_2018 {
		displayName = "US Army (2018, OCP)";
		category = "USA";
		tooltip = "Author: AChesheireCat";
		#include "loadouts\us_army_2018.hpp"
	};
	class us_usmc_2010_wdl {
		displayName = "US Marine Corps (2010, MARPAT-WDL)";
		category = "USA";
		tooltip = "Author: AChesheireCat";
		#include "loadouts\us_usmc_2010_wdl.hpp"
	};
	class us_rangers_2010 {
		displayName = "US 75th Rangers (2010, Crye Multicam)";
		category = "USA";
		tooltip = "Author: AChesheireCat";
		#include "loadouts\us_rangers_2010.hpp"
	};
	class us_rangers_2020 {
		displayName = "US 75th Rangers (2020, Crye Multicam)";
		category = "USA";
		tooltip = "Author: AChesheireCat";
		#include "loadouts\us_rangers_2020.hpp"
	};

	// Western Factions
	class ger_army_2010 {
		displayName = "Bundeswehr (2010, Flecktarn)";
		category = "Western Factions";
		tooltip = "Author: Freddo\n\nNote: All units have LPOs (1.5x)";
		#include "loadouts\ger_army_2010.hpp"
	};
	class ger_army_trop_2010 {
		displayName = "Bundeswehr (2010, Tropentarn)";
		category = "Western Factions";
		tooltip = "Author: Freddo\n\nNote: All units have LPOs (1.5x)";
		#include "loadouts\ger_army_trop_2010.hpp"
	};
	class uk_army_2005 {
		displayName = "UK Army (2005, DDPM)";
		category = "Western Factions";
		tooltip = "Author: AChesheireCat";
		#include "loadouts\uk_army_2005.hpp"
	};
	class uk_army_2010 {
		displayName = "UK Army (2010, MTP)";
		category = "Western Factions";
		tooltip = "Author: Freddo";
		#include "loadouts\uk_army_2010.hpp"
	};
	class uk_rm_1982 {
		displayName = "UK Royal Marines (1982, DPM)";
		category = "Western Factions";
		tooltip = "Author: Chesheire\n\nNote: Lightly armored. Only has helmets. Addtl, moderate ammo count. Recommend resupply but not required.";
		#include "loadouts\uk_rm_1982.hpp"
	};
	class au_army_2018 {
		displayName = "Australian Army (2018, AMCU/AUSCAM)";
		category = "Western Factions";
		tooltip = "Author: Chesheire";
		#include "loadouts\au_army_2018.hpp"
	};
	class cz_army_2020 {
		displayName = "Czech Army (2020, Vz. 95)";
		category = "Western Factions";
		tooltip = "Author: AChesheireCat\n\nNote: SAW has 4x optic.";
		#include "loadouts\cz_army_2020.hpp"
	};
	class idf_army_2010 {
		displayName = "Israeli Defence Forces (2010)";
		category = "Western Factions";
		tooltip = "Author: Freddo";
		#include "loadouts\idf_army_2010.hpp"
	};

	// Russian/Soviet Factions
	class ussr_army_1970 {
		displayName = "Soviet Army (1970, M88)";
		category = "Russia";
		tooltip = "Author: Freddo\n\nNote: Low ammo, bring resupply.";
		#include "loadouts\ussr_army_1970.hpp"
	};
	class ussr_army_1985 {
		displayName = "Soviet Army (1985, M88)";
		category = "Russia";
		tooltip = "Author: Freddo";
		#include "loadouts\ussr_army_1985.hpp"
	};
	class ru_mvd_2005 {
		displayName = "Russian Interior Troops (2005, Partizan Summer)";
		category = "Russia";
		tooltip = "Author: Freddo\n\nSemi-fictional";
		#include "loadouts\ru_mvd_2005.hpp"
	};
	class ru_mvd_autumn_2005 {
		displayName = "Russian Interior Troops (2005, Partizan Autumn)";
		category = "Russia";
		tooltip = "Author: Freddo\n\nSemi-fictional";
		#define AUTUMN true
		#include "loadouts\ru_mvd_2005.hpp"
	};
	class ru_army_2010 {
		displayName = "Russian Army (2010, VSR-98)";
		category = "Russia";
		tooltip = "Author: Freddo";
		#include "loadouts\ru_army_2010.hpp"
	};
	class ru_army_ratnik_2020 {
		displayName = "Russian Army (2020, Ratnik Summer)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat";
		#define GHILLIE_CLASS "U_B_T_FullGhillie_tna_F"
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_autumn_2020 {
		displayName = "Russian Army (2020, Ratnik Autumn)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat";
		#define UNI_CAMO Autumn
		#define HELMET_CAMO Summer
		#define BACKPACK_CAMO Summer
		#define GHILLIE_CLASS "U_B_FullGhillie_lsh"
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_beigedigital_2020 {
		displayName = "Russian Army (2020, Ratnik Beige Digital)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat";
		#define UNI_CAMO BeigeDigital
		#define VEST_CAMO BeigeDigital
		#define GHILLIE_CLASS "U_B_FullGhillie_ard"
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_desert_2020 {
		displayName = "Russian Army (2020, Ratnik Desert)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat";
		#define UNI_CAMO Desert
		#define VEST_CAMO Desert
		#define GHILLIE_CLASS "U_B_FullGhillie_ard"
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_pink_2020 {
		displayName = "Russian Army (2020, Ratnik Pink)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat";
		#define UNI_CAMO Pink
		#define HELMET_CAMO Desert
		#define BACKPACK_CAMO Desert
		#define VEST_CAMO Desert
		#define GHILLIE_CLASS "U_B_FullGhillie_ard"
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_winter_2020 {
		displayName = "Russian Army (2020, Ratnik Winter)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat";
		#define UNI_CAMO Winter
		#define IS_WINTER true
		#define GHILLIE_CLASS "U_B_FullGhillie_ard"
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_ak12_2020 {
		displayName = "Russian Army (2020, Ratnik Summer, AK12)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat\n\nNote: Requires Contact DLC for most roles.";
		#define GHILLIE_CLASS "U_B_T_FullGhillie_tna_F"
		#define USE_AK12 true
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_ak12_autumn_2020 {
		displayName = "Russian Army (2020, Ratnik Autumn, AK12)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat\n\nNote: Requires Contact DLC for most roles.";
		#define UNI_CAMO Autumn
		#define HELMET_CAMO Summer
		#define BACKPACK_CAMO Summer
		#define GHILLIE_CLASS "U_B_FullGhillie_lsh"
		#define USE_AK12 true
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_ak12_beigedigital_2020 {
		displayName = "Russian Army (2020, Ratnik Beige Digital, AK12)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat\n\nNote: Requires Contact DLC for most roles.";
		#define UNI_CAMO BeigeDigital
		#define VEST_CAMO BeigeDigital
		#define GHILLIE_CLASS "U_B_FullGhillie_ard"
		#define USE_AK12 true
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_ak12_desert_2020 {
		displayName = "Russian Army (2020, Ratnik Desert, AK12)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat\n\nNote: Requires Contact DLC for most roles.";
		#define UNI_CAMO Desert
		#define VEST_CAMO Desert
		#define GHILLIE_CLASS "U_B_FullGhillie_ard"
		#define USE_AK12 true
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_ak12_pink_2020 {
		displayName = "Russian Army (2020, Ratnik Pink, AK12)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat\n\nNote: Requires Contact DLC for most roles.";
		#define UNI_CAMO Pink
		#define HELMET_CAMO Desert
		#define BACKPACK_CAMO Desert
		#define VEST_CAMO Desert
		#define GHILLIE_CLASS "U_B_FullGhillie_ard"
		#define USE_AK12 true
		#include "loadouts\ru_army_template_2020.hpp"
	};
	class ru_army_ratnik_ak12_winter_2020 {
		displayName = "Russian Army (2020, Ratnik Winter, AK12)";
		category = "Russia";
		tooltip = "Author: Freddo, AChesheireCat\n\nNote: Requires Contact DLC for most roles.";
		#define UNI_CAMO Winter
		#define IS_WINTER true
		#define GHILLIE_CLASS "U_B_FullGhillie_ard"
		#define USE_AK12 true
		#include "loadouts\ru_army_template_2020.hpp"
	};

	// Eastern Factions
	class pla_army_2010 {
		displayName = "Peoples Liberation Army (2010, Type 07 Universal)";
		category = "Eastern Factions";
		tooltip = "Author: Freddo\n\nUses APEX weapons.";
		#include "loadouts\pla_army_2010.hpp"
	};

	// Armaverse Factions
	class tk_locals {
		displayName = "Takistani Locals";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo";
		#include "loadouts\tk_locals.hpp"
	};
	class tk_army {
		displayName = "Takistani Army";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo";
		#include "loadouts\tk_army.hpp"
	};
	class chdkz {
		displayName = "Chernarussian Movement of the Red Star";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo";
		#include "loadouts\chdkz.hpp"
	};
	class cdf_army_fst {
		displayName = "Chernarussian Defence Forces (Forest)";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo";
		#define __CAMO FST
		#include "loadouts\cdf_army_template.hpp"
	};
	class cdf_army_mnt {
		displayName = "Chernarussian Defence Forces (Mountain)";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo";
		#define __CAMO MNT
		#include "loadouts\cdf_army_template.hpp"
	};
	class cdf_army_dst {
		displayName = "Chernarussian Defence Forces (Desert)";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo";
		#define __CAMO DST
		#include "loadouts\cdf_army_template.hpp"
	};
	class cdf_army_snw {
		displayName = "Chernarussian Defence Forces (Snow)";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo";
		#define __CAMO SNW
		#include "loadouts\cdf_army_template.hpp"
	};
	class racs {
		displayName = "Royal Army Corps of Sahrani";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo";
		#include "loadouts\racs.hpp"
	};
};
