#include <Arduino.h>
#include "display.h"

#define TFT_RED 0xF800
#define TFT_GREEN 0x07E0
#define TFT_BLUE 0x001F

void setup()
{
    Serial.begin(115200);
    delay(1000);
    randomSeed(esp_random());

    Serial.println();
    Serial.println("Setup ------------");

    gfx->begin();  // calls Arduino_4848_Display::begin()
    gfx->setBacklight(true);

    gfx->fillScreen(TFT_RED);
    delay(500);
    gfx->fillScreen(TFT_GREEN);
    delay(500);
    gfx->fillScreen(TFT_BLUE);
    delay(500);

    Serial.println("Setup done -------");
}

void loop()
{
    int x = random(0, 480);
    int y = random(0, 480);
    int w = random(10, 150);
    int h = random(10, 150);

    uint16_t color = gfx->color565(
        random(256),
        random(256),
        random(256));

    gfx->fillRect(x, y, w, h, color);

    delay(30);
}
