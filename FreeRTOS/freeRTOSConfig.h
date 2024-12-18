#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

#define configUSE_PREEMPTION           1
#define configCPU_CLOCK_HZ             (80000000UL)
#define configTICK_RATE_HZ             (1000)
#define configMAX_PRIORITIES           5
#define configMINIMAL_STACK_SIZE       128
#define configTOTAL_HEAP_SIZE          (20 * 1024)
#define configMAX_TASK_NAME_LEN        16
#define configUSE_16_BIT_TICKS         0

#endif /* FREERTOS_CONFIG_H */