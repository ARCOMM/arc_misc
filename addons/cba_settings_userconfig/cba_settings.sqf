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
ace_advanced_fatigue_fadeStaminaBar = true;
force ace_advanced_fatigue_loadFactor = 0.9;
force ace_advanced_fatigue_performanceFactor = 1;
force ace_advanced_fatigue_recoveryFactor = 1.2;
force ace_advanced_fatigue_swayFactor = 1;
force ace_advanced_fatigue_terrainGradientFactor = 1;

// ACE Advanced Throwing
force ace_advanced_throwing_enabled = true;
force ace_advanced_throwing_enablePickUp = true;
force ace_advanced_throwing_enablePickUpAttached = true;
ace_advanced_throwing_showMouseControls = true;
ace_advanced_throwing_showThrowArc = true;

// ACE Arsenal
force ace_arsenal_allowDefaultLoadouts = true;
force ace_arsenal_allowSharedLoadouts = true;
ace_arsenal_camInverted = false;
force ace_arsenal_enableIdentityTabs = false;
ace_arsenal_enableModIcons = true;
ace_arsenal_EnableRPTLog = false;
ace_arsenal_fontHeight = 4.5;

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
force ace_common_checkPBOsWhitelist = "['arc_ai_firemodes','arc_ai_main','arc_ai_skill','arc_ai_client_xeh','arc_ai_client_launchers','arc_hear','arc_difficulty','ares','mars_server']";
ace_common_displayTextColor = [0,0,0,0];
ace_common_displayTextFontColor = [1,1,1,1];
ace_common_settingFeedbackIcons = 1;
ace_common_settingProgressBarLocation = 0;
force ace_noradio_enabled = true;
ace_parachute_hideAltimeter = false;

// ACE Cook off
force ace_cookoff_ammoCookoffDuration = 0.3;
force ace_cookoff_enable = 2;
force ace_cookoff_enableAmmobox = true;
force ace_cookoff_enableAmmoCookoff = true;
force ace_cookoff_probabilityCoef = 1;

// ACE Crew Served Weapons
force ace_csw_ammoHandling = 2;
force ace_csw_defaultAssemblyMode = true;
ace_csw_dragAfterDeploy = false;
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

// ACE Goggles
ace_goggles_effects = 0;
ace_goggles_showClearGlasses = false;
ace_goggles_showInThirdPerson = false;

// ACE Hearing
force ace_hearing_autoAddEarplugsToUnits = true;
force ace_hearing_disableEarRinging = true;
force ace_hearing_earplugsVolume = 0.5;
force ace_hearing_enableCombatDeafness = false;
force ace_hearing_enabledForZeusUnits = false;
force ace_hearing_unconsciousnessVolume = 0.4;

// ACE Interaction
force ace_interaction_disableNegativeRating = false;
ace_interaction_enableMagazinePassing = true;
force ace_interaction_enableTeamManagement = true;

// ACE Interaction Menu
ace_gestures_showOnInteractionMenu = 2;
ace_interact_menu_actionOnKeyRelease = true;
ace_interact_menu_addBuildingActions = true;
ace_interact_menu_alwaysUseCursorInteraction = true;
ace_interact_menu_alwaysUseCursorSelfInteraction = true;
ace_interact_menu_colorShadowMax = [0,0,0,1];
ace_interact_menu_colorShadowMin = [0,0,0,0.25];
ace_interact_menu_colorTextMax = [1,1,1,1];
ace_interact_menu_colorTextMin = [1,1,1,0.25];
ace_interact_menu_cursorKeepCentered = false;
ace_interact_menu_cursorKeepCenteredSelfInteraction = false;
ace_interact_menu_menuAnimationSpeed = 0;
ace_interact_menu_menuBackground = 0;
ace_interact_menu_menuBackgroundSelf = 0;
ace_interact_menu_selectorColor = [1,0,0];
ace_interact_menu_shadowSetting = 2;
ace_interact_menu_textSize = 1;
ace_interact_menu_useListMenu = true;
ace_interact_menu_useListMenuSelf = false;

