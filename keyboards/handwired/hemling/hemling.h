#ifndef HEMLING_H
#define HEMLING_H

#include "quantum.h"

// readability
#define XXX KC_NO

#define LAYOUT( \
    K10,      K27, K21, K41, K11, K38, K12, K49, K29, K23, K33, K13, K83, \
    K20, K30, K37, K31, K34, K24, K25, K35, K32, K39, K36, K26, K22, K43, \
    K40, K50, K57, K51, K54, K44, K45, K55, K52, K59, K56, K46, K42, K73, \
    K47, K60, K67, K61, K64, K14, K15, K65, K62, K69, K66, K16, K76,      \
    K48, K17, K70, K77, K71, K74, K84, K85, K75, K72, K79, K86,    K68,   \
    K28, K89, K18,                K19,                K88, K80, K63, K78  \
) { \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29 }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39 }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49 }, \
    { K50, K51, K52, XXX, K54, K55, K56, K57, XXX, K59 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69 }, \
    { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79 }, \
    { K80, XXX, XXX, K83, K84, K85, K86, XXX, K88, K89 }, \
}
#endif
