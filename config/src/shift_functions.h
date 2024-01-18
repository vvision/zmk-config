// Based on https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku_shift_functions.h
#pragma once

#define SHIFT_FUNCTION(NAME, BINDING, SHIFT_BINDING) \
    / { \
      behaviors { \
        NAME: NAME { \
          compatible = "zmk,behavior-mod-morph"; \
          label = U_STRINGIFY(NAME); \
          #binding-cells = <0>; \
          bindings = <BINDING>, <SHIFT_BINDING>; \
          mods = <(MOD_LSFT|MOD_RSFT)>; \
        }; \
      }; \
    };

#define SHIFT_MACRO(NAME, BINDING, SHIFT_BINDING) \
    U_MACRO(u_macro_ ## NAME, wait-ms = <0>; bindings = <SHIFT_BINDING>;) \
    SHIFT_FUNCTION(NAME, BINDING, &u_macro_ ## NAME)
