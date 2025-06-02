/* Copyright 2018 Alexander Fougner <fougner89 at gmail.com>
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

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layers {
    _QWERTY,
    _DVORAK,
    _COLEMAK,
    _MEDIA
};

enum custom_keycodes {
    QMKHELO = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_tkl_ansi(
                 KC_ESC,         KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,    KC_PSCR, KC_SCRL, KC_PAUS, \
                 KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
                 KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
                 KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         KC_ENT, \
                 KC_LSFT,        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,         KC_RSFT,            KC_UP, \
                 KC_LCTL,KC_LGUI,KC_LALT,                KC_SPC,                             KC_RALT,KC_RGUI, MO(_MEDIA), KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT  ),

[_DVORAK] = LAYOUT_tkl_ansi(
                 KC_ESC,         KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,    KC_PSCR, KC_SCRL, KC_PAUS, \
                 KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_LBRC, KC_RBRC,KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
                 KC_TAB, KC_QUOT,KC_COMM,KC_DOT, KC_P,   KC_Y,   KC_F,   KC_G,   KC_C,   KC_R,   KC_L,   KC_SLSH, KC_EQL, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
                 KC_ESC, KC_A,   KC_O,   KC_E,   KC_U,   KC_I,   KC_D,   KC_H,   KC_T,   KC_N,   KC_S,   KC_MINS,         KC_ENT, \
                 KC_LSFT,        KC_SCLN,KC_Q,   KC_J,   KC_K,   KC_X,   KC_B,   KC_M,   KC_W,   KC_V,   KC_Z,            KC_RSFT,            KC_UP, \
                 KC_LCTL,KC_LGUI,KC_LALT,                KC_SPC,                             KC_RALT,KC_RGUI, MO(_MEDIA), KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT  ),

[_COLEMAK] = LAYOUT_tkl_ansi(
                 KC_ESC,         KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,    KC_PSCR, KC_SCRL, KC_PAUS, \
                 KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
                 KC_TAB, KC_Q,   KC_W,   KC_F,   KC_P,   KC_G,   KC_J,   KC_L,   KC_U,   KC_Y,   KC_SCLN,KC_LBRC, KC_RBRC,KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
                 KC_BSPC,KC_A,   KC_R,   KC_S,   KC_T,   KC_D,   KC_H,   KC_N,   KC_E,   KC_I,   KC_O,   KC_QUOT,         KC_ENT, \
                 KC_LSFT,        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_K,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,         KC_RSFT,            KC_UP, \
                 KC_LCTL,KC_LGUI,KC_LALT,                KC_SPC,                               KC_RALT,KC_RGUI,MO(_MEDIA),KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT  ),

/* Layer r13: Function layer */
[_MEDIA] = LAYOUT_tkl_ansi( 
                QK_BOOT,        KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24,    KC_WAKE, KC_PWR, KC_SLEP, \
                _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,   KC_MPLY, KC_MSTP, KC_VOLU, \
                _______,_______, KC_UP, _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,   KC_MPRV, KC_MNXT, KC_VOLD, \
                _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,KC_LEFT,KC_DOWN,  KC_UP,KC_RGHT,_______,_______,        QMKHELO,                            \
                _______,   _______,TG(_QWERTY),TG(_COLEMAK),TG(_DVORAK),_______,_______,_______,_______,_______,_______,_______,           _______,         \
                _______,_______,_______,                        _______,                        _______,_______,_______,_______,   _______,_______,_______ )
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKHELO:
	    if (record->event.pressed) {
		    SEND_STRING("/* The Hello World program in C. */\n");
		    SEND_STRING("#include <stdio.h>\n");
		    SEND_STRING("int main() {\n");
		    SEND_STRING("    //printf() displays a the string inside quotation\n");
		    SEND_STRING("    printf(\"Hello, World!\\n\");\n");
		    SEND_STRING("    return 0;\n");
		    SEND_STRING("}\n");
	    }
	    break;
    }
    return true;
}

void led_set_user(uint8_t usb_led) {

}
