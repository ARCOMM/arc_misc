class CfgWeapons {
	class ItemCore;
	class MedikitItem;
	class InventoryFirstAidKitItem_Base_F;
	class Medikit: ItemCore {
		class ItemInfo: MedikitItem {
			mass = 75.5;
		};
	};
	class FirstAidKit: ItemCore {
		class ItemInfo: InventoryFirstAidKitItem_Base_F {
			mass = 8;
		};
	};
};
