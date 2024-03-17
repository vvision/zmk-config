
#pragma once

// -----------------------------------------------------------------------------------------
// |  | Q         | W         | E          |  R          |  T  |   |  Y  | U           |  I         |  O        |  P  |  |
// |  | A -> LGUI | S -> LALT | D -> LCTRL | F -> LSHIFT |  G  |   |  H  | J -> RSHIFT | K -> RCTRL | L -> RALT | DIA |  |
// |  | Z         | X         | C          |  V          |  B  |   |  N  | M           |  ,         |  .        |  /  |  |
//                                | ESC | LSHIFT | SPC -> NAV  |   | ENT -> SYM | BSPC | DEL |
//
#define UNICODA_ALTERNATIVES_BASE_QWERTY \
&kp Q,          &kp W,          &kp E,          &kp R,              &kp T,             &kp Y,         &kp U,            &kp I,          &kp O,          &kp P,     \
U_MT(LGUI, A),  U_MT(LALT, S),  U_MT(LCTRL, D), U_MT(LSHIFT, F),    &kp G,             &kp H,         U_MT(RSHIFT, J),  U_MT(RCTRL, K), U_MT(RALT, L),  &sl U_DIA,   \
&kp Z,          &kp X,          &kp C,          &kp V,              &kp B,             &kp N,         &kp M,            &kp COMMA,      &kp DOT,        &kp FSLH,  \
U_NP,           U_NP,           &kp ESC,        &sk LSHIFT,         &lt U_NAV SPACE,   &lt U_SYM RET, &kp BSPC,         &kp DEL,        U_NP,           U_NP

// https://ergol.org/
// -----------------------------------------------------------------------------------------
// |  | Q         | C         | O          | P           |  W  |   |  J  | M           | D          | DIA       |  F  |  |
// |  | A -> LGUI | S -> LALT | E -> LCTRL | N -> LSHIFT |  ,  |   |  L  | R -> RSHIFT | T -> RCTRL | I -> RALT |  U  |  |
// |  | Z         | X         | -          | V           |  B  |   |  .  | H           | G          | Y         |  K  |  |
//                                | ESC | LSHIFT | SPC -> NAV  |   | ENT -> SYM | BSPC | DEL |
//
#define UNICODA_ALTERNATIVES_BASE_ERGOL \
&kp Q,          &kp C,          &kp O,          &kp P,              &kp W,             &kp J,         &kp M,            &kp D,          &sl U_DIA_ERGOL,  &kp F,     \
U_MT(LGUI, A),  U_MT(LALT, S),  U_MT(LCTRL, E), U_MT(LSHIFT, N),    &u_comma_semi,     &kp L,         U_MT(RSHIFT, R),  U_MT(RCTRL, T), U_MT(RALT, I),    U_MT(RGUI, U),   \
&kp Z,          &kp X,          &u_minus_qmark, &kp V,              &kp B,             &u_dot_colon,  &kp H,            &kp G,          &kp Y,            &kp K,  \
U_NP,           U_NP,           &kp ESC,        &sk LSHIFT,         &lt U_NAV SPACE,   &lt U_SYM RET, &kp BSPC,         &kp DEL,        U_NP,             U_NP

// -----------------------------------------------------------------------------------------
// |  | @ | < | > | $ | % |   |  ^  | & | * | ' | ` |  |
// |  | { | ( | ) | } | = |   |  \  | + | - | / | " |  |
// |  | ~ | [ | ] | _ | # |   | "|" | ! | ; | : | ? |  |
//     |  |  | TAB -> NAV |   |  |  |  |
#define UNICODA_ALTERNATIVES_SYM \
&kp AT,           &kp LT,           &kp GT,            &kp DLLR,            &kp PRCNT,      &kp CARET, &kp AMPS,           &kp STAR,          &sqt_space,       &grave_space, \
U_MT(LGUI, LBRC), U_MT(LALT, LPAR), U_MT(LCTRL, RPAR), U_MT(LSHIFT, RBRC),  &kp EQUAL,      &kp BSLH,  U_MT(RSHIFT, PLUS), U_MT(RCTRL, MINUS), U_MT(RALT, SLASH), U_MT(RGUI, dqt_space),   \
&tilde_space,     &kp LBKT,         &kp RBKT,          &kp UNDER,           &kp HASH,       &kp PIPE,  &kp EXCL,           &kp SEMI,          &kp COLON,        &kp QMARK,    \
U_NP,             U_NP,             &trans,            &trans,              &lt U_NAV TAB,  &trans,    &trans,             &trans,            U_NP,             U_NP

