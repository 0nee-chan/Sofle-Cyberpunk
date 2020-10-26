#pragma once

#define MASTER_RIGHT
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT {12, 12}
#define RGBLED_NUM 24
#define RGBLIGHT_LED_MAP {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}
#define RGB_DI_PIN D3
#define RGB_H
#define HARDWARE_PWM
#define WS2812_TRST_US 80


/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
