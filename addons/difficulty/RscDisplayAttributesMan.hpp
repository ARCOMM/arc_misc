class RscControlsGroup;

class RscDisplayAttributes {
	class Controls {
		class Content: RscControlsGroup {
			class Controls;
		};
	};
};

class RscDisplayAttributesMan: RscDisplayAttributes {
	class Controls: Controls {
		class Content: Content {
			class Controls: Controls {
				delete Skill;
				delete Skill2;
			};
		};
	};
};
