// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
	L1,
	L2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┌───┬───┬───┬───┐
     *     │NUM│ / │ * │ - │
     *     ├───┼───┼───┼───┤
     *     │ 7 │ 8 │ 9 │   │
     * ┌───┼───┼───┼───┤ + │
     * │TG1│ 4 │ 5 │ 6 │   │
     * └───┼───┼───┼───┼───┤
     *     │ 1 │ 2 │ 3 │   │
     *     ├───┴───┼───┤Ent│
     *     │   0   │ . │   │
     *     └───────┴───┴───┘
     */
    [0] = LAYOUT(
                  KC_NUM,   KC_PSLS, KC_PAST, KC_PMNS,
                  KC_P7,    KC_P8,   KC_P9,   KC_PPLS,
        TO(1),   KC_P4,    KC_P5,   KC_P6,
                  KC_P1,    KC_P2,   KC_P3,   KC_PENT,
                  KC_P0,    KC_PDOT
    ),

    /*
     *     ┌───┬───┬───┬───┐
     *     │NUM│ / │ * │ - │
     *     ├───┼───┼───┼───┤
     *     │ 7 │ 8 │ 9 │   │
     * ┌───┼───┼───┼───┤ + │
     * │TG0│ 4 │ 5 │ 6 │   │
     * └───┼───┼───┼───┼───┤
     *     │ 1 │ 2 │ 3 │   │
     *     ├───┴───┼───┤Ent│
     *     │   0   │ . │   │
     *     └───────┴───┴───┘
     */
    [1] = LAYOUT(
                 _______, _______, _______, _______,
                 _______, _______, _______, _______,
        TO(0),  _______, _______, _______,
                 _______, _______, _______, _______,
                 _______, _______
    )
};

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        // gpio_write_pin sets the pin high for 1 and low for 0.
        gpio_write_pin(D4, led_state.num_lock);
    }
    return res;
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD)  },
    [1] = { ENCODER_CCW_CW(KC_PGDN, KC_PGUP)  },
};
#endif

#ifdef OLED_ENABLE
//oled_rotation_t oled_init_user(oled_rotation_t rotation) {
//  return OLED_ROTATION_90;   // flips the display 180 degrees if offhand

bool oled_task_user(void) {
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_ln_P(led_state.caps_lock ? PSTR("CAP") : PSTR("   "), false);
    oled_write_ln_P(led_state.num_lock ? PSTR("NUM") : PSTR("   "), false);
    oled_write_ln_P(led_state.scroll_lock ? PSTR("SCR") : PSTR("   "), false);
    uint8_t layer = get_highest_layer(layer_state);
    switch (layer) {
	case L1:
	    oled_write_ln_P(PSTR("L1"), false);
	    break;
	case L2:
	    oled_write_ln_P(PSTR("L2"), false);
	    break;
	default:
	    break;
    }
    return false;
}
#endif
