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
            bindings = <&kp diacritic_binding>, <&kp letter_binding>; \
        }; \
    }; \
};

#define SHIFT_LETTER_ACUTE(name, letter_binding) \
/ { \
    behaviors { \
        name: name { \
            compatible = "zmk,behavior-mod-morph"; \
            label = ZMK_HELPER_STRINGIFY(SHIFT_ ## name); \
            #binding-cells = <0>; \
            bindings = <&kp letter_binding>, <&kp LSHIFT &kp letter_binding>; \
            mods = <(MOD_LSFT|MOD_RSFT)>; \
        }; \
    }; \
};

#define GO_SHIFT_LETTER_ACUTE(name, diacritic_binding, letter_binding) \
SHIFT_LETTER_ACUTE(name ## _shifted, letter_binding) \
LETTER_ACUTE(name, diacritic_binding, &name ## _shifted)



GO_SHIFT_LETTER_ACUTE(fr_e_acute_test, SINGLE_QUOTE, E)
