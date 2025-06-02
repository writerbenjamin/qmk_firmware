#include QMK_KEYBOARD_H

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

enum emoji_map {
  BACN, // bacon 🥓 
  FEGG, // fried egg 🍳
};

const uint32_t PROGMEM unicode_map[] = {
  [BACN] = 0x1F953,
  [FEGG] = 0x1F373,
};

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
  X(BACN),    X(FEGG), X(BACN),  \
  X(BACN),    KC_UP,   X(BACN),  \
  KC_LEFT,    KC_DOWN, KC_RIGHT  \
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
  KC_TRNS,  KC_TRNS, KC_TRNS  \
)

};

//moved to config.h
//void matrix_init_user(void) {
 // set_unicode_input_mode(UC_LNX);
//}
