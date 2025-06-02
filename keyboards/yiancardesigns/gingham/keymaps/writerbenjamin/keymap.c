/* Copyright 2018 Yiancar
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

//This is the ANSI version of the PCB

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_ansi_split_bs_rshift( /* Base */
    KC_GRV,   KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC, KC_BSPC,
    KC_TAB,   KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS,
    KC_ESC,   KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,  KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT, 
    KC_LSFT,            KC_Z,     KC_X,  KC_C,  KC_V,  KC_B,    KC_N,  KC_M,  KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, MO(3),
    KC_LCTL,  KC_LGUI,  KC_LALT,                       KC_SPC,                          KC_RALT,  KC_RGUI,  KC_APP,  KC_RCTL),

[1] = LAYOUT_60_ansi_split_bs_rshift( /* Empty for dynamic keymaps */
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_BSPC,  KC_A,     KC_R,     KC_S,     KC_T,     KC_D,     KC_H,     KC_N,     KC_E,     KC_I,     KC_O,     KC_TRNS,            KC_TRNS,
    KC_TRNS,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_K,     KC_M,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(3),
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[2] = LAYOUT_60_ansi_split_bs_rshift( /* Empty for dynamic keymaps */
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LBRC,  KC_RBRC,  KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,  KC_EQL,   KC_TRNS,
    KC_TRNS,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,            KC_TRNS,
    KC_TRNS,            KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_TRNS,  MO(3),
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[3] = LAYOUT_60_ansi_split_bs_rshift( /* FN */
    KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL, KC_DEL,
    KC_TRNS,  KC_TRNS,  KC_UP,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_TRNS,  KC_TRNS,  QK_BOOT,  KC_TRNS,
    KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    KC_TRNS,            TO(0),    TO(1),    TO(2),    TO(4),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_TRNS,  KC_TRNS, 
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[4] = LAYOUT_60_ansi_split_bs_rshift( /* Greek */
    TO(0),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS, UC(0x03b6),KC_TRNS, UC(0x03c1),KC_TRNS,  KC_TRNS, UC(0x3b8), KC_TRNS,  KC_TRNS, UC(0x03c0),KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS, UC(0x03c3),UC(0x03b4),UC(0x03c6),UC(0x03b3),KC_TRNS,UC(0x03be),KC_TRNS,UC(0x03bb),KC_TRNS, KC_TRNS,            KC_TRNS,
    MO(5),              KC_TRNS,  KC_TRNS,UC(0x03c8),UC(0x0c9), KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(5),    KC_TRNS, 
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[5] = LAYOUT_60_ansi_split_bs_rshift( /* Greek */
    TO(0),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS, UC(0x0396),KC_TRNS, UC(0x03a1),KC_TRNS,  KC_TRNS, UC(0x398), KC_TRNS,  KC_TRNS, UC(0x03a0),KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS, UC(0x03a3),UC(0x0394),UC(0x03a6),UC(0x0393),KC_TRNS,UC(0x039e),KC_TRNS,UC(0x039b),KC_TRNS, KC_TRNS,            KC_TRNS,
    KC_TRNS,            KC_TRNS,  KC_TRNS,UC(0x03a8),UC(0x0a9), KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, 
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
};
//moved to config-h
//void matrix_init_user(void) {
//	set_unicode_input_mode(UC_LNX);
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

//}

void matrix_scan_user(void) {
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
