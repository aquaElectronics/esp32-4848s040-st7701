# ESP32-4848S040-ST7701

PlatformIO reference project for the **GUITION ESP32-4848S040** board  
(ESP32-S3 with 4.0" 480×480 RGB IPS display using the ST7701 controller).

This repository documents a **working and verified configuration** for driving
the onboard RGB display with the **Arduino_GFX** library.

> PlatformIO only.  
> Arduino IDE is not supported.

---

## Hardware Overview

- Board: GUITION ESP32-4848S040  
- MCU: ESP32-S3  
- Display: 4.0" RGB IPS  
- Resolution: 480 × 480  
- Controller: ST7701  
- Interface: RGB (DOTCLK)  
- Color format: RGB666 (compatible with RGB565)  
- PSRAM: 8 MB  

---

## Software Stack

- Build system: PlatformIO  
- Framework: Arduino (via PlatformIO)  
- Graphics library: Arduino_GFX 1.6.4  
- Board definition: esp32-s3-devkitc-1  

---

## What This Project Provides

- Correct ST7701 initialization sequence for the 4848S040 panel  
- Stable RGB timing (HSYNC / VSYNC / PCLK)  
- Verified pin mapping for the GUITION board  
- Backlight control via GPIO  
- Simple graphics demo for validation  

This project exists because **generic ST7701 examples often fail** on this panel.
All timings and init values were tested on real hardware.

---

## Project Layout

src/
├── main.cpp Demo application
├── display.h Display class wrapper
└── display.cpp RGB panel setup and ST7701 init sequence
platformio.ini
README.md