// ACE Logistics
force ace_cargo_enable = true;
force ace_cargo_loadTimeCoefficient = 2.5;
force ace_cargo_paradropTimeCoefficent = 2.5;
force ace_rearm_distance = 35;
force ace_rearm_level = 2;
force ace_rearm_supply = 0;
force ace_refuel_hoseLength = 12;
force ace_refuel_rate = 1;
force ace_repair_addSpareParts = true;
force ace_repair_autoShutOffEngineWhenStartingRepair = false;
force ace_repair_consumeItem_toolKit = 0;
ace_repair_displayTextOnRepair = true;
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
ace_markers_moveRestriction = 0;

// ACE Map Gestures
ace_map_gestures_defaultColor = [1,0.88,0,0.7];
ace_map_gestures_defaultLeadColor = [1,0.88,0,0.95];
force ace_map_gestures_enabled = true;
force ace_map_gestures_interval = 0.03;
force ace_map_gestures_maxRange = 12;
ace_map_gestures_nameTextColor = [0.2,0.2,0.2,0.3];

// ACE Map Tools
ace_maptools_drawStraightLines = false;
ace_maptools_rotateModifierKey = 1;

// ACE Medical
force ace_medical_ai_enabledFor = 2;
force ace_medical_AIDamageThreshold = 1;
force ace_medical_bleedingCoefficient = 1;
force ace_medical_blood_bloodLifetime = 900;
force ace_medical_blood_enabledFor = 2;
force ace_medical_blood_maxBloodObjects = 500;
force ace_medical_fatalDamageSource = 2;
ace_medical_feedback_bloodVolumeEffectType = 0;
ace_medical_feedback_painEffectType = 0;
force ace_medical_fractureChance = 0.8;
force ace_medical_fractures = 1;
ace_medical_gui_enableActions = 0;
ace_medical_gui_enableMedicalMenu = 1;
ace_medical_gui_enableSelfActions = true;
force ace_medical_gui_maxDistance = 3;
ace_medical_gui_openAfterTreatment = true;
force ace_medical_ivFlowRate = 2.5;
force ace_medical_limping = 1;
force ace_medical_painCoefficient = 1;
force ace_medical_playerDamageThreshold = 1;
force ace_medical_spontaneousWakeUpChance = 0.25;
force ace_medical_spontaneousWakeUpEpinephrineBoost = 2;
force ace_medical_statemachine_AIUnconsciousness = true;
force ace_medical_statemachine_cardiacArrestTime = 30;
force ace_medical_statemachine_fatalInjuriesAI = 0;
force ace_medical_statemachine_fatalInjuriesPlayer = 0;
force ace_medical_treatment_advancedBandages = 0;
force ace_medical_treatment_advancedDiagnose = true;
force ace_medical_treatment_advancedMedication = true;
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

// ACE Name Tags
ace_nametags_defaultNametagColor = [0.77,0.51,0.08,1];
ace_nametags_nametagColorBlue = [0.67,0.67,1,1];
ace_nametags_nametagColorGreen = [0.67,1,0.67,1];
ace_nametags_nametagColorMain = [1,1,1,1];
ace_nametags_nametagColorRed = [1,0.67,0.67,1];
ace_nametags_nametagColorYellow = [1,1,0.67,1];
force ace_nametags_playerNamesMaxAlpha = 0.8;
force ace_nametags_playerNamesViewDistance = 5;
force ace_nametags_showCursorTagForVehicles = false;
ace_nametags_showNamesForAI = false;
ace_nametags_showPlayerNames = 5;
ace_nametags_showPlayerRanks = false;
ace_nametags_showSoundWaves = 0;
ace_nametags_showVehicleCrewInfo = true;
ace_nametags_tagSize = 2;

// ACE Nightvision
force ace_nightvision_aimDownSightsBlur = 0.7;
force ace_nightvision_disableNVGsWithSights = false;
force ace_nightvision_effectScaling = 0.7;
force ace_nightvision_fogScaling = 0.2;
force ace_nightvision_noiseScaling = 0.1;
ace_nightvision_shutterEffects = false;

