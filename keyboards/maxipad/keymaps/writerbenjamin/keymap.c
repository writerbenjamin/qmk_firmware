#include "maxipad.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Base */
         LSA(KC_B),        LSA(KC_C),               LCTL(KC_1), LCTL(KC_F),  KC_F11,         LGUI(KC_S),\
         LSA(KC_I),        RCS(KC_T),               LCTL(KC_2), LCTL(KC_H),  LCTL(KC_MINS),  KC_PGUP,\
         LCTL(KC_N),       LCTL(LSFT(LGUI(KC_S))),  LCTL(KC_3), KC_F3,       LCTL(KC_EQL),   KC_PGDN,\
         LCTL(KC_C),       LCTL(KC_X),              LCTL(KC_V), KC_HOME,     KC_UP,          KC_END,\
         TO(1),            KC_LCTL,                 KC_LSFT,    KC_LEFT,     KC_DOWN,        KC_RIGHT \
    ),
    [1] = LAYOUT(
         KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP,       KC_NUM,     KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, \
         KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_KP_7,    KC_KP_8,     KC_KP_9,        KC_NO, \
         KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,     KC_KP_4,    KC_KP_5,     KC_KP_6,        KC_KP_PLUS, \
         KC_AUDIO_MUTE,       LGUI(KC_W),          KC_KP_1,    KC_KP_2,     KC_KP_3,        KC_KP_ENTER, \
         TO(0),               LGUI(KC_T),          KC_KP_0,    KC_KP_0,     KC_KP_DOT,      KC_KP_ENTER \
    ),
};
