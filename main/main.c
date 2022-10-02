#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "axp192.h"
#include "i2c_manager.h"
#include "m5core2_axp192.h"

void setLCDRSet(bool state) {
  uint8_t reg_addr = 0x96;
  uint8_t gpio_bit = 0x02;
  uint8_t data;
  m5core2_axp_read_reg(reg_addr, &data);

  if (state) {
    data |= gpio_bit;
  } else {
    data &= ~gpio_bit;
  }

  m5core2_axp_write_reg(reg_addr, data);
}

void app_main(void)
{
  m5core2_init();

  // turn the GREEN LED off
  m5core2_led(false);

  setLCDRSet(false);
  vTaskDelay(pdMS_TO_TICKS(100));
  setLCDRSet(true);
  vTaskDelay(pdMS_TO_TICKS(100));

  m5core2_led(true);
}