// ACE Overheating
ace_overheating_displayTextOnJam = true;
force ace_overheating_enabled = true;
force ace_overheating_overheatingDispersion = true;
ace_overheating_showParticleEffects = true;
ace_overheating_showParticleEffectsForEveryone = true;
force ace_overheating_unJamFailChance = 0.15;
force ace_overheating_unJamOnreload = true;

// ACE Pointing
force ace_finger_enabled = true;
ace_finger_indicatorColor = [0.83,0.68,0.21,0.75];
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
ace_quickmount_enableMenu = 3;
ace_quickmount_priority = 0;
force ace_quickmount_speed = 15;

// ACE Respawn
force ace_respawn_removeDeadBodiesDisconnected = true;
force ace_respawn_savePreDeathGear = false;

// ACE Scopes
force ace_scopes_correctZeroing = true;
force ace_scopes_deduceBarometricPressureFromTerrainAltitude = true;
force ace_scopes_defaultZeroRange = 200;
force ace_scopes_enabled = true;
ace_scopes_forceUseOfAdjustmentTurrets = true;
force ace_scopes_overwriteZeroRange = true;
force ace_scopes_simplifiedZeroing = false;
ace_scopes_useLegacyUI = false;
force ace_scopes_zeroReferenceBarometricPressure = 1013.25;
force ace_scopes_zeroReferenceHumidity = 0;
force ace_scopes_zeroReferenceTemperature = 15;

// ACE Spectator
force ace_spectator_enableAI = false;
ace_spectator_maxFollowDistance = 5;
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

// ACE Uncategorized
force ace_fastroping_requireRopeItems = false;
force ace_gforces_enabledFor = 0;
force ace_hitreactions_minDamageToTrigger = 0.1;
ace_inventory_inventoryDisplaySize = 0;
force ace_laser_dispersionCount = 1;
force ace_microdagr_mapDataAvailable = 2;
force ace_microdagr_waypointPrecision = 3;
ace_optionsmenu_showNewsOnMainMenu = true;
force ace_overpressure_distanceCoefficient = 1;
ace_tagging_quickTag = 1;

// ACE User Interface
force ace_ui_allowSelectiveUI = true;
ace_ui_ammoCount = false;
ace_ui_ammoType = true;
ace_ui_commandMenu = true;
ace_ui_firingMode = true;
ace_ui_groupBar = false;
ace_ui_gunnerAmmoCount = true;
ace_ui_gunnerAmmoType = true;
ace_ui_gunnerFiringMode = true;
ace_ui_gunnerLaunchableCount = true;
ace_ui_gunnerLaunchableName = true;
ace_ui_gunnerMagCount = true;
ace_ui_gunnerWeaponLowerInfoBackground = true;
ace_ui_gunnerWeaponName = true;
ace_ui_gunnerWeaponNameBackground = true;
ace_ui_gunnerZeroing = true;
ace_ui_magCount = true;
ace_ui_soldierVehicleWeaponInfo = true;
ace_ui_staminaBar = true;
ace_ui_stance = true;
ace_ui_throwableCount = true;
ace_ui_throwableName = true;
ace_ui_vehicleAltitude = true;
ace_ui_vehicleCompass = true;
ace_ui_vehicleDamage = true;
ace_ui_vehicleFuelBar = true;
ace_ui_vehicleInfoBackground = true;
ace_ui_vehicleName = true;
ace_ui_vehicleNameBackground = true;
ace_ui_vehicleRadar = true;
ace_ui_vehicleSpeed = true;
ace_ui_weaponLowerInfoBackground = true;
ace_ui_weaponName = true;
ace_ui_weaponNameBackground = true;
ace_ui_zeroing = true;

// ACE Vehicle Lock
force ace_vehiclelock_defaultLockpickStrength = 10;
force ace_vehiclelock_lockVehicleInventory = true;
force ace_vehiclelock_vehicleStartingLockState = -1;

// ACE Vehicles
ace_vehicles_hideEjectAction = true;
ace_vehicles_keepEngineRunning = false;
ace_vehicles_speedLimiterStep = 5;

