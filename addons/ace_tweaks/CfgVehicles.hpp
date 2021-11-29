
class CBA_Extended_EventHandlers;

class CfgVehicles {

    // Medical litter classes
    class Thing;
    class ACE_MedicalLitterBase;
    class ACE_MedicalLitter_painkillers: ACE_MedicalLitterBase {
        model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    };

    // Treatment items
    class Item_Base_F;
    class ACE_painkillersItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Painkillers);
        author = "Drofseh";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(ACE_painkillers,1);
        };
    };

    // Medical supply crates
    class NATO_Box_Base;
    class ACE_medicalSupplyCrate: NATO_Box_Base {
        class TransportItems {
            MACRO_ADDITEM(ACE_painkillers,25);
        };
    };
    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems {
            MACRO_ADDITEM(ACE_painkillers,15);
        };
    };
};
