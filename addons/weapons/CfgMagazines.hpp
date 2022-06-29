class CfgMagazines {
	class CA_Magazine;
	HIDE(150Rnd_762x51_Box,CA_Magazine);
	HIDE(150Rnd_762x51_Box_Tracer,150Rnd_762x51_Box);
	HIDE(150Rnd_762x54_Box,150Rnd_762x51_Box);
	HIDE(150Rnd_762x54_Box_Tracer,150Rnd_762x54_Box);
	HIDE(ACE_150Rnd_762x54_Box_red,150Rnd_762x54_Box);
	HIDE(ACE_150Rnd_762x54_Box_yellow,150Rnd_762x54_Box);
	HIDE(ACE_150Rnd_762x54_Box_tracer_red,150Rnd_762x54_Box);
	HIDE(ACE_150Rnd_762x54_Box_tracer_yellow,150Rnd_762x54_Box);

	HIDE(200Rnd_556x45_Box_F,CA_Magazine);
	HIDE(200Rnd_556x45_Box_Red_F,200Rnd_556x45_Box_F);
	HIDE(200Rnd_556x45_Box_Tracer_F,200Rnd_556x45_Box_F);
	HIDE(200Rnd_556x45_Box_Tracer_Red_F,200Rnd_556x45_Box_Tracer_F);
	HIDE(ACE_200Rnd_556x45_Box_green,200Rnd_556x45_Box_F);
	HIDE(ACE_200Rnd_556x45_Box_tracer_green,200Rnd_556x45_Box_Tracer_F);

	class CA_LauncherMagazine;
	HIDE(MRAWS_HEAT_F,CA_LauncherMagazine);
	HIDE(MRAWS_HEAT55_F,MRAWS_HEAT_F);
	HIDE(MRAWS_HE_F,MRAWS_HEAT_F);

	class RPG32_F;
	HIDE(RPG7_F,RPG32_F);

	//JM's Fall of the Titans
	class JMSFALL_12Rnd_45acp_Mag : CA_Magazine {
		displayName = "9.21mm 12Rnd P2016 Mag";
		mass = 5;
	};

	class JMSFALL_20Rnd_45acp_Mag : CA_Magazine {
		displayName = "9.21mm 20Rnd RE45 Mag";
		mass = 8;
	};

	class JMSFALL_30Rnd_car101_mag : CA_Magazine {
		mass = 10;
	};

	class JMSFALL_8Rnd_d101_mag : CA_Magazine {
		mass = 2.5;
	};

	class JMSFALL_5Rnd_KraberAP_mag : CA_Magazine {
		mass = 30;
	};

	class JMSFALL_30Rnd_m1a3_mag : CA_Magazine {
		mass = 12.5;
	};

	class JMSFALL_40Rnd_r97_mag : CA_Magazine {
		mass = 12.5;
	};

	class JMSFALL_24Rnd_r101_mag : CA_Magazine {
		mass = 8;
	};

	class JMSFALL_80Rnd_spitfire_mag : CA_Magazine {
		mass = 58;
	};

	class JMSFALL_30Rnd_v47_mag : CA_Magazine {
		mass = 18;
	};

	class JMSFALL_Archer_AT_Rocket : CA_LauncherMagazine {
		mass = 150;
	};

	class JMSFALL_Archer_AA_Rocket : CA_LauncherMagazine {
		mass = 150;
	};
};
