// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_VOLD,   KC_MUTE,   KC_VOLU, KC_A,
        KC_MPRV,   KC_MPLY, KC_MNXT
    )
};

#ifdef OLED_ENABLE
bool oled_task_user(void){
    oled_set_cursor(7, 1);
    uint8_t layer = get_highest_layer(layer_state);
    if (layer==0) oled_write_P(PSTR("TEST "), false);

    return true;
}
#endif