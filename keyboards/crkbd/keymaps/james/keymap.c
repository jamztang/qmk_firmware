#include QMK_KEYBOARD_H

uint16_t mgui_timer = 0;

enum custom_keycodes {
    GUIMINS = SAFE_RANGE,
    GUIEQL
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
      case GUIMINS:
          if (record->event.pressed) {
              register_code(KC_LGUI);
              mgui_timer = timer_read();
          } else {
              unregister_code(KC_LGUI);
              if (timer_elapsed(mgui_timer) < TAPPING_TERM) {
                  tap_code(KC_MINS);
              }
          }
          break;
      case GUIEQL:
          if (record->event.pressed) {
              register_code(KC_LGUI);
              mgui_timer = timer_read();
          } else {
              unregister_code(KC_LGUI);
              if (timer_elapsed(mgui_timer) < TAPPING_TERM) {
                  tap_code(KC_EQL);
              }
          }
          break;
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(LALT_T(KC_ESC), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LT(2,KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, RALT_T(KC_QUOT), LSFT_T(KC_CAPS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_BSLS), LCTL_T(KC_LBRC), GUIMINS, LT(1,KC_SPC), LT(1,KC_ENT), GUIEQL, RCTL_T(KC_RBRC)),
    [1] = LAYOUT(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_RALT, KC_LSFT, KC_LCBR, KC_UNDS, KC_PPLS, KC_RCBR, KC_TRNS, KC_TRNS, KC_LBRC, KC_MINS, KC_EQL, KC_RBRC, KC_LSFT, KC_TRNS, KC_TRNS, LT(3,KC_NO), LT(3,KC_NO), KC_TRNS, KC_TRNS),
    [2] = LAYOUT(KC_LALT, KC_NO, LALT(KC_LEFT), KC_UP, LALT(KC_RGHT), LCTL(KC_A), KC_WH_D, KC_WH_L, KC_MS_U, KC_WH_R, KC__VOLUP, KC_BSPC, KC_TRNS, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_E), KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC__VOLDOWN, KC_RALT, KC_LSFT, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_MPLY, KC_MRWD, KC_MFFD, KC_NO, KC__MUTE, KC_RSFT, KC_TRNS, KC_TRNS, KC_BTN2, KC_BTN1, KC_TRNS, KC_TRNS),
    [3] = LAYOUT(RESET, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
