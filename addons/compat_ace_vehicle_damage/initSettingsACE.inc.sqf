private _header = LELSTRING(main,category);
private _category = [_header, LLSTRING(subCategoryCompat)];

[
    QGVAR(preventScriptedDeath), "CHECKBOX",
    [LLSTRING(preventScriptedDeath), LLSTRING(preventScriptedDeath_desc)],
    _category,
    false,
    true
] call CBA_fnc_addSetting;