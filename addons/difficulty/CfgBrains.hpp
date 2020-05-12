// https://forums.bohemia.net/forums/topic/150499-ai-discussion-dev-branch/?page=205&tab=comments#comment-3367671
// https://community.bistudio.com/wiki/Arma_3_CfgBrains_Config_Reference
class CfgBrains {
    class DefaultSoldierBrain  {
        class Components {
			class AIBrainCountermeasuresComponent {
				useSmokeGrenadeDelay 		= 20;
				CMCheckDelay 				= 0.8;
				suppressionThreshold 		= 0.8;
				nonLeaderSmokeProbability 	= 0.1;
				CMOnTargettedProbability 	= 0.1;
				suppressionTimerMax 		= 2;
				minimalThrowDistance 		= 900;
				minReactionTime 			= 0.1;
				maxReactionTime 			= 3;
				randomReactionTimePercent 	= 0.2;
			};
            class AIBrainSuppressionComponent  {
                maxSuppression 			= 1.0;
				worstDecreaseTime 		= 10.0; // in seconds for 0.0 skill
				bestDecreaseTime 		= 1.0; // in seconds for 1.0 skill
				SuppressionRange 		= 20.0;
				CauseFireWeight 		= 0.5;
				CauseHitWeight 			= 0.5;
				CauseExplosionWeight 	= 0.5;
				CauseBulletCloseWeight 	= 0.5;
            };
            class AIBrainAimingErrorComponent {
                maxAngularError			= 0.130899694;	// half of the error cone in radians
				maxAngularErrorTurrets	= 0.087266462;	// half of the error cone in radians, used for turrets
				worstDecreaseTime		= 2.0;			// how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely
				bestDecreaseTime		= 0.2;			// how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely
				lostTargetTimeMin		= 0.5;			// how soon after loosing sight of target, error starts to raise
				lostTargetTimeMax		= 3.0;			// how long error is raising after loosing sight of target
				shootingInfluence		= 0.4;			// importance of shooting in algorithm, multiplier
				movingInfluence			= 1.0;			// importance of moving in algorithm, multiplier
				turningInfluence		= 1.0;			// importance of turning in algorithm, multiplier
				damageCoef				= 10.0;			// importance of damage of entity, multiplier
				fatigueCoef				= 10.0;			// importance of fatigue of entity, multiplier
				suppressionCoef			= 0.5;			// importance of suppression value, multiplier
				lostTargetCoef			= 3.0;			// importance of loosing target event, multiplier
            };
        };
    };
};