// -----------------------------------------------------------------------------------------
// |  | ESC         | Home |  Up  | End   | PG_UP |   |  +  | 7           | 8          | 9         | *         |  |
// |  | TAB -> LGUI | Left | Down | Right | PG_DN |   |  -  | 4 -> RSHIFT | 5 -> RCTRL | 6 -> RALT | 0 -> RGUI |  |
// |  | Undo        | Cut  | Copy | Paste |  Del  |   |  =  | 1           | 2          | 3         | /         |  |
//                                       |  |  |  |   |  |  | . |
#define UNICODA_ALTERNATIVES_NAV \
&kp ESC,       &kp HOME,  &kp UP,    &kp END,    &kp PG_UP,    &kp PLUS,  &kp N7,         &kp N8,       &kp N9,      &kp STAR,      \
&hm LGUI TAB,  &kp LEFT,  &kp DOWN,  &kp RIGHT,  &kp PG_DN,    &kp MINUS, &hm RSHIFT N4,  &hm RCTRL N5, &hm RALT N6, &hm RGUI N0,  \
&kp LC(Z),     &kp LC(X), &kp LC(C), &kp LC(V),  &kp DEL,      &kp EQUAL, &kp N1,         &kp N2,       &kp N3,      &kp SLASH,        \
U_NP,          U_NP,      &trans,    &trans,     &trans,       &trans,    &trans,         &kp DOT,       U_NP,        U_NP


// -----------------------------------------------------------------------------------------
// |  |  |  |  |  |  |   |       | F7 | F8 | F9 | F12 |  |
// |  |  |  |  |  |  |   |       | F4 | F5 | F6 | F11 |  |
// |  |  |  |  |  |  |   | K_APP | F1 | F2 | F3 | F10 |  |
//      |  | BASE |  |   |  |  |  |
#define UNICODA_ALTERNATIVES_FUN \
&none, &none, &none,  &none,      &none,       &none,     &kp F7, &kp F8, &kp F9, &kp F12, \
&none, &none, &none,  &none,      &none,       &none,     &kp F4, &kp F5, &kp F6, &kp F11, \
&none, &none, &none,  &none,      &none,       &kp K_APP, &kp F1, &kp F2, &kp F3, &kp F10, \
U_NP,  U_NP,  &trans, &to U_BASE, &trans,      &trans,    &trans, &trans, U_NP,   U_NP

// -----------------------------------------------------------------------------------------
// |  |    BT0    |  BT1  | BT2 |  BT3   |   BT4   |   |      |            |       |       |           |  |
// |  | OUT_TOG   | Reset |     | LSHIFT |         |   | Mute | Play/Pause | Vol - | Vol + | Prev/Next |  |
// |  |           | Flash |     |        | WIN_SCR |   |  WIN_TEAMS_MUTE   |       |       |           |  |
//                                   |  |  |  |   |  |  |  |
#define UNICODA_ALTERNATIVES_ADJUST \
&u_bt_sel_0, &u_bt_sel_1, &u_bt_sel_2, &u_bt_sel_3, &u_bt_sel_4, &none,               &none,             &none,         &none,         &none, \
&u_out_tog,  &sys_reset,  &none,       &kp LSHIFT,  &none,       &kp K_MUTE,          &kp C_PLAY_PAUSE,  &kp C_VOL_DN,  &kp C_VOL_UP,  &dt_next_prev, \
&none,       &bootloader, &none,       &none,       &kp WIN_SCR, &kp WIN_TEAMS_MUTE,  &none,             &none,         &none,         &none,       \
U_NP,        U_NP,        &trans,      &trans,      &trans,      &trans,              &trans,            &trans,        U_NP,          U_NP

// -----------------------------------------------------------------------------------------
// |  |   | é | è |        |   |   |  |             |   |   |  |  |
// |  | à |   | ê | LSHIFT |   |   |  | û -> RSHIFT | î | ô |  |  |
// |  | â |   | ç |        |   |   |  |             |   |   |  |  |
//                    |  |  |  |   |  |  |  |
#define UNICODA_ALTERNATIVES_DIA \
&none,            &fr_e_acute, &fr_e_grave,      &none,      &none,        &none,  &none,                         &fr_u_grave,      &none,            &none, \
&fr_a_grave,      &none,       &fr_e_circumflex, &kp LSHIFT, &none,        &none,  &hm_fr_u_circumflex RSHIFT 0,  &fr_i_circumflex, &fr_o_circumflex, &none, \
&fr_a_circumflex, &none,       &fr_c_cedilla,    &none,      &none,        &none,  &none,                         &none,            &none,            &none, \
U_NP,             U_NP,        &trans,           &trans,     &trans,       &trans, &trans,                        &trans,           U_NP,             U_NP


// -----------------------------------------------------------------------------------------
// |  | â | ç |   |   |  |   |  |        |   |   | û |  |
// |  | à | é | è | ê |  |   |  | RSHIFT | î | ï | ù |  |
// |  |   |   |   |   |  |   |  |        |   |   |   |  |
//              |  |  |  |   |  |  |  |
#define UNICODA_ALTERNATIVES_DIA_ERGOL \
&fr_a_circumflex, &fr_c_cedilla, &fr_e_grave, &none,            &none,        &none,  &none,       &none,            &fr_u_circumflex, &none, \
&fr_a_grave,      &fr_e_acute,   &fr_e_grave, &fr_e_circumflex, &none,        &none,  &kp RSHIFT,  &fr_i_circumflex, &fr_i_trema,      &fr_u_grave, \
&none,            &none,         &none,       &none,            &none,        &none,  &none,       &none,            &none,            &none, \
U_NP,             U_NP,          &trans,      &trans,           &trans,       &trans, &trans,      &trans,           U_NP,             U_NP
