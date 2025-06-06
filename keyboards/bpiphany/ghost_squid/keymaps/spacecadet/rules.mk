# Build Options
#   change to "no" to disable the options, or define them in the Makefile in 
#   the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE ?= yes      # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE ?= yes       # Mouse keys(+4700)
EXTRAKEY_ENABLE ?= yes       # Audio control and System control(+450)
CONSOLE_ENABLE ?= yes        # Console for debug(+400)
COMMAND_ENABLE ?= yes        # Commands for debug and configuration
CUSTOM_MATRIX ?= yes         # Custom matrix file for the Pegasus Hoof due to the 2x74HC42
NKRO_ENABLE ?= no            # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE ?= no       # Enable keyboard backlight functionality
MIDI_ENABLE ?= no            # MIDI controls
AUDIO_ENABLE ?= no           # Audio output on port C6
UNICODE_ENABLE ?= yes        # Unicode
BLUETOOTH_ENABLE ?= no       # Enable Bluetooth with the Adafruit EZ-Key HID
RGBLIGHT_ENABLE ?= no        # Enable WS2812 RGB underlight.  Do not enable this with audio at the same time.


ifndef QUANTUM_DIR
	include ../../../../Makefile
endif
