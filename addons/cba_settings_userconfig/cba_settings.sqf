// ACE Advanced Ballistics
force ace_advanced_ballistics_ammoTemperatureEnabled = false;
force ace_advanced_ballistics_barrelLengthInfluenceEnabled = true;
force ace_advanced_ballistics_bulletTraceEnabled = true;
force ace_advanced_ballistics_enabled = true;
force ace_advanced_ballistics_muzzleVelocityVariationEnabled = false;
force ace_advanced_ballistics_simulationInterval = 0.05;

// ACE Advanced Fatigue
force ace_advanced_fatigue_enabled = true;
force ace_advanced_fatigue_enableStaminaBar = true;
force ace_advanced_fatigue_loadFactor = 0.9;
force ace_advanced_fatigue_performanceFactor = 1;
force ace_advanced_fatigue_recoveryFactor = 2.2;
force ace_advanced_fatigue_swayFactor = 1;
force ace_advanced_fatigue_terrainGradientFactor = 1;

// ACE Advanced Throwing
force ace_advanced_throwing_enabled = true;
force ace_advanced_throwing_enablePickUp = true;
force ace_advanced_throwing_enablePickUpAttached = true;

// ACE Arsenal
force ace_arsenal_allowDefaultLoadouts = true;
force ace_arsenal_allowSharedLoadouts = true;
force ace_arsenal_enableIdentityTabs = true;

// ACE Artillery
force ace_artillerytables_advancedCorrections = true;
force ace_artillerytables_disableArtilleryComputer = true;
force ace_mk6mortar_airResistanceEnabled = true;
force ace_mk6mortar_allowCompass = true;
force ace_mk6mortar_allowComputerRangefinder = false;
force ace_mk6mortar_useAmmoHandling = true;

// ACE Captives
force ace_captives_allowHandcuffOwnSide = true;
force ace_captives_allowSurrender = true;
force ace_captives_requireSurrender = 0;
force ace_captives_requireSurrenderAi = false;

// ACE Common
force ace_common_allowFadeMusic = true;
force ace_common_checkPBOsAction = 2;
force ace_common_checkPBOsCheckAll = true;
force ace_common_checkPBOsWhitelist = "[\
	'aar_main',							\
	'darkmap_ace_main',					\
	'DIS_Enhanced_Gps',					\
	'DIS_enhanced_map_ace',				\
	'JD_ArmaMapsAceCompat',				\
	'JD_ArmaMaps',						\
	'fare_AWL',							\
	'PLP_something',					\
	'PLP_commonModData',				\
	'HeadRangePlus',					\
	'Rev_marker_system'					\
]";
force ace_noradio_enabled = true;
force ace_parachute_hideAltimeter = false;

// ACE Cook off
force ace_cookoff_ammoCookoffDuration = 1;
force ace_cookoff_enable = 0;
force ace_cookoff_enableAmmobox = true;
force ace_cookoff_enableAmmoCookoff = true;
force ace_cookoff_probabilityCoef = 1;

// ACE Crew Served Weapons
force ace_csw_ammoHandling = 1;
force ace_csw_defaultAssemblyMode = true;
force ace_csw_handleExtraMagazines = true;
force ace_csw_progressBarTimeCoefficent = 1;

// ACE Explosives
force ace_explosives_explodeOnDefuse = false;
force ace_explosives_punishNonSpecialists = true;
force ace_explosives_requireSpecialist = false;

// ACE Fragmentation Simulation
force ace_frag_enabled = true;
force ace_frag_maxTrack = 20;
force ace_frag_maxTrackPerFrame = 10;
force ace_frag_reflectionsEnabled = true;
force ace_frag_spallEnabled = true;

// ACE G-Forces
force ace_gforces_coef = 0.5;
force ace_gforces_enabledFor = 1;

// ACE Goggles
force ace_goggles_effects = 3;
force ace_goggles_showClearGlasses = true;

// ACE Grenades
force ace_grenades_convertExplosives = true;

// ACE Hearing
force ace_hearing_autoAddEarplugsToUnits = false;
force ace_hearing_disableEarRinging = true;
force ace_hearing_earplugsVolume = 0.5;
force ace_hearing_enableCombatDeafness = false;
force ace_hearing_enabledForZeusUnits = false;
force ace_hearing_unconsciousnessVolume = 0.4;

