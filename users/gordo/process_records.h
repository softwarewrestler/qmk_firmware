#pragma once
#include "quantum.h"

enum layer_number {
    _QWERTY = 0,
#ifndef GAMELAYER_DISABLE
    _GAME,
#endif
    _DBG,
    _FN,
    _LOWER,
    _RAISE,
#ifdef TRILAYER_ENABLED
    _ADJUST
#endif
};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record);
bool process_record_encoder(uint16_t keycode, keyrecord_t *record);
