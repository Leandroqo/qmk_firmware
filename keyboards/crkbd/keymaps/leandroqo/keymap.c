#include QMK_KEYBOARD_H
#include "keycodes.h"

#ifdef OLED_ENABLE
#    include "oled.c"
#endif

#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
#    include "rgb.c"
#endif

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
     KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,     KC_I,     KC_O,    KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN,  SFT_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                       KC_N,    KC_M, KC_COMM,  KC_DOT,  KC_SLSH,  KC_RCTL,
  //---------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          GUI_ESC, LOWER, SFT_SPC,      KC_ENT, RAISE, KC_RALT
                                      //|--------------------------|  |--------------------------|
  ),

  [_LOWER] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      KC_TILD,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_BSPC,    OPT_L,  OPT_R,  NAV_TL,  NAV_TR,                      KC_LEFT, KC_DOWN,  KC_UP, KC_RIGHT,   KC_NO,  KC_RSFT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CMD_SPC,   KC_NO,   KC_NO,RALT(KC_C),  NAV_SL,  NAV_SR,                      KC_NO,   KC_NO,  KC_NO,   KC_NO,    KC_NO,    LANG, 
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, _______,    _______, MO(_ADJUST), KC_LGUI
                                      //|--------------------------|  |-------------------------------|
  ),

  [_RAISE] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
    KC_GRV,    KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LSFT,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LCTL,     KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //|--------------------------|  |--------------------------|
  ),

  [_ADJUST] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
    QWERTY,   DVORAK,  KC_NO,  SCR_SHOT,   DM_REC1, DM_REC2,                      KC_NO, KC_F12,  KC_F7,   KC_F8,    KC_F9,   XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_NO,  KC_NO,   KC_NO,   KC_NO,    DM_PLY1, DM_PLY2,                       KC_VOLU, KC_F11,  KC_F4,   KC_F5,   KC_F6,   QK_RBT,  \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,   KC_NO,    KC_NO,   KC_NO,    KC_NO, RGBRST,                       KC_VOLD, KC_F10,  KC_F1,   KC_F2,   KC_F3,   _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, _______,    _______, _______, _______ \
                                      //|--------------------------|  |--------------------------|
  ),

  [_DVORAK] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
     KC_TAB,   KC_SLSH, KC_COMM,  KC_DOT,    KC_P,    KC_Y,                       KC_F,    KC_G,     KC_C,     KC_R,  KC_L,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT,    KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                       KC_D,    KC_H,    KC_T,    KC_N,   KC_S,    SFT_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTL, KC_SCLN,   KC_Q,    KC_J,    KC_K,      KC_X,                     KC_B,      KC_M,    KC_W,     KC_V,   KC_Z,    KC_RCTL,
  //---------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          GUI_ESC, LOWER, SFT_SPC,      KC_ENT, RAISE, KC_RALT
                                      //|--------------------------|  |--------------------------|
  ),

};
// clang-format off


#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
layer_state_t layer_state_set_user(layer_state_t state) {
    /* For any layer other than default, save current RGB state and switch to layer-based RGB */
    if (layer_state_cmp(state, 0)) {
        restore_rgb_config();
    } else {
        uint8_t layer = get_highest_layer(state);
        if (layer_state_cmp(layer_state, 0)) save_rgb_config();
        rgb_by_layer(layer);
    }
    return state;
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef OLED_ENABLE
    if (record->event.pressed) {
        oled_timer = timer_read();
        is_key_processed = true;
        add_keylog(keycode);
    }
#endif

    switch (keycode) {
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
            } else {
                layer_off(_LOWER);
            }
            return false;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
            } else {
                layer_off(_RAISE);
            }
            return false;
        case ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
        case RGB_MOD:
        case RGB_TOG:
        case RGB_HUI:
        case RGB_HUD:
        case RGB_SAI:
        case RGB_SAD:
        case RGB_VAI:
        case RGB_VAD:
        case RGB_SPI:
        case RGB_SPD:
            /* Override layer-based RGB and resume RGB effect to be able to preview changes */
            if (record->event.pressed) {
                restore_rgb_config();
                process_rgb(keycode, record);
                save_rgb_config();
            }
            return false;
        case RGBRST:
            if (record->event.pressed) {
#    ifdef RGBLIGHT_ENABLE
                eeconfig_update_rgblight_default();
                rgblight_enable();
#    elif RGB_MATRIX_ENABLE
                eeconfig_update_rgb_matrix_default();
                rgb_matrix_enable();
#    endif
                save_rgb_config();
            }
            return false;
#endif
    }
    return true;
}
