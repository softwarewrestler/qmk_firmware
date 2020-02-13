#pragma once

enum custom_keycodes {
  RGBRST = SAFE_RANGE,
#ifndef TAP_DANCE_ENABLE
  TD_MIN,
  TD_COMM = TD_MIN,
  TD_BSPC,
  TD_DEL,
  TD_DOT,
  TD_MAX,
#endif
#ifdef ENCODER_ENABLE
  RGB_ENC,
#endif
  KEYMAP_SAFE_RANGE
};

#define KC_CTEN MT(MOD_RCTL, KC_ENT)
#define KC_CAPW LGUI(LSFT(KC_3))        // Capture whole screen
#define KC_CPYW LGUI(LSFT(LCTL(KC_3)))  // Copy whole screen
#define KC_CAPP LGUI(LSFT(KC_4))        // Capture portion of screen
#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen
#define KC_RSM LGUI(LALT(KC_R))

#define RIS_ESC  LT(_RAISE, KC_ESC)
#define RIS_CAPS LT(_RAISE, KC_CAPS)

#define QWERTY DF(_QWERTY)
#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define FN     MO(_FN)
#define DBG    MO(_DBG)

#ifndef GAMELAYER_DISABLE
#define GAME DF(_GAME)
#else
#define GAME KC_TRANSPARENT
#endif



#ifdef ENCODER_ENABLE
#define KC_ENC1 RGB_ENC
#define KC_ENC2 KC_MPLY
#else
#define KC_ENC1 RGB_RMOD
#define KC_ENC2 RGB_MOD
#endif
