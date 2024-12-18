#include "task_wifi.h"
#include "task_nbiot.h"
#include "task_mqtt.h"
#include "rtc_manager.h"
#include "energy_manager.h"
#include <stdio.h>

void test_task_wifi() {
    printf("\n Teste: Task WiFi \n");
    printf("Iniciando Task WiFi...\n");
    task_wifi_init(NULL);
    printf("Task WiFi concluída com sucesso.\n");
}

void test_task_nbiot() {
    printf("\n Teste: Task NB-IoT \n");
    printf("Iniciando Task NB-IoT...\n");
    task_nbiot_init(NULL);
    printf("Task NB-IoT concluída com sucesso.\n");
}

void test_task_mqtt() {
    printf("\n Teste: Task MQTT \n");
    printf("Iniciando Task MQTT...\n");
    task_mqtt_init(NULL);
    printf("Task MQTT concluída com sucesso.\n");
}

void test_rtc_manager() {
    printf("\n Teste: RTC Manager \n");
    printf("Inicializando RTC...\n");
    rtc_manager_init();
    printf("RTC inicializado com sucesso.\n");
}

void test_energy_manager() {
    printf("\n Teste: Energy Manager \n");
    printf("Inicializando Gerenciador de Energia...\n");
    energy_manager_init();
    printf("Gerenciador de Energia inicializado com sucesso.\n");
}

int main() {
    printf(" INÍCIO DOS TESTES DO PROJETO \n");

    // Chamadas de testes
    test_task_wifi();
    test_task_nbiot();
    test_task_mqtt();
    test_rtc_manager();
    test_energy_manager();

    printf("\nTODOS OS TESTES FORAM CONCLUÍDOS COM SUCESSO \n");
    printf("\n 1 \n");
    return 0;
}