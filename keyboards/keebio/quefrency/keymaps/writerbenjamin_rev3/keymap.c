#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them // entirely and just use numbers.  #define _BASE 0 #define _FN1  1 #define _LGHT 2
#define _BASE  0
#define _FN1   1
#define _LGHT  2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

enum emoji_map {
  BACN, // bacon 🥓 
  FEGG, // fried egg 🍳
  SPIG, // side pig  🐖
  NGRL, // n with grave ñ
  NGRV, // N with grave Ñ
};

const uint32_t PROGMEM unicode_map[] = {
  [BACN] = 0x1F953,
  [FEGG] = 0x1F373,
  [SPIG] = 0x1F416,
  [NGRL] = 0x00F1,
  [NGRV] = 0x00D1
};

enum EncoderMode {
  SCROLL,
  ARROWS,
  VOLUME,
  SCRUB,

  //Useful to track the total number of modes
  _NUM_MODES,
};

static enum EncoderMode left_enc_mode = VOLUME;
static enum EncoderMode right_enc_mode = SCROLL;

static const uint16_t TOGGLE_KEY_L = KC_INT4;
static const uint16_t TOGGLE_KEY_R = KC_INT5;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_65_with_macro(
    KC_INT4,KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_DEL,  KC_BSPC, KC_INT5, \
    KC_F1,   KC_F5,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSLS, KC_F9, \
    KC_F2,   KC_F6,   KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,   KC_F10, \
    KC_F3,   KC_F7,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_LGHT),KC_F11, \
    KC_F4,   KC_F8,   KC_LCTL, KC_LGUI, MO(_FN1),KC_LALT, KC_SPC,           KC_0,    KC_SPC,  KC_RALT, KC_RGUI, KC_0,    MO(_FN1), KC_RCTL,  KC_F12
  ),

  [_FN1] = LAYOUT_65_with_macro(
    _______, X(FEGG), KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_DEL,  _______, \
    QK_BOOT,   _______, _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT, \
    _______, _______, KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XP(NGRL, NGRV), _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, _______, _______, \
    _______, _______, _______, X(SPIG), _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_LGHT] = LAYOUT_65_with_macro(
    _______, _______, _______, RGB_M_P, RGB_M_B, RGB_M_R,  RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, RGB_M_TW, _______, _______, _______, _______, _______, \
    _______, _______, _______, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI,  RGB_HUD,  RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______,  _______, _______, _______, _______, \
    _______, _______, _______, BL_TOGG, BL_STEP, BL_ON,    BL_OFF,   BL_UP,    BL_DOWN, BL_BRTG, _______, _______, _______,  BL_TOGG, _______, _______, \
    _______, _______, _______, _______, _______, _______,  _______,  _______,  _______, _______, _______, _______, _______,  _______, _______, _______, \
    _______, _______, _______, X(BACN), _______, _______,  _______,            _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
	switch (left_enc_mode) {
	    case SCROLL:
                if (clockwise) {
	            tap_code(KC_PGDN);
                } else {
                    tap_code(KC_PGUP);
		}
                break;
	    case ARROWS:
                if (clockwise) {
	            tap_code(KC_UP);
                } else {
                    tap_code(KC_DOWN);
		}
                break;
            case VOLUME:		
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
		break;
            case SCRUB:		
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
		}
		break;
	    default:
		break;
        }
    }
    else if (index == 1) {
	switch (right_enc_mode) {
	    case SCROLL:
                if (clockwise) {
	            tap_code(KC_PGDN);
                } else {
                    tap_code(KC_PGUP);
		}
                break;
	    case ARROWS:
                if (clockwise) {
	            tap_code(KC_UP);
                } else {
                    tap_code(KC_DOWN);
		}
                break;
            case VOLUME:		
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
		break;
            case SCRUB:		
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
		}
		break;
	    default:
		break;
        }
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == TOGGLE_KEY_R && record->event.pressed) {
        right_enc_mode = (right_enc_mode + 1) % _NUM_MODES;

        // Returning false indicates that 
        // this key should not be processed further
        return false;
    }
    if (keycode == TOGGLE_KEY_L && record->event.pressed) {
        left_enc_mode = (left_enc_mode + 1) % _NUM_MODES;

        // Returning false indicates that 
        // this key should not be processed further
        return false;
    }

    return true;
}

//moved to config.h
//void matrix_init_user(void) {
//    set_unicode_input_mode(UC_LNX);
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
