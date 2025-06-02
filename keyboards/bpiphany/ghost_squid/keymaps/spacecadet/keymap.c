/*
Copyright 2016 Daniel Svensson <dsvensson@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define _______ KC_TRNS

#define KM_QWERTY  0
#define KM_DVORAK  1
#define KM_COLEMAK 2
#define KM_MEDIA   3
#define KM_TOP 	   4
#define KM_GREEK   5
#define KM_GREEK_SHIFT 6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Layer 0: Standard ANSI layer */
	[KM_QWERTY] = LAYOUT_fullsize_iso( \
		KC_ESC,          KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,   KC_PSCR,KC_SCRL,KC_PAUS,                                     \
		KC_GRV,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,  KC_INS, KC_HOME,KC_PGUP,    KC_NUM, KC_PSLS,KC_PAST,KC_PMNS, \
		KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,  KC_DEL, KC_END, KC_PGDN,    KC_P7,  KC_P8,  KC_P9,  KC_PPLS, \
		KC_ESC,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,        KC_ENT,                               KC_P4,  KC_P5,  KC_P6,           \
		KC_LSFT, KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,        KC_RSFT,          KC_UP,              KC_P1,  KC_P2,  KC_P3,  KC_PENT, \
		KC_LCTL, KC_LGUI,KC_LALT,                       KC_SPC,                     KC_RALT,KC_RGUI,MO(KM_MEDIA),KC_RCTL,   KC_LEFT,KC_DOWN,KC_RGHT,    KC_P0,          KC_PDOT),

         /* Layer 1: Dvorak */ 
         [KM_DVORAK] = LAYOUT_fullsize_iso( \
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_PSCR,KC_SCRL,KC_PAUS, \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSPC,   KC_INS, KC_HOME,KC_PGUP,   KC_NUM, KC_PSLS,KC_PAST,KC_PMNS, \
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSLS,   KC_DEL, KC_END, KC_PGDN,   KC_P7,  KC_P8,  KC_P9,  KC_PPLS, \
    KC_CAPS, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,          KC_ENT,                               KC_P4,  KC_P5,  KC_P6,           \
    KC_LSFT ,_______, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,             KC_RSFT,           KC_UP,             KC_P1,  KC_P2,  KC_P3,  KC_PENT, \
    		KC_LCTL, KC_LGUI,KC_LALT,                       KC_SPC,                     KC_RALT,KC_RGUI,MO(KM_MEDIA),KC_RCTL,   KC_LEFT,KC_DOWN,KC_RGHT,    KC_P0,          KC_PDOT), \
 
         /* Layer 2: Colemak */ 
         [KM_COLEMAK] = LAYOUT_fullsize_iso( \
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_PSCR,KC_SCRL,KC_PAUS, \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS, KC_HOME,KC_PGUP, KC_NUM, KC_PSLS,KC_PAST,KC_PMNS, \
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL, KC_END, KC_PGDN, KC_P7,  KC_P8,  KC_P9,  KC_PPLS, \
    KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,          KC_ENT,                                KC_P4,  KC_P5,  KC_P6, \
    KC_LSFT, _______,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,            KC_UP,            KC_P1,  KC_P2,  KC_P3,  KC_PENT, \
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                           KC_RALT,KC_RGUI,MO(KM_MEDIA),KC_RCTL,   KC_LEFT,KC_DOWN,KC_RGHT, KC_P0,          KC_PDOT), 
  


	/* Layer 3: Function layer */
	[KM_MEDIA] = LAYOUT_fullsize_iso( \
	TO(KM_QWERTY),        QK_BOOT,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,   KC_WAKE,KC_PWR, KC_SLEP,                                     \
		_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,   KC_MPLY,KC_MSTP,KC_VOLU,    KC_NUM, KC_PSLS,KC_PAST,KC_PMNS, \
		_______,TO(KM_QWERTY), KC_UP, _______,_______,TO(KM_TOP),_______,_______,_______,_______,_______,_______,_______,_______,   KC_MPRV,KC_MNXT,KC_VOLD,    KC_P7,  KC_P8,  KC_P9,  KC_PPLS, \
		_______, KC_LEFT,KC_DOWN,KC_RGHT,TO(KM_GREEK), KC_UP, KC_DOWN, KC_LEFT, KC_RGHT,_______,_______,_______,_______,                                    KC_P4,  KC_P5,  KC_P6,           \
		_______,_______,_______,_______,TO(KM_COLEMAK),TO(KM_DVORAK),_______,_______,_______,_______,_______,_______,        _______,           _______,            KC_P1,  KC_P2,  KC_P3,  KC_PENT, \
		_______,_______,_______,                        _______,                        _______,_______,_______,_______,   _______,_______,_______,    KC_P0,          KC_PDOT),

