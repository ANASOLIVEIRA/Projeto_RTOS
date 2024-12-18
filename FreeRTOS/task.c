#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>

void vTaskStartScheduler(void) {
    printf("Scheduler iniciado.\n");
    while (1) {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void vTaskDelay(const TickType_t xTicksToDelay) {
    printf("Delay de %d ticks.\n", xTicksToDelay);
}

void xTaskCreate(void (*pxTaskCode)(void *), const char *const pcName, const uint16_t usStackDepth, void *pvParameters, UBaseType_t uxPriority, TaskHandle_t *pxCreatedTask) {
    printf("Task criada: %s | Prioridade: %u\n", pcName, uxPriority);
    pxTaskCode(pvParameters);
}