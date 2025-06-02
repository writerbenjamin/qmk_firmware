// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬──┬───┬───┬───┐
     * │ 1 │ 2 │ 3│ 4 │ 5 │MO0│
     * └───┴───┴──┴───┴───┴───┘
     */
    [0] = LAYOUT (
        KC_1,    KC_2,  KC_3,  KC_4,  KC_5,  MO(1)  
    ),

    [1] = LAYOUT (
        QK_BOOT, BL_TOGG, BL_UP, BL_DOWN, BL_STEP,  KC_TRNS 
    )
};
