/* Copyright 2021 AlexF
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
float enco_counter = 0;
bool encoder_flag = false;

// Defines names for use in layer keycodes and the keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( //LEFT/RIGHT ENCODER
                 MO(9),  KC_J,  KC_K,  KC_L,
            MO(2),  KC_D,  KC_M,  LCTL(KC_K),
        MO(1),  KC_I,  KC_O,  KC_ENT
    ),
    [1] = LAYOUT( // UP/DOWN ENCODER
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET ,
            KC_TRNS,  LCTL(KC_X), LCTL(KC_C) , LCTL(KC_V) ,
        KC_TRNS, LCTL(LSFT(KC_I)) , LCTL(LSFT(KC_O)) , KC_TRNS 
    ),
    [2] = LAYOUT( // SHIFT+L/R ENCODER RGB Mod Layer
                 RGB_TOG,  RGB_HUI,  RGB_HUD,  KC_TRNS,
            KC_TRNS,  RGB_VAI,  RGB_VAD,  RGB_MOD,
        KC_TRNS,  RGB_SAI,  RGB_SAD,  RGB_RMOD
    ),
    [4] = LAYOUT( // WASD-Gaming Layer
                 KC_Q,  KC_W,  KC_E,  KC_R,
            KC_F,  KC_A,  KC_S,  KC_D,
        KC_LSFT,  KC_Y,  KC_X,  MO(9)
    ),
    [9] = LAYOUT( //Layer Selector
                 KC_TRNS,  TO(0),  TO(4),  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
};


void keyboard_post_init_user(void) {
  // Call the post init code.
  //rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  //rgblight_sethsv_noeeprom(60, 60, 60); // sets the color to teal/cyan without saving
  //rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 1); // sets mode to Fast breathing without saving
}