/* Layer 4: Top_Symbols layer */
        [KM_TOP] = LAYOUT_fullsize_iso( \
          TO(KM_QWERTY),_______,_______,_______, _______,_______,_______,_______,_______,_______,_______,_______,_______,           _______,_______,_______,                                     \
                _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,   _______,_______,_______,    KC_NUM,  KC_PSLS,KC_PAST,KC_PMNS, \
                _______,UC(0x2227),UC(0x2228),UC(0x2229),UC(0x222A),UC(0x2282),UC(0x2283),UC(0x2200),UC(0x221E),UC(0x2203),UC(0x2202),_______,_______,_______,   _______,_______,KC_VOLD,    KC_P7,  KC_P8,  KC_P9,  KC_PPLS, \
                _______,UC(0x22A5),UC(0x22A4),UC(0x22A2),UC(0x22A3),UC(0x2191),UC(0x2193),UC(0x2190),UC(0x2192),UC(0x2194),_______,_______,        _______,                               KC_P4,  KC_P5,  KC_P6,           \
                _______,_______,UC(0x230A),UC(0x2308),UC(0x2260),UC(0x2243),UC(0x2261),UC(0x2264),UC(0x2265),_______,_______,_______,        _______,           KC_MPLY,            KC_P1,  KC_P2,  KC_P3,  KC_PENT, \
                _______,_______,_______,                        _______,                        _______,_______,_______,_______,   _______,_______,_______,    KC_P0,          KC_PDOT),

/* Layer 5: Greek Symbols layer */
        [KM_GREEK] = LAYOUT_fullsize_iso( \
                TO(KM_QWERTY),_______,_______,_______,_______,_______, _______,_______,_______,_______,_______,_______,_______,   _______,_______,_______,                                     \
                UC(0x222E),UC(0x2020),UC(0x2021),UC(0x2207),UC(0x00A2),UC(0x25CB),UC(0x2395),UC(0x00F7),UC(0x2715),UC(0x00B6),UC(0x25EF),UC(0x2014),UC(0x2248),_______,   _______,_______,KC_VOLU,    KC_NUM, KC_PSLS,KC_PAST,KC_PMNS, \
                _______,UC(0x03B8),UC(0x03C9),UC(0x03B5),UC(0x03C1),UC(0x03C4),UC(0x03C8),UC(0x03C5),UC(0x03B9),UC(0x03BF),UC(0x03C0),UC(0x301A),UC(0x301B),UC(0x2016),   _______,_______,KC_VOLD,    KC_P7,  KC_P8,  KC_P9,  KC_PPLS, \
                _______,UC(0x03B1),UC(0x03C3),UC(0x03B4),UC(0x03C6),UC(0x03B3),UC(0x03B7),UC(0x03F3),UC(0x03BA),UC(0x03BB),UC(0x00A8),UC(0x2022),        _______,                               KC_P4,  KC_P5,  KC_P6,           \
                MO(KM_GREEK_SHIFT),_______,UC(0x03B6),UC(0x03BE),UC(0x03C7),UC(0x03C2),UC(0x03B2),UC(0x03BD),UC(0x03BC),UC(0x226A),UC(0x226B),_______,        MO(KM_GREEK_SHIFT), UC(0x2296),    KC_P1,  KC_P2,  KC_P3,  KC_PENT, \
                _______,_______,_______,                        _______,                        _______,_______,_______,_______,   UC(0x2297),UC(0x2295),UC(0x2298),    KC_P0,          KC_PDOT),


