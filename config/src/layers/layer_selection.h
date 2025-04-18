
#pragma once

#include "layer_alternatives.h"

#if !defined(MIRYOKU_LAYER_BASE)
  #if defined (MIRYOKU_ALPHAS_ERGOL)
    #define MIRYOKU_LAYER_BASE UNICODA_ALTERNATIVES_BASE_ERGOL
  #elif defined (MIRYOKU_ALPHAS_COLEMAK_DH)
    #define MIRYOKU_LAYER_BASE UNICODA_ALTERNATIVES_BASE_COLEMAK_DH
  #else
    #define MIRYOKU_LAYER_BASE UNICODA_ALTERNATIVES_BASE_QWERTY
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_BASE)
  #define MIRYOKU_LAYERMAPPING_BASE MIRYOKU_MAPPING
#endif


#if defined (MIRYOKU_MULTIPLE_ALPHAS)
  #define MIRYOKU_LAYER_BASE_ERGOL UNICODA_ALTERNATIVES_BASE_ERGOL
  #define MIRYOKU_LAYERMAPPING_BASE_ERGOL MIRYOKU_MAPPING

  #define MIRYOKU_LAYER_BASE_COLEMAKDH UNICODA_ALTERNATIVES_BASE_COLEMAK_DH
  #define MIRYOKU_LAYERMAPPING_BASE_COLEMAKDH MIRYOKU_MAPPING

  #define MIRYOKU_LAYER_DIA_ERGOL UNICODA_ALTERNATIVES_DIA_ERGOL
  #define MIRYOKU_LAYERMAPPING_DIA_ERGOL MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_SYM)
  #define MIRYOKU_LAYER_SYM UNICODA_ALTERNATIVES_SYM
#endif
#if !defined(MIRYOKU_LAYERMAPPING_SYM)
  #define MIRYOKU_LAYERMAPPING_SYM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_NAV)
  #if defined (MIRYOKU_ALPHAS_ERGOL)
    #define MIRYOKU_LAYER_NAV UNICODA_ALTERNATIVES_NAV_VIM_EXT
  #else
    #define MIRYOKU_LAYER_NAV UNICODA_ALTERNATIVES_NAV_NUM
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_NAV)
  #define MIRYOKU_LAYERMAPPING_NAV MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_NUM)
  #define MIRYOKU_LAYER_NUM UNICODA_ALTERNATIVES_NUM_ROW
#endif
#if !defined(MIRYOKU_LAYERMAPPING_NUM)
  #define MIRYOKU_LAYERMAPPING_NUM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_FUN)
  #define MIRYOKU_LAYER_FUN UNICODA_ALTERNATIVES_FUN
#endif
#if !defined(MIRYOKU_LAYERMAPPING_FUN)
  #define MIRYOKU_LAYERMAPPING_FUN MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_ADJUST)
  #define MIRYOKU_LAYER_ADJUST UNICODA_ALTERNATIVES_ADJUST
#endif
#if !defined(MIRYOKU_LAYERMAPPING_ADJUST)
  #define MIRYOKU_LAYERMAPPING_ADJUST MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_DIA)
  #if defined (MIRYOKU_ALPHAS_ERGOL)
    #define MIRYOKU_LAYER_DIA UNICODA_ALTERNATIVES_DIA_ERGOL
  #else
    #define MIRYOKU_LAYER_DIA UNICODA_ALTERNATIVES_DIA
  #endif
#endif
#if !defined(MIRYOKU_LAYERMAPPING_DIA)
  #define MIRYOKU_LAYERMAPPING_DIA MIRYOKU_MAPPING
#endif
