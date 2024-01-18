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
