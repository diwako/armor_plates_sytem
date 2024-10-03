PREP(addPlate);
PREP(addPlateKeyPress);
PREP(canAddPlate);
PREP(canPressKey);
PREP(createProgressBar);
PREP(deleteProgressBar);
PREP(doGesture);
PREP(fillVestWithPlates);
PREP(handleArmorDamage);
PREP(initAIUnit);
PREP(initPlates);
PREP(moduleHeal);
PREP(modulePlate);
PREP(moduleResetMalus);
PREP(moduleResetMalusGlobal);
PREP(showDamageFeedbackMarker);
PREP(uniqueItems);
PREP(updateHPUi);
PREP(updatePlateUi);

if (GVAR(aceMedicalLoaded)) then {
    PREP(aceDamageHandler);
    PREP(handleDamageEhACE);
    PREP(receiveDamageACE);
} else {
    PREP(addActionsToUnit);
    PREP(addPlayerHoldActions);
    PREP(aiMoveAndHealUnit);
    PREP(canRevive);
    PREP(canHold);
    PREP(disableThirdParty);
    PREP(drawDownedUnitIndicator);
    PREP(getHitpointArmor);
    PREP(getItemArmor);
    PREP(handleDamageEh);
    PREP(handleHealEh);
    PREP(hasHealItems);
    PREP(hasInjector);
    PREP(hitEh);
    PREP(receiveDamage);
    PREP(reduceMalus);
    PREP(requestAIRevive);
    PREP(revive);
    PREP(setA3Damage);
    PREP(setUnconscious);
    PREP(showDownedSkull);
    PREP(startHpRegen);
};
