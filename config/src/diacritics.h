#pragma once

#include "shift_functions.h"

// Inspired by: https://github.com/urob/zmk-nodefree-config/blob/main/helper.h
#define ZMK_HELPER_STRINGIFY(x) #x

#define LETTER_ACUTE(name, letter_binding) \
/ { \
    macros { \
        name: name { \
            compatible = "zmk,behavior-macro-one-param";
            label = U_STRINGIFY(ZM_ ## name); \
            wait-ms = <40>;
            tap-ms = <40>;
            #binding-cells = <1>;
            bindings
                = <&kp SINGLE_QUOTE>
                , <letter_binding>;
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
            bindings = <letter_binding>, <&kp LSHIFT letter_binding>; \
            mods = <(MOD_LSFT|MOD_RSFT)>; \
        }; \
    }; \
};

#define GO_SHIFT_LETTER_ACUTE(name, binding) \
SHIFT_LETTER_ACUTE(name ## _shifted, binding) \
LETTER_ACUTE(name, &name ## _shifted)



GO_SHIFT_LETTER_ACUTE(fr_e_acute_test, &kp E)
