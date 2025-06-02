#include QMK_KEYBOARD_H
    
#define Pallas     0x26b4
#define Venus      0x2640
#define Mercury    0x263f
#define Moon       0x263d
#define Sun        0x2609
#define Ceres      0x26b3
#define Vulcan     0x264e
#define Mars       0x2642
#define Jupiter    0x2643
#define Vesta      0x26b6
#define Juno       0x26b5
#define Neptune    0x2646

enum custom_keycodes {
  UP_URL = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_4x4(
        UC(Pallas),   UC(Venus),     UC(Mercury),   UC(Moon),
        UC(Sun),      UC(Ceres),     UC(Vulcan),    UC(Mars),
        UC(Vesta),    UC(Jupiter),   UC(Juno),      UC(Neptune),
        KC_SPACE,     KC_ENTER,      UC(0x26a1),    UC(0x26f0)
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case UP_URL:
            if (record->event.pressed) {
                SEND_STRING("http://1upkeyboards.com");
            }
            return false;
            break;
    }
    return true;
}

// QMK doesn't control LEDs like this anymore.
//void led_set_user(uint8_t usb_led) {
//
//  #ifndef CONVERT_TO_PROTON_C
//  /* Map RXLED to USB_LED_NUM_LOCK */
//	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
//		DDRB |= (1 << 0); PORTB &= ~(1 << 0);
//	} else {
//		DDRB &= ~(1 << 0); PORTB &= ~(1 << 0);
//	}
//
//  /* Map TXLED to USB_LED_CAPS_LOCK */
//	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
//		DDRD |= (1 << 5); PORTD &= ~(1 << 5);
//	} else {
//		DDRD &= ~(1 << 5); PORTD &= ~(1 << 5);
//	}
//  #endif
//}

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
//};
