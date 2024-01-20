#pragma once

/**
 * Usage: HOLD_TAP(hm, 175, &kp, &kp)
 * &hm LSHIFT F
 * Usage: HOLD_TAP(hmc, 175, &kp, &custom_function)
 * &hmc RSHIFT 0
 *
 * tapping_term_ms: Sweet spot between 150 and 220
 *
 * Note:
 *   If you use behaviors that accept no parameters such as mod-morphs or macros,
 *   you can pass a dummy parameter value such as 0 to the hold-tap when you use it in your keymap.
 *   Ex: &hmc RSHIFT 0
 * (https://zmk.dev/docs/behaviors/hold-tap)
*/
#define HOLD_TAP(name, tapping_term_ms, binding_function, custom_function) \
    / { \
        behaviors { \
            name: name { \
              compatible = "zmk,behavior-hold-tap"; \
              #binding-cells = <2>; \
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
#define COMBO_KEY(name, key_positions, combo_bindings, combo_layers) \
    / { \
        combos { \
            compatible = "zmk,combos"; \
            combo_ ## name { \
                timeout-ms = <50>; \
                key-positions = <key_positions>; \
                bindings = <combo_bindings>; \
                layers = <combo_layers>; \
            }; \
        }; \
    };

/**
 * Usage: DOUBLE_TAP(dt)
 * &dt C_NEXT C_PREV
*/
#define DOUBLE_TAP(name, tapping_term_ms, binding_1, binding_2) \
    / { \
        behaviors { \
            name: name { \
              compatible = "zmk,behavior-tap-dance"; \
              #binding-cells = <0>; \
              tapping-term-ms = <tapping_term_ms>; \
              bindings = <binding_1>, <binding_2>; \
            }; \
        }; \
    };