// ACE View Distance Limiter
force ace_viewdistance_enabled = true;
force ace_viewdistance_limitViewDistance = 12000;
ace_viewdistance_objectViewDistanceCoeff = 6;
ace_viewdistance_viewDistanceAirVehicle = 0;
ace_viewdistance_viewDistanceLandVehicle = 0;
ace_viewdistance_viewDistanceOnFoot = 0;

// ACE Weapons
ace_common_persistentLaserEnabled = true;
force ace_laserpointer_enabled = true;
ace_reload_displayText = true;
ace_reload_showCheckAmmoSelf = false;
ace_weaponselect_displayText = true;

// ACE Weather
force ace_weather_enabled = true;
ace_weather_showCheckAirTemperature = true;
force ace_weather_updateInterval = 60;
force ace_weather_windSimulation = true;

// ACE Wind Deflection
force ace_winddeflection_enabled = true;
force ace_winddeflection_simulationInterval = 0.05;
force ace_winddeflection_vehicleEnabled = true;

// ACE Zeus
force ace_zeus_autoAddObjects = true;
force ace_zeus_canCreateZeus = -1;
force ace_zeus_radioOrdnance = false;
force ace_zeus_remoteWind = false;
force ace_zeus_revealMines = 0;
force ace_zeus_zeusAscension = false;
ace_zeus_zeusBird = false;

// ACEX Field Rations DISABLE
force acex_field_rations_affectAdvancedFatigue = true;
force acex_field_rations_enabled = false;
acex_field_rations_hudShowLevel = 0;
acex_field_rations_hudTransparency = -1;
acex_field_rations_hudType = 0;
force acex_field_rations_hungerSatiated = 1;
force acex_field_rations_terrainObjectActions = true;
force acex_field_rations_thirstQuenched = 1;
force acex_field_rations_timeWithoutFood = 2;
force acex_field_rations_timeWithoutWater = 2;
force acex_field_rations_waterSourceActions = 2;

// ACEX Fortify
acex_fortify_settingHint = 2;

// ACEX Headless
force acex_headless_delay = 15;
force acex_headless_enabled = true;
force acex_headless_endMission = 0;
force acex_headless_log = false;
force acex_headless_transferLoadout = 1;

// ACEX Sitting
force acex_sitting_enable = false;

// ACEX View Restriction
force acex_viewrestriction_mode = 1;
force acex_viewrestriction_modeSelectiveAir = 1;
force acex_viewrestriction_modeSelectiveFoot = 1;
force acex_viewrestriction_modeSelectiveLand = 1;
force acex_viewrestriction_modeSelectiveSea = 1;
acex_viewrestriction_preserveView = false;

// ACEX Volume
acex_volume_enabled = true;
acex_volume_fadeDelay = 1;
acex_volume_lowerInVehicles = true;
acex_volume_reduction = 5;
acex_volume_remindIfLowered = false;
acex_volume_showNotification = true;

