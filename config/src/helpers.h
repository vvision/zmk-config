#pragma once

/**
 * Usage: HOLD_TAP(hm, 175, &kp, &kp)
 * &hm LSHIFT F
*/
#define HOLD_TAP(name, tapping_term_ms, binding_function_1, binding_function_2) \
    \ { \
          compatible = "zmk,behavior-hold-tap"; \
          #binding-cells = <2>; \
          // Sweet spot between 150 and 220
          quick_tap_ms = <0>; \
          tapping-term-ms = <tapping_term_ms>; \
          flavor = "tap-preferred"; \
          bindings = <binding_function_1>, <binding_function_2>; \
    };
/**
 * Usage: HOLD_TAP_CUSTOM(hmc, 175, &kp, &custom_function)
 * &hmc RSHIFT
*/
#define HOLD_TAP_CUSTOM(name, tapping_term_ms, binding_function, custom_function) \
    \ { \
          compatible = "zmk,behavior-hold-tap"; \
          #binding-cells = <1>; \
          // Sweet spot between 150 and 220
          quick_tap_ms = <0>; \
          tapping-term-ms = <tapping_term_ms>; \
          flavor = "tap-preferred"; \
          bindings = <binding_function>, <custom_function>; \
    };
