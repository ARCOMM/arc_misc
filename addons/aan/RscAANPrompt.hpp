class GVARMAIN(RscAANPrompt): RscStandardDisplay {
	idd = IDD_AAN;
	INIT_DISPLAY(GVARMAIN(RscAANPrompt),ADDON)
	movingEnable = true;
	class Controls {
		class MessageBox: RscMessageBox {
			x = 10.6 * GUI_GRID_W + GUI_GRID_CENTER_X;
			y = 7 * GUI_GRID_H + GUI_GRID_CENTER_Y;
			w = GUI_GRID_W * 20;
			h = GUI_GRID_H * 20;
			class Controls: Controls {
				class BcgCommonTop: BcgCommonTop {
					text = "AAN Overlay Configurator";
				};
				delete Text;
				class BcgCommon: BcgCommon {
					h = 10.7 * GUI_GRID_H;
				};
				class BackgroundButtonOK: BackgroundButtonOK {
					y = 11.9 * GUI_GRID_H;
				};
				class BackgroundButtonMiddle: BackgroundButtonMiddle {
					y = 11.9 * GUI_GRID_H;
				};
				class BackgroundButtonCancel: BackgroundButtonCancel {
					y = 11.9 * GUI_GRID_H;
				};
				class ButtonOK: ButtonOK {
					text = "COMMIT";
					y = 11.9 * GUI_GRID_H;
					onButtonClick = QUOTE(with uinamespace do {[ARR_3('commit',_this,'')] call GVARMAIN(DOUBLES(RscAANPrompt,script))});
				};
				class ButtonHelp: RscButtonMenuBIKI {
					text = "HELP";
					url = "https://community.bistudio.com/wiki/Structured_Text";
					x = 6.3 * GUI_GRID_W;
					w = 6.2 * GUI_GRID_W;
					h = 1 * GUI_GRID_H;
					y = 11.9 * GUI_GRID_H;
				};
				class ButtonCancel: ButtonCancel {
					y = 11.9 * GUI_GRID_H;
					onButtonClick = QUOTE(with uinamespace do {[ARR_3('cancel',_this,'')] call GVARMAIN(DOUBLES(RscAANPrompt,script))});
				};

				class Headline: RscText {
					text = "Headline";
					sizeEx = IGUI_TEXT_SIZE_MEDIUM;
					x = 0.7 * GUI_GRID_W;
					y = 1.8 * GUI_GRID_H;
					w = 17 * GUI_GRID_W;
					h = 1 * GUI_GRID_H;
				};
				class HeadlineEdit: RscEdit {
					idc = IDC_AAN_HEADLINE_EDIT;
					text = "<t size=3 font='PuristaBold'>Headline</t>";
					x = 0.7 * GUI_GRID_W;
					y = 2.9 * GUI_GRID_H;
					w = 17 * GUI_GRID_W;
					h = 1 * GUI_GRID_H;
					autocomplete = "general";
					//colorBackground[] = {0,1,0,0.5};
				};
				class Content: RscText {
					text = "Rolling Text";
					sizeEx = IGUI_TEXT_SIZE_MEDIUM;
					x = 0.7 * GUI_GRID_W;
					y = 4 * GUI_GRID_H;
					w = 17 * GUI_GRID_W;
					h = 1 * GUI_GRID_H;
				};
				class ContentEdit: RscEditMulti {
					idc = IDC_AAN_ROLLINGTEXT_EDIT;
					x = 0.7 * GUI_GRID_W;
					y = 5.1 * GUI_GRID_H;
					w = 17 * GUI_GRID_W;
					h = 6 * GUI_GRID_H;
					autocomplete = "general";
					//colorBackground[] = {1,0,0,0.5};
				};
			};
		};

	};
};
