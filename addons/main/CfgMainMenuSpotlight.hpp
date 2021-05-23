class CfgMainMenuSpotlight {
	// Disable default spotlights
	delete AoW_Showcase_AoW;
	delete AoW_Showcase_Future;
	delete ApexProtocol;
	delete Bootcamp;
	delete Contact_Campaign;
	delete EastWind;
	delete OldMan;
	delete Orange_CampaignGerman;
	delete Orange_Campaign;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	delete SP_FD14;
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_03;
	delete Tacops_Campaign_01;
	delete Tanks_Campaign_01;

	// Add server join button
	class GVARMAIN(joinOperationsServer) {
		text = "ARCOMM Operations Server";
		textIsQuote = 0;
		picture = QPATHTOF(logo_arc_ca.paa);
		action = "connectToServer ['108.61.34.58', 2302, 'arcomm'];";
		actionText = "Connect to server";
		condition = "true";
	};
};
