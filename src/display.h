#pragma once
#include <Arduino.h>
#include <Arduino_GFX_Library.h>

class Arduino_4848_Display : public Arduino_RGB_Display
{
public:
    using Arduino_RGB_Display::Arduino_RGB_Display; // Konstruktor erben

    void begin();
    void setBacklight(bool on = true);
    bool isBacklightOn();

private:
    bool blON = false;
};

extern Arduino_4848_Display *gfx;
