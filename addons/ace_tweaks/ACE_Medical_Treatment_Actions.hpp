
class ace_medical_treatment_actions {

    // - Syringes -------------------------------------------------------------
    class Morphine;
    class Painkillers: Morphine {
        displayName = CSTRING(Give_Painkilllers);
        displayNameProgress = CSTRING(Giving_Painkilllers);
        allowSelfTreatment = 1;
        allowedSelections[] = {"head"};
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        callbackSuccess = "ace_medical_treatment_fnc_medication";
        category = "medication";
        condition = "!(_patient getVariable ['ACE_isUnconscious',false])";
        icon = QPATHTOF(ui\icons\painkillers.paa);
        items[] = {QGVAR(painkillers)};
        litter[] = {{"ACE_MedicalLitter_painkillers"}};
        // sounds[] = {{QPATHTO_R(sounds\Inject.ogg),1,1,50}};//TODO
        treatmentTime = 5;
    };
};
