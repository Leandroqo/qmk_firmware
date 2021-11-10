#pragma once

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes { QWERTY = SAFE_RANGE, LOWER, RAISE, ADJUST, RGBRST };

#define SFT_A MT(MOD_LSFT, KC_A)
#define CTL_Z MT(MOD_LCTL, KC_Z)

#define SFT_SCLN MT(MOD_RSFT, KC_SCLN)
#define CTL_SLSH MT(MOD_RCTL, KC_SLSH)

#define SFT_SPC SFT_T(KC_SPC)
#define GUI_ESC GUI_T(KC_ESC)
#define SFT_QUOT SFT_T(KC_QUOT)
#define SFT_ENT SFT_T(KC_ENT)
#define RAISE  MO(_RAISE)
#define LOWER MO(_LOWER)
#define LOW_BSP LT(_LOWER, KC_BSPC)
#define LANG LCA(KC_SPC)
#define CMD_SPC G(KC_SPC)
#define NAV_TL G(S(KC_LBRC))
#define NAV_TR G(S(KC_RBRC))
#define NAV_SL C(KC_LEFT)
#define NAV_SR C(KC_RIGHT)
#define CMD_9 G(KC_9)
#define TER_UP C(G(KC_UP))
#define TER_DW C(G(KC_DOWN))
#define TER_L C(G(KC_LEFT))
#define TER_R C(G(KC_RIGHT))
#define TER_ML C(G(KC_L))
#define TER_MB C(G(KC_B))
#define SCR_SHOT G(S(KC_4))
#define CTL_LANG MT(MOD_RCTL, LANG)

// TMUX SHORTCUTS
#define TMXPREFIX C(KC_B)
