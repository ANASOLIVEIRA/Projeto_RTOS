#include "task_mqtt.h"
#include "FreeRTOS.h"
#include "task.h"

void task_mqtt_init(void *pvParameters) {
    while (1) {
        printf("Enviando dados via MQTT\n");
        vTaskDelay(pdMS_TO_TICKS(6000));
    }
}