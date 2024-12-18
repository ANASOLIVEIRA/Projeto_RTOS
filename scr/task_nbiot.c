#include "task_nbiot.h"
#include "FreeRTOS.h"
#include "task.h"

void task_nbiot_init(void *pvParameters) {
    while (1) {
        printf("Comunicando via NB-IoT\n");
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}