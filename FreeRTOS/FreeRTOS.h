#ifndef FREERTOS_H
#define FREERTOS_H

#include <stdint.h>
#include <stddef.h>

typedef uint32_t TickType_t;
typedef unsigned int UBaseType_t;
#define pdPASS 1
#define pdMS_TO_TICKS(x) ((TickType_t)(x / 1000))

#endif /* FREERTOS_H */