// ACE Interaction
force ace_interaction_disableNegativeRating = false;
force ace_interaction_enableTeamManagement = true;

// ACE Logistics
force ace_cargo_enable = true;
force ace_cargo_loadTimeCoefficient = 2.5;
force ace_cargo_paradropTimeCoefficent = 2.5;
force ace_rearm_distance = 35;
force ace_rearm_level = 1;
force ace_rearm_supply = 1;
force ace_refuel_hoseLength = 12;
force ace_refuel_rate = 1;
force ace_repair_addSpareParts = true;
force ace_repair_autoShutOffEngineWhenStartingRepair = false;
force ace_repair_consumeItem_toolKit = 0;
force ace_repair_engineerSetting_fullRepair = 2;
force ace_repair_engineerSetting_repair = 1;
force ace_repair_engineerSetting_wheel = 0;
force ace_repair_fullRepairLocation = 3;
force ace_repair_fullRepairRequiredItems = ["ToolKit"];
force ace_repair_miscRepairRequiredItems = ["ToolKit"];
force ace_repair_repairDamageThreshold = 0.6;
force ace_repair_repairDamageThreshold_engineer = 0.4;
force ace_repair_wheelRepairRequiredItems = [];

// ACE Magazine Repack
force ace_magazinerepack_timePerAmmo = 1.5;
force ace_magazinerepack_timePerBeltLink = 8;
force ace_magazinerepack_timePerMagazine = 2;

// ACE Map
force ace_map_BFT_Enabled = false;
force ace_map_BFT_HideAiGroups = false;
force ace_map_BFT_Interval = 1;
force ace_map_BFT_ShowPlayerNames = false;
force ace_map_DefaultChannel = 1;
force ace_map_mapGlow = true;
force ace_map_mapIllumination = true;
force ace_map_mapLimitZoom = false;
force ace_map_mapShake = true;
force ace_map_mapShowCursorCoordinates = false;

// ACE Map Gestures
force ace_map_gestures_enabled = true;
force ace_map_gestures_interval = 0.03;
force ace_map_gestures_maxRange = 12;
force ace_map_gestures_maxRangeCamera = 14;
force ace_map_gestures_onlyShowFriendlys = false;

// ACE Map Tools
force ace_maptools_drawStraightLines = false;

// ACE Medical
force ace_medical_ai_enabledFor = 0;
force ace_medical_AIDamageThreshold = 1;
force ace_medical_bleedingCoefficient = 1;
force ace_medical_blood_bloodLifetime = 900;
force ace_medical_blood_enabledFor = 2;
force ace_medical_blood_maxBloodObjects = 500;
force ace_medical_fatalDamageSource = 0;
force ace_medical_fractureChance = 0.8;
force ace_medical_fractures = 1;
force ace_medical_gui_maxDistance = 3;
force ace_medical_ivFlowRate = 2.5;
force ace_medical_limping = 1;
force ace_medical_painCoefficient = 1;
force ace_medical_playerDamageThreshold = 1;
force ace_medical_spontaneousWakeUpChance = 0.25;
force ace_medical_spontaneousWakeUpEpinephrineBoost = 2;
force ace_medical_statemachine_AIUnconsciousness = false;
force ace_medical_statemachine_cardiacArrestBleedoutEnabled = true;
force ace_medical_statemachine_cardiacArrestTime = 30;
force ace_medical_statemachine_fatalInjuriesAI = 0;
force ace_medical_statemachine_fatalInjuriesPlayer = 0;
force ace_medical_treatment_advancedBandages = 0;
force ace_medical_treatment_advancedDiagnose = true;
force ace_medical_treatment_advancedMedication = true;
force ace_medical_treatment_allowBodyBagUnconscious = false;
force ace_medical_treatment_allowLitterCreation = true;
force ace_medical_treatment_allowSelfIV = 1;
force ace_medical_treatment_allowSelfPAK = 0;
force ace_medical_treatment_allowSelfStitch = 0;
force ace_medical_treatment_allowSharedEquipment = 0;
force ace_medical_treatment_clearTraumaAfterBandage = false;
force ace_medical_treatment_consumePAK = 1;
force ace_medical_treatment_consumeSurgicalKit = 0;
force ace_medical_treatment_convertItems = 0;
force ace_medical_treatment_cprSuccessChance = 0.4;
force ace_medical_treatment_holsterRequired = 0;
force ace_medical_treatment_litterCleanupDelay = 600;
force ace_medical_treatment_locationEpinephrine = 0;
force ace_medical_treatment_locationPAK = 3;
force ace_medical_treatment_locationsBoostTraining = true;
force ace_medical_treatment_locationSurgicalKit = 2;
force ace_medical_treatment_maxLitterObjects = 500;
force ace_medical_treatment_medicEpinephrine = 0;
force ace_medical_treatment_medicIV = 1;
force ace_medical_treatment_medicPAK = 1;
force ace_medical_treatment_medicSurgicalKit = 1;
force ace_medical_treatment_timeCoefficientPAK = 1;
force ace_medical_treatment_treatmentTimeAutoinjector = 5;
force ace_medical_treatment_treatmentTimeBodyBag = 15;
force ace_medical_treatment_treatmentTimeCPR = 15;
force ace_medical_treatment_treatmentTimeIV = 12;
force ace_medical_treatment_treatmentTimeSplint = 7;
force ace_medical_treatment_treatmentTimeTourniquet = 7;
force ace_medical_treatment_woundReopenChance = 1;
force ace_medical_treatment_woundStitchTime = 5;

