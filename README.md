# EVEN44 

A 40% split keyboard made through modifications of the [oddball](https://atulloh.github.io/oddball/) by [atulloh](https://atulloh.github.io/oddball/) taking inspirations from [kyria](https://github.com/splitkb/kyria) and [lily58 pro](https://github.com/kata0510/Lily58) which I personally liked a lot. So taking the base design of the oddball, I made the following major edits:

* Make the column stagger more aggressive like the kyria.  
* Keep 4 mod keys at the bottom row (with both CTRL and ALT).  
* Use a rotary encoder as volume control knob/scrolling with layering. 

For now, the keyboard is in design phase and will be handwired.

## QMK Firmware

The firmware is still in testing stage. To compile and flash the firmware,
first you need to clone the qmk-firmware repository. Then copy the foler
```even44``` over to the keyboards directory of the qmk-firmware repository.

```sh
git clone https://github.com/qmk/qmk_firmware
cp -rv even44/qmk_firmware/even44 qmk_firmware/keyboards/even44
```

Then the firmware can be compiled and flashed using

```sh
make even44:default:avrdude
```

## TODO

* Design a pcb  
* RGB support(?)
