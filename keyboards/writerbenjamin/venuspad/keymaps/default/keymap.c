// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┌───┬───┬───┬───┐
     *     │NUM│ / │ * │ - │
     *     ├───┼───┼───┼───┤
     *     │ 7 │ 8 │ 9 │   │
     * ┌───┼───┼───┼───┤ + │
     * │MO1│ 4 │ 5 │ 6 │   │
     * └───┼───┼───┼───┼───┤
     *     │ 1 │ 2 │ 3 │   │
     *     ├───┴───┼───┤Ent│
     *     │   0   │ . │   │
     *     └───────┴───┴───┘
     */
    [0] = LAYOUT(
                  KC_NUM,   KC_PSLS, KC_PAST, KC_PMNS,
                  KC_P7,    KC_P8,   KC_P9,   KC_PPLS,
        MO(1),    KC_P4,   KC_P5,   KC_P6,
                  KC_P1,    KC_P2,   KC_P3,   KC_PENT,
                  KC_P0,    KC_PDOT
    ),

    /*
     *     ┌───┬───┬───┬───┐
     *     │NUM│ / │ * │ - │
     *     ├───┼───┼───┼───┤
     *     │ 7 │ 8 │ 9 │   │
     * ┌───┼───┼───┼───┤ + │
     * │ROT│ 4 │ 5 │ 6 │   │
     * └───┼───┼───┼───┼───┤
     *     │ 1 │ 2 │ 3 │   │
     *     ├───┴───┼───┤Ent│
     *     │   0   │ . │   │
     *     └───────┴───┴───┘
     */
    [1] = LAYOUT(
                 _______, _______, _______, _______,
                 _______, _______, _______, _______,
        _______, _______, _______, _______,
                 _______, _______, _______, _______,
                 _______, _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };
    oled_write_P(qmk_logo, false);
    return false;
}
#endif

