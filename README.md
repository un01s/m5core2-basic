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
```

## reference

* [m5core2 doc](https://docs.m5stack.com/en/core/core2)
* [GFX with Arduino](https://github.com/lovyan03/LovyanGFX)

