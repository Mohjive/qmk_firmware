#ifndef HEMLING_H
#define HEMLING_H

#include "quantum.h"

// readability
#define XXX KC_NO

#define LAYOUT( \
    K10,      K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C,      \
    K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B,    K5D,   \
    K60, K61, K62,                K66,                K6A, K6B, K6C, K6D  \
) { \
    { K10, XXX, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, XXX }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, XXX, K5D }, \
    { K60, K61, K62, XXX, XXX, XXX, K66, XXX, XXX, XXX, K6A, K6B, K6C, K6D }  \
}
#endif