// Achilles - Available Factions
Achilles_var_BLU_CTRG_F = true;
Achilles_var_BLU_F = true;
Achilles_var_BLU_G_F = true;
Achilles_var_BLU_GEN_F = true;
Achilles_var_BLU_T_F = true;
Achilles_var_BLU_W_F = true;
Achilles_var_CFP_B_AFARMY = true;
Achilles_var_CFP_B_AFGPOLICE = true;
Achilles_var_CFP_B_CAF = true;
Achilles_var_CFP_B_CDF_SNW = true;
Achilles_var_CFP_B_CZARMY_WDL = true;
Achilles_var_CFP_B_DEARMY_WDL = true;
Achilles_var_CFP_B_GBARMY_WDL = true;
Achilles_var_CFP_B_ILIDF = true;
Achilles_var_CFP_B_IQARMY = true;
Achilles_var_CFP_B_IQPOLICE = true;
Achilles_var_CFP_B_KEARMY = true;
Achilles_var_CFP_B_MLARMY = true;
Achilles_var_CFP_B_NAARMY = true;
Achilles_var_CFP_B_PESH = true;
Achilles_var_CFP_B_UGARMY = true;
Achilles_var_CFP_B_USARMY_1991_DES = true;
Achilles_var_CFP_B_USARMY_1991_WDL = true;
Achilles_var_CFP_B_USARMY_2003_DES = true;
Achilles_var_CFP_B_USARMY_2003_WDL = true;
Achilles_var_CFP_B_USARMY_WDL = true;
Achilles_var_CFP_B_USCIA = true;
Achilles_var_CFP_B_USMC_DES = true;
Achilles_var_CFP_B_USRANGERS_WDL = true;
Achilles_var_CFP_B_USSEALS_DES = true;
Achilles_var_CFP_B_USSEALS_WDL = true;
Achilles_var_CFP_B_YPG = true;
Achilles_var_CFP_C_AFG = true;
Achilles_var_CFP_C_AFRCHRISTIAN = true;
Achilles_var_CFP_C_AFRISLAMIC = true;
Achilles_var_CFP_C_ASIA = true;
Achilles_var_CFP_C_ME = true;
Achilles_var_CFP_I_ALNUSRA = true;
Achilles_var_CFP_I_IS = true;
Achilles_var_CFP_I_SDRebels = true;
Achilles_var_CFP_I_SDRebelsrf = true;
Achilles_var_CFP_I_SSArmy = true;
Achilles_var_CFP_I_TUAREG = true;
Achilles_var_CFP_I_WestUltra = true;
Achilles_var_CFP_O_ABUSAYYAF = true;
Achilles_var_CFP_O_ALQAEDA = true;
Achilles_var_CFP_O_ALSHABAAB = true;
Achilles_var_CFP_O_ANSARALLAH = true;
Achilles_var_CFP_O_BOKOHARAM = true;
Achilles_var_CFP_O_CFRebels = true;
Achilles_var_CFP_O_CHDKZ_SNW = true;
Achilles_var_CFP_O_HAMAS = true;
Achilles_var_CFP_O_HEZBOLLAH = true;
Achilles_var_CFP_O_IQARMY = true;
Achilles_var_CFP_O_IRARMY = true;
Achilles_var_CFP_O_IS = true;
Achilles_var_CFP_O_NKARMY = true;
Achilles_var_CFP_O_RUARMY_DES = true;
Achilles_var_CFP_O_RUMVD = true;
Achilles_var_CFP_O_SDARMY = true;
Achilles_var_CFP_O_SDMilitia = true;
Achilles_var_CFP_O_SOREBEL = true;
Achilles_var_CFP_O_SSREBELS = true;
Achilles_var_CFP_O_SYARMY = true;
Achilles_var_CFP_O_TBAN = true;
Achilles_var_CIV_F = true;
Achilles_var_CIV_IDAP_F = true;
Achilles_var_CUP_B_CDF = true;
Achilles_var_CUP_B_CZ = true;
Achilles_var_CUP_B_GB = true;
Achilles_var_CUP_B_GER = true;
Achilles_var_CUP_B_HIL = true;
Achilles_var_CUP_B_RNZN = true;
Achilles_var_CUP_B_US = true;
Achilles_var_CUP_B_US_Army = true;
Achilles_var_CUP_B_USMC = true;
Achilles_var_CUP_C_CHERNARUS = true;
Achilles_var_CUP_C_RU = true;
Achilles_var_CUP_C_SAHRANI = true;
Achilles_var_CUP_C_Special = true;
Achilles_var_CUP_C_TK = true;
Achilles_var_CUP_I_NAPA = true;
Achilles_var_CUP_I_PMC_ION = true;
Achilles_var_CUP_I_RACS = true;
Achilles_var_CUP_I_TK_GUE = true;
Achilles_var_CUP_I_UN = true;
Achilles_var_CUP_O_ChDKZ = true;
Achilles_var_CUP_O_RU = true;
Achilles_var_CUP_O_SLA = true;
Achilles_var_CUP_O_TK = true;
Achilles_var_CUP_O_TK_MILITIA = true;
Achilles_var_FIR_AWS_ENEMY_F = true;
Achilles_var_FIR_AWS_FRND_F = true;
Achilles_var_IND_C_F = true;
Achilles_var_IND_E_F = true;
Achilles_var_IND_F = true;
Achilles_var_IND_G_F = true;
Achilles_var_IND_L_F = true;
Achilles_var_Interactive_F = true;
Achilles_var_MNP_I_Units = true;
Achilles_var_MNP_O_Units = true;
Achilles_var_MNP_Units_BLU = true;
Achilles_var_OPF_F = true;
Achilles_var_OPF_G_F = true;
Achilles_var_OPF_GEN_F = true;
Achilles_var_OPF_R_F = true;
Achilles_var_OPF_T_F = true;
Achilles_var_OPF_V_F = true;
Achilles_var_skn_nbc_b = true;
Achilles_var_skn_nbc_i = true;
Achilles_var_skn_nbc_o = true;
Achilles_var_Virtual_F = true;

