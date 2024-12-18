#ifndef TASK_H
#define TASK_H

#include "FreeRTOS.h"

typedef void *TaskHandle_t;

void vTaskStartScheduler(void);
void vTaskDelay(const TickType_t xTicksToDelay);
void xTaskCreate(void (*pxTaskCode)(void *), const char *const pcName, const uint16_t usStackDepth, void *pvParameters, UBaseType_t uxPriority, TaskHandle_t *pxCreatedTask);

#endif /* TASK_H */