// ACE Name Tags
force ace_nametags_playerNamesMaxAlpha = 0.8;
force ace_nametags_playerNamesViewDistance = 5;
force ace_nametags_showCursorTagForVehicles = false;

// ACE Nightvision
force ace_nightvision_aimDownSightsBlur = 0.7;
force ace_nightvision_disableNVGsWithSights = false;
force ace_nightvision_effectScaling = 0.7;
force ace_nightvision_fogScaling = 0.2;
force ace_nightvision_noiseScaling = 0.1;

// ACE Overheating
force ace_overheating_enabled = true;
force ace_overheating_overheatingDispersion = true;
force ace_overheating_unJamFailChance = 0.33;
force ace_overheating_unJamOnreload = true;

// ACE Pointing
force ace_finger_enabled = true;
force ace_finger_indicatorForSelf = true;
force ace_finger_maxRange = 8;

// ACE Pylons
force ace_pylons_enabledForZeus = true;
force ace_pylons_enabledFromAmmoTrucks = true;
force ace_pylons_rearmNewPylons = false;
force ace_pylons_requireEngineer = true;
force ace_pylons_requireToolkit = true;
force ace_pylons_searchDistance = 20;
force ace_pylons_timePerPylon = 4.5;

// ACE Quick Mount
force ace_quickmount_distance = 5;
force ace_quickmount_enabled = true;
force ace_quickmount_speed = 15;

// ACE Respawn
force ace_respawn_removeDeadBodiesDisconnected = true;
force ace_respawn_savePreDeathGear = false;

// ACE Scopes
force ace_scopes_correctZeroing = true;
force ace_scopes_deduceBarometricPressureFromTerrainAltitude = true;
force ace_scopes_defaultZeroRange = 200;
force ace_scopes_enabled = true;
force ace_scopes_forceUseOfAdjustmentTurrets = false;
force ace_scopes_overwriteZeroRange = true;
force ace_scopes_simplifiedZeroing = false;
force ace_scopes_zeroReferenceBarometricPressure = 1013.25;
force ace_scopes_zeroReferenceHumidity = 0;
force ace_scopes_zeroReferenceTemperature = 15;

// ACE Spectator
force ace_spectator_enableAI = false;
force ace_spectator_restrictModes = 0;
force ace_spectator_restrictVisions = 0;

// ACE Switch Units
force ace_switchunits_enableSafeZone = false;
force ace_switchunits_enableSwitchUnits = false;
force ace_switchunits_safeZoneRadius = 100;
force ace_switchunits_switchToCivilian = false;
force ace_switchunits_switchToEast = false;
force ace_switchunits_switchToIndependent = false;
force ace_switchunits_switchToWest = false;

// ACE Trenches
force ace_trenches_bigEnvelopeDigDuration = 25;
force ace_trenches_bigEnvelopeRemoveDuration = 15;
force ace_trenches_smallEnvelopeDigDuration = 20;
force ace_trenches_smallEnvelopeRemoveDuration = 12;

