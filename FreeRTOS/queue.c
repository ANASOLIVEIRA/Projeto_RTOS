#include "FreeRTOS.h"
#include "queue.h"
#include <stdio.h>

QueueHandle_t xQueueCreate(UBaseType_t uxQueueLength, UBaseType_t uxItemSize) {
    printf("Fila criada com %u itens de tamanho %u bytes.\n", uxQueueLength, uxItemSize);
    return (QueueHandle_t)1;
}

BaseType_t xQueueSend(QueueHandle_t xQueue, const void *pvItemToQueue, TickType_t xTicksToWait) {
    printf("Item enviado para fila.\n");
    return pdPASS;
}

BaseType_t xQueueReceive(QueueHandle_t xQueue, void *pvBuffer, TickType_t xTicksToWait) {
    printf("Item recebido da fila.\n"); //teste1
    return pdPASS;
}
