#define SANDBOX(terrainName,terrainClass,id)\
class ARC_SANDBOX_##id { \
	briefingName = QUOTE(ARC Sandbox: terrainName); \
	directory = QUOTE(x\arc_misc\addons\sandbox\MPMissions\arc_sandbox_##id##.##terrainClass); \
}
// These do not need to be removed when terrains are removed
class CfgMissions {
	class MPMissions {

		// Outside of rotation
		SANDBOX(Tanoa,Tanoa,04);
		SANDBOX(Livonia,Enoch,05);
		SANDBOX(Rosche,WL_Rosche,26);

		// Mission rotation
		class ADDON {
			briefingName = "ARC Sandboxes";

			// Vanilla
			SANDBOX(Altis,Altis,01);
			SANDBOX(Stratis,Stratis,02);
			SANDBOX(Malden 2035,Malden,03);
			SANDBOX(Virtual Reality,VR,06);

			// CUP
			SANDBOX(Chernarus (Autumn),Chernarus,07);
			SANDBOX(Chernarus (Summer),Chernarus_Summer,08);
			SANDBOX(Chernarus (Winter),Chernarus_Winter,09);
			SANDBOX(Chernarus 2020,CUP_Chernarus_A3,10);
			SANDBOX(Bystrica,Woodland_ACR,11);
			SANDBOX(Bukovina,Bootcamp_ACR,12);
			SANDBOX(Utes,Utes,13);
			SANDBOX(Takistan,Takistan,14);
			SANDBOX(Zargabad,Zargabad,15);
			SANDBOX(Takistan Mountains,Mountains_ACR,16);
			SANDBOX(Proving Grounds,ProvingGrounds_PMC,17);
			SANDBOX(Shapur,Shapur_BAF,18);
			SANDBOX(Desert,Desert_E,19);
			SANDBOX(Sahrani,Sara,20);
			SANDBOX(United Sahrani,Sara_DBE1,21);
			SANDBOX(Southern Sahrani,SaraLite,22);
			SANDBOX(Porto,Porto,23);
			SANDBOX(Rahmadi,Intro,24);

			// Other
			SANDBOX(G.O.S Dariyah,pja307,25);
			SANDBOX(Podagorsk,FDF_Isle1_a,27);
			SANDBOX(Bozcaada,Bozcaada,28);
			SANDBOX(Tembelan Island,Tembelan,29);
			SANDBOX(Kujari,tem_kujari,30);
			SANDBOX(Summa,tem_summa,31);
			SANDBOX(Ruha,Ruha,32);
			SANDBOX(Vinjesvingen,tem_vinjesvingenc,33);
			SANDBOX(Pulau,pulau,34);
			SANDBOX(Thirsk,Thirsk,35);
			SANDBOX(Thirsk Winter,ThirskW,36);
			SANDBOX(PR FATA,fata,37);
			SANDBOX(Anizay,tem_anizay,38);
			SANDBOX(Kerama Islands,kerama,39);
			SANDBOX(Kulima,kulima,40);
			SANDBOX(Clafghan,clafghan,41);
			SANDBOX(Aliabad,mcn_aliabad,72);
			SANDBOX(Fapovo,fapovo,76);
			SANDBOX(Summa Winter,tem_summawcup,77);
		};

		class DOUBLES(ADDON,GM) {
			briefingName = "ARC GM Sandboxes";
			SANDBOX(Weferlingen,gm_weferlingen_summer,73);
			SANDBOX(Weferlingen,gm_weferlingen_winter,74);
			SANDBOX(Cham,tem_cham,75);
		};

		// WW2 Mission Rotation
		class DOUBLES(ADDON,WW2) {
			briefingName = "ARC WW2 Sandboxes";

			// IFA3AIO
			SANDBOX(Merderet River,I44_Merderet,42);
			SANDBOX(Merderet River,I44_Merderet_V3,43);
			SANDBOX(Merderet River,I44_Merderet_Winter,44);
			SANDBOX(Neaville,MCN_Neaville,45);
			SANDBOX(Neaville,MCN_Neaville_Winter,46);
			SANDBOX(Battle of the Bulge,PLR_Bulge,47);
			SANDBOX(Staszow,Staszow,48);
			SANDBOX(Sark,Hyde_Sark,49);
			SANDBOX(Tobruk,iron_excelsior_Tobruk,50);
			SANDBOX(Aachen Outskirts,SWU_Aachen_Outskirts,51);
			SANDBOX(Montherme,SWU_Ardennes_1940,52);
			SANDBOX(Montherme,SWU_Ardennes_1944_Winter,53);
			SANDBOX(Bray-Dunes,SWU_Dunkirk_Bray_Dunes_1940,54);
			SANDBOX(El Alamein,SWU_Egypt_El_Alamein,55);
			SANDBOX(Streets of Berlin,SWU_Germany_Streets_of_Berlin,56);
			SANDBOX(Pella Region,SWU_Greece_Pella_Region,57);
			SANDBOX(Volkhov Forest,SWU_Russia_Volkhov_Forest,58);
			SANDBOX(Baranow,Baranow,59);
			SANDBOX(Baranow,BaranowWinter,60);
			SANDBOX(Colleville,Colleville,61);
			SANDBOX(Colleville,CollevilleWinter,62);
			SANDBOX(Ivachev,Ivachev,63);
			SANDBOX(Ivachev,IvachevWinter,64);
			SANDBOX(Panovo,Panovo,65);
			SANDBOX(Panovo,PanovoWinter,66);
			SANDBOX(Omaha,I44_Omaha_V2,67);
			SANDBOX(Operation Crossing Point,I44_merderet_koth,68);

			// Faces of War
			SANDBOX(Kokoda Trail,swu_kokoda_map,69);
			SANDBOX(Tarawa Betio,fow_map_tarawa,70);
			SANDBOX(Henderson Airfield,fow_map_henderson,71);
		};

		// OPTRE Mission Rotation
		class DOUBLES(ADDON,OPTRE) {
			briefingName = "ARC OPTRE Sandboxes";

			// Operation Trebuchet
			SANDBOX(Blood Gulch,blood_optre,78);
			SANDBOX(Archipelago,optre_archipelago,80);
			SANDBOX(Gridlock,optre_gridlock,81);
			SANDBOX(Iberius,optre_iberius,82);
			SANDBOX(Highlands,optre_installation04,83);
			SANDBOX(Kholo,optre_kholo,84);
			SANDBOX(Madrigal,optre_madrigal,85);
			SANDBOX(Phobos,optre_phobos,86);
			SANDBOX(Sandstorm,optre_sandstorm,87);
			SANDBOX(Wetlands,optre_wetlands,88);

			// Other
			SANDBOX(Gao,oga_gao_terrain,79);
		};
	};
};
