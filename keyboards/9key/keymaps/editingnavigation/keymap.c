#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,-----------------------.
 * |   1   |   2   |   3   |
 * |-------+-------+-------|
 * |   4   | 5/ENT |   6   | Dbl Tap 5 for Enter
 * |-------+-------+-------|
 * |  7/0  |   8   | 9/FN  | 7/0 = Dbl Tap 7 for 0  -  9/FN = Hold 9 for FN
 * `-----------------------'
 */
[0] = LAYOUT( \
  KC_PSCR,    KC_SCRL,   KC_PAUS,    \
  KC_INS,     KC_HOME,   KC_PGUP,       \
  KC_DEL,     KC_END,    KC_PGDN) \
};

void matrix_init_user(void) {
}
