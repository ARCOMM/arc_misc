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

	class RPG32_F;
	HIDE(RPG7_F,RPG32_F);

	// POOK Weapons
	/*
		pook_3Rnd_FAE_GM94
		pook_3Rnd_smoke_GM94
		pook_3Rnd_HE_GM94
		pook_3Rnd_flare_GM94
		pook_GL_2Rnd_00_Pellets
	*/
	class CUP_6Rnd_HE_GP25_M;
	class CUP_6Rnd_Smoke_GP25_M;
	class CUP_6Rnd_FlareWhite_GP25_M;
	HIDE(pook_3Rnd_FAE_GM94,CUP_6Rnd_HE_GP25_M);
	HIDE(pook_3Rnd_smoke_GM94,CUP_6Rnd_Smoke_GP25_M);
	HIDE(pook_3Rnd_HE_GM94,CUP_6Rnd_HE_GP25_M);
	HIDE(pook_3Rnd_flare_GM94,CUP_6Rnd_FlareWhite_GP25_M);
	HIDE(pook_GL_2Rnd_00_Pellets,RPG32_F);

	class sp_fwa_50Rnd_762_mag: 150Rnd_762x51_Box {
		scope = 2;
		scopeArsenal = 2;
	};
};
