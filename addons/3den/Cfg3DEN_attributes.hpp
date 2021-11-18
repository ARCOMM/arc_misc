
class Default;
class Title: Default {
	class Controls {
		class Title;
	};
};
class GVAR(checklist): Default {
	w = (ATTRIBUTE_TITLE_W + ATTRIBUTE_CONTENT_W) * GRID_W;
	h = 27 * ATTRIBUTE_CONTENT_H * GRID_H;
	class Controls {
		class value: ctrlControlsGroupNoHScrollbars {
			x = SIZE_M * GRID_W;
			w = (ATTRIBUTE_TITLE_W + ATTRIBUTE_CONTENT_W - 7) * GRID_W;
			h = 27 * ATTRIBUTE_CONTENT_H * GRID_H;
			class controls {
				class html: ctrlHTML {
					idc = 100;
					filename = "https://raw.githubusercontent.com/ARCOMM/Mission-Testing-Checklist/master/checklist.html";
					w = (ATTRIBUTE_TITLE_W + ATTRIBUTE_CONTENT_W - 7) * GRID_W;
					h = 200 * ATTRIBUTE_CONTENT_H * GRID_H;
					colorBackground[] = {0,0,0,0.25};
				};
			};
		};
	};
};
class GVAR(arcmtCheck): Title {
	attributeLoad = "(_this controlsGroupCtrl 100) ctrlSetText _value";
	class Controls: Controls {
		class Title: Title {};
		class value: ctrlStatic {
			idc = 100;
			h = ATTRIBUTE_CONTENT_H * GRID_H;
			w = round(ATTRIBUTE_CONTENT_W / 3) * GRID_W;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			colorBackground[] = {0,0,0,0};
		};
		class html: ctrlHTML {
			idc = 101;
			h = ATTRIBUTE_CONTENT_H * GRID_H;
			w = round(ATTRIBUTE_CONTENT_W / 3) * 2 * GRID_W;
			x = ATTRIBUTE_TITLE_W * GRID_W + round(ATTRIBUTE_CONTENT_W / 3) * GRID_W;
			filename = "https://arcomm.github.io/Mission-Testing-Checklist/checklist.html";
			colorBackground[] = {0,0,0,0};
		};
	};
};
