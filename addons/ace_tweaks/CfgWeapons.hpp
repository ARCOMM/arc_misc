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
			mass = 8.25;
		};
	};
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;
    class GVAR(painkillers) : ACE_ItemCore {
        scope = 2;
        author = "Drofseh";
        displayName = CSTRING(Painkilllers);
        picture = QPATHTOF(ui\items\painkillers_ca.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
        descriptionShort = CSTRING(Treatment_Painkillers_Desc_Short);
        descriptionUse = CSTRING(Treatment_Painkillers_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.25;
        };
    };
};
