# AC voltage checker

## Inevitable warning

Be careful here. If you do something wrong, you might:

- die or kill
- hurt yourself or someone else

I'm using AC, 220V, up to 10A. This is really DANGEROUS! Please, don't try anything of here if you don't know what you're doing.

## Requirements

### Hardware

- 1x zmpt101b
- 1x arduino nano (attiny) or 1x arduino uno (atmega)
- 1x orange pi zero 3
- 3x wires (vcc)
  - 1x black: gnd
  - 1x red: vcc
  - 1x of your choice: data
- 2x wire (ac): be careful here
  - it's a pair of AC to connect to you zmpt101b

### Software

I'm using Linux, so the Makefile and other commands are all aiming debian flavours (Mint, Ubuntu...).

- VSCodium or similar
  - PlatformIO

> sudo apt install platformio
