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
force ace_advanced_fatigue_recoveryFactor = 1.2;
force ace_advanced_fatigue_swayFactor = 1;
force ace_advanced_fatigue_terrainGradientFactor = 1;

// ACE Advanced Throwing
force ace_advanced_throwing_enabled = true;
force ace_advanced_throwing_enablePickUp = true;
force ace_advanced_throwing_enablePickUpAttached = true;

// ACE Arsenal
force ace_arsenal_allowDefaultLoadouts = true;
force ace_arsenal_allowSharedLoadouts = true;
force ace_arsenal_enableIdentityTabs = false;

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
force ace_noradio_enabled = true;

// ACE Cook off
force ace_cookoff_ammoCookoffDuration = 0.3;
force ace_cookoff_enable = 2;
force ace_cookoff_enableAmmobox = true;
force ace_cookoff_enableAmmoCookoff = true;
force ace_cookoff_probabilityCoef = 1;

// ACE Crew Served Weapons
force ace_csw_ammoHandling = 2;
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

// ACE Hearing
force ace_hearing_autoAddEarplugsToUnits = true;
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
force ace_rearm_level = 2;
force ace_rearm_supply = 0;
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

// ACE Medical
force ace_medical_ai_enabledFor = 2;
force ace_medical_AIDamageThreshold = 1;
force ace_medical_bleedingCoefficient = 1;
force ace_medical_blood_bloodLifetime = 900;
force ace_medical_blood_enabledFor = 2;
force ace_medical_blood_maxBloodObjects = 500;
force ace_medical_fatalDamageSource = 2;
force ace_medical_fractureChance = 0.8;
force ace_medical_fractures = 1;
force ace_medical_gui_maxDistance = 3;
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
force ace_overheating_unJamFailChance = 0.15;
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

// ACE Uncategorized
force ace_fastroping_requireRopeItems = false;
force ace_gforces_enabledFor = 0;
force ace_hitreactions_minDamageToTrigger = 0.1;
force ace_laser_dispersionCount = 1;
force ace_microdagr_mapDataAvailable = 2;
force ace_microdagr_waypointPrecision = 3;
force ace_overpressure_distanceCoefficient = 1;

// ACE User Interface
force ace_ui_allowSelectiveUI = true;

// ACE Vehicle Lock
force ace_vehiclelock_defaultLockpickStrength = 10;
force ace_vehiclelock_lockVehicleInventory = true;
force ace_vehiclelock_vehicleStartingLockState = -1;

// ACE View Distance Limiter
force ace_viewdistance_enabled = true;
force ace_viewdistance_limitViewDistance = 12000;

// ACE Weapons
force ace_laserpointer_enabled = true;

// ACE Weather
force ace_weather_enabled = true;
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

// ACEX Field Rations DISABLE
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

// ACRE2
force acre_sys_core_automaticAntennaDirection = true;
force acre_sys_core_fullDuplex = true;
force acre_sys_core_ignoreAntennaDirection = true;
force acre_sys_core_interference = true;
force acre_sys_core_revealToAI = 1;
force acre_sys_core_terrainLoss = 0.8;
force acre_sys_core_ts3ChannelName = "";
force acre_sys_core_ts3ChannelPassword = "";
force acre_sys_core_ts3ChannelSwitch = true;
force acre_sys_core_unmuteClients = true;
force acre_sys_signal_signalModel = 2;

// AI
force cfp_autoEquipNVG = false;

// CBA Weapons
force cba_disposable_replaceDisposableLauncher = true;

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
