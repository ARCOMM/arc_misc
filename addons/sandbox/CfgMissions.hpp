#define SANDBOX(terrainName,terrainClass,id)\
class ARC_SANDBOX_##id { \
	briefingName = QUOTE(ARC Sandbox: terrainName); \
	directory = QUOTE(x\arc_misc\addons\sandbox\MPMissions\arc_sandbox_##id##.##terrainClass); \
}
// These do not need to be removed when terrains are removed
class CfgMissions {
	class MPMissions {
		// Vanilla
		SANDBOX(Altis,Altis,01);
		SANDBOX(Stratis,Stratis,02);
		SANDBOX(Malden 2035,Malden,03);
		SANDBOX(Tanoa,Tanoa,04);
		SANDBOX(Livonia,Enoch,05);
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
		SANDBOX(Rosche,WL_Rosche,26);
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
	};
};
