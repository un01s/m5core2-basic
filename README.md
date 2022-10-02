# m5core2 basic

Just an esp-idf based project for m5core2. No arduino. No platformio. Everything required to bring up m5core2 is just a component.

There are other ways like using Arduino directly, or integrating arduino as a component to an esp-idf project, or using Platformio with arduino.

There are some projects served as examples along the development.

* [m5core2 LVGL esp-idf](https://github.com/cyclexit/m5core-lvgl-demo-esp-idf)
* [m5core2 esp-idf demo](https://github.com/ropg/m5core2_esp-idf_demo)
* [m5core2 basic idf](https://github.com/usedbytes/m5core2-basic-idf)
* [m5core2 template w/ arduino](https://github.com/h1romas4/m5stack-core2-template)
* [esp-idf st7789 driver](https://github.com/nopnop2002/esp-idf-st7789)

## setup

```
$ idf.py create-project m5core2-basic
$ cd m5core2-basic
$ idf.py set-target esp32
$ idf.py menuconfig
$ mkdir components && cd components
$ git submodule add https://github.com/tuupola/axp192
$ git submodule add https://github.com/ropg/i2c_manager
$ git submodule add https://github.com/ropg/m5core2_axp192
$ idf.py menuconfig
```

There are three configurations to be done. M5Core2 uses I2C0, with GPIO21 as SDA and GPIO22 as SCL.

```
I (317) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
I (327) m5core2_axp192: Initialising
I (327) i2c_manager: Starting I2C master at port 0.
I (337) i2c_manager: Initialised port 0 (SDA: 21, SCL: 22, speed: 400000 Hz.)
I (347) m5core2_axp192: 	Vbus limit off
I (347) m5core2_axp192: 	Speaker amplifier off
I (357) m5core2_axp192: 	RTC battery charging enabled (3v, 200uA)
I (367) m5core2_axp192: 	ESP32 power voltage set to 3.35v
I (367) m5core2_axp192: 	LCD backlight voltage set to 2.80v
I (377) m5core2_axp192: 	LCD logic and sdcard voltage set to 3.3v
I (377) m5core2_axp192: 	Vibrator voltage preset to 2v
I (387) m5core2_axp192: 	LED on
I (387) m5core2_axp192: 	Charge current set to 100 mA
I (397) m5core2_axp192: 	Battery voltage now: 4.18 volts
I (407) m5core2_axp192: 	Power key set, 4 seconds for hard shutdown
I (407) m5core2_axp192: 	Enabled all ADC channels
I (417) m5core2_axp192: 	USB / battery powered, 5V bus on
```

## reference

* [m5core2 doc](https://docs.m5stack.com/en/core/core2)
* [GFX with Arduino](https://github.com/lovyan03/LovyanGFX)

