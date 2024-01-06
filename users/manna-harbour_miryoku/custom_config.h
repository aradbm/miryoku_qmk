// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#if defined (KEYBOARD_piantor)
#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_TAB,           K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_ESC, \
CW_TOGG,          K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_MINS, \
LSFT_T(KC_CAPS),  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  LSFT_T(KC_CAPS), \
                              K32,  K33,  K34,         K35,  K36,  K37 \
)


#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              LSFT(KC_1),           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), KC_X,              KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           KC_DOT,            LT(U_BUTTON,KC_SCLN),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_MOUSE,KC_TAB), LT(U_NAV,KC_SPC),LT(U_NUM,KC_BSPC),  LT(U_SYM,KC_ENT), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              KC_LBRC,           RALT(KC_SCLN),     U_NA,             U_NA,      \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_NUBS,           KC_SLSH,           KC_QUOT,           KC_NUHS,          KC_RBRC,      \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              RALT(KC_Z),        RALT(KC_X),        U_NA,             U_NA,\
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,             U_NP

#define MIRYOKU_LAYER_NUM \
RALT(KC_9),        KC_7,              KC_8,              KC_9,              RALT(KC_0),        U_NA,              RALT(KC_COMM),     RALT(KC_DOT),      U_NA,              U_NA,     \
KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,            U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_GRV,            KC_1,              KC_2,              KC_3,              LSFT(KC_GRV),      U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
RALT(KC_7),        LSFT(KC_7),        LSFT(KC_8),        LSFT(KC_9),        RALT(KC_8),        U_NA,              RALT(KC_COMM),     RALT(KC_DOT),      U_NA,              U_NA,     \
LSFT(KC_SCLN),     LSFT(KC_4),        LSFT(KC_5),        LSFT(KC_6),        LSFT(KC_EQL),      U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
RALT(KC_RBRC),     LSFT(KC_1),        LSFT(KC_2),        LSFT(KC_3),        RALT(KC_GRV),      U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              LSFT(KC_9),        LSFT(KC_0),        LSFT(KC_MINS),     U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#endif
