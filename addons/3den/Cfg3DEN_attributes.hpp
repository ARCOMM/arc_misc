
class Checkbox;
class Default;
class GVARMAIN(checkbox_disabled): Checkbox {
	attributeLoad = "(_this controlsGroupCtrl 100) cbSetChecked _value; {_x ctrlEnable false} forEach allControls _this";
};
class GVAR(checklist): Default {
	w = (ATTRIBUTE_TITLE_W + ATTRIBUTE_CONTENT_W) * GRID_W;
	h = 28 * ATTRIBUTE_CONTENT_H * GRID_H;
	class Controls {
		class ctGroup: ctrlControlsGroupNoHScrollbars {
			x = SIZE_M * GRID_W;
			w = (ATTRIBUTE_TITLE_W + ATTRIBUTE_CONTENT_W - 7) * GRID_W;
			h = 28 * ATTRIBUTE_CONTENT_H * GRID_H;
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
