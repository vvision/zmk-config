// https://github.com/manna-harbour/miryoku_zmk/blob/master/miryoku/mapping/42/corne.h

#if !defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

/* Hold R and U for caps_word (in qwerty) */
#define COMBOS_CAPS_WORDS 4 7

/* Hold S and D for ` (in qwerty) */
#define COMBOS_GRAVE 14 15
/* Hold D and F for ESCAPE (in qwerty) */
#define COMBOS_ESCAPE_KEY 15 16
/* Hold S and F for TAB (in qwerty) */
#define COMBOS_TAB_KEY 14 16

/* Hold K and L for ' (in qwerty) */
#define COMBOS_SINGLE_QUOTE 20 21

/* Hold C and , for function layer (in qwerty) */
#define COMBOS_FUNCTION_LAYER 27 32


#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_CORNE
