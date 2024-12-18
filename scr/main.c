#include "FreeRTOS.h"
#include "task.h"
#include "task_wifi.h"
#include "task_nbiot.h"
#include "task_mqtt.h"
#include "rtc_manager.h"
#include "energy_manager.h"

int main(void) {
    system_init();
    xTaskCreate(task_wifi_init, "WiFi Task", 512, NULL, 2, NULL);
    xTaskCreate(task_nbiot_init, "NB-IoT Task", 512, NULL, 2, NULL);
    xTaskCreate(task_mqtt_init, "MQTT Task", 512, NULL, 3, NULL);
    energy_manager_init();
    rtc_manager_init();
    vTaskStartScheduler();

    while (1) {
    }
    return 0;
}
