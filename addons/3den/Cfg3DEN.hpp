#include "\a3\3DEN\UI\macros.inc"
#include "\a3\3DEN\UI\resincl.inc"
#ifdef ALLOW_EXECEVAL
#include "\a3\3DEN\UI\macroExecs.inc"
#endif

class ctrlHTML;
class ctrlControlsGroupNoHScrollbars;
class Cfg3DEN {
	class EventHandlers {
		class ADDON {
			onMessage = QUOTE([ARR_2(QQGVAR(onMessage), _this)] call CBA_fnc_localEvent);
		};
	};
	class Attributes {
		#include "Cfg3DEN_attributes.hpp"
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

		class ADDON {
			displayName = "ARCOMM";
			class AttributeCategories {
				class GVAR(checklist) {
					displayName = "ARCOMM: Mission Testing Checklist";
					collapsed = 0;
					class Attributes {
						class GVAR(htmlChecklist) {
							property = QGVAR(htmlChecklist);
							control = QGVAR(checklist);
							defaultValue = "nil";
						};
						class GVAR(checklistCheck) {
							displayName = "My mission conforms to the checklist";

							property = QGVAR(checklistCheck);
							control = "Checkbox";
							defaultValue = "false";
						};
					};
				};
			};
		};
	};
};