/* Layer 6: Greek Symbols Shifted layer */
        [KM_GREEK_SHIFT] = LAYOUT_fullsize_iso( \
                TO(KM_QWERTY),_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,   _______,_______,_______,                                     \
                UC(0x222E),UC(0x2020),UC(0x2021),UC(0x2207),UC(0x00A2),UC(0x25CB),UC(0x2395),UC(0x00F7),UC(0x2715),UC(0x00B6),UC(0x25EF),UC(0x2014),UC(0x2248),_______,   _______,_______,KC_VOLU,    KC_NUM, KC_PSLS,KC_PAST,KC_PMNS, \
                _______,UC(0x0398),UC(0x03A9),UC(0x0395),UC(0x03A1),UC(0x03A4),UC(0x03A8),UC(0x03A5),UC(0x0399),UC(0x039F),UC(0x03A0),UC(0x301A),UC(0x301B),UC(0x2016),   _______,_______,KC_VOLD,    KC_P7,  KC_P8,  KC_P9,  KC_PPLS, \
                _______,UC(0x0391),UC(0x03A3),UC(0x0394),UC(0x03A6),UC(0x0393),UC(0x0397),UC(0x037F),UC(0x039A),UC(0x039B),UC(0x00A8),UC(0x2022),        _______,                               KC_P4,  KC_P5,  KC_P6,           \
                _______,_______,UC(0x0396),UC(0x039E),UC(0x03A7),UC(0x03A3),UC(0x0392),UC(0x039D),UC(0x039C),UC(0x226A),UC(0x226B),_______,        _______,           UC(0x2296),            KC_P1,  KC_P2,  KC_P3,  KC_PENT, \
                _______,_______,_______,                        _______,                        _______,_______,_______,_______,   UC(0x2297),UC(0x2295),UC(0x2298),    KC_P0,          KC_PDOT),
};

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(KM_MEDIA)
};

layer_state_t layer_state_set_user(layer_state_t state) {
    if (IS_LAYER_ON_STATE(state, KM_MEDIA)) {
        fn_led_on();
    } else {
        fn_led_off();
    }
    return state;
}


//Moved to config.h
//void matrix_init_user(void) {
    //set_unicode_input_mode(UC_LNX);
    //
    // This is operating system specific.
    //
    //   UC_OSX: MacOS Unicode Hex Input support. Works only up to 0xFFFF.
    //   Disabled by default.      To enable: go to System Preferences ->
    //   Keyboard -> Input Sources, and enable Unicode Hex.
    //
    //   UC_OSX_RALT: Same as UC_OSX, but sends the Right Alt key for unicode
    //   input
    //
    //   UC_LNX: Unicode input method under Linux. Works up to 0xFFFFF.
    //   Should work almost anywhere on ibus enabled distros. Without ibus,
    //   this works under GTK apps, but rarely anywhere else.
    //
    //   UC_WIN: (not recommended) Windows built-in Unicode input. To enable:
    //   create registry key under
    //   HKEY_CURRENT_USER\Control Panel\Input Method\EnableHexNumpad of type
    //   REG_SZ called EnableHexNumpad, set its value to 1, and reboot. This
    //   method is not recommended because of reliability and compatibility
    //   issue, use WinCompose method below instead.
    //   UC_WINC: Windows Unicode input using WinCompose. Requires WinCompose.
    //   Works reliably under many (all?) variations of Windows
//};
