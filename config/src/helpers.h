#pragma once

#include <behaviors.dtsi>

/**
 * Usage: HOLD_TAP(hm, 2, 175, &kp, &kp)
 * &hm LSHIFT F
 * Usage: HOLD_TAP(hmc, 1, 175, &kp, &custom_function)
 * &hmc RSHIFT
 *
 * tapping_term_ms: Sweet spot between 150 and 220
*/
#define HOLD_TAP(name, binding_cells, tapping_term_ms, binding_function, custom_function) \
    / { \
        behaviors { \
            name: name { \
              compatible = "zmk,behavior-hold-tap"; \
              #binding-cells = <binding_cells>; \
              quick_tap_ms = <0>; \
              tapping-term-ms = <tapping_term_ms>; \
              flavor = "tap-preferred"; \
              bindings = <binding_function>, <custom_function>; \
            }; \
        }; \
    };

/**
 * Usage: COMBO(combo_ql_sqt, 20 21, &kp SQT, 0)
*/
#define COMBO(name, key_positions, bindings, layers) \
    / { \
        combos { \
            compatible = "zmk,combos"; \
            name: name { \
                timeout-ms = <50>; \
                key-positions = <key_positions>; \
                bindings = <bindings>; \
                layers = <layers>; \
            }; \
        }; \
    };

/**
 * Usage: DOUBLE_TAP(dt)
 * &dt C_NEXT C_PREV
*/
#define DOUBLE_TAP(name) \
    / { \
        behaviors { \
            name: name { \
              compatible = "zmk,behavior-tap-dance"; \
              #binding-cells = <2>; \
              tapping-term-ms = <200>; \
              bindings = <&kp>, <&kp>; \
            }; \
        }; \
    };
