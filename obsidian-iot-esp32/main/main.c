#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"
#include "wifi_api.h"


void app_main(void)
{
    printf("Hello World...\n");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}