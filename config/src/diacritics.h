#pragma once

// Inspired by: https://github.com/urob/zmk-nodefree-config/blob/main/helper.h

#define LETTER_ACUTE(name, diacritic_binding, letter_binding) \
    / { \
        macros { \
            name: name { \
                compatible = "zmk,behavior-macro"; \
                wait-ms = <0>; \
                tap-ms = <0>; \
                #binding-cells = <0>; \
                bindings = <diacritic_binding>, <letter_binding>; \
            }; \
        }; \
    };

#define SHIFT_LETTER_ACUTE(name, letter_binding, shift_letter_binding) \
    / { \
        behaviors { \
            name: name { \
                compatible = "zmk,behavior-mod-morph"; \
                #binding-cells = <0>; \
                bindings = <letter_binding>, <shift_letter_binding>; \
                mods = <(MOD_LSFT|MOD_RSFT)>; \
            }; \
        }; \
    };

#define DIACRITIC_LETTER(name, diacritic_binding, letter_binding) \
    LETTER_ACUTE(name ## _acute_lower, &kp diacritic_binding, &kp letter_binding) \
    LETTER_ACUTE(name ## _acute_upper, &kp diacritic_binding, &kp LSHIFT &kp letter_binding) \
    SHIFT_LETTER_ACUTE(name, &name ## _acute_lower, &name ## _acute_upper)

DIACRITIC_LETTER(fr_a_grave, GRAVE, A)
DIACRITIC_LETTER(fr_a_circumflex, CARET, A)

DIACRITIC_LETTER(fr_e_acute, SINGLE_QUOTE, E)
DIACRITIC_LETTER(fr_e_grave, GRAVE, E)
DIACRITIC_LETTER(fr_e_circumflex, CARET, E)

DIACRITIC_LETTER(fr_i_circumflex, CARET, I)

DIACRITIC_LETTER(fr_o_circumflex, CARET, O)

DIACRITIC_LETTER(fr_u_grave, GRAVE, U)
DIACRITIC_LETTER(fr_u_circumflex, CARET, U)

DIACRITIC_LETTER(fr_c_cedilla, SINGLE_QUOTE, C)