// ACE Uncategorized
force ace_fastroping_requireRopeItems = false;
force ace_gunbag_swapGunbagEnabled = true;
force ace_hitreactions_minDamageToTrigger = 0.1;
force ace_laser_dispersionCount = 1;
force ace_microdagr_mapDataAvailable = 2;
force ace_microdagr_waypointPrecision = 3;
force ace_overpressure_distanceCoefficient = 1;

// ACE User Interface
force ace_ui_allowSelectiveUI = true;
force ace_ui_ammoCount = false;

// ACE Vehicle Lock
force ace_vehiclelock_defaultLockpickStrength = 10;
force ace_vehiclelock_lockVehicleInventory = true;
force ace_vehiclelock_vehicleStartingLockState = -1;

// ACE Vehicles
force ace_vehicles_keepEngineRunning = false;

// ACE View Distance Limiter
force ace_viewdistance_limitViewDistance = 12000;

// ACE Weapons
force ace_laserpointer_enabled = true;

// ACE Weather
force ace_weather_enabled = false;
force ace_weather_updateInterval = 60;
force ace_weather_windSimulation = false;

// ACE Wind Deflection
force ace_winddeflection_enabled = true;
force ace_winddeflection_simulationInterval = 0.05;
force ace_winddeflection_vehicleEnabled = true;

// ACE Zeus
force ace_zeus_autoAddObjects = false;
force ace_zeus_canCreateZeus = -1;
force ace_zeus_radioOrdnance = false;
force ace_zeus_remoteWind = false;
force ace_zeus_revealMines = 0;
force ace_zeus_zeusAscension = false;
force ace_zeus_zeusBird = false;

// ACEX Field Rations
force acex_field_rations_affectAdvancedFatigue = true;
force acex_field_rations_enabled = false;
force acex_field_rations_hungerSatiated = 1;
force acex_field_rations_terrainObjectActions = true;
force acex_field_rations_thirstQuenched = 1;
force acex_field_rations_timeWithoutFood = 2;
force acex_field_rations_timeWithoutWater = 2;
force acex_field_rations_waterSourceActions = 2;

// ACEX Headless
force acex_headless_delay = 15;
force acex_headless_enabled = true;
force acex_headless_endMission = 2;
force acex_headless_log = false;
force acex_headless_transferLoadout = 1;

// ACEX Sitting
force acex_sitting_enable = true;

// ACEX View Restriction
force acex_viewrestriction_mode = 0;
force acex_viewrestriction_modeSelectiveAir = 0;
force acex_viewrestriction_modeSelectiveFoot = 0;
force acex_viewrestriction_modeSelectiveLand = 0;
force acex_viewrestriction_modeSelectiveSea = 0;

// ACRE2
force acre_sys_core_automaticAntennaDirection = true;
force acre_sys_core_fullDuplex = true;
force acre_sys_core_ignoreAntennaDirection = true;
force acre_sys_core_interference = false;
force acre_sys_core_revealToAI = 0.5;
force acre_sys_core_terrainLoss = 0.8;
force acre_sys_core_ts3ChannelName = "ACRE";
force acre_sys_core_ts3ChannelPassword = "";
force acre_sys_signal_signalModel = 2;

// AI
force cfp_autoEquipNVG = false;

// ARC Misc
force arc_misc_difficulty_aimingAccuracy = 0.11;
force arc_misc_difficulty_aimingShake = 0.11;
force arc_misc_difficulty_aimingSpeed = 0.45;
force arc_misc_difficulty_allowCrewInImmobile = 2;
force arc_misc_difficulty_allowFleeing = 0.5;
force arc_misc_difficulty_AwareFormationSoft = true;
force arc_misc_difficulty_CombatFormationSoft = true;
force arc_misc_difficulty_commanding = 0.18;
force arc_misc_difficulty_courage = 0.18;
force arc_misc_difficulty_disableRemoteSensors = false;
force arc_misc_difficulty_enableAttack = 0;
force arc_misc_difficulty_enabled = true;
force arc_misc_difficulty_endurance = 1;
force arc_misc_difficulty_general = 0.2;
force arc_misc_difficulty_randomSkill = 0.1;
force arc_misc_difficulty_reloadSpeed = 1;
force arc_misc_difficulty_spotDistance = 1;
force arc_misc_difficulty_spotTime = 0.18;
force arc_misc_difficulty_useAISteeringComponent = true;

// CBA Weapons
force cba_disposable_replaceDisposableLauncher = true;

