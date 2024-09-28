#pragma once
// required for types to work (bool, uint16_t, keyrecord_t)
#include QMK_KEYBOARD_H
bool process_record_user(uint16_t keycode, keyrecord_t *record);
