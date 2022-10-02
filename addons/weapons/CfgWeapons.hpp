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

	class arifle_AK12_base_F;
	class arifle_AK12_GL_base_F: arifle_AK12_base_F {
		class EGLM;
	};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F {};
	class GVAR(ak12_GL): arifle_AK12_GL_F {
		displayName = "AK-12 GL";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12_GL);

		recoil = "Recoil_CUP_AK107_HG";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;

		class EGLM: EGLM {
			magazines[] = {"CUP_1Rnd_HE_GP25_M","CUP_IlumFlareWhite_GP25_M","CUP_IlumFlareRed_GP25_M","CUP_IlumFlareGreen_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareGreen_GP25_M","CUP_FlareRed_GP25_M","CUP_FlareYellow_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKERED_GP25_M","CUP_1Rnd_SMOKEGREEN_GP25_M","CUP_1Rnd_SMOKEYELLOW_GP25_M"};
			magazineWell[] = {"CBA_40mm_GP","VOG_40mm"};
		};
	};
	class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F {};
	class GVAR(ak12_GL_arid): arifle_AK12_GL_arid_F {
		displayName = "AK-12 GL (Arid)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12_GL_arid);

		recoil = "Recoil_CUP_AK107_HG";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;

		class EGLM: EGLM {
			magazines[] = {"CUP_1Rnd_HE_GP25_M","CUP_IlumFlareWhite_GP25_M","CUP_IlumFlareRed_GP25_M","CUP_IlumFlareGreen_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareGreen_GP25_M","CUP_FlareRed_GP25_M","CUP_FlareYellow_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKERED_GP25_M","CUP_1Rnd_SMOKEGREEN_GP25_M","CUP_1Rnd_SMOKEYELLOW_GP25_M"};
			magazineWell[] = {"CBA_40mm_GP","VOG_40mm"};
		};
	};
	class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F {};
	class GVAR(ak12_GL_lush): arifle_AK12_GL_lush_F {
		displayName = "AK-12 GL (Lush)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";

		baseWeapon = QGVAR(ak12_GL_lush);

		recoil = "Recoil_CUP_AK107_HG";

		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK", "AK_545x39"};
		magazines[] = AK74_MAGS;

		class EGLM: EGLM {
			magazines[] = {"CUP_1Rnd_HE_GP25_M","CUP_IlumFlareWhite_GP25_M","CUP_IlumFlareRed_GP25_M","CUP_IlumFlareGreen_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareGreen_GP25_M","CUP_FlareRed_GP25_M","CUP_FlareYellow_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKERED_GP25_M","CUP_1Rnd_SMOKEGREEN_GP25_M","CUP_1Rnd_SMOKEYELLOW_GP25_M"};
			magazineWell[] = {"CBA_40mm_GP","VOG_40mm"};
		};
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

	// Remove NIArms ampersand to avoid breaking text displays

	// HK G36
	class hlc_G36_base;
	class hlc_rifle_G36A1 : hlc_G36_base {
		displayName = "HK G36A1";
	};

	class hlc_rifle_G36A1AG36 : hlc_rifle_G36A1 {
		displayName = "HK G36A1 (GL)";
	};

	class hlc_rifle_MG36 : hlc_G36_base {
		displayName = "HK MG36";
	};

	class hlc_rifle_G36KA1 : hlc_rifle_G36A1 {
		displayName = "HK G36KA1";
	};

	class hlc_rifle_G36C : hlc_G36_base {
		displayName = "HK G36C";
	};

	class hlc_rifle_G36E1 : hlc_rifle_g36A1 {
		displayName = "HK G36E";
	};

	class hlc_rifle_G36KE1 : hlc_rifle_g36KA1 {
		displayName = "HK G36KE";
	};

	class hlc_rifle_G36V : hlc_G36_base {
		displayName = "HK G36V";
	};

	class hlc_rifle_G36KV : hlc_rifle_G36V {
		displayName = "HK G36KV";
	};

	class hlc_rifle_G36CV : hlc_rifle_G36V {
		displayName = "HK G36CV";
	};

	class hlc_rifle_G36VAG36 : hlc_rifle_G36V {
		displayName = "HK G36V (GL)";
	};

	class hlc_rifle_G36E1AG36 : hlc_rifle_G36A1AG36 {
		displayName = "HK G36E (GL)";
	};

	class hlc_rifle_G36KA1KSK : hlc_rifle_G36KV {
		displayName = "HK G36K-KSK";
	};

	class hlc_rifle_G36TAC : hlc_rifle_G36V {
		displayName = "HK G36V (TAC)";
	};

	class hlc_rifle_g36KTac : hlc_rifle_G36KV {
		displayName = "HK G36KV (TAC)";
	};

	class hlc_rifle_G36CTac : hlc_rifle_G36CV {
		displayName = "HK G36CV (TAC)";
	};

	class hlc_rifle_G36MLIC : hlc_G36_base {
		displayName = "HK G36-MLI(C)";
	};

	class hlc_rifle_G36KMLIC : hlc_rifle_G36MLIC {
		displayName = "HK G36K-MLI(C)";
	};

	class hlc_rifle_G36CMLIC : hlc_rifle_G36MLIC {
		displayName = "HK G36C-MLI(C)";
	};

	class hlc_rifle_G36MLIAG36 : hlc_rifle_G36MLIC {
		displayName = "HK G36-MLI(C) (GL)";
	};

	class hlc_rifle_G36E1AG36_Romi : hlc_rifle_G36E1AG36 {
		displayName = "HK G36E 'Romi' (GL)";
	};

	// POOK Weapons
	/*
		pook_GL_GM94
		pook_GL_GM94_Pistol
		pook_3Rnd_FAE_GM94
		pook_3Rnd_smoke_GM94
		pook_3Rnd_HE_GM94
		pook_3Rnd_flare_GM94
		pook_GL_shotgun
		pook_GL_2Rnd_00_Pellets
	*/
	class CUP_glaunch_Mk13;
	class pook_GL_RGM40_Pistol;
	class pook_GL_Flare_Pistol;
	HIDE(pook_GL_GM94,CUP_glaunch_Mk13);
	HIDE(pook_GL_GM94_Pistol,pook_GL_RGM40_Pistol);
	HIDE(pook_GL_shotgun,pook_GL_Flare_Pistol);

	// FWA
	class sp_fwa_machinegun_base : LMG_Zafir_F {
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "PointerSlot";
				item = "sp_fwa_acc_machinegun_linkhide";
			};
		};
	};

    class sp_fwa_rifle_base;

    class sp_fwa_smg_9mm_base : sp_fwa_rifle_base {
        ace_overheating_closedBolt = 0;
    };

    class sp_fwa_smg_sterling;

    class sp_fwa_smg_mk6sterling : sp_fwa_smg_sterling { //The Sterling Mk6 Police Carbine fires from a closed bolt, unlike ever other version
        ace_overheating_closedBolt = 1;
    };


};