// CUP
force CUP_Vehicles_PreventBarrelClip = true;

// DUI - Squad Radar - Indicators
force diwako_dui_indicators_crew_range_enabled = false;
force diwako_dui_indicators_range = 20;
force diwako_dui_indicators_range_crew = 20;
force diwako_dui_indicators_range_scale = true;
force diwako_dui_indicators_useACENametagsRange = true;

// DUI - Squad Radar - Nametags
force diwako_dui_nametags_enabled = false;
force diwako_dui_nametags_enableOcclusion = true;
force diwako_dui_nametags_showUnconAsDead = true;
force diwako_dui_nametags_useSideIsFriendly = true;

// DUI - Squad Radar - Radar
force diwako_dui_compassRange = 35;
force diwako_dui_distanceWarning = 3;
force diwako_dui_enable_compass_dir = 2;
force diwako_dui_enable_occlusion = true;
force diwako_dui_enable_occlusion_cone = 360;
force diwako_dui_radar_ace_medic = true;
force diwako_dui_radar_compassRangeCrew = 35;
force diwako_dui_radar_icon_scale_crew = 6;
force diwako_dui_radar_occlusion_fade_in_time = 1;
force diwako_dui_radar_occlusion_fade_time = 10;
force diwako_dui_radar_sortType = "none";
force diwako_dui_radar_sqlFirst = true;
force diwako_dui_radar_vehicleCompassEnabled = false;

// dzn Artillery Illumination
force dzn_Flares_H_Color = [1,1,0.5];
force dzn_Flares_H_Deviation = 25;
force dzn_Flares_H_Enabled = true;
force dzn_Flares_H_Intensity = 10;
force dzn_Flares_H_ListSetting = "StaticCannon";
force dzn_Flares_H_Range = 450;
force dzn_Flares_M_Color = [1,1,0.5];
force dzn_Flares_M_Deviation = 25;
force dzn_Flares_M_Enabled = true;
force dzn_Flares_M_Intensity = 10;
force dzn_Flares_M_ListSetting = "StaticMortar, Mortar_01_base_F, CUP_B_M1129_MC_MK19_Desert, CUP_B_M1129_MC_MK19_Woodland";
force dzn_Flares_M_Range = 400;

// Enhanced Movement Rework
force emr_main_allowMidairClimbing = true;
force emr_main_blacklistStr = "";
force emr_main_climbingEnabled = true;
force emr_main_climbOnDuty = 3.4;
force emr_main_climbOverDuty = 3;
force emr_main_dropDuty = 0.7;
force emr_main_enableWalkableSurface = true;
force emr_main_enableWeightCheck = true;
force emr_main_jumpDuty = 1;
force emr_main_jumpingEnabled = true;
force emr_main_jumpingLoadCoefficient = 1;
force emr_main_jumpVelocity = 3.4;
force emr_main_maxClimbHeight = 2.6;
force emr_main_maxDropHeight = 5;
force emr_main_maxWeightClimb1 = 100;
force emr_main_maxWeightClimb2 = 85;
force emr_main_maxWeightClimb3 = 60;
force emr_main_maxWeightJump = 100;
force emr_main_staminaCoefficient = 3;
force emr_main_whitelistStr = "";

