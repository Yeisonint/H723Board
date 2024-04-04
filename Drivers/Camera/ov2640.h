#ifndef OV2640_H
#define OV2640_H

#include "main.h"
#include "camera.h"
#include <stdbool.h>

int ov2640_init(framesize_t framesize);
int ov2640_init2(I2C_HandleTypeDef *hi2c,framesize_t framesize, pixformat_t pixformat, bool hmirror, bool vflip);

#endif
