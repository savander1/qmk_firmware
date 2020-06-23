#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,             KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_GRV,   KC_BSLS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,             KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSPC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,             KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_NUHS, KC_ENT,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,    KC_N,             KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
        KC_LCTL, KC_LGUI, KC_LALT,                   MO(1),     KC_SPC,  MO(1),                     KC_RALT, KC_RCTL,  KC_LEFT, KC_DOWN, KC_RGHT
    ),

	LAYOUT(
        RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MUTE,  KC_VOLU,
        KC_PAUS, RGB_TOG, KC_TRNS, RGB_MOD, RGB_RMOD, RGB_HUI,  RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD, KC_VOLD,
        KC_SLCK, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRIU,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  MAGIC_TOGGLE_NKRO, MAGIC_TOGGLE_CTL_GUI, MAGIC_CAPSLOCK_TO_CONTROL, MAGIC_UNCAPSLOCK_TO_CONTROL, KC_TRNS, KC_TRNS, KC_PGUP, KC_BRID,
        KC_TRNS, KC_PSCR, KC_TRNS,                    KC_TRNS,  KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END
    ),
};
