class ace_medical_treatment_actions {
	class FieldDressing;
	class SurgicalKit: FieldDressing {
		treatmentTime = QFUNC(getStitchTime);
		condition = QFUNC(canStitch);
		callbackSuccess = QFUNC(surgicalKitSuccess);
		callbackProgress = QFUNC(surgicalKitProgress);
	};
};
