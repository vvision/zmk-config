
#pragma once

#if !defined (MIRYOKU_LAYER_LIST)

  #if defined (MIRYOKU_MULTIPLE_ALPHAS)

    #define MIRYOKU_LAYER_LIST \
    MIRYOKU_X(BASE, "Base") \
    MIRYOKU_X(SYM, "Symbol") \
    MIRYOKU_X(NAV, "Navigation") \
    MIRYOKU_X(NUM, "Numbers") \
    MIRYOKU_X(FUN, "Function") \
    MIRYOKU_X(ADJUST, "Adjust") \
    MIRYOKU_X(DIA, "Diacritics") \
    MIRYOKU_X(BASE_ERGOL, "Ergol") \
    MIRYOKU_X(BASE_COLEMAKDH, "ColemakDh") \
    MIRYOKU_X(DIA_ERGOL, "DiaErgol")

    #define U_BASE   0
    #define U_SYM    1
    #define U_NAV    2
    #define U_NUM    3
    #define U_FUN    4
    #define U_ADJUST 5
    #define U_DIA    6
    #define U_BASE_ERGOL      7
    #define U_BASE_COLEMAKDH  8
    #define U_DIA_ERGOL       9

  #else

    #define MIRYOKU_LAYER_LIST \
    MIRYOKU_X(BASE, "Base") \
    MIRYOKU_X(SYM, "Symbol") \
    MIRYOKU_X(NAV, "Navigation") \
    MIRYOKU_X(NUM, "Numbers") \
    MIRYOKU_X(FUN, "Function") \
    MIRYOKU_X(ADJUST, "Adjust") \
    MIRYOKU_X(DIA, "Diacritics")

    #define U_BASE   0
    #define U_SYM    1
    #define U_NAV    2
    #define U_NUM    3
    #define U_FUN    4
    #define U_ADJUST 5
    #define U_DIA    6

    #if defined (MIRYOKU_ALPHAS_ERGOL)
      #define U_DIA_ERGOL U_DIA
    #endif

  #endif

#endif