// Achilles - Available Modules
Achilles_var_Achilles_ACE_Heal_Module = true;
Achilles_var_Achilles_ACE_ImmersiveHeal_Module = true;
Achilles_var_Achilles_ACE_Injury_Module = true;
Achilles_var_Achilles_AddECM_Module = true;
Achilles_var_Achilles_Animation_Module = true;
Achilles_var_Achilles_Attach_To_Module = true;
Achilles_var_Achilles_Bind_Variable_Module = true;
Achilles_var_Achilles_Buildings_Destroy_Module = true;
Achilles_var_Achilles_Buildings_LockDoors_Module = true;
Achilles_var_Achilles_Buildings_ToggleLight_Module = true;
Achilles_var_Achilles_CAS_Module = true;
Achilles_var_Achilles_Change_Ability_Module = true;
Achilles_var_Achilles_Change_Altitude_Module = true;
Achilles_var_Achilles_Chatter_Module = true;
Achilles_var_Achilles_Create_Universal_Target_Module = true;
Achilles_var_Achilles_DevTools_FunctionViewer = true;
Achilles_var_Achilles_DevTools_ShowInAnimViewer = true;
Achilles_var_Achilles_DevTools_ShowInConfig = true;
Achilles_var_Achilles_Earthquake_Module = true;
Achilles_var_Achilles_Hide_Objects_Module = true;
Achilles_var_Achilles_IED_Module = true;
Achilles_var_Achilles_Make_Invincible_Module = true;
Achilles_var_Achilles_Module_Arsenal_AddFull = true;
Achilles_var_Achilles_Module_Arsenal_CopyToClipboard = true;
Achilles_var_Achilles_Module_Arsenal_CreateCustom = true;
Achilles_var_Achilles_Module_Arsenal_Paste = true;
Achilles_var_Achilles_Module_Arsenal_Remove = true;
Achilles_var_Achilles_Module_Change_Side_Relations = true;
Achilles_var_Achilles_Module_Equipment_Attach_Dettach_Effect = true;
Achilles_var_Achilles_Module_FireSupport_CASBomb = true;
Achilles_var_Achilles_Module_FireSupport_CASGun = true;
Achilles_var_Achilles_Module_FireSupport_CASGunMissile = true;
Achilles_var_Achilles_Module_FireSupport_CASMissile = true;
Achilles_var_Achilles_Module_Manage_Advanced_Compositions = true;
Achilles_var_Achilles_Module_Player_Set_Frequencies = true;
Achilles_var_Achilles_Module_Rotation = true;
Achilles_var_Achilles_Module_Spawn_Advanced_Composition = true;
Achilles_var_Achilles_Module_Spawn_Carrier = true;
Achilles_var_Achilles_Module_Spawn_Destroyer = true;
Achilles_var_Achilles_Module_Spawn_Effects = true;
Achilles_var_Achilles_Module_Spawn_Explosives = true;
Achilles_var_Achilles_Module_Spawn_Intel = true;
Achilles_var_Achilles_Module_Supply_Drop = true;
Achilles_var_Achilles_Module_Zeus_AssignZeus = true;
Achilles_var_Achilles_Module_Zeus_SwitchUnit = true;
Achilles_var_Achilles_Nuke_Module = true;
Achilles_var_Achilles_Patrol_Module = true;
Achilles_var_Achilles_Set_Date_Module = true;
Achilles_var_Achilles_Set_Height_Module = true;
Achilles_var_Achilles_Set_Weather_Module = true;
Achilles_var_Achilles_Sit_On_Chair_Module = true;
Achilles_var_Achilles_SuicideBomber_Module = true;
Achilles_var_Achilles_Suppressive_Fire_Module = true;
Achilles_var_Achilles_SurrenderUnit_Module = true;
Achilles_var_Achilles_Toggle_Simulation_Module = true;
Achilles_var_Achilles_Transfer_Ownership_Module = true;
Achilles_var_Ares_Artillery_Fire_Mission_Module = true;
Achilles_var_Ares_Module_Bahaviour_Garrison_Nearest = true;
Achilles_var_Ares_Module_Bahaviour_SurrenderUnit = true;
Achilles_var_Ares_Module_Bahaviour_UnGarrison = true;
Achilles_var_Ares_Module_Behaviour_Patrol = true;
Achilles_var_Ares_Module_Behaviour_Search_Nearby_And_Garrison = true;
Achilles_var_Ares_Module_Behaviour_Search_Nearby_Building = true;
Achilles_var_Ares_Module_Dev_Tools_Create_Mission_SQF = true;
Achilles_var_Ares_Module_Dev_Tools_Execute_Code = true;
Achilles_var_Ares_Module_Equipment_Flashlight_IR_ON_OFF = true;
Achilles_var_Ares_Module_Equipment_NVD_TACLIGHT_IR = true;
Achilles_var_Ares_Module_Equipment_Turret_Optics = true;
Achilles_var_Ares_Module_Player_Change_Player_Side = true;
Achilles_var_Ares_Module_Player_Create_Teleporter = true;
Achilles_var_Ares_Module_Player_Teleport = true;
Achilles_var_Ares_Module_Reinforcements_Create_Lz = true;
Achilles_var_Ares_Module_Reinforcements_Create_Rp = true;
Achilles_var_Ares_Module_Reinforcements_Spawn_Units = true;
Achilles_var_Ares_Module_Spawn_Submarine = true;
Achilles_var_Ares_Module_Spawn_Trawler = true;
Achilles_var_Ares_Module_Zeus_Add_Remove_Editable_Objects = true;
Achilles_var_Ares_Module_Zeus_Hint = true;
Achilles_var_Ares_Module_Zeus_Switch_Side = true;
Achilles_var_Ares_Module_Zeus_Visibility = true;
Achilles_var_ModulePunishment_F = true;

