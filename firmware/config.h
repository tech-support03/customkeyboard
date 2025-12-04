#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    arjunkhedkar
#define PRODUCT         arjun's_keyboard

// Matrix configuration
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// Pin configuration for RP2040
#define MATRIX_ROW_PINS { GP16, GP17, GP18, GP19, GP20 }
#define MATRIX_COL_PINS { GP0, GP1, GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP21 }

#define DIODE_DIRECTION COL2ROW

// Rotary encoder configuration
#define ENCODERS_PAD_A { GP14 }
#define ENCODERS_PAD_B { GP15 }
#define ENCODER_RESOLUTION 4

// Encoder button (switch on encoder)
#define ENCODER_BUTTON_PIN GP22

// Debounce
#define DEBOUNCE 5
