#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(LALT_T(KC_ESC), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LT(2,KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, RALT_T(KC_QUOT), LSFT_T(KC_GRV), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_BSLS), LCTL_T(KC_EQL), LGUI_T(KC_MINS), LT(1,KC_SPC), LT(1,KC_ENT), RGUI_T(KC_LBRC), RCTL_T(KC_RBRC)),
	[1] = LAYOUT(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_CAPS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_RALT, LSFT_T(KC_F1), KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, RSFT_T(KC_F12), KC_TRNS, KC_TRNS, LT(3,KC_NO), LT(3,KC_NO), KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_TRNS, KC_NO, LALT(KC_LEFT), KC_UP, LALT(KC_RGHT), LCTL(KC_A), KC_WH_D, KC_WH_L, KC_MS_U, KC_WH_R, KC__VOLUP, KC_TRNS, KC_TRNS, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_E), KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC__VOLDOWN, KC_TRNS, KC_TRNS, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_MPLY, KC_MRWD, KC_MFFD, KC_NO, KC__MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN2, KC_BTN1, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(RESET, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
