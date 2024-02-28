// Based on https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/miryoku.h

#pragma once

#include "layers/layer_selection.h"
#include "layers/layer_list.h"

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#define U_STRINGIFY(x) #x

#define U_MACRO(name,...) \
    / { \
      macros { \
        name: name { \
          label = U_STRINGIFY(ZM_ ## name); \
          compatible = "zmk,behavior-macro"; \
          #binding-cells = <0>; \
          __VA_ARGS__ \
        }; \
      }; \
    };

#define U_NP &none // key is not present
#define U_NA &none // present but not available for use
#define U_NU &none // available but not used

#include "shift_functions.h"

#include "behaviors.h"
