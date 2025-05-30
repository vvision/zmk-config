// https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/mapping/34/ferris.h

#if !defined (MIRYOKU_LAYOUTMAPPING_FERRIS)

#define MIRYOKU_LAYOUTMAPPING_FERRIS( \
K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24       K25  K26  K27  K28  K29 \
               K33  K34       K35  K36

// TODO Define combos

/* LEFT part combo */

/* Hold S and D for ` (in qwerty) */
#define COMBOS_GRAVE 11 12
/* Hold D and F for ESCAPE (in qwerty) */
#define COMBOS_ESCAPE_KEY 12 13
/* Hold S and F for TAB (in qwerty) */
#define COMBOS_TAB_KEY 11 13


/* RIGHT part combo */

/* Hold K and L for ' (in qwerty) */
#define COMBOS_SINGLE_QUOTE 17 18
/* Hold J and K for BACKSPACE (in qwerty) */
#define COMBOS_BACKSPACE 16 17


/* BOTH part combo */

/* Hold R and U for caps_word (in qwerty) */
#define COMBOS_CAPS_WORDS 3 6
/* Hold C and , for function layer (in qwerty) */
#define COMBOS_FUNCTION_LAYER 22 27


/* Combo for multi base layer */
#define MIRYOKU_MULTIPLE_ALPHAS
/* Hold Q and P to change base layer (in qwerty) */
#define COMBOS_MULTI_LAYER 0 9

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_FERRIS
