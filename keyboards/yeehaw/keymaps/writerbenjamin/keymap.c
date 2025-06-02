 /* Copyright 2021 Caleb Lightfoot
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#include QMK_KEYBOARD_H

enum custom_keycodes {
    YEEHAW = SAFE_RANGE,
    SQUASHKB,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
          KC_UP,
          KC_LEFT,
          KC_RGHT, KC_MPRV, KC_MPLY, KC_MNXT,
 KC_MUTE, KC_DOWN, KC_MAIL, KC_MSTP, KC_CALC,
                   KC_BRID, KC_BRIU,
                         MO(1) 
    ),

    [1] = LAYOUT(
          RGB_HUI,
          RGB_HUD,
          RGB_SAI, RGB_VAI, RGB_VAD, RGB_SPI,
 KC_TRNS, RGB_SAD, RGB_M_P, RGB_MOD, RGB_SPD,
                   QK_BOOT, KC_TRNS,
                        KC_TRNS
    ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case YEEHAW:
        if (record->event.pressed) {
            SEND_STRING("Reset!");
        }
        break;

    case SQUASHKB:
        if (record->event.pressed) {
            SEND_STRING("http://squashkb.com");
        }
        break;
    }
    return true;
};