// dzn Vehicle On Fire
force dzn_VOF_CheckTimeout = 30;
// Does not check if X iskindof Y, so I need to add all possible entries.
force dzn_VOF_CookingList = " \
	CUP_BRDM2_ATGM_Base,CUP_B_BRDM2_ATGM_CDF,CUP_O_BRDM2_ATGM_CHDKZ,CUP_I_BRDM2_ATGM_NAPA,CUP_O_BRDM2_ATGM_SLA,CUP_O_BRDM2_ATGM_CSAT,CUP_O_BRDM2_ATGM_CSAT_T,CUP_O_BRDM2_ATGM_RUS,CUP_O_BRDM2_ATGM_TKA,CUP_I_BRDM2_ATGM_TK_Gue,CUP_B_BRDM2_ATGM_CDF_OCimport_01,CUP_B_BRDM2_ATGM_CDF_OCimport_02,CFP_B_CDF_BRDM_2ATGM_SNW_01,CUP_O_BRDM2_ATGM_CSAT_OCimport_01,CUP_O_BRDM2_ATGM_CSAT_OCimport_02,CFP_O_CHDKZ_BRDM_2ATGM_SNW_01,CUP_O_BRDM2_ATGM_RUS_OCimport_01,CUP_O_BRDM2_ATGM_RUS_OCimport_02,CFP_O_RUARMY_BRDM_2ATGM_DES_01,CFP_O_RUMVD_BRDM_2ATGM_01, \
	CUP_M163_Base,CUP_B_M163_USA,CUP_I_M163_AAF,CUP_I_M163_RACS,CUP_B_M163_USA_OCimport_01,CUP_B_M163_USA_OCimport_02,CFP_B_USARMY_1991_M163A1_VADS_Des_01,CFP_B_USARMY_1991_M163A1_VADS_WDL_01,CFP_B_USARMY_M163_DES_01, \
	CUP_B_M1135_ATGMV_Desert,CUP_B_M1135_ATGMV_Woodland,CUP_B_M1135_ATGMV_Desert_Slat,CUP_B_M1135_ATGMV_Woodland_Slat,CUP_B_M1135_ATGMV_Desert_OCimport_01,CUP_B_M1135_ATGMV_Desert_OCimport_02,CUP_B_M1135_ATGMV_Woodland_Slat_OCimport_01,CUP_B_M1135_ATGMV_Woodland_Slat_OCimport_02,CFP_B_USRANGERS_M1135_ATGMV_WDL_01,CFP_B_USRANGERS_M1135_ATGMV_Slat_WDL_01, \
	CUP_B_M1128_MGS_Desert,CUP_B_M1128_MGS_Woodland,CUP_B_M1128_MGS_Desert_Slat,CUP_B_M1128_MGS_Woodland_Slat,CUP_B_M1128_MGS_Woodland_OCimport_01,CUP_B_M1128_MGS_Woodland_OCimport_02,CFP_B_KEARMY_M1128_01,CUP_B_M1128_MGS_Woodland_Slat_OCimport_01,CUP_B_M1128_MGS_Woodland_Slat_OCimport_02,CFP_B_USRANGERS_M1128_MGS_WDL_01,CFP_B_USRANGERS_M1128_MGS_Slat_WDL_01,CUP_B_M1128_MGS_Desert_OCimport_01,CUP_B_M1128_MGS_Desert_OCimport_02, \
	CUP_B_M1129_MC_MK19_Desert,CUP_B_M1129_MC_MK19_Woodland,CUP_B_M1129_MC_MK19_Desert_Slat,CUP_B_M1129_MC_MK19_Woodland_Slat,CUP_B_M1129_MC_MK19_Woodland_OCimport_01,CUP_B_M1129_MC_MK19_Woodland_OCimport_02,CUP_B_M1129_MC_MK19_Woodland_Slat_OCimport_01,CUP_B_M1129_MC_MK19_Woodland_Slat_OCimport_02,CFP_B_USRANGERS_M1129_MC_MK19_CROWS_WDL_01,CFP_B_USRANGERS_M1129_MC_MK19_CROWS_Slat_WDL_01,CUP_B_M1129_MC_MK19_Desert_OCimport_01,CUP_B_M1129_MC_MK19_Desert_OCimport_02,CUP_B_M1129_MC_MK19_Woodland,CUP_B_M1129_MC_MK19_Woodland_Slat,CUP_B_M1129_MC_MK19_Woodland_OCimport_01,CUP_B_M1129_MC_MK19_Woodland_OCimport_02,CUP_B_M1129_MC_MK19_Woodland_Slat_OCimport_01,CUP_B_M1129_MC_MK19_Woodland_Slat_OCimport_02,CFP_B_USRANGERS_M1129_MC_MK19_CROWS_WDL_01,CFP_B_USRANGERS_M1129_MC_MK19_CROWS_Slat_WDL_01, \
	CUP_LAV25_Base,CUP_B_LAV25_USMC,CUP_B_LAV25_desert_USMC,CUP_B_LAV25_green,CUP_B_LAV25M240_USMC,CUP_B_LAV25M240_desert_USMC,CUP_B_LAV25M240_green,CUP_I_LAV25_RACS,CUP_I_LAV25M240_RACS,CUP_B_LAV25M240_USMC_OCimport_01,CUP_B_LAV25M240_USMC_OCimport_02,CUP_B_LAV25_USMC_OCimport_01,CUP_B_LAV25_USMC_OCimport_02, \
	CUP_GAZ_Vodnik_BPPU_Base,CUP_O_GAZ_Vodnik_BPPU_RU,CUP_O_GAZ_Vodnik_BPPU_RU_OCimport_01,CUP_O_GAZ_Vodnik_BPPU_RU_OCimport_02,CFP_O_RUARMY_GAZ_Vodnik_BPPU_DES_01,CFP_O_RUMVD_GAZ_Vodnik_BPPU_01, \
	CUP_BTR80A_Base,CUP_B_BTR80A_CDF,CUP_B_BTR80A_FIA,CUP_O_BTR80A_GREEN_RU,CUP_O_BTR80A_CAMO_RU,CUP_O_BTR80A_WINTER_RU,CUP_O_BTR80A_DESERT_RU,CUP_O_BTR80A_CHDKZ,CUP_O_BTR80A_CSAT,CUP_O_BTR80A_CSAT_T,CUP_O_BTR80A_SLA,CUP_O_BTR80A_TK,CUP_I_BTR80A_ION,CUP_I_BTR80A_UN,CUP_O_BTR80A_DESERT_RU_OCimport_01,CUP_O_BTR80A_DESERT_RU_OCimport_02,CFP_B_CAF_BTR_80A_01,CUP_B_BTR80A_CDF_OCimport_01,CUP_B_BTR80A_CDF_OCimport_02,CFP_B_CDF_BTR_80A_SNW_01,CUP_O_BTR80A_SLA_OCimport_01,CUP_O_BTR80A_SLA_OCimport_02,CFP_B_UGARMY_BTR_80A_01,CUP_O_BTR80A_CHDKZ_OCimport_01,CUP_O_BTR80A_CHDKZ_OCimport_02,CFP_O_CHDKZ_BTR_80A_SNW_01,CFP_O_IRARMY_BTR_80A_01,CFP_O_NKARMY_BTR_80A_01,CFP_O_SDARMY_BTR_80A_01,CFP_O_RUARMY_BTR_80A_DES_01, \
	CUP_BTR90_Base,CUP_O_BTR90_RU,CUP_O_BTR90_RU_OCimport_01,CUP_O_BTR90_RU_OCimport_02,CFP_B_UGARMY_BTR_90_01,CFP_O_IRARMY_BTR_90_01,CFP_O_SDARMY_BTR_90_01,CFP_O_RUARMY_BTR_90_DES_01,CFP_O_RUMVD_BTR_90_01, \
	CUP_Hilux_BMP1_base,CUP_Hilux_armored_BMP1_Base,CUP_I_Hilux_BMP1_TK,CUP_I_Hilux_armored_BMP1_TK,CUP_O_Hilux_BMP1_TK_INS,CUP_O_Hilux_armored_BMP1_TK_INS,CUP_O_Hilux_BMP1_OPF_G_F,CUP_O_Hilux_armored_BMP1_OPF_G_F,CUP_I_Hilux_BMP1_IND_G_F,CUP_I_Hilux_armored_BMP1_IND_G_F,CUP_B_Hilux_BMP1_BLU_G_F,CUP_B_Hilux_armored_BMP1_BLU_G_F,CUP_I_Hilux_BMP1_NAPA,CUP_I_Hilux_armored_BMP1_NAPA,CFP_I_IS_Hilux_BMP1_Armored_01,CFP_O_IS_Hilux_BMP1_Armored_01,CUP_Hilux_armored_BMP1_Base,CUP_I_Hilux_armored_BMP1_TK,CUP_O_Hilux_armored_BMP1_TK_INS,CUP_O_Hilux_armored_BMP1_OPF_G_F,CUP_I_Hilux_armored_BMP1_IND_G_F,CUP_B_Hilux_armored_BMP1_BLU_G_F,CUP_I_Hilux_armored_BMP1_NAPA,CFP_I_IS_Hilux_BMP1_Armored_01,CFP_O_IS_Hilux_BMP1_Armored_01, \
	rnt_sppz_2a2_luchs_Base,rnt_sppz_2a2_luchs_flecktarn,rnt_sppz_2a2_luchs_tropentarn,rnt_sppz_2a2_luchs_wintertarn, \
	CUP_ZUBR_Base,CUP_B_ZUBR_CDF,CUP_O_ZUBR_RU,CUP_O_ZUBR_CSAT_T,CUP_O_ZUBR_SLA,CUP_I_ZUBR_AAF,CUP_I_ZUBR_UN \
";
force dzn_VOF_Enabled = true;
force dzn_VOF_NonCookingList = "      \
	[""Car"",5],                      \
	[""Motorcycle"",1.2],             \
	[""Ship"",5],                     \
	[""CUP_BMP2_HQ_Base"",20],        \
	[""CUP_BMP2_Ambul_Base"",20],     \
	[""CUP_BRDM2_Base"",10],          \
	[""CUP_BTR40_MG_Base"",10],       \
	[""CUP_BTR60_Base"",10],          \
	[""CUP_BTR80_Common_Base"",10],   \
	[""CUP_BTR90_HQ_Base"",10],       \
	[""CUP_GAZ_Vodnik_Base"",12],     \
	[""CUP_M113_Base"",12],           \
	[""CUP_AAV_Base"",15],            \
	[""CUP_BAF_Jackal2_BASE_D"",10],  \
	[""CUP_Mastiff_Base"",12],        \
	[""CUP_RG31_BASE"",12],           \
	[""CUP_Ridgback_Base"",12],       \
	[""CUP_B_LAV25_HQ_USMC"",20],     \
	[""CUP_StrykerBase"",20],         \
	[""CUP_FV432_Bulldog_Base"",20],  \
	[""CUP_Boxer_Base"",20],          \
	[""Redd_Tank_Fuchs_1A4_Base"",12] \
";
force dzn_VOF_TimeoutMax = 45;
force dzn_VOF_TimeoutMin = 20;

