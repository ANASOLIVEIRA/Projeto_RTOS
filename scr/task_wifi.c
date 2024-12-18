#include "task_wifi.h"
#include "FreeRTOS.h"
#include "task.h"

void task_wifi_init(void *pvParameters) {
    while (1) {

        printf("Inicializando Wi-Fi\n");
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}
