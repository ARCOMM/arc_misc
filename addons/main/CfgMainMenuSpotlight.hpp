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
	#define COND(x) QUOTE('x' == profileNamespace getVariable [ARR_2(QQGVAR(spotlight), 'Clips')])
	// Spinning logo
	class GVARMAIN(joinOperationsServer) {
		text = "ARCOMM Operations Server";
		textIsQuote = 0;
		picture = QPATHTOF(data\spotlight_ca.paa);
		video = QPATHTOF(data\spotlight.ogv);
		action = "connectToServer ['arma.arcomm.co.uk', 2302, 'arcomm'];";
		actionText = "Connect to server";
		condition = COND(Logo);
	};
	// Clips
	class GVARMAIN(joinOperationsServer2): GVARMAIN(joinOperationsServer) {
		picture = QPATHTOF(data\spotlight2_ca.paa);
		video = QPATHTOF(data\spotlight2.ogv);
		condition = COND(Clips);
	};
};
