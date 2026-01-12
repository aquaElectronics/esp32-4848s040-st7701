# esp32-4848s040-st7701
PlatformIO demo for the GUITION ESP32-4848S040 (ESP32-S3) driving a 480×480 RGB IPS display with ST7701 using Arduino_GFX.

This repository demonstrates correct RGB timing, display initialization, and backlight control using Arduino_GFX exclusively in PlatformIO.

❗ Arduino IDE is not supported
This project is designed and tested only with PlatformIO.

📺 Display Details

Module: GUITION ESP32-4848S040

MCU: ESP32-S3

Display size: 4.0 inch

Resolution: 480 × 480 pixels

Panel type: RGB IPS LCD

Controller: ST7701

Color mode: RGB666 (RGB565 compatible)

Interface: 16-bit RGB (DOTCLK)

🚀 Features

Working ST7701 RGB initialization sequence

Verified HSYNC / VSYNC / PCLK timing

Hardware backlight control

Random rectangle graphics demo

Clean C++ wrapper class (Arduino_4848_Display)

Uses Arduino_GFX Library v1.6.4

🧰 Requirements

PlatformIO

ESP32-S3 toolchain

Arduino framework (via PlatformIO)

Board: esp32-s3-devkitc-1

📦 PlatformIO Configuration
[env:esp32-s3-devkitc-1]
platform = https://github.com/pioarduino/platform-espressif32.git
board = esp32-s3-devkitc-1
framework = arduino

board_build.arduino.memory_type = qio_opi
board_build.partitions = huge_app.csv

build_flags =
    -DARDUINO_USB_CDC_ON_BOOT=0
    -DBOARD_HAS_PSRAM

lib_ldf_mode = deep

lib_deps =
    moononournation/GFX Library for Arduino @ ^1.6.4

monitor_speed = 115200

🖥 Demo

The demo application:

Cycles screen colors (red / green / blue)

Draws randomly sized and colored rectangles

Demonstrates stable RGB output and color correctness

🔧 Backlight Control

Backlight is controlled via GPIO:

#define DISPLAY_BACKLIGHT_PIN 38

gfx->setBacklight(true);

📁 Project Structure
.
├── src/
│   ├── main.cpp
│   ├── display.cpp
│   └── display.h
├── platformio.ini
└── README.md

📜 License

MIT License
© 2025 Marc Lob