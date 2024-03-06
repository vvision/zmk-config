
#pragma once

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE, "Base") \
MIRYOKU_X(SYM, "Symbol") \
MIRYOKU_X(NAV, "Navigation") \
MIRYOKU_X(FUN, "Function") \
MIRYOKU_X(ADJUST, "Adjust") \
MIRYOKU_X(DIA, "Diacritics")

#define U_BASE   0
#define U_SYM    1
#define U_NAV    2
#define U_FUN    3
#define U_ADJUST 4
#define U_DIA    5

#if defined (MIRYOKU_ALPHAS_ERGOL)
  #define U_DIA_ERGOL U_DIA
#endif

#endif