// Achilles - Curator Vision Modes
achilles_curator_vision_blackhot = false;
achilles_curator_vision_blackhotgreencold = false;
achilles_curator_vision_blackhotredcold = false;
achilles_curator_vision_greenhotcold = false;
achilles_curator_vision_nvg = true;
achilles_curator_vision_redgreen = false;
achilles_curator_vision_redhot = false;
achilles_curator_vision_whitehot = true;
achilles_curator_vision_whitehotredcold = false;

// Achilles - Module Defaults
Achilles_var_setRadioFrequenciesLR_Default = "50";
Achilles_var_setRadioFrequenciesSR_Default = "150";

// Achilles - Debug
Achilles_Debug_Output_Enabled = false;

// Achilles - User Interface
Achilles_var_iconSelection = "Achilles_var_iconSelection_Achilles";
Achilles_var_moduleTreeCollapse = true;
Achilles_var_moduleTreeDLC = true;
Achilles_var_moduleTreeHelmet = true;
Achilles_var_moduleTreeSearchPatch = false;

// ACRE2
force acre_sys_core_automaticAntennaDirection = true;
acre_sys_core_defaultRadioVolume = 0.8;
force acre_sys_core_fullDuplex = true;
force acre_sys_core_ignoreAntennaDirection = true;
force acre_sys_core_interference = true;
acre_sys_core_postmixGlobalVolume = 1;
acre_sys_core_premixGlobalVolume = 1;
force acre_sys_core_revealToAI = 1;
acre_sys_core_spectatorVolume = 1;
acre_sys_core_terrainLoss = 1;
force acre_sys_core_ts3ChannelName = "";
force acre_sys_core_ts3ChannelPassword = "";
force acre_sys_core_ts3ChannelSwitch = true;
force acre_sys_core_unmuteClients = true;
force acre_sys_signal_signalModel = 2;

