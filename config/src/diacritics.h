#pragma once

#include "shift_functions.h"

// Inspired by: https://github.com/urob/zmk-nodefree-config/blob/main/helper.h
#define ZMK_HELPER_STRINGIFY(x) #x

#define LETTER_ACUTE(name, diacritic_binding, letter_binding) \
    / { \
        macros { \
            name: name { \
                compatible = "zmk,behavior-macro"; \
                wait-ms = <40>; \
                tap-ms = <40>; \
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

// SHIFT_LETTER_ACUTE(shift_test, &kp E, &kp LS(E))
LETTER_ACUTE(acute_test, &kp SINGLE_QUOTE, &kp E)

// GO_SHIFT_LETTER_ACUTE(fr_e_acute_test, SINGLE_QUOTE, E)

#define GO_SHIFT_LETTER_ACUTE_2(name, diacritic_binding, letter_binding) \
    LETTER_ACUTE(name ## _acute_lower, &kp diacritic_binding, &kp letter_binding) \
    LETTER_ACUTE(name ## _acute_upper, &kp diacritic_binding, &kp LSHIFT &kp letter_binding) \
    SHIFT_LETTER_ACUTE(name, &name ## _acute_lower, &name ## _acute_upper)

GO_SHIFT_LETTER_ACUTE_2(fr_e_acute_test_2, SINGLE_QUOTE, E)
