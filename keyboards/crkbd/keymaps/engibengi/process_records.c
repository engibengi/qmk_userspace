#include "keycodes.h"
#include QMK_KEYBOARD_H

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
        // MOD-TAP
        case GUI_PLS:
            if (record -> tap.count && record->event.pressed)
            {
                tap_code16(KC_PLUS);
                return false;
            }
            break;
        case SHFT_LP:
            if (record -> tap.count && record->event.pressed)
            {
                tap_code16(KC_LPRN);
                return false;
            }
            break;
        case CTRL_RP:
            if (record -> tap.count && record->event.pressed)
            {
                tap_code16(KC_RPRN);
                return false;
            }
            break;
        case CTRL_GT:
            if (record -> tap.count && record->event.pressed)
            {
                tap_code16(KC_GT);
                return false;
            }
            break;
        case ALT_EXL:
            if (record -> tap.count && record->event.pressed)
            {
                tap_code16(KC_EXLM);
                return false;
            }
            break;
        case GUI_HSH:
            if (record -> tap.count && record->event.pressed)
            {
                tap_code16(KC_HASH);
                return false;
            }
            break;
    }
    return true;
}