// ACRE2 UI
acre_sys_gui_volumeColorScale = [[1,1,0,0.5],[1,0.83,0,0.5],[1,0.65,0,0.5],[1,0.44,0,0.5],[1,0,0,0.5]];
acre_sys_list_CycleRadiosColor = [0.66,0.05,1,1];
acre_sys_list_DefaultPTTColor = [1,0.8,0,1];
acre_sys_list_HintBackgroundColor = [0,0,0,0.8];
acre_sys_list_HintTextFont = "RobotoCondensed";
acre_sys_list_LanguageColor = [1,0.29,0.16,1];
acre_sys_list_PTT1Color = [1,0.8,0,1];
acre_sys_list_PTT2Color = [1,0.8,0,1];
acre_sys_list_PTT3Color = [1,0.8,0,1];
acre_sys_list_SwitchChannelColor = [0.66,0.05,1,1];
acre_sys_list_ToggleHeadsetColor = [0.66,0.05,1,1];

// ACRE2 Zeus
acre_sys_zeus_zeusCanSpectate = true;
acre_sys_zeus_zeusDefaultVoiceSource = false;
acre_sys_zeus_zeusCommunicateViaCamera = true;

// AI
force cfp_autoEquipNVG = false;

// CBA UI
cba_ui_notifyLifetime = 4;
cba_ui_StorePasswords = 1;

// CBA Weapons
cba_disposable_dropUsedLauncher = 2;
force cba_disposable_replaceDisposableLauncher = true;
cba_events_repetitionMode = 1;
cba_optics_usePipOptics = true;

// CUP
CUP_Vehicles_PreventBarrelClip = true;

// F/A-18
js_jc_fa18_advancedStart = false;
js_jc_fa18_canopyLoss = true;
js_jc_fa18_cursorSensitivity = 2.5;
js_jc_fa18_interactCursor = false;
js_jc_fa18_interactionRadiusMod = 1;
js_jc_fa18_showLabels = true;

// GRAD Trenches
force grad_trenches_functions_allowBigEnvelope = true;
force grad_trenches_functions_allowCamouflage = true;
force grad_trenches_functions_allowDigging = true;
force grad_trenches_functions_allowGiantEnvelope = true;
force grad_trenches_functions_allowShortEnvelope = true;
force grad_trenches_functions_allowSmallEnvelope = true;
force grad_trenches_functions_allowVehicleEnvelope = true;
force grad_trenches_functions_bigEnvelopeDigTime = 40;
force grad_trenches_functions_buildFatigueFactor = 0.2;
force grad_trenches_functions_camouflageRequireEntrenchmentTool = false;
force grad_trenches_functions_enableAutomaticFilePath = false;
force grad_trenches_functions_giantEnvelopeDigTime = 90;
force grad_trenches_functions_shortEnvelopeDigTime = 20;
force grad_trenches_functions_smallEnvelopeDigTime = 30;
force grad_trenches_functions_stopBuildingAtFatigueMax = false;
force grad_trenches_functions_vehicleEnvelopeDigTime = 120;

// LAxemann's Suppress
force L_Suppress_buildup = 1;
force L_Suppress_enabled = true;
L_Suppress_flyByEffects = true;
L_Suppress_flyByIntensity = 0.1;
force L_Suppress_halting = false;
force L_Suppress_intensity = 0.3;
force L_Suppress_playerSwabEnabled = true;
force L_Suppress_recovery = 2.2;

// NIArms
force niarms_accswitch = true;
force niarms_magSwitch = true;

// STUI Settings
STHud_Settings_ColourBlindMode = "Normal";
STHud_Settings_Font = "TahomaB";
STHud_Settings_HUDMode = 3;
STHud_Settings_Occlusion = true;
STHud_Settings_RemoveDeadViaProximity = true;
STHud_Settings_SquadBar = true;
STHud_Settings_TextShadow = 1;
STHud_Settings_UnconsciousFadeEnabled = true;
