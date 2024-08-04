#pragma once

#define SPLIT_LAYER_STATE_ENABLE
#define MASTER_LEFT
#define TAPPING_TERM 200
#define RGB_MATRIX_SLEEP

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#endif