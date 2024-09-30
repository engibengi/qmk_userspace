#pragma once
#include "layers.h"

/* Tap-Hold keycodes */

#define LOW_SPC LT(_LOWER, KC_SPACE)
#define RAI_ENT LT(_RAISE, KC_ENTER)
#define FUN_SPC LT(_FUNCTION, KC_SPACE)
#define FUN_ENT LT(_FUNCTION, KC_ENTER)
/*
 * Other keys would be, with SOM replaced
 * #define SOM_BSP LT(_SOM, KC_BSPC)
 * #define SOM_TAB LT(_SOM, KC_TAB)
 * #define SOM_ESC LT(_SOM, KC_ESC)
 */

/* IDEA: we could modify behavior of combinations of LT keys in order to, while pressing them together, go to other layers
 * eg: if we press LOW and RAI together, depending on the last button pressed, we would go to the corresponding layer.
 * If, however, we put in the LOW and RAI layers, modded keycodes for the other LT button, while pressing them together we could go to
 * let's say, a MACRO layer, whatever the order in which the button were pressed.
 * Practical example for a combination of LOW and RAI to obtain MACRO:
 * #define MACRO_SPC LT(_MACRO, KC_SPACE)
 * #define MACRO_ENT LT(_MACRO, KC_ENTER)
 *
 * !!! To avoid collisions with other layers check that having them not active does not change the higher layer behaviors !!!
 */


/* Mod-Tap keycodes */

/* _COLEMAK layer */

#define GUI_A GUI_T(KC_A) /* Hold for GUI, Tap for 'a' */
#define ALT_R ALT_T(KC_R) /* Hold for ALT, Tap for 'r' */
#define SHFT_S SFT_T(KC_S) /* Hold for SHIFT, Tap for 's' */
#define CTRL_T CTL_T(KC_T) /* Hold for CTRL, Tap for 't' */

#define CTRL_N CTL_T(KC_N) /* Hold for CTRL, Tap for 'n' */
#define SHFT_E SFT_T(KC_E) /* Hold for SHIFT, Tap for 'e' */
#define ALT_I ALT_T(KC_I) /* Hold for ALT, Tap for 'i' */
#define GUI_O GUI_T(KC_O) /* Hold for GUI, Tap for 'o' */

/* _LOWER layer */

#define GUI_L GUI_T(KC_LEFT) /* Hold for GUI, Tap for '<' */
#define ALT_U ALT_T(KC_UP) /* Hold for ALT, Tap for '^' */
#define SHFT_D SFT_T(KC_DOWN) /* Hold for SHIFT, Tap for 'v' */
#define CTRL_R CTL_T(KC_RIGHT) /* Hold for CTRL, Tap for '>' */

#define CTRL_4 CTL_T(KC_4) /* Hold for CTRL, Tap for '4' */
#define SHFT_5 SFT_T(KC_5) /* Hold for SHIFT, Tap for '5' */
#define ALT_6 ALT_T(KC_6) /* Hold for ALT, Tap for '6' */
#define GUI_MIN GUI_T(KC_MINUS) /* Hold for GUI, Tap for '-' */

/* _RAISE layer */

#define GUI_PLS GUI_T(KC_PLUS) /* Hold for GUI, Tap for '+' -- Requires further configuration, see ./process_records.c */
#define ALT_EQ ALT_T(KC_EQL) /* Hold for ALT, Tap for '=' */
#define SHFT_LP SFT_T(KC_LPRN) /* Hold for SHIFT, Tap for '(' -- Requires further configuration, see ./process_records.c */
#define CTRL_RP CTL_T(KC_RPRN) /* Hold for CTRL, Tap for ')' -- Requires further configuration, see ./process_records.c */

#define CTRL_GT CTL_T(KC_GT) /* Hold for CTRL, Tap for '>' -- Requires further configuration, see ./process_records.c */
#define SHFT_EQ SFT_T(KC_EQL) /* Hold for SHIFT, Tap for '=' */
#define ALT_EXL ALT_T(KC_EXLM) /* Hold for ALT, Tap for '!' -- Requires further configuration, see ./process_records.c */
#define GUI_HSH GUI_T(KC_HASH) /* Hold for GUI, Tap for '#' -- Requires further configuration, see ./process_records.c */

/* _FUNCTION layer */

#define GUI_F5 GUI_T(KC_F5) /* Hold for GUI, Tap for '<' */
#define ALT_F6 ALT_T(KC_F6) /* Hold for ALT, Tap for '^' */
#define SHFT_F7 SFT_T(KC_F7) /* Hold for SHIFT, Tap for 'v' */
#define CTRL_F8 CTL_T(KC_F8) /* Hold for CTRL, Tap for '>' */

#define CTRL_F17 CTL_T(KC_F17) /* Hold for CTRL, Tap for '4' */
#define SHFT_F18 SFT_T(KC_F18) /* Hold for SHIFT, Tap for '5' */
#define ALT_F19 ALT_T(KC_F19) /* Hold for ALT, Tap for '6' */
#define GUI_F20 GUI_T(KC_F20) /* Hold for GUI, Tap for '-' */


