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
	// Russian/Soviet Factions
	class ru_army_2010 {
		displayName = "Russian Army (2010, VSR-98)";
		category = "Russia";
		tooltip = "Author: Freddo";
		#include "loadouts\ru_army_2010.hpp"
	};
	// Armaverse factions
	class tk_locals {
		displayName = "Takistani Locals";
		category = "Armaverse Factions";
		tooltip = "Author: Freddo\n\nNote: Low ammo count. Make sure resupply is available.";
		#include "loadouts\tk_locals.hpp"
	};
};
