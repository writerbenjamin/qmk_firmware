#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,----------------------------.
 * |   1   |   2        |   3   |
 * |-------+------------+-------|
 * | KC_UP | KC_DOWN    |   4   |
 * |-------+------------+-------|
 * | KC_LEFT | KC_RIGHT |   FN  |
 * `----------------------------'
 */
[0] = LAYOUT( \
  KC_1,       KC_2,      KC_3,  \
  KC_UP,      KC_DOWN,   KC_4,  \
  KC_LEFT,    KC_RIGHT,  MO(1) \
),

/* LAYER 1
 * ,----------------------------.
 * |   1   |   2        |   3   |
 * |-------+------------+-------|
 * | KC_UP | KC_DOWN    |   4   |
 * |-------+------------+-------|
 * | KC_LEFT | KC_RIGHT |   FN  |
 * `----------------------------'
 */
[1] = LAYOUT( \
  KC_TRNS,  KC_TRNS, KC_TRNS, \
  KC_TRNS,  KC_TRNS, KC_TRNS, \
  KC_TRNS,  KC_TRNS, MO(0)  \
)

};

void matrix_init_user(void) {
}
