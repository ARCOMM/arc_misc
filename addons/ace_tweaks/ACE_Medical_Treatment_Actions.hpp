
class ace_medical_treatment_actions {

    // - Syringes -------------------------------------------------------------
    class Morphine;
    class Painkillers: Morphine {
        displayName = "$STR_ARC_Medical_Give_Painkilllers";
        displayNameProgress = "$STR_ARC_Medical_Giving_Painkilllers";
        allowSelfTreatment = 1;
        allowedSelections[] = {"head"};
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        callbackSuccess = "ace_medical_treatment_fnc_medication";
        category = "medication";
        condition = "!(_patient getVariable ['ACE_isUnconscious',false])";
        icon = "\x\arc_misc\addons\ace_tweaks\ui\icons\painkillers.paa";
        items[] = {"ACE_painkillers"};
        litter[] = {{"ACE_MedicalLitter_painkillers"}};
        // sounds[] = {{QPATHTO_R(sounds\Inject.ogg),1,1,50}};//TODO
        treatmentTime = 5;
    };
};
