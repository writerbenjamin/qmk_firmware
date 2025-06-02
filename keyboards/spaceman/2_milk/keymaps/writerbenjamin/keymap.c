#include QMK_KEYBOARD_H

extern rgblight_config_t rgblight_config;

uint32_t mode;
uint16_t hue;
uint8_t sat;
uint8_t val;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      [0] = LAYOUT(
          KC_RGUI,
          KC_APP	
          )
};

void matrix_init_user(void)
{
  mode = rgblight_config.mode;
}

void led_set_user(uint8_t usb_led) {
  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
    mode = rgblight_get_mode();
    hue = rgblight_get_hue();
    sat = rgblight_get_sat();
    val = rgblight_get_val();

    rgblight_mode_noeeprom(1);
    rgblight_setrgb(0xD3, 0x7F, 0xED);
  } else {
    rgblight_mode(mode);
    rgblight_sethsv(hue, sat, val);
  }
}

