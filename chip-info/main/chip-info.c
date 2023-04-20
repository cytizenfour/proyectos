#include <stdio.h>
#include "esp_chip_info.h"
void app_main()
{
    esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
    printf("Chip tipo %s, y tienen %d Cores !\n", CONFIG_IDF_TARGET, chip_info.cores);

}
