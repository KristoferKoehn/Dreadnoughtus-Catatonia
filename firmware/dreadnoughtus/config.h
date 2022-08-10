#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC1ED // OU
#define MANUFACTURER    KristoferKoehn
#define PRODUCT         Dreadnoughtus

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_COLS 14

#define MATRIX_COL_PINS {B5, B4, E6, D7, C6, D4, B7, F0, B6, B2, B3, B1, F7, F6}
#define MATRIX_ROW_PINS {F6, F7, B1, B3, B2, B6, F0, B7, D4, C6, D7, E6, B4, B5}

#define DIODE_DIRECTION COL2ROW

#define F_SCL 100000L

#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_DELAY 0

#define USE_I2C