// GRAD CaptiveWalkingAnimation
force grad_captiveWalking_functions_allowFreeing = true;
force grad_captiveWalking_functions_allowRunning = false;
force grad_captiveWalking_functions_allowWalkingWhileCaptiv = true;
force grad_captiveWalking_functions_disableEscorting = false;
force grad_captiveWalking_functions_freeingTime = 150;

// GRAD Trenches
force grad_trenches_functions_allowBigEnvelope = true;
force grad_trenches_functions_allowCamouflage = true;
force grad_trenches_functions_allowDigging = true;
force grad_trenches_functions_allowGiantEnvelope = true;
force grad_trenches_functions_allowLongEnvelope = true;
force grad_trenches_functions_allowShortEnvelope = true;
force grad_trenches_functions_allowSmallEnvelope = true;
force grad_trenches_functions_allowVehicleEnvelope = true;
force grad_trenches_functions_bigEnvelopeDigTime = 40;
force grad_trenches_functions_buildFatigueFactor = 0.2;
force grad_trenches_functions_camouflageRequireEntrenchmentTool = false;
force grad_trenches_functions_giantEnvelopeDigTime = 90;
force grad_trenches_functions_LongEnvelopeDigTime = 100;
force grad_trenches_functions_shortEnvelopeDigTime = 20;
force grad_trenches_functions_smallEnvelopeDigTime = 30;
force grad_trenches_functions_stopBuildingAtFatigueMax = false;
force grad_trenches_functions_vehicleEnvelopeDigTime = 120;

// LAxemann's Suppress
force L_Suppress_buildup = 1.3;
force L_Suppress_enabled = true;
force L_Suppress_flyByEffects = true;
force L_Suppress_halting = false;
force L_Suppress_intensity = 0.3;
force L_Suppress_playerSwabEnabled = true;
force L_Suppress_recovery = 2.2;

// NIArms
force niarms_accswitch = true;
force niarms_magSwitch = true;

// TMF
force TMF_chat_healUsage = 3;
force TMF_chat_loadoutUsage = 3;
force TMF_chat_radioUsage = 3;
force TMF_chat_rpUsage = 3;
force TMF_chat_specUsage = 3;
force TMF_chat_tpUsage = 3;
force TMF_chat_whisperUsage = 3;
force TMF_orbat_markerUpdateInterval = 3;
force TMF_safestart_defaultSS = 120;
force TMF_safestart_enableDefaultSS = false;
force TMF_safestart_handleAI = true;
force TMF_safestart_triggerSound = false;
force TMF_spectator_isJIPAllowed = 1;

// Zeus Enhanced
force zen_common_ascensionMessages = false;
force zen_common_autoAddObjects = false;
force zen_common_cameraBird = false;
force zen_editor_parachuteSounds = true;
