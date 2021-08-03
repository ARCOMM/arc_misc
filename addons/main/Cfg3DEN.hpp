class Cfg3DEN {
	class Attributes {
		class Checkbox;
		class GVARMAIN(checkbox_disabled): Checkbox {
			attributeLoad = "(_this controlsGroupCtrl 100) cbSetChecked _value; {_x ctrlEnable false} forEach allControls _this";
		};
	};
	class Mission {
		class Scenario {
			class AttributeCategories {
				class Overview {
					class Attributes {
						class GVARMAIN(isTemplate) {
							displayName = "ARCMT";
							tooltip = "Whether mission is based on ARCMT";
							property = QGVARMAIN(isTemplate);
							value = 0;
							defaultValue = "false";
							control = QGVARMAIN(checkbox_disabled);
						};
						delete AppId;
						delete AssetType;
					};
				};
				delete Unlock;
				delete OverviewLocked;
			};
		};
	};
};
