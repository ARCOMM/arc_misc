class CfgWeapons {
	class Launcher_Base_F;

	class LMG_Zafir_F;
	class GVAR(Negev_NG5): LMG_Zafir_F {
		displayName = "Negev NG5";
		descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45 mm";

		baseWeapon = QGVAR(Negev_NG5);

		recoil = "recoil_lim";

		magazineWell[] = {"CBA_556x45_MINIMI"};
		magazines[] = {
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",

			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249_Pouch",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",

			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Red_Tracer_Galil_Mag",
			"CUP_35Rnd_556x45_Green_Tracer_Galil_Mag",
			"CUP_50Rnd_556x45_Galil_Mag",
			"CUP_50Rnd_556x45_Red_Tracer_Galil_Mag",
			"CUP_50Rnd_556x45_Green_Tracer_Galil_Mag"
		};
	};

	class arifle_AK12_F;
	class GVAR(ak12): arifle_AK12_F {
		displayName = "AK-12";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12);

		recoil = "Recoil_CUP_AK107";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};
	class arifle_AK12_arid_F;
	class GVAR(ak12_arid): arifle_AK12_arid_F {
		displayName = "AK-12 (Arid)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12_arid);

		recoil = "Recoil_CUP_AK107";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};
	class arifle_AK12_lush_F;
	class GVAR(ak12_lush): arifle_AK12_lush_F {
		displayName = "AK-12 (Lush)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12_lush);

		recoil = "Recoil_CUP_AK107";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};

	class arifle_AK12_GL_F;
	class GVAR(ak12_GL): arifle_AK12_GL_F {
		displayName = "AK-12 GL";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12_GL);

		recoil = "Recoil_CUP_AK107_HG";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};
	class arifle_AK12_GL_arid_F;
	class GVAR(ak12_GL_arid): arifle_AK12_GL_arid_F {
		displayName = "AK-12 GL (Arid)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12_GL_arid);

		recoil = "Recoil_CUP_AK107_HG";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};
	class arifle_AK12_GL_lush_F;
	class GVAR(ak12_GL_lush): arifle_AK12_GL_lush_F {
		displayName = "AK-12 GL (Lush)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12_GL_lush);

		recoil = "Recoil_CUP_AK107_HG";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};

	class arifle_AK12U_F;
	class GVAR(ak12k): arifle_AK12U_F {
		displayName = "AK-12K";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12k);

		recoil = "Recoil_CUP_AK105";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};
	class arifle_AK12U_arid_F;
	class GVAR(ak12k_arid): arifle_AK12U_arid_F {
		displayName = "AK-12K (Arid)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(arifle_AK12U_lush_F);

		recoil = "Recoil_CUP_AK105";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};
	class arifle_AK12U_lush_F;
	class GVAR(ak12k_lush): arifle_AK12U_lush_F {
		displayName = "AK-12K (Lush)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12k_lush);

		recoil = "Recoil_CUP_AK105";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;
	};

	class arifle_RPK12_F;
	class GVAR(rpk16): arifle_RPK12_F {
		displayName = "RPK-16";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(rpk16);

		recoil = "Recoil_CUP_RPK74";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = RPK74_MAGS;
	};
	class arifle_RPK12_arid_F;
	class GVAR(rpk16_arid): arifle_RPK12_arid_F {
		displayName = "RPK-16 (Arid)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(rpk16_arid);

		recoil = "Recoil_CUP_RPK74";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = RPK74_MAGS;
	};
	class arifle_RPK12_lush_F;
	class GVAR(rpk16_lush): arifle_RPK12_lush_F {
		displayName = "RPK-16 (Lush)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(rpk16_lush);

		recoil = "Recoil_CUP_RPK74";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = RPK74_MAGS;
	};

	// Hide Duplicates
	class arifle_AKM_base_F;
	class arifle_AKS_base_F;
	class LMG_03_base_F;
	class arifle_SPAR_01_base_F;
	class arifle_SPAR_01_GL_base_F;
	class arifle_SPAR_02_base_F;
	class arifle_SPAR_03_base_F;
	class DMR_06_hunter_base_F;
	class DMR_06_base_F;
	class Pistol_Base_F;
	HIDE(arifle_AKM_F,arifle_AKM_base_F);
	HIDE(arifle_AKS_F,arifle_AKS_base_F);
	HIDE(LMG_03_F,LMG_03_base_F);
	HIDE(arifle_SPAR_01_blk_F,arifle_SPAR_01_base_F);
	HIDE(arifle_SPAR_01_khk_F,arifle_SPAR_01_base_F);
	HIDE(arifle_SPAR_01_snd_F,arifle_SPAR_01_base_F);
	HIDE(arifle_SPAR_01_GL_blk_F,arifle_SPAR_01_GL_base_F);
	HIDE(arifle_SPAR_01_GL_khk_F,arifle_SPAR_01_GL_base_F);
	HIDE(arifle_SPAR_01_GL_snd_F,arifle_SPAR_01_GL_base_F);
	HIDE(arifle_SPAR_02_blk_F,arifle_SPAR_02_base_F);
	HIDE(arifle_SPAR_02_khk_F,arifle_SPAR_02_base_F);
	HIDE(arifle_SPAR_02_snd_F,arifle_SPAR_02_base_F);
	HIDE(arifle_SPAR_03_blk_F,arifle_SPAR_03_base_F);
	HIDE(arifle_SPAR_03_khk_F,arifle_SPAR_03_base_F);
	HIDE(arifle_SPAR_03_snd_F,arifle_SPAR_03_base_F);
	HIDE(srifle_DMR_06_hunter_F,DMR_06_hunter_base_F);
	HIDE(srifle_DMR_06_camo_F,DMR_06_base_F);
	HIDE(srifle_DMR_06_olive_F,DMR_06_base_F);

	HIDE(hgun_Pistol_01_F,Pistol_Base_F);

	HIDE(launch_RPG7_F,Launcher_Base_F);
};
