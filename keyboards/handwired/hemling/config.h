#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xCA60
#define DEVICE_VER      0x0001
#define MANUFACTURER    AHEMLING
#define PRODUCT         CUSTOM
#define DESCRIPTION     70-ish homebuilt keyboard

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { D6, D5, D1, D6, D5, D4, D3, D2 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, C6, C7, E6, B7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN D7
#define BACKLIGHT_LEVELS 5

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define RGB_DI_PIN B0
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 